#include "hardware/gpio.h"
#include "pico/stdlib.h"
#include <stdio.h>

const int LED_PIN_R = 4;
const int LED_PIN_G = 6;
const int BTN_PIN_R = 28;
const int BTN_PIN_G = 26;

int main() {
  stdio_init_all();

  gpio_init(LED_PIN_R);
  gpio_init(LED_PIN_G);
  gpio_set_dir(LED_PIN_R, GPIO_OUT);
  gpio_set_dir(LED_PIN_G, GPIO_OUT);

  gpio_init(BTN_PIN_G);
  gpio_init(BTN_PIN_R);
  gpio_set_dir(BTN_PIN_G, GPIO_IN);
  gpio_set_dir(BTN_PIN_R, GPIO_IN);
  gpio_pull_up(BTN_PIN_G);
  gpio_pull_up(BTN_PIN_R);

  int valor_G;
  int valor_R;

  while (true) {

    if (!gpio_get(BTN_PIN_G)) {
      valor_G = gpio_get(LED_PIN_G);
      gpio_put(LED_PIN_G, !valor_G);
      while (!gpio_get(BTN_PIN_G)) {
      };
    }

    if (!gpio_get(BTN_PIN_R)) {
      valor_R = gpio_get(LED_PIN_R);
      gpio_put(LED_PIN_R, !valor_R);
      while (!gpio_get(BTN_PIN_R)) {
      };
    }
  }
}
