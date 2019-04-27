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

char encryptRot(char character, int key);
char decryptRot(char character, int key);

int main() 
{
    int stringSize = 0; //when code is written double check if both of these variables are required    
    char encryptArray[1024]; //array that will store string
    char character; //used to process individual characters of string
    int key = 1; //key specification for rotation encryption
    int userSelection; //integer that must range between [1,6] in order to specify function
    
    for(int iniCount = 0; iniCount < 1024; iniCount++) //initialises each index position of array = 1 so that no random NULLs are encountered, which will cancel the below WHILE loop
    {
        encryptArray[iniCount] = 1;
    }
    
    while(encryptArray[stringSize] != '\0') //Measures the length of the input data after it is scanned as a string. Will stop as soon as the final character of a string is met i.e. "\0" NULL
    {
        scanf("%c", &encryptArray[stringSize]);
        stringSize++; //Increments the index of encryptRot array, while also measuring length
        
    }
    
    encryptArray[stringSize + 1] = '\0';
    
        printf("\nPlease select an option: \n");
        printf("1. Encryption with a Rotation Cipher\n");
        printf("2. Decryption with a Rotation Cipher (known key)\n");
        printf("3. Decryption with a Rotation Cipher (unknown key)\n");
        printf("4. Encryption with a Substitution Cipher\n");
        printf("5. Decryption with a Substitution Cipher (known key)\n");
        printf("6. Decryption with a Substituion Cipher (unknown key)\n");
        printf("Enter selection: ");
        
    
        
        FILE *inputUser;
        
        inputUser = fopen("file", "r");
        fscanf(inputUser, "%d", &userSelection);
        

    
    
    for(int count = 0; count <= stringSize; count++) 
    {
        character = encryptArray[count];
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
                    //case 3:
    
                }
                
        }
        
        else if((character >= ' ' && character <= '@') || (character >= '[' && character < 'a') || (character >= '{' && character <= '~')) //this else-if statement reads any punctuation, numbers or whitespace to stdout unchanged 
        {
            printf("%c", character);
        }
       
    }
    
    
    
    /*do 
    {
        
        
        int selection;
        scanf("%d", &selection);
        while(selection >= 1 && selection <= 6) 
        {
            //switch case statement
        }
    } */


    



}

char encryptRot(char character, int key) 
{
    return character += key;
}

char decryptRot(char character, int key) 
{
    return character -= key;
}


/*int main() 
{
    int stringSize = 0; //when code is written double check if both of these variables are required    
    char encryptArray[1024]; //array that will store string
    char character; //used to process individual characters of string
    int key = 1;
    
    for(int iniCount = 0; iniCount < 1024; iniCount++) //initialises each index position of array = 1 so that no random NULLs are encountered, which will cancel the below WHILE loop
    {
        encryptArray[iniCount] = 1;
    }
    
    while(encryptArray[stringSize] != '\0') //Measures the length of the input data after it is scanned as a string. Will stop as soon as the final character of a string is met i.e. "\0" NULL
    {
        scanf("%c", &encryptRot[stringSize]);
        stringSize++; //Increments the index of encryptRot array, while also measuring length
        //printf("%d\n", stringSize); //debug
    }
    
    for(int count = 0; count <= stringSize; count++) 
    {
        //printf("%d\n", count); //debug
        character = encryptArray[count];
        if(character >= 'a' && character <= 'z') //convert to uppercase
        {
            character = character - 32;
            //printf("%c", character); //debug
        }
        if(character >= 'A' && character <= 'Z') //encryption completed for only uppercase ASCII characters
        {
            character += key;
            printf("%c", character);
        }
        else if((character >= ' ' && character <= '@') || (character >= '[' && character < 'a') || (character >= '{' && character <= '~')) //this else-if statement reads any punctuation, numbers or whitespace to stdout unchanged 
        {
            printf("%c", character);
        }
       
    }

    
}*/