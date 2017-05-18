/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB(c) Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC24FJ256GA106
        Version           :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC16 1.26
        MPLAB             :  MPLAB X 3.45

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>
/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RE0, high using LATE0.

  @Description
    Sets the GPIO pin, RE0, high using LATE0.

  @Preconditions
    The RE0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE0 high (1)
    IO_RE0_SetHigh();
    </code>

*/
#define IO_RE0_SetHigh()          _LATE0 = 1
/**
  @Summary
    Sets the GPIO pin, RE0, low using LATE0.

  @Description
    Sets the GPIO pin, RE0, low using LATE0.

  @Preconditions
    The RE0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE0 low (0)
    IO_RE0_SetLow();
    </code>

*/
#define IO_RE0_SetLow()           _LATE0 = 0
/**
  @Summary
    Toggles the GPIO pin, RE0, using LATE0.

  @Description
    Toggles the GPIO pin, RE0, using LATE0.

  @Preconditions
    The RE0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE0
    IO_RE0_Toggle();
    </code>

*/
#define IO_RE0_Toggle()           _LATE0 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE0.

  @Description
    Reads the value of the GPIO pin, RE0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE0
    postValue = IO_RE0_GetValue();
    </code>

*/
#define IO_RE0_GetValue()         _RE0
/**
  @Summary
    Configures the GPIO pin, RE0, as an input.

  @Description
    Configures the GPIO pin, RE0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE0 as an input
    IO_RE0_SetDigitalInput();
    </code>

*/
#define IO_RE0_SetDigitalInput()  _TRISE0 = 1
/**
  @Summary
    Configures the GPIO pin, RE0, as an output.

  @Description
    Configures the GPIO pin, RE0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE0 as an output
    IO_RE0_SetDigitalOutput();
    </code>

*/
#define IO_RE0_SetDigitalOutput() _TRISE0 = 0
/**
  @Summary
    Sets the GPIO pin, RE1, high using LATE1.

  @Description
    Sets the GPIO pin, RE1, high using LATE1.

  @Preconditions
    The RE1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE1 high (1)
    IO_RE1_SetHigh();
    </code>

*/
#define IO_RE1_SetHigh()          _LATE1 = 1
/**
  @Summary
    Sets the GPIO pin, RE1, low using LATE1.

  @Description
    Sets the GPIO pin, RE1, low using LATE1.

  @Preconditions
    The RE1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE1 low (0)
    IO_RE1_SetLow();
    </code>

*/
#define IO_RE1_SetLow()           _LATE1 = 0
/**
  @Summary
    Toggles the GPIO pin, RE1, using LATE1.

  @Description
    Toggles the GPIO pin, RE1, using LATE1.

  @Preconditions
    The RE1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE1
    IO_RE1_Toggle();
    </code>

*/
#define IO_RE1_Toggle()           _LATE1 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE1.

  @Description
    Reads the value of the GPIO pin, RE1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE1
    postValue = IO_RE1_GetValue();
    </code>

*/
#define IO_RE1_GetValue()         _RE1
/**
  @Summary
    Configures the GPIO pin, RE1, as an input.

  @Description
    Configures the GPIO pin, RE1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE1 as an input
    IO_RE1_SetDigitalInput();
    </code>

*/
#define IO_RE1_SetDigitalInput()  _TRISE1 = 1
/**
  @Summary
    Configures the GPIO pin, RE1, as an output.

  @Description
    Configures the GPIO pin, RE1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE1 as an output
    IO_RE1_SetDigitalOutput();
    </code>

*/
#define IO_RE1_SetDigitalOutput() _TRISE1 = 0
/**
  @Summary
    Sets the GPIO pin, RE2, high using LATE2.

  @Description
    Sets the GPIO pin, RE2, high using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE2 high (1)
    IO_RE2_SetHigh();
    </code>

*/
#define IO_RE2_SetHigh()          _LATE2 = 1
/**
  @Summary
    Sets the GPIO pin, RE2, low using LATE2.

  @Description
    Sets the GPIO pin, RE2, low using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE2 low (0)
    IO_RE2_SetLow();
    </code>

*/
#define IO_RE2_SetLow()           _LATE2 = 0
/**
  @Summary
    Toggles the GPIO pin, RE2, using LATE2.

  @Description
    Toggles the GPIO pin, RE2, using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE2
    IO_RE2_Toggle();
    </code>

*/
#define IO_RE2_Toggle()           _LATE2 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE2.

  @Description
    Reads the value of the GPIO pin, RE2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE2
    postValue = IO_RE2_GetValue();
    </code>

