#include <Arduino.h>
#include <LDK_2M.h>

LDK_2M lidar;

void setup() {
lidar.init();
lidar.toggle_laser();
}

void loop() {
  lidar.get_measurement();
  delay(3000);
}