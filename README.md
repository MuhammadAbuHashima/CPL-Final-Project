# CPL-Final-Project
here is the description of the program

Our project is created to encrypt and decrypt string that user enter 
 firstly we view a menu of choices to ( Encrypt , Decrypt ,or Exit the program ) 
        user will do operations as he wants on different words more than one times as he wants until he chooses Exit 
        
        
                if the user chooses "Encrypt" : 
                   - The program will ask him to enter the word "message" he want to encrypt 
                   - Calling function "Encryption" will start , and passing ("the message ", and "the number of iteration of the loop ") 
                   
                   
      // in Encryption Function 
       the program loops on the characters of the "message" until it ends : 
       -Check if the character if Small or Capital :
            _Check if the number with the key is smaller than the ASCHII code of the last "small/capital" character:
                - "then"  : Replace the character with another "after" it by 7
                - "else"   :  Start again from the first start by subtracting (the number of alphabets "26" ) , and Replace the character with another "after" it by 7 from start.
                
                
                
                
                if the user chooses "Decrypt" : 
                   - The program will ask him to enter the word "message" he want to decrypt 
                   - Calling function "Decryption" will start , and passing ("the message ", and "the number of iteration of the loop ") 
                
                
       // in Decryption Function 
       the program loops on the characters of the "message" until it ends : 
       -Check if the character if Small or Capital :
            _Check if the number with the key is bigger than the ASCHII code of the frist "small/capital" character:
               - "then"  : Replace the character with another "before" it by 7
               - "else"   :  Start again from the first start by subtracting (the number of alphabets "26" ) , and Replace the character with another "before" it by 7 from start.
                
               
               
                if the user chooses "Exit" :
                   - the program will go out from the loop and exit the program .

               
               
          

        
                 
