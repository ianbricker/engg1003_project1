
/*PSEUDOCODE
BEGIN
scan string for encryption
preprocessing of string
    for() loop that allows string to be processed in single characters, as specified by stringSize counter
    convert lowercase to uppercase (subtract 32)
    i.e. convert all ASCII range [97,122] into [65,90]
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
    int key = 1;
    
    //scanf("%s", encryptRot);
    
    while(encryptRot[stringSize] != '\0') //Measures the length of the input data after it is scanned as a string. Will stop as soon as the final character of a string is met i.e. "\0" NULL
    {
        scanf("%c", &encryptRot[stringSize]);
        stringSize++; //Increments the index of encryptRot array, while also measuring length
        //printf("%d\n", stringSize); //debug
    }
    
    for(int count = 0; count < stringSize; count++) 
    {
        //printf("%d\n", count); //debug
        character = encryptRot[count];
        if(character >= 'a' && character <= 'z') //convert to uppercase
        {
            character = character - 32;
            //printf("%c", character); //note: the encrypted string should be printed from this for loop as printing it otherwise is difficult
        }
        if(character >= 'A' && character <= 'Z') //encryption completed for only uppercase ASCII characters
        {
            character = character + key;
            printf("%c", character);
        }
        else if((character < 'A' && character > 'Z') || (character < 'a' && character > 'z')) 
        {
            printf('%c', character);
        }
        
    }

    
}