*/
#define IO_RE2_GetValue()         _RE2
/**
  @Summary
    Configures the GPIO pin, RE2, as an input.

  @Description
    Configures the GPIO pin, RE2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE2 as an input
    IO_RE2_SetDigitalInput();
    </code>

*/
#define IO_RE2_SetDigitalInput()  _TRISE2 = 1
/**
  @Summary
    Configures the GPIO pin, RE2, as an output.

  @Description
    Configures the GPIO pin, RE2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE2 as an output
    IO_RE2_SetDigitalOutput();
    </code>

*/
#define IO_RE2_SetDigitalOutput() _TRISE2 = 0
/**
  @Summary
    Sets the GPIO pin, RE3, high using LATE3.

  @Description
    Sets the GPIO pin, RE3, high using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 high (1)
    IO_RE3_SetHigh();
    </code>

*/
#define IO_RE3_SetHigh()          _LATE3 = 1
/**
  @Summary
    Sets the GPIO pin, RE3, low using LATE3.

  @Description
    Sets the GPIO pin, RE3, low using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 low (0)
    IO_RE3_SetLow();
    </code>

*/
#define IO_RE3_SetLow()           _LATE3 = 0
/**
  @Summary
    Toggles the GPIO pin, RE3, using LATE3.

  @Description
    Toggles the GPIO pin, RE3, using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE3
    IO_RE3_Toggle();
    </code>

*/
#define IO_RE3_Toggle()           _LATE3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE3.

  @Description
    Reads the value of the GPIO pin, RE3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE3
    postValue = IO_RE3_GetValue();
    </code>

*/
#define IO_RE3_GetValue()         _RE3
/**
  @Summary
    Configures the GPIO pin, RE3, as an input.

  @Description
    Configures the GPIO pin, RE3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an input
    IO_RE3_SetDigitalInput();
    </code>

*/
#define IO_RE3_SetDigitalInput()  _TRISE3 = 1
/**
  @Summary
    Configures the GPIO pin, RE3, as an output.

  @Description
    Configures the GPIO pin, RE3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an output
    IO_RE3_SetDigitalOutput();
    </code>

*/
#define IO_RE3_SetDigitalOutput() _TRISE3 = 0
/**
  @Summary
    Sets the GPIO pin, RE4, high using LATE4.

  @Description
    Sets the GPIO pin, RE4, high using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 high (1)
    IO_RE4_SetHigh();
    </code>

*/
#define IO_RE4_SetHigh()          _LATE4 = 1
/**
  @Summary
    Sets the GPIO pin, RE4, low using LATE4.

  @Description
    Sets the GPIO pin, RE4, low using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 low (0)
    IO_RE4_SetLow();
    </code>

*/
#define IO_RE4_SetLow()           _LATE4 = 0
/**
  @Summary
    Toggles the GPIO pin, RE4, using LATE4.

  @Description
    Toggles the GPIO pin, RE4, using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE4
    IO_RE4_Toggle();
    </code>

*/
#define IO_RE4_Toggle()           _LATE4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE4.

  @Description
    Reads the value of the GPIO pin, RE4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE4
    postValue = IO_RE4_GetValue();
    </code>

*/
#define IO_RE4_GetValue()         _RE4
/**
  @Summary
    Configures the GPIO pin, RE4, as an input.

  @Description
    Configures the GPIO pin, RE4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an input
    IO_RE4_SetDigitalInput();
    </code>

*/
#define IO_RE4_SetDigitalInput()  _TRISE4 = 1
/**
  @Summary
    Configures the GPIO pin, RE4, as an output.

  @Description
    Configures the GPIO pin, RE4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an output
    IO_RE4_SetDigitalOutput();
    </code>

*/
#define IO_RE4_SetDigitalOutput() _TRISE4 = 0
/**
  @Summary
    Sets the GPIO pin, RE5, high using LATE5.

  @Description
    Sets the GPIO pin, RE5, high using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE5 high (1)
    IO_RE5_SetHigh();
    </code>

*/
#define IO_RE5_SetHigh()          _LATE5 = 1
/**
  @Summary
    Sets the GPIO pin, RE5, low using LATE5.

  @Description
    Sets the GPIO pin, RE5, low using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE5 low (0)
    IO_RE5_SetLow();
    </code>

*/
#define IO_RE5_SetLow()           _LATE5 = 0
/**
  @Summary
    Toggles the GPIO pin, RE5, using LATE5.

  @Description
    Toggles the GPIO pin, RE5, using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE5
    IO_RE5_Toggle();
    </code>

*/
#define IO_RE5_Toggle()           _LATE5 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE5.

  @Description
    Reads the value of the GPIO pin, RE5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE5
    postValue = IO_RE5_GetValue();
    </code>

