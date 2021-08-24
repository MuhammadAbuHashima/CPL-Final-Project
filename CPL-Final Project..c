#include <stdio.h>

int main()
{
	int i, num, key=7;
	char message[100];
		
	while(num != 3)
	{
		
		printf("\nchoose from the following options:\n");
		printf("1 = Encrypt the message.\n");
		printf("2 = Decrypt the message.\n");
		printf("3 = Exit program.\n");
		printf("\nYour Choice: ");
		scanf("%d", &num);
		
		if(num == 3)
			return 0;
			
		
		printf("Enter the message: ");
		scanf("%s", message);
		
		if(num==1)
		{
		
			for(i = 0; (i < 100 && message[i] != '\0'); i++)
			{	
				if((message[i] + key) <= 122)
					message[i] = message[i] + key;
	
				else
					message[i] = message[i] + (key -26);
			}
			
			printf("Encrypted message is: %s\n", message);
		}
		
		else if(num==2 && key<=25)
		{  
		 				
			for(i = 0; (i < 100 && message[i] != '\0'); i++)
			{
				if((message[i]-key) >= 97)
					message[i] = message[i] - key ;
				else
					message[i] = message[i] - (key +26);
			}
		
			printf("Decrypted message is: %s\n", message);
		}
		
	}
	
	return 0;
	
}
