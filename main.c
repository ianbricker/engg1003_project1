
/*PSEUDOCODE
BEGIN
scan string for encryption
preprocessing of string
    for() loop that allows string to be processed in single characters, as specified by stringSize counter
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
    char encryptRot[1000]; //array that will store string
    char character; //used to process individual characters of string
    
    scanf("%s", encryptRot);
    
    while(encryptRot[stringSize] != '\0') //Measures the length of the input data after it is scanned as a string. Will stop as soon as the final character of a string is met i.e. "\0" NULL
    {
        stringSize++; //Increments the index of encryptRot array, while also measuring length
        //printf("%d\n", stringSize); //debug
    }
    
    for(int count = 0; count < stringSize; count++) 
    {
        //printf("%d\n", count); //debug
        character = encryptRot[count];
        if(character >= 97 && character <= 122) //convert to uppercase
        {
            character = character - 32;
            printf("%c", character);
        }
        
    }

    /*for(int pCount = 0; pCount < stringSize; pCount++) 
    {
        printf("%c", character);
    }
    */
//    printf("%s", encryptRot);
    
}