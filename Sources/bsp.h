#ifndef BSP_H_
#define BSP_H_
#include "cpu.h"
#include "events.h"
//#include "SCI.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

#define VT100_ESC (27)
#define VT100_FORM_FEED (12)
#define putc(ch) {while (SCIS1_TDRE == 0); SCID = (ch);}
void move(unsigned char x, unsigned char y);
void clear_screen(void);
void delay(unsigned long delay);
#endif /* BSP_H_ */
