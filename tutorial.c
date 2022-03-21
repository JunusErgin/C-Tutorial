#include <stdio.h>

int main() {
    
    if(showMenu() == 0) {
        showPhoneNumbers();
    } else {
      addPhoneNumber();
    }
    return 0;
}

void showPhoneNumbers() {
    // Code zum Telefonnummern anzeigen
    printf("Telefonnummern:");
}

void addPhoneNumber(){
    printf("Neue Nummer hinzufügen");
}

int showMenu() {
    int selection;
    printf("###### Herzlich willkommen ######\n");
    printf("(0) Telefonnummern anzeigen\n");
    printf("(1) Neue Nummer hinzufügen\n");
    scanf(" %d", &selection);
    printf("\n\n");
    if(selection == 0 || selection == 1) {
        return selection;
    } else {
        printf("Eingabe ungültig!\n");
        return showMenu();
    }
}
