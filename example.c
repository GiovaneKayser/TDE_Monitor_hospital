
#include "FreeRTOS.h"
#include "task.h"
#include "basic_io.h"

void vBatimentosCardiacos(void* pvParameters);
void vSaturacaoOxigenio(void* pvParameters);
void vTemperatura(void* pvParameters);


void vBatimentosCardiacos(void* pvParameters) {
	for (;; ) {
		vPrintString("Batimentos Cardíacos\n");
		vTaskDelay(1000);
	}
	vTaskDelete(NULL);
}

void vSaturacaoOxigenio(void* pvParameters) {
	for (;; ) {
		vPrintString("Saturação de Oxigênio\n");
		vTaskDelay(1000);
	}
	vTaskDelete(NULL);
}

void vTemperatura(void* pvParameters) {
	for (;; ) {
		vPrintString("Temperatura\n");
		vTaskDelay(1000);
	}
	vTaskDelete(NULL);
}

int main_(void) {
	xTaskCreate(vBatimentosCardiacos, "Batimentos Cardíacos", 1000, NULL, 1, NULL);
	xTaskCreate(vSaturacaoOxigenio, "Saturação de Oxigênio", 1000, NULL, 1, NULL);
	xTaskCreate(vTemperatura, "Temperatura", 1000, NULL, 1, NULL);

	vTaskStartScheduler();

	for (;; );
	return 0;
}
