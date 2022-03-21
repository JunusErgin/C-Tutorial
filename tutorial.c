// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char* receiver[256];
    char* greeting = "Sehr geehrter";
    int attachments = 2;
    int gender = 2;
    
    printf("An wen ist der Brief gerichtet? ");
    scanf("%[^\n]", &receiver);
    
    printf("Ich schreibe an (1) Eine Frau (2) Einen Mann ");
    scanf("%d", &gender);
    
    if(gender == 1) {
        greeting = "Sehr geehrte";
    }
    
    printf("\n\n%s %s,\n\n", greeting, receiver);
    printf("Hiermit übermittel ich ihnen die notwendigen Papiere.\n\n");
    
    printf("Anhänge: %d", attachments);
    
    return 0;
}
