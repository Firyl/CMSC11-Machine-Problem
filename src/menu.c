#include <stdio.h>
#include <string.h>

typedef struct menuItems {
    int id;
    char label[20];
} MenuItem;

int runMenu(void);

//FOR TESTING PURPOSES, delete this after passing testing and debugging
//int main (void) {
//    int choice = 1;
//
//    while (choice != 0) {
//
//        choice = runMenu();
//
//        if (choice == 1) {
//            startGame(); //Main Game Loop;
//        }
//    }
//
//    printf("Another day without a bath!");
//
//    return 0; //Exit Game
//}

int runMenu (void) {
    MenuItem options[2] = {{1, "Play"}, {0, "Exit"}};

    for(int i = 0; i < 2; i++) {
        printf("[%d] %s\n", options[i].id, options[i].label);
    }

    char input[20];
    printf("Enter your choice: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    //checks if the input is play or 1, exit or 0.
    if (strcmp(input, "Play") == 0 || strcmp(input, "1") == 0) {
        return 1;
    } else if (strcmp(input, "Exit") == 0 || strcmp(input, "0") == 0) {
        return 0;
    } else {
        return -1;
    }
}
