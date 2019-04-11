#include <stdio.h>
// week 6 lab commit
int main() { 
   //char key = 1; /* key is the amount of letter positions the rotation cipher will encrypt */
   char x = 0;   /* x is the character of message text that will be encoded. If x=0, this corresponds to the letter a, while if x = 1, the letter b is represented */ 
   //char ex = 0; /* ex is the encrypted character of message text*/
   
   /*char msg[255];
   scanf("%s", msg);*/
   
   char testString[6] = {'t', 'e', 's', 't', '\0'};
   
   int count = 0;
   for(count = 0; count < 4; count++) {
       x = testString[count] + 1;
       //ex = (x + key) % 26; /*this is the best way to do it on paper, try a different way*/
       printf("%c", x);
   }
   
   //ex = (x + key) % 26; /* encryption equation */
   
   //printf("%d\n", ex);
   
   
   
   return 0;
}
