/**
 * @file fsm_rx.c
 * @brief Infrared receiver FSM main file.
 * @author alumno1
 * @author alumno2
 * @date fecha
 */

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stdlib.h>
#include <stdio.h>

/* Other includes */
#include "fsm_rx.h"

/* Typedefs --------------------------------------------------------------------*/
typedef struct
{
  /* TO-DO alumnos */
} fsm_rx_t;

/* Defines and enums ----------------------------------------------------------*/
/* Enums */

/* State machine input or transition functions */

/* State machine output or action functions */

/* Other auxiliary functions */
void fsm_rx_init(fsm_t *p_this, uint8_t rx_id)
{
  /* TO-DO alumnos */
}

fsm_t *fsm_rx_new(uint8_t rx_id)
{
  fsm_t *p_fsm = malloc(sizeof(fsm_rx_t));
  fsm_rx_init(p_fsm, rx_id);
  return p_fsm;
}