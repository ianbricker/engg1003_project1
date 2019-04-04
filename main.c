#include <stdio.h>
// week 6 lab commit
int main() { 
   int key = 1; /* key is the amount of letter positions the rotation cipher will encrypt */
   int x = 1;   /* x is the character of message text that will be encoded. If x=0, this corresponds to the letter a, while if x = 1, the letter b is represented */ 
   int ex = 0; /* ex is the encrypted character of message text*/
   
   ex = (x + key) % 26; /* encyrption equation */
   
   printf("%d\n", ex);
   
   
   
   return 0;
}
