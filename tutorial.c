#include <stdio.h>

int main() {
    char phoneNumbers[100][256] = {
        "+49 15721983000",
        "+49 15721983229",
        "+49 15721922349",
        "+49 15721982389",
    };
    int nextIndex = 4;
    
    start(nextIndex, phoneNumbers);

    return 0;
}

void start(int nextIndex, char phoneNumbers[100][256]){
    if(showMenu() == 0) {
        showPhoneNumbers(nextIndex, phoneNumbers);
    } else {
      addPhoneNumber(nextIndex, phoneNumbers);
    }
}

void showPhoneNumbers(int nextIndex, char phoneNumbers[100][256]) {
    // Code zum Telefonnummern anzeigen
    printf("Telefonnummern:\n");
    for(int i = 0; i < 10; i++) {
        printf("(%d) %s \n", i, &phoneNumbers[i]);
    }
    
    start(nextIndex, phoneNumbers);
}
// Bsp: addPhoneNumber(4, {...})
void addPhoneNumber(int nextIndex, char phoneNumbers[100][256]){ 
    // nextIndex = 4
    printf("Neue Nummer hinzufügen: ");
    char newNumber[255];
    scanf("%s", newNumber);
    strcpy(phoneNumbers[nextIndex], newNumber);
    nextIndex++;
    start(nextIndex, phoneNumbers);
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