*/
#define IO_RE5_GetValue()         _RE5
/**
  @Summary
    Configures the GPIO pin, RE5, as an input.

  @Description
    Configures the GPIO pin, RE5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE5 as an input
    IO_RE5_SetDigitalInput();
    </code>

*/
#define IO_RE5_SetDigitalInput()  _TRISE5 = 1
/**
  @Summary
    Configures the GPIO pin, RE5, as an output.

  @Description
    Configures the GPIO pin, RE5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE5 as an output
    IO_RE5_SetDigitalOutput();
    </code>

*/
#define IO_RE5_SetDigitalOutput() _TRISE5 = 0
/**
  @Summary
    Sets the GPIO pin, RE6, high using LATE6.

  @Description
    Sets the GPIO pin, RE6, high using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 high (1)
    IO_RE6_SetHigh();
    </code>

*/
#define IO_RE6_SetHigh()          _LATE6 = 1
/**
  @Summary
    Sets the GPIO pin, RE6, low using LATE6.

  @Description
    Sets the GPIO pin, RE6, low using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 low (0)
    IO_RE6_SetLow();
    </code>

*/
#define IO_RE6_SetLow()           _LATE6 = 0
/**
  @Summary
    Toggles the GPIO pin, RE6, using LATE6.

  @Description
    Toggles the GPIO pin, RE6, using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE6
    IO_RE6_Toggle();
    </code>

*/
#define IO_RE6_Toggle()           _LATE6 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE6.

  @Description
    Reads the value of the GPIO pin, RE6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE6
    postValue = IO_RE6_GetValue();
    </code>

*/
#define IO_RE6_GetValue()         _RE6
/**
  @Summary
    Configures the GPIO pin, RE6, as an input.

  @Description
    Configures the GPIO pin, RE6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an input
    IO_RE6_SetDigitalInput();
    </code>

*/
#define IO_RE6_SetDigitalInput()  _TRISE6 = 1
/**
  @Summary
    Configures the GPIO pin, RE6, as an output.

  @Description
    Configures the GPIO pin, RE6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an output
    IO_RE6_SetDigitalOutput();
    </code>

*/
#define IO_RE6_SetDigitalOutput() _TRISE6 = 0
/**
  @Summary
    Sets the GPIO pin, RE7, high using LATE7.

  @Description
    Sets the GPIO pin, RE7, high using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 high (1)
    IO_RE7_SetHigh();
    </code>

*/
#define IO_RE7_SetHigh()          _LATE7 = 1
/**
  @Summary
    Sets the GPIO pin, RE7, low using LATE7.

  @Description
    Sets the GPIO pin, RE7, low using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 low (0)
    IO_RE7_SetLow();
    </code>

*/
#define IO_RE7_SetLow()           _LATE7 = 0
/**
  @Summary
    Toggles the GPIO pin, RE7, using LATE7.

  @Description
    Toggles the GPIO pin, RE7, using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE7
    IO_RE7_Toggle();
    </code>

*/
#define IO_RE7_Toggle()           _LATE7 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RE7.

  @Description
    Reads the value of the GPIO pin, RE7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE7
    postValue = IO_RE7_GetValue();
    </code>

*/
#define IO_RE7_GetValue()         _RE7
/**
  @Summary
    Configures the GPIO pin, RE7, as an input.

  @Description
    Configures the GPIO pin, RE7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an input
    IO_RE7_SetDigitalInput();
    </code>

*/
#define IO_RE7_SetDigitalInput()  _TRISE7 = 1
/**
  @Summary
    Configures the GPIO pin, RE7, as an output.

  @Description
    Configures the GPIO pin, RE7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an output
    IO_RE7_SetDigitalOutput();
    </code>

*/
#define IO_RE7_SetDigitalOutput() _TRISE7 = 0

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ256GA106
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize(void);

#endif
