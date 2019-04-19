
/*PSEUDOCODE
BEGIN
scan string for encryption
preprocessing of string
    convert lowercase to uppercase (subtract 32)
    convert all ASCII range [97,122] into [65,90]
encrypt the string
    only process with ASCII range [65,90]
print output
*/

#include <stdio.h>

int main() 
{
    int stringSize = 0; //when code is written double check if both of these variables are required    
    char encryptRot[1000];
    
    scanf("%s", encryptRot);
    while(encryptRot[stringSize] != '\0') 
    {
        stringSize++;
        printf("%d\n", stringSize);
    }
    //if() //convert to upper case
    
    printf("%s", encryptRot);
    
}