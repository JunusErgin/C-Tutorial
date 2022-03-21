#include <stdio.h>

int main() {
    char phoneNumbers[4][256] = {
        "+49 15721983000",
        "+49 15721983229",
        "+49 15721922349",
        "+49 15721982389",
    };
    
    if(showMenu() == 0) {
        showPhoneNumbers(phoneNumbers);
    } else {
      addPhoneNumber();
    }
    return 0;
}

void showPhoneNumbers(char myPhoneNumbers[4][256]) {
    // Code zum Telefonnummern anzeigen
    printf("Telefonnummern:\n");
    for(int i = 0; i < 4; i++) {
        printf("(%d) %s \n", i, &myPhoneNumbers[i]);
    }

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
