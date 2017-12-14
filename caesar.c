#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check if argc is 2
    if (argc != 2) {
        printf("./caesar k\n");
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
    printf("ciphertext: ");

        for (int i = 0, n = strlen(p); i < n; i++) {

            //check if alphabetic
            if (isalpha(p[i])) {

                //preserve the case
                //if uppercase
                if (isupper(p[i])) {
                    int textpos = p[i] - 'A';
                    int cipherpos = (textpos + k) % 26;
                    int c = cipherpos + 'A';
                    printf("%c", (char) c);

                }
                //if lowercase
                else {
                    int textpos = p[i] - 'a';
                    int cipherpos = (textpos + k) % 26;
                    int c = cipherpos + 'a';
                    printf("%c", (char) c);
                }

            } else {
                //if not alphabetic, preserve the character
                printf("%c", p[i]);
            }
        }

        printf("\n");
    }
    return 0;
}