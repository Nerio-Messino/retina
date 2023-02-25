/**
 * @file fsm_rx_nec.c
 * @brief NEC processing FSM main file.
 * @author alumno1
 * @author alumno2
 * @date fecha
 */

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stdlib.h>

/* Ohter includes */
#include "fsm_rx_nec.h"

/* Typedefs --------------------------------------------------------------------*/
typedef struct
{
  /* TO-DO alumnos */
} fsm_rx_nec_t;

/* Defines and enums ----------------------------------------------------------*/
/* Enums */

/* Private functions */
/**
 * @brief Auxiliary function to compute the time difference (in ticks) between the current and the next edge.
 *
 * @param p_edge_ticks Pointer to the array containing the the time ticks of the edges detected by the infrared receiver
 * @return Time difference in ticks
 */
static uint16_t _get_diff_ticks(uint16_t *p_edge_ticks)
{
  return *(p_edge_ticks + 1) - *(p_edge_ticks);
}

/**
 * @brief Auxiliary function to check if a given value is between two other values.
 *
 * This is used to check if a time difference is between the NEC tolerance time interval.
 *
 * @param value Value to check
 * @param min Minimum value allowed by the range (greater than or equal to).
 * @param max Maximum value allowed by the range (lower than or equal to).
 * @return true
 * @return false
 */
bool _value_in_range(uint16_t value, uint16_t min, uint16_t max)
{
  return ((value >= min) && (value <= max));
}

/* State machine input or transition functions */

/* State machine output or action functions */

/* Other auxiliary functions */
void fsm_rx_NEC_init(fsm_t *p_this)
{
  /* TO-DO alumnos */
}

fsm_t *fsm_rx_NEC_new()
{
  fsm_t *p_fsm = malloc(sizeof(fsm_rx_nec_t));
  fsm_rx_NEC_init(p_fsm);
  return p_fsm;
}