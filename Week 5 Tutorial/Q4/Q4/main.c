//
//  main.c
//  Q4
//
//  Created by Alvin Tan De Jun on 7/2/20.
//  Copyright © 2020 Alvin Tan De Jun. All rights reserved.
//

#include <stdio.h>

#define M1 "How are ya, sweetie?"

char M2[40] = "Beat the clock.";
char *M3 = "chat";

int main()
{
    char words[80];
    printf(M1);
    puts(M2); // Beat the clock.
    puts(M2+1); // eat the clock.
    gets(words); /* user inputs : win a toy. */
    puts(words); // win a toy.
    scanf("%s", words+6); /* user inputs : snoopy. */
    puts(words); // win a snoopy.
    words[3] = '\0';
    puts(words); // win
    while (*M3) puts(M3++); // hat at t
    puts(--M3);
    puts(--M3);
    M3 = M1;
    puts(M3); //
    return 0;
}
