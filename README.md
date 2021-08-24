CPL-Final-Project

The description of the program:

Our project is created to encrypt and decrypt string that user enter, We use one of the simplest encryption techniques is the Simple Substitution Encryption. 
In this method, you will have a variable called a KEY which you can initialize with value 7.
When the user enters a string, each character in this string will be shifted KEY times according to the alphabetic order. 

      
      
      
      
   Firstly:
       •	we view a menu of choices to (Encrypt, Decrypt, or Exit the user will do operations number of times he wants on different words until he chooses Exit       
       
       
  
   IF the user chooses "Encrypt":
                •	The program will ask him to enter the word "message" he wants to encrypt.
                 •	Calling function "Encryption" will start, and passing ("the message ", and "the number of iterations of the loop ") 


  In Encryption Function

      •	the program loops on the characters of the "message" until it ends:
         	Check if the character if Small or Capital:
            •	Check if the number with the key is smaller than the ASCHII code of the last "small/capital" character:
                	"Then"  : Replace the character with another "after" it by 7
                	"else":  Start again from the first start by subtracting (the number of alphabets "26") and replace the character with another "after" it by 7 from start





   IF the user chooses "Decrypt":      
                     •	The program will ask him to enter the word "message" he wants to decrypt 
                       •	Calling function "Decryption" will start, and passing ("the message ", and "the number of iterations of the loop ") 
 
              
   In Decryption Function
   
         •	the program loops on the characters of the "message" until it ends:
            	Check if the character if Small or Capital:
               •	Check if the number with the key is bigger than the ASCHII code of the first "small/capital" character:
                       	"Then"  : Replace the character with another "before" it by 7
                      	"else":  Start again from the first start by subtracting (the number of alphabets "26") and replace the character with another "before" it by 7 from start.
                
        
        
             
   Finaly : If the user chooses "Exit"
   
          the program will go out from the loop and exit the program


