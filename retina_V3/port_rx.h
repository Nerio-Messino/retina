/**
 * @file port_rx.h
 * @brief Header for port_rx.c file.
 * @author alumno1
 * @author alumno2
 * @date fecha
 */
#ifndef PORT_RX_H_
#define PORT_RX_H_

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stdbool.h>
#include <stdint.h>

/* Defines and enums ----------------------------------------------------------*/
/* Defines */

/* Function prototypes and explanation -------------------------------------------------*/

/**
 * @brief Return a pointer to de memory address of the array that stores the time ticks of the edges detected by the infrared receiver.
 *
 * @param rx_id Receiver ID. This index is used to select the element of the `receivers_arr[]` array.
 * @return uint16_t Pointer to the memory address of the array of time ticks.
 */
uint16_t *port_rx_get_buffer_edges(uint8_t rx_id);

#endif
