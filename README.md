# Caesar cipher
## How it works
The Caesar cipher works by using a value (key), and a text input.
It then shifs the value of each character up or down based on that key.

## Navigating the user interface
Input the numbers provided with the different menu options to select.

### Selecting manual or file input
Select between inputting a line in the terminal, or use a file as source.

The program will use either "encryptme.txt" or "decryptme.txt" when using
file as source. It will automatically generate a new file with the
encrypted or decrypted content, intuitively called "encrypted" or "decrypted".

_**NB: After selecting an input type the program must be restarted to change it.**_

### Encrypting something
You will be asked to enter a value (key) to shift each character by. Both
positive and negative integer values are acceptable.

For manual input: The program will then ask for a string to encrypt, and
then display the encrypted string on screen when finished.

For file input: The program will then automatically start reading
"encryptme.txt" and generate a new file called "encrypted.txt" with the
contents encrypted.

### Decrypting something
You will be asked to enter a value (key) to shift each character by. Both 
positive and negative integer values are acceptable.

For manual input: The program will then ask for a string to decrypt, and 
then display the decrypted string on screen when finished.

For file input: The program will then automatically start reading
"decryptme.txt" and generate a new file called "encrypted.txt" with the
contents encrypted.
 


