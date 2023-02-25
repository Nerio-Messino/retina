/**
 * @file port_rx.c
 * @brief Portable functions to interact with the infrared receiver FSM library.
 * @author alumno1
 * @author alumno2
 * @date fecha
 * */

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <string.h> /* To use memset */

/* Other includes */
#include "port_rx.h"

/* Typedefs --------------------------------------------------------------------*/
/**
 * @brief Structure to define the HW dependencies of an infrared receiver.
 */
typedef struct
{
  /* TO-DO alumnos */
} port_rx_hw_t;

/* Global variables ------------------------------------------------------------*/
/**
 * @brief Array of elements that represents the HW characteristics of the infrared receivers.
 */
static port_rx_hw_t receivers_arr[] = {
    /* TO-DO alumnos */
};

/* Infrared receiver private functions */
/**
 * @brief Set the elements of the array of time ticks to '0' and init the index to '0' as well.
 *
 * > &nbsp;&nbsp;&nbsp;&nbsp;💡 To set all the elements of an array to one value, you can use function `memset`. You need a pointer to the array (its name), the value you want to set, and the length (in bytes) of the array (so you need to multiply the number of elements by the size of the type of the elements of the array). To use this function you need to include the <string.h> library.
 *
 * @param rx_id Receiver ID. This index is used to select the element of the `receivers_arr[]` array.
 */
static void _reset_edge_ticks_idx(uint8_t rx_id)
{
  memset(receivers_arr[rx_id].edge_ticks, 0, sizeof(uint16_t) * NEC_FRAME_EDGES);
  receivers_arr[rx_id].edge_idx = 0;
}

static void _store_edge_tick(uint8_t rx_id)
{
  /* TO-DO alumnos */
}

void _timer_rx_setup()
{
  /* TO-DO alumnos */
}

void port_rx_init(uint8_t rx_id)
{
  /* TO-DO alumnos */
}

void port_rx_en(uint8_t rx_id, bool interr_en)
{
  /* TO-DO alumnos */
}

void port_rx_tmr_start()
{
  /* TO-DO alumnos */
}

void port_rx_tmr_stop()
{
  /* TO-DO alumnos */
}

uint32_t port_rx_get_num_edges(uint8_t rx_id)
{
  /* TO-DO alumnos */
}

uint16_t *port_rx_get_buffer_edges(uint8_t rx_id)
{
  return (uint16_t *)(&(receivers_arr[rx_id].edge_ticks));
}

void port_rx_clean_buffer(uint8_t rx_id)
{
  /* TO-DO alumnos */
}

void EXTI9_5_IRQHandler(void)
{
  if (EXTI->PR & BIT_POS_TO_MASK(receivers_arr[IR_RX_0_ID].pin))
  {
    /* TO-DO alumnos */
  }
}
