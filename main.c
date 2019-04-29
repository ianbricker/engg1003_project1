#include <stdio.h>

char encryptRot(char character, int key);
char decryptRot(char character, int key);

int main() 
{
    int stringSize = 0; //when code is written double check if both of these variables are required    
    char encryptArray[1024]; //array that will store string
    char character; //used to process individual characters of string
    int key = 14; //key specification for rotation encryption
    int userSelection = 1; //integer that must range between [1,6] in order to specify function
    
    
    scanf("%[^\n]s", encryptArray);
    
    while(encryptArray[stringSize] != '\0') 
    {
        character = encryptArray[stringSize];
        stringSize++;
        
        if(character >= 'a' && character <= 'z') //convert to uppercase
        {
            character = character - 32;
        }
        
        if(character >= 'A' && character <= 'Z') //encryption completed for only uppercase ASCII characters
        {
            switch(userSelection)
            {
                case 1:
                    character = encryptRot(character, key);
                    printf("%c", character);
                    break;
                case 2:
                    character = decryptRot(character, key);
                    printf("%c", character);
                    break;
            }
                
        }
        
        else if((character >= ' ' && character <= '@') || (character >= '[' && character < 'a') || (character >= '{' && character <= '~')) //this else-if statement reads any punctuation, numbers or whitespace to stdout unchanged 
        {
            printf("%c", character);
        }
       
    }

}

char encryptRot(char character, int key) 
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

