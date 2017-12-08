/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PTA.c
**     Project     : pong
**     Processor   : MC9S08QE8CLC
**     Component   : Init_GPIO
**     Version     : Component 01.032, Driver 01.21, CPU db: 3.00.049
**     Compiler    : CodeWarrior HCS08 C Compiler
**     Date/Time   : 2017-12-08, 13:43, # CodeGen: 0
**     Abstract    :
**          This file implements the General Purpose Input Output (PTA)
**          module initialization according to the Peripheral Initialization
**          Component settings, and defines interrupt service routines prototypes.
**
**     Settings    :
**          Component name                                 : PTA
**          Device                                         : PTA
**          Port control                                   : Individual pins
**
**          Used pins                                      :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       2             |  PTA2_KBIP2_SDA_ADP2
**                       3             |  PTA3_KBIP3_SCL_ADP3
**             ----------------------------------------------------
**
**          Pin2                                           : PTA2_KBIP2_SDA_ADP2
**            Direction                                    : Input
**            Output value                                 : 0
**            Pull resistor                                : pull up
**            Open drain                                   : push-pull
**
**          Pin3                                           : PTA3_KBIP3_SCL_ADP3
**            Direction                                    : Input
**            Output value                                 : 0
**            Pull resistor                                : pull up
**            Open drain                                   : push-pull
**
**          Call Init method                               : yes
**     Contents    :
**         Init - void PTA_Init(void);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PTA.c
** @version 01.21
** @brief
**          This file implements the General Purpose Input Output (PTA)
**          module initialization according to the Peripheral Initialization
**          Component settings, and defines interrupt service routines prototypes.
**
*/         
/*!
**  @addtogroup PTA_module PTA module documentation
**  @{
*/         

/* MODULE PTA. */

#include "PTA.h"
/*
** ===================================================================
**     Method      :  PTA_Init (component Init_GPIO)
**     Description :
**         This method initializes registers of the GPIO module
**         according to this Peripheral Initialization Component settings.
**         Call this method in the user code to initialize the
**         module. By default, the method is called by PE
**         automatically; see "Call Init method" property of the
**         component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void PTA_Init(void)
{
  /* PTAD: PTAD3=0,PTAD2=0 */
  clrReg8Bits(PTAD, 0x0CU);             
  /* PTAPE: PTAPE3=1,PTAPE2=1 */
  setReg8Bits(PTAPE, 0x0CU);            
  /* PTADD: PTADD3=0,PTADD2=0 */
  clrReg8Bits(PTADD, 0x0CU);            
}

/* END PTA. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale HCS08 series of microcontrollers.
**
** ###################################################################
*/
