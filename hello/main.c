/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 FelipeTanusR <fetanus@usp.br>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  FelipeTanusR <fetanus@usp.br>
 */

#include <stdio.h>


void itoa(int n, char s[]);

int main(void)   
{
  int tamanho_memoria = memory();
  char *tamanho_memoria_convertido = "";

  itoa(tamanho_memoria, tamanho_memoria_convertido);

  printf(tamanho_memoria_convertido);

  return 0;
}

void itoa(int n, char s[])
 {
     int i, sign;

     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
}  



