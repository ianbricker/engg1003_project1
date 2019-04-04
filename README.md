# engg1003_project1
Programming Assignment 1 

Task: Write a C program that completes the following tasks:

    1. Encryption of a message with a rotation cipher 
        - Given message text and key
    2. Decryption of a message with a rotation cipher
        - Given cipher text and key
    3. Decryption of a rotation cipher
        - Given cipher text only
    4. Encryption of a message with a subsitutiion cipher
        - Given message text and alphabet substitution
    5. Decryption of a message with a substitution cipher
        - Given cipher text and substitutions
    6. Decryption of a substitution cipher
        - Given cipher text only

User Interface Specifications:

    1. All data inputs (messages, keys, cipher text, algorithm selection):
        - Hard coded variable initialisations (+0 marks)
        - Read from stdin scanf [cipher and message text] (+0.5 marks)
        - Read from and written to files [cipher and message text] (+0.75 marks)
    2. Task selection:
        - Selection with hard-coded variable (+0 marks)
        - Selection with "simple" stdin [read number without prompt] (0.25 marks)
        - Selection with "user friendly" stdin menu (+0.5 marks)
        - Selection with a file header (+0.75 marks)
        
Other Specifications:
    
    1. All ciphers should only include UPPER-CASE ASCII characters only:
        - Whitespace, punctuation or numerals should not be encrypted (if included, any of this should be sent to output unmodified)
        - Lower case letters should be converted to upper case via ASCII codes before encryption
    2. Key formatting
        - Rotation cipher key should be a single integer in the range [0,25]. Any encryption with a key of 0 should process the plain text as normal, but 
          output the encrypted cipher text.
        - Substitution cipher key should be formatted as a string of 26 UPPER-CASE letters ordered as-per their alphabetical subsitution. Where the
          following example shows how the substitution would work:
          ABCDEFGHIJKLMNOPQRSTUVWYXZ
          QAZXSWEDCVFRTGBNHYUJMKILOP
          where A is subsituted for Q, D is substituted for X, Z is substituted for P etc.
    3. ASCII Code
        - All cipher input data is to be encoded with the ASCII standard. ASCII encoding defines UPPER-CASE and lower-case letters to be stored as
          distinct 8-bit integers.
        - If an input is outside the range [65,90] and [97,122], then it can be copied to output without modification
        - If an input is within the lower case range [97,122], then subtract 32 from its value to make it UPPER-CASE prior to encyrption/decryption