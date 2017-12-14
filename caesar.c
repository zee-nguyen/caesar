#include <cs50.h>
#include <stdio.h>
#include <string.h>

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
    string text = get_string();
}