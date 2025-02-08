#include <Arduino_FreeRTOS.h>

void setup() {
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  xTaskCreate(Task_1, "Task 1", 100, NULL, 1, NULL);
  xTaskCreate(Task_2, "Task 2", 100, NULL, 2, NULL);
  vTaskStartScheduler();
}

void loop() {

}

void Task_1(void* pvParameters) {
  while (1) {
    digitalWrite(8, HIGH);
    delay(1500);
    digitalWrite(8, LOW);
    delay(1500);
  }
}

void Task_2(void* pvParameters) {
  while (1) {
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
  }
}