#include <stdio.h>

void Encryption(char message[100],int i,int key)                           // function to make encryption for the alphabets user enter
{           
	for(i = 0; (i < 100 && message[i] != '\0'); i++)   	           //loop untill the word ends 
   	{	
   	    if((message[i] <= 122)&&(message[i] >= 97))                // condition work on small character
   	    {

		  	if((message[i] +key) <= 122)
   				message[i] = message[i] + key;                      // make char equal the seventh char after

			else
   				message[i] = message[i] + (key-26);                // statement to cotroll flow only between chars

		}
		
        if((message[i] <= 90)&&(message[i] >= 65))               // condition work on capital character by the same with small
        {
		  	
			if((message[i] + key) <= 90)
   				message[i] = message[i] +key;
   				
			else
   				message[i] = message[i] + (key-26);
   		
		}
	
	}
		
		printf("Encrypted message is: %s\n", message);
}

void Decryption(char message[100],int i,int key)                        // function to make decryption for the alphabets user enter
{

	for(i = 0; (i < 100 && message[i] != '\0'); i++)
	{
		//small char
		
		if((message[i] <= 122)&&(message[i] >= 97))
		{
			if((message[i] - key) >= 97)
				message[i] = message[i] - key;                 // make char equal the seventh char before
		
			else
				message[i] = message[i] - (key-26);   
		
		}
		
		//capital char
		
		if((message[i] <= 90)&&(message[i] >= 65))
		{
			if((message[i] - key) >= 65)			
				message[i] = message[i] - key;
			
			else			
				message[i] = message[i] - (key-26);
			
		}

	}
		
		printf("Decrypted message is: %s\n", message);
}

int main()
{
	int i, num, key=7;                                                     //declaration for the variables we will use 
	char message[100];

	while (num!=3)
	{
		printf("\n");
		printf("\nchoose from the following options:\n");             //menu where the user can select which functionality he wants to perform
		printf("1 = Encrypt the message.\n");
		printf("2 = Decrypt the message.\n");
		printf("3 = Exit program.\n");
		printf("\nYour Choice: ");
		scanf("%d", &num);
	
		if(num==1)
		{ 
			printf("Enter the message: "); 
			scanf("%s", message);                                   // Taking word from user 
			Encryption(message,i,key);                                 // calling function to encrypt the word 
		}
		
		else if(num==2)
		{
			printf("Enter the message: ");
			scanf("%s", message);	                             // Taking word from user 
			Decryption(message,i,key);                              // calling function to decrypt
		}

	}
	
	return 0;
}
