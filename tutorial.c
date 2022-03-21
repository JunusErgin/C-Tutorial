// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char* receiver[1];
    int attachments = 2;
    
    scanf("%[^\n]", &receiver);
    
    // Write C code here
    printf("Sehr geehrter %s,\n\n", receiver);
    printf("Hiermit übermittel ich ihnen die notwendigen Papiere.\n\n");
    
    printf("Anhänge: %d", attachments);
    
    return 0;
}
