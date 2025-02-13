#include "draw.h"/* for font */

#include "stdio.h"/* for putchar */



void print_arrow(char c)

{

  c -= 0x20;

  for (char col = 0; col < 10; col++) {

    for (char row = 0; row < 12; row++) {

      unsigned short rowBits = font_8x12[c][col];

      unsigned short colMask = 1 << (11-row); /* mask to select bit associated with bit */

      putchar( (rowBits & colMask) ? '+' : ' ');

    }

    putchar('\n');

  }

  putchar('\n');

}
