#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int prime1, prime2, n, t, i, flag;
long int encrypt_key[50], decrypt_key[50], temp[50], j, decrypt_msg[50], encrypt_msg[50];

//function make the private key elements by dividing the (co_mod "t" + 1) by the ecryption key to return it to its original form

long int create_decrytion_key (long int a)
{
  long int k = 1;
  while(1)
  {
    k = k + t;
    if(k % a == 0)
     return(k / a);
  }
}

//function to check if the number entered by user is prime or not 

int prime(long int pr)
{
  int i;
  j = sqrt(pr);
  for(i = 2; i <= j; i++)
  {
   if(pr % i == 0)  //check prime by mod method
     return 0;
  }
  return 1;
 }

//function to generate encryption key

void encryption_key()
{  
  int k;
  k = 0;
  for(i = 2; i < t; i++)
  {
    if(t % i == 0)
     continue;
    flag = prime(i);
    if(flag == 1 && i != prime1 && i != prime2)
    {
    //encrypt_key is the public key exponent used for encryption
     encrypt_key[k] = i;
     // make inverse of encrypt_key by function create_decrytion_key to return the word to the original form
     flag = create_decrytion_key(encrypt_key[k]);
    if(flag > 0)
    {
    // decrypt_key is the multiplicative inverse of encrypt_key  and the Private key to decrypt the messages
     decrypt_key[k] = flag;
     k++;
    }
   if(k == 99)
    break;
   }
 }
}


//function to encrypt the message

void encrypt(char msg[100])
{
  long int pt, ct, key =  encrypt_key[0], k, len;
  i = 0;
  len = strlen(msg);
  while(i != len)
  {
    pt = decrypt_msg[i];
    pt = pt - 96;
    k = 1;
    for(j = 0; j < key; j++)
    {
     k = k * pt;
     k = k % n;
    }
   temp[i] = k;
   ct = k + 96;
   encrypt_msg[i] = ct;
   i++;
  }
  encrypt_msg[i] = -1;
  
  // printig part for encryption 
  printf("\nEncrypted message is:\n");
  for(i = 0; encrypt_msg[i] != -1; i++)
    printf("%c", encrypt_msg[i]);
    
}

//function to decrypt the message

void decrypt(char msg[100])
{
  long int pt, ct, key = decrypt_key[0], k;
  i = 0;
  while(encrypt_msg[i] != -1)
  {
    ct = temp[i];
    k = 1;
    for(j = 0; j < key; j++)
    {
      k = k * ct;
      k = k % n;
    }
   pt = k + 96;
   decrypt_msg[i] = pt;
   i++;
  }
  decrypt_msg[i] = -1;
  
  // printig part for encryption 
  printf("\nDecrypted message is :\n");
  for(i = 0; decrypt_msg[i] != -1; i++)
   printf("%c", decrypt_msg[i]);
  printf("\n");
  
}

int main()
{
  int num ;
  char msg[100];
  	while (num!=3)                                                         // loop stop only when the user choose exit "num = 3"
	{
		printf("\nchoose from the following options:\n");             //menu where the user can select which functionality he wants to perform
		printf("1 = Encrypt the message.\n");
		printf("2 = Decrypt the message.\n");
		printf("3 = Exit program.\n");
		printf("\nYour Choice: ");
		scanf("%d", &num);
		if (num ==1 || num ==2 ){
		printf("\nEnter frist prime number\n");                   // ask user to enter two prime number not equal each other
        scanf("%d", &prime1);
        flag = prime(prime1);
          if(flag == 0)
        {
        printf("\nINVALID\n");    // condition for number not prime
        exit(0);
        } 
		printf("\nEnter second prime number\n");
        scanf("%d", &prime2);
        flag = prime(prime2);
        if(flag == 0 || prime1 == prime2)            // condition for number not prime and equal each other 
        {
           printf("\nINVALID INPUT\n");
            exit(0);
        }
         	printf("Enter the message: ");	
			scanf("%s",msg);
            n = prime1 * prime2;             // n is the modulus of private and the public key
			t = (prime1-1) * (prime2-1);     // is copmod to (n)
			encryption_key(); 
		}
		if(num==1)
    	{ 
		    for(i = 0; msg[i] != NULL; i++)
               decrypt_msg[i] = msg[i];     
            encrypt(msg);  // calling function to encrypt the word
		}
		
		else if(num==2)
		{   for(i = 0; msg[i] != NULL; i++)
               encrypt_msg[i] = msg[i]; 
            decrypt(msg);  // calling function to decrypt
		}
	 printf("\n");
	}
  return 0;
}

