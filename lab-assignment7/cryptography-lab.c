//Tianmeng Xiae
//tenmousha@gmail.com

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* function to encrypt the data*/
void encrypt(char text[], int key)
{
    int i;
    for(i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            char offset = isupper(text[i]) ? 'A' : 'a';
            text[i] = (text[i] - offset + key) % 26 + offset;
        }
    }
}

/*function to decrypt the data*/
void decrypt(char text[],int key)
{
    
    // Add your code here
    int i;
    for(i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            char offset = isupper(text[i]) ? 'A' : 'a';
            text[i] = (text[i] - offset - key + 26) % 26 + offset;
        }
    } 
}


/*----------- Main program---------------*/
int main()
{
    char text[20] ;
    int keyvalue=3;
    /*Input string */
    printf("Enter the message:  ");
    scanf("%s",text);
    printf("text input   = %s\n",text);
    
    /*call function to encrypt the data*/
    encrypt(text,keyvalue);
    printf("Encrypted value = %s\n",text);
    
    /*call function to decrypt the data*/
    decrypt(text,keyvalue);
    printf("Decrypted value = %s\n",text);
    
    return 0;
}
