#include <stdio.h>

int main() {
    char phoneNumbers[100][256] = {
        "+49 15721983000",
        "+49 15721983229",
        "+49 15721922349",
        "+49 15721982389",
    };
    int nextIndex = 4;

    if(showMenu() == 0) {
        showPhoneNumbers(phoneNumbers);
    } else {
      addPhoneNumber(nextIndex, phoneNumbers);
    }
    return 0;
}

void showPhoneNumbers(char myPhoneNumbers[4][256]) {
    // Code zum Telefonnummern anzeigen
    printf("Telefonnummern:\n");
    for(int i = 0; i < 10; i++) {
        printf("(%d) %s \n", i, &myPhoneNumbers[i]);
    }

}
// Bsp: addPhoneNumber(4, {...})
void addPhoneNumber(int index, char myPhoneNumbers[4][256]){ 
    // index = 4
    printf("Neue Nummer hinzufügen: ");
    char newNumber[255];
    scanf("%s", newNumber);
    strcpy(myPhoneNumbers[index], newNumber);
    index++;
    showPhoneNumbers(myPhoneNumbers);
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
