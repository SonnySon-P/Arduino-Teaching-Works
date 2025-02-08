#include <Arduino_FreeRTOS.h>

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  digitalWrite(0, HIGH);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(3, HIGH);
  xTaskCreate(Task_1, "Task 1", 100, NULL, 1, NULL);
  xTaskCreate(Task_2, "Task 2", 100, NULL, 2, NULL);
  vTaskStartScheduler();
}

void loop() {

}

void Task_1(void* pvParameters) {
  while(1) {
    digitalWrite(1, HIGH);
    delayMicroseconds(1000);
    digitalWrite(1, LOW);
    delayMicroseconds(1000);
    vTaskDelay(300 / portTICK_PERIOD_MS);
  }
}

void Task_2(void* pvParameters) {
  while(1) {
    digitalWrite(4, HIGH);
    delayMicroseconds(1000);
    digitalWrite(4, LOW);
    delayMicroseconds(1000);
    vTaskDelay(18000 / portTICK_PERIOD_MS);
  }
}