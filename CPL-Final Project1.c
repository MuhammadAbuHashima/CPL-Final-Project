#include <stdio.h>

int main()
{
   int i, num;
   char message[100];

   printf("Enter the message: ");
   gets(message);

   printf("\nchoose from the following options:\n");
   printf("1 = Encrypt the message.\n");
   printf("2 = Decrypt the message.\n");
   printf("3 = Exit program.\n");
   scanf("%d", &num);
   
   if(num==1)
   {
   		for(i = 0; (i < 100 && message[i] != '\0'); i++)
   		{
   			message[i] = message[i] + 3;
		}
		printf("Encrypted message is: %s\n", message);
   }
   else if(num==2)
   {
   		for(i = 0; (i < 100 && message[i] != '\0'); i++)
   		{
   			message[i] = message[i] - 3;
		}
		printf("Decrypted message is: %s\n", message);
   }
   
   return 0;
}
