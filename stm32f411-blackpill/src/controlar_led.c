#include "controlar_led.h"

void controlarLED(uint32_t *pGPIOC_BSRR) {
/* Verificar se o botão está pressionado */
    
    if (estado_do_botao) {
        // Botão está pressionado, ligar o LED
        *pGPIOC_BSRR = GPIO_BSRR_RESET(13);
    } else {
        // Botão não está pressionado, desligar o LED
        *pGPIOC_BSRR = GPIO_BSRR_SET(13);
    }
    */
}