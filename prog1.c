#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc: Number of command-line arguments passed to the program during runtime
    // argv: Array of strings representing the command-line arguments

    printf("The arguments given are: %d\n", argc);
    
    //we are Looping through each argument and print it
    for(int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
