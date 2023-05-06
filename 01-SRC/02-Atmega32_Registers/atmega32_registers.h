/*****************************************************************************
 * @Author                : Islam Tarek<islamtarek0550@gmail.com>            *
 * @CreatedDate           : 2023-05-06 15:22:08                              *
 * @LastEditors           : Islam Tarek<islamtarek0550@gmail.com>            *
 * @LastEditDate          : 2023-05-06 17:21:40                              *
 * @FilePath              : atmega32_registers.h                             *
 ****************************************************************************/

#ifndef ATMEGA32_REG_H_
#define ATMEGA32_REG_H_

/**
 * @section Includes
 */
#include "../01-STD_LIB/std_type.h"

/**
 * @section Registers
 */

/**
 * @brief Status Register and its bits . (R/W Register)
 * @note Status Register contains information about the result of recen executedt arithmetic instruction.
 * @note Status Register isn't automatically stored when entering interrupt routine and restored when returning from it. It must be handled by SW.
 */

typedef union 
{
    u8 reg;
    struct 
    {
        u8 C    : 1;    /* Carry Flag                       */
        u8 Z    : 1;    /* Zero Flag                        */
        u8 N    : 1;    /* Negative Flag                    */
        u8 V    : 1;    /* Two's Complement Overglow Flag   */
        u8 S    : 1;    /* Sign Bit                         */
        u8 H    : 1;    /* Half Carry Flag                  */
        u8 T    : 1;    /* Bit Copy Storage                 */
        u8 I    : 1;    /* Global Intetrrupt Enable Bit     */
    }bits;
    
}SREG_t;

/**
 * @brief Status Register Address.
 */
#define SREG_ADDRESS            0x5FU

/**
 * @brief Map Status Register and its bits to its Memory location.
 */
#define SREG       ((volatile SREG_t *) SREG_ADDRESS)       


#endif