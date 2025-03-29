#include "hardware/gpio.h"
 #include "pico/stdlib.h"
 #include <stdio.h>

 const int LED_PIN_R = 5;
 const int LED_PIN_P = 8;
 const int LED_PIN_B = 11;
 const int LED_PIN_Y = 15;

 const int BTN_PIN = 28; 


 int main() {
   stdio_init_all();

   gpio_init(LED_PIN_R);
   gpio_set_dir(LED_PIN_R, GPIO_OUT);
   gpio_init(LED_PIN_P);
   gpio_set_dir(LED_PIN_P, GPIO_OUT);
   gpio_init(LED_PIN_B);
   gpio_set_dir(LED_PIN_B, GPIO_OUT);
   gpio_init(LED_PIN_Y);
   gpio_set_dir(LED_PIN_Y, GPIO_OUT);

 
   while (true) {
     // Use delay de 300 ms entre os estados!
   }
 }