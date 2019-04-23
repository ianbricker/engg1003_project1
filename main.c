
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
    char encryptRot[100]; //array that will store string
    char character; //used to process individual characters of string
    int key = 1;
    
    for(int iniCount = 0; iniCount < 100; iniCount++) //initialises each index position of array = 1 so that no random '\0' are encountered, which will cancel the below WHILE loop
    {
        encryptRot[iniCount] = 1;
    }
    //scanf("%s", encryptRot);
    //maybe start by initialising entire array as 1 so that null doesnt occur randomly?
    while(encryptRot[stringSize] != '\0') //Measures the length of the input data after it is scanned as a string. Will stop as soon as the final character of a string is met i.e. "\0" NULL
    {
        scanf("%c", &encryptRot[stringSize]);
        stringSize++; //Increments the index of encryptRot array, while also measuring length
        //printf("%d\n", stringSize); //debug
    }
    
    for(int count = 0; count <= stringSize; count++) 
    {
        //printf("%d\n", count); //debug
        character = encryptRot[count];
        if(character >= 'a' && character <= 'z') //convert to uppercase
        {
            character = character - 32;
            //printf("%c", character); //debug
        }
        if(character >= 'A' && character <= 'Z') //encryption completed for only uppercase ASCII characters
        {
            character += key;
            printf("%c\n", character);
        }
        else if((character >= ' ' && character <= '@') || (character >= '[' && character < 'a') || (character >= '{' && character <= '~')) //perhaps try a SWITCH-CASE statement in this entire for-loop to make this work
        {
            printf("%c\n", character);
        }
       
    }

    
}