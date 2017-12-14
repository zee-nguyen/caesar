#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check if argc is 2
    if (argc != 2) {
        printf("missing command-line argument\n");
        return 1;
    }

    //turn key into an integer
    int k = atoi(argv[1]);
    printf("%i\n", k);

    //prompt user for plaintext
    printf("plaintext: ");
    string p = get_string();

    //iterate through each char in the plaintext and for each char in the plaintext string
    //  - if alphabetic (shift letters only, everything else is preserved)
    //  - preserve the case
    //  - shift plaintext char by key

    if (p != NULL) {

        for (int i = 0, n = strlen(p); i < n; i++) {

            //check if alphabetic
            if (isalpha(p[i]) == true) {

                //preserve the case
                //if uppercase
                if (isupper(p[i])) {
                    int textpos = p[i] - 'A';
                    int cipherpos = (textpos + k) % 26;
                    int c = cipherpos + 65;
                    printf("%c", (char) c);

                }
                //if lowercase
                if (islower(p[i])) {
                    int textpos = p[i] - 'a';
                    int cipherpos = (textpos + k) % 26;
                    int c = cipherpos + 97;
                    printf("%c", (char) c);
                }

            } else {
                //if not alphabetic, preserve the character
                printf("%c", p[i]);
            }
        }
        // printf("ciphertext: ");
    }
    return 0;
}