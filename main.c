#include <stdio.h>
// week 6 lab commit
int main() { 
   int key = 1; /* key is the amount of letter positions the rotation cipher will encrypt */
   int x = 0;   /* x is the character of message text that will be encoded. If x=0, this corresponds to the letter a, while if x = 1, the letter b is represented */ 
   int ex = 0; /* ex is the encrypted character of message text*/
   
   /*char msg[255];
   scanf("%s", msg);*/
   
   char testString[6] = {'t', 'e', 's', 't', '\0'};
   
   int count = 0;
   for(count = 0; count < 5; count++) {
       x = testString[count];
       ex = (x + key) % 26;
       printf("%d", ex);
   }
   
   //ex = (x + key) % 26; /* encryption equation */
   
   //printf("%d\n", ex);
   
   
   
   return 0;
}
