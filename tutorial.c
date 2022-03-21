#include <stdio.h>

int main() {
    char *arr[50];
    int i = 0;
    
    printf("Add a phone number ");
    char *newPhoneNr[255];
    scanf("%s", newPhoneNr);
    arr[i] = newPhoneNr;
    
     for ( i = 0; i < 5; i++ )
        printf("String %d : %s\n", i+1, arr[i] );
        
    return 0;
}






// ------ v2



// Online C compiler to run C program online
#include <stdio.h>

int main() {
    showMenu();


    return 0;
}

int showMenu() {
    printf("###### Herzlich willkommen ######\n");
    printf("(0) Telefonnummern anzeigen\n");
    printf("(1) Neue Nummer hinzufügen\n");
    printf("\n\n");
    
    return 0;
}
