#include <stdio.h>
// week 7 lab commit
char testEncrypt(char x);

int main() { 
   //int key = 1; /* key is the amount of letter positions the rotation cipher will encrypt */
   //char x = 0;   /*UPDATE THIS COMMENT x is the character of message text that will be encoded. If x=0, this corresponds to the letter a, while if x = 1, the letter b is represented */ 

   
   /*char msg[255];
   scanf("%s", msg);*/
   
   char testString[] = "test";
   
   /*int count = 0;
   for(count = 0; count < 4; count++) {
       x = testString[count] + key;*/
       printf("%c", x);
   }
   
char testEncrypt(char x) {
    int key = 1;
    int count = 0;
    for(count = 0; count < 4; count++)
        x = *testString[count] + key;
        return x;
}
   return 0;
}

/*#include <stdio.h>

char *test(char s[]);

int main() {
    char testArray[] = "test";
    printf("%s", test(testArray));
    return 0;

}

char *test(char s[]) {
    s[0] = 'C';
    return s;
    
} */