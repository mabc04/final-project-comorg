#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void secret(){
    printf("Exploit successful! You've reached the secret function!\n");
    system("/bin/sh");
}
void play() {
    char buffer[64];
    printf("Congratulions Exploit successful\n  ");
    gets(buffer);  // Vulnerable function!
    printf("Hello, %s!\n", buffer);
}

int main() {
    play();
    return 0;
}
