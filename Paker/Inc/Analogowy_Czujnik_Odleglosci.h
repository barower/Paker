/*
 * Analogowy_Czujnik_Odleglosci.h
 *
 *  Created on: 6 sty 2017
 *      Author: Erukolindo
 */

#ifndef ANALOGOWY_CZUJNIK_ODLEGLOSCI_H_
#define ANALOGOWY_CZUJNIK_ODLEGLOSCI_H_

#include "stm32f1xx_hal.h"

typedef struct Analogowy_Czujnik_Odleglosci
{
	volatile u_int32_t odleglosc;//w milimetrach
	volatile enum {brak, pierwsza, druga, trzecia} faza_pomiaru;
}Analogowy_Czujnik_Odleglosci;

void Analogowy_Czujnik_Odleglosci_Init(Analogowy_Czujnik_Odleglosci *czujnik)
{
	czujnik->odleglosc = 0;
	czujnik->faza_pomiaru = brak;
}

#endif /* ANALOGOWY_CZUJNIK_ODLEGLOSCI_H_ */
