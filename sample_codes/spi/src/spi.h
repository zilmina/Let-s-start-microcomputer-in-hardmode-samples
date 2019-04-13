/*
 * spi.h
 *
 *  Created on: 2019/04/13
 *      Author: 廣明
 */

#ifndef SPI_H_
#define SPI_H_

#include <stdint.h>
#define BUFFER_SIZE 1024

void CMT0_initialize(void);
void main_clock_initialize(void);
void SCI_init(unsigned long bps);
void SCI_put_data_on_TDR(void);
void SCI_single_char_transport_TDR(unsigned char input_data);
void TXI1(void);
void SCI_print(unsigned char *str);
void SCI_println(unsigned char *str);
void SCI_val_print(int i);
void SCI_val_println(int i);
struct Sci_fifo {
	short index_read;
	short index_write;
	unsigned char buffer[BUFFER_SIZE];
};

static struct Sci_fifo rx_fifo;
static struct Sci_fifo tx_fifo;
volatile static int Spi_Receive_Flag = 0;

uint16_t SPI_Encoder_get(void);
void INT_RSPI0_SPRI0(void);
void SPI_init(void) ;
uint16_t put_SPDR(uint16_t address) ;


#endif /* SPI_H_ */
