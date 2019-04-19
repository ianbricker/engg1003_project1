
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
    int index = 0; //when code is written double check if both of these variables are required
    int stringSize = 0;
    char encryptRot[];
    
    scanf("%s", encryptRot);
    
    while(encryptRot[index] != '\0') 
    { 
        index++;
        stringSize = index;
    }
    //if() //convert to upper case
    
    printf("%s", encryptRot);
    
}