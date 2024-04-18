#include "controlar_led.h"

void controlarLED(uint32_t *pGPIOA_IDR, uint32_t *pGPIOC_BSRR, uint32_t estado_botao_antigo, uint32_t estado_botao_atual) {
    /* Verificar se o botão foi pressionado */
    if (estado_botao_antigo == 0 && estado_botao_atual == 1) {
        // Botão foi pressionado
        // Alternar o estado do LED conectado ao pino PC13
        if (*pGPIOC_BSRR & GPIO_BSRR_BS13) {
            // Se o LED está aceso, apague-o
            *pGPIOC_BSRR = GPIO_BSRR_RESET(13);
        } else {
            // Se o LED está apagado, acenda-o
            *pGPIOC_BSRR = GPIO_BSRR_SET(13);
        }
    }
}
