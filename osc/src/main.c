#include "shell.h"
#include "uart.h"
int main() {
  uart_init();

  uart_println("-------------------------------");
  uart_println(" Operating System Capstone 2020");
  uart_println("-------------------------------");

  while (1) {
    shellPrintPrompt();
    shellInputLine();
    shellProcessCommand();
  }
}