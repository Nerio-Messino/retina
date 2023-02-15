/**
 * @file fsm_retina.h
 * @brief Header for fsm_retina.c file.
 * @author alumno1
 * @author alumno2
 * @date fecha
 */
#ifndef FSM_RETINA_H_
#define FSM_RETINA_H_

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/* Other includes */
#include "fsm.h"

/* Function prototypes and explanation ---------------------------------------*/

/* TO-DO alumnos: documentation*/
fsm_t *fsm_retina_new(fsm_t *p_fsm_button, uint32_t button_press_time, fsm_t *p_fsm_tx);

/* TO-DO alumnos: documentation*/
void fsm_retina_init(fsm_t *p_this, fsm_t *p_fsm_button, uint32_t button_press_time, fsm_t *p_fsm_tx);

#endif

