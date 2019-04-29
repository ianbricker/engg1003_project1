#include <stdio.h>

char encryptRot(char character, int key); //function prototype for the encryption of a rotation cipher
char decryptRot(char character, int key); //function prototype for the decryption of a rotation cipher

int main() 
{
    int stringSize = 0; //incremented in the first while() loop below so that the array is measured. stringSize is also needed as an index specifier to take individual characters out of the array for processing.    
    char encryptArray[1024]; //Large array that stores the string that will be encrypted or decrypted
    char character; //used to process individual characters of string
    int key = 7; //key specification for a rotation cipher. This key works for both encryption and decryption
    int userSelection = 2; //Integer that selects function to be used. 1 = EncryptRot. 2 = DecryptRot
    
    
    scanf("%[^\n]s", encryptArray); //scans the entire string as specified in the "test" file (the runCipher command is required). Will read whitespace and stops at a NULL value
    
    while(encryptArray[stringSize] != '\0') //while() loop begins at 0th index position of string and exits after the end NULL is met
    {
        character = encryptArray[stringSize]; //stores the value of the value found at the index position specified by the integer stringSize. Allows for processing of type char ASCII characters
        stringSize++; //increments stringSize in order to move the index position forward for the next execution of the while loop
        
        if(character >= 'a' && character <= 'z') //converts any lowercase ASCII characters to uppercase
        {
            character = character - 32; //each ASCII lowercase character has a complementary uppercase character at a distance of 32
        }
        
        if(character >= 'A' && character <= 'Z') //encryption completed for only uppercase ASCII characters
        {
            switch(userSelection) //switch-case allows for specification of userSelection for different functions
            {
                case 1: //userSelection = 1 triggers the rotation encryption "encryptRot()"
                    character = encryptRot(character, key); //encrypts a single character at a time
                    printf("%c", character); //prints the encrypted character
                    break; //breaks from switch case statement so that the character is not processed and printed twice as an encrypted and decrypted characteer
                case 2: //userSelection = 2 triggers the rotation decrytion "decryptRot()"
                    character = decryptRot(character, key); //decrypts a single character at a tie
                    printf("%c", character); //prints the decrypted character
                    break;
            }
                
        }
        
        else if((character >= ' ' && character <= '@') || (character >= '[' && character < 'a') || (character >= '{' && character <= '~')) //this else-if statement reads any punctuation, numbers or whitespace to stdout unchanged 
        {
            printf("%c", character); //prints punctuation, whitespace or numbers 
        }
       
    }

}

char encryptRot(char character, int key) //function definition 
{
    character += key;
    if(character < 'A') 
    {
        character = character + 26;
    }
    else if(character > 'Z') 
    {
        character = character - 26;
    }
    return character;
}

char decryptRot(char character, int key) 
{
    character -= key;
    if(character < 'A') 
    {
        character = character + 26;
    }
    else if(character > 'Z') 
    {
        character = character - 26;
    }
   return character;
}

