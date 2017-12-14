creating an array

string dogs[3] //an array of strings, has 3 items

dogs[0] = "Milo";
dogs[1] = "Mochi";
dogs[3] = "Elphie";



Caesar
------

Todo:
From user:
- get the key
- get the plaintext

From us:
- encipher
- print out the ciphertext

2. get the plaintext
	- printf("plaintext: "); //to prompt user for a string
	- get_string()

3. encipher
	- one character
	- the entire plaintext




Pseudocode
1. get key from command line arg
    - check if argc === 2
    - if not, print error message and return 1 from main

    - string argv[]
		- argv[0] is the name of our program
		- argv[1] is the key entered by the user (however, this is string type so we need to convert it)

2. turn key into int
    - atoi (what library to include? what if user enters something that doesn't contain all numbers?)
		ex: string num = "50";
		int i = atoi(num) //convert this into int

3. prompt user for plaintext
    - printf("plaintext: ");
    - get_string()

4. iterate through each char in the plaintext and for each char in the plaintext string
    - if alphabetic (shift letters only, everything else is preserved)
    - preserve the case
    - shift plaintext char by key

    * some functions to use
    shift letters only: isalpha
    preserve capitalization: isupper, islower

    ex: isalpha('Z') -> true
    isupper('Z') -> true
    islower ('Z') -> false


    * alphabet wraparound
    - start with: ASCII values
    - encipher: alphabetical index
    - print: ASCII values

    * ASCII --> alphabetical?
    alphabetical -> ASCII?
    also consider cap/ low cap letters?

5. print ciphertext
    - output ciphertext with a newline
    - exit, returning 0 from main

