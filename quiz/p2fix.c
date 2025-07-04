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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* int verify_password (const char *); */
void priviledged_code();
int main (void)
{
  char user_key[10];

  /* Read user's credentials. */

  printf ("Enter password: ");
  scanf ("%9s", user_key);

  /* Verify credentials. */

  if (!strcmp (user_key, "foo"))
  {
    printf ("Access granted.\n");
    priviledged_code();
  }
  else
    {
      printf ("Access denied\n");
      exit (1);
    }

  


  return 0;
}

void priviledged_code(){
  /* Priviledged code follows... */
}


