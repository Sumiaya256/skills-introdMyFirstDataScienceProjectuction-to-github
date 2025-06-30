#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n                           ############################################");
    printf("\n                           ############################################");
    printf("\n                           #####                                  #####");
    printf("\n                           #####                                  #####");
    printf("\n                           #####    WELCOME TO UniMap  Project    #####");
    printf("\n                           #####                                  #####");
    printf("\n                           #####                                  #####");
    printf("\n                           ############################################");
    printf("\n                           ############################################");



#define LIBRARY_LOCATION "B3"
#define COMMON_ROOM_LOCATION "B2"
#define CANTEEN_LOCATION "B4"
#define CSE_CLASS_LOCATION "B1"


char* find_location(char* room) {
    if (strcmp(room, "library") == 0) {
        return LIBRARY_LOCATION;
    } else if (strcmp(room, "common room") == 0) {
        return COMMON_ROOM_LOCATION;
    } else if (strcmp(room, "canteen") == 0) {
        return CANTEEN_LOCATION;
    } else if (strcmp(room, "cse class") == 0) {
        return CSE_CLASS_LOCATION;
    } else {
        return "unknown";
    }
}

    char current_location[3];
    char destination[20];

   
    printf("\n\n                                   PLEASE ENTER YOUR LOCATION");

    printf("\n\nWhat is your current location :  ");
    scanf("%s", current_location);

 
    printf("Where do you want to go? ");
    scanf("%s", destination);

    
    while (strcmp(current_location, find_location(destination)) != 0) {
       
        printf("You are currently in %s. ", current_location);



   
        strcpy(current_location, find_location(destination));
    }

    
    printf("You have reached %s.\n", current_location);


    int current_level = 1;
    int selected_level = 0;
    int distance_travelled = 0;

    printf("\n\n                    Welcome to the EWU lift simulator!\n");

    while (1) {
        printf("\n You are currently at level %d(Ground Floor)\n", current_level);
        printf("\n Please select a level (0-9): ");
        scanf("%d", &selected_level);

        if (selected_level < 0 || selected_level > 9) {
            printf("Invalid level selected. Please try again.\n");
            continue;
        }

        if (selected_level == current_level) {
            printf("You are already on level %d\n", current_level);
            continue;
        }

        int distance = abs(selected_level - current_level);
        distance_travelled += distance;

        printf("Going from level %d to level %d\n", current_level, selected_level);
        printf("Distance travelled: %d\n", distance);
        break;

    }

    int section_number = 0;


    printf("Please enter your section number (1-10): ");
    scanf("%d", &section_number);

    if (section_number < 1 || section_number > 10) {
        printf("Invalid section number. Please try again.\n");
        return 1;
    }


    printf("Your section %d at the following times:\n", section_number);

    switch (section_number) {
        case 1:
             printf("ROOM NO:202\n");
            printf("Monday and Wednesday, 9:00-10:30am\n");
            break;
        case 2:
            printf("ROOM NO:202\n");

            printf("Monday and Wednesday, 10:45am-12:15pm\n");
            break;
        case 3:
                         printf("ROOM NO:202\n");

            printf("Monday and Wednesday, 1:15-2:45pm\n");
            break;
        case 4:
                         printf("ROOM NO:301\n");

            printf("Monday and Wednesday, 3:00-4:30pm\n");
            break;
        case 5:
                         printf("ROOM NO:402\n");

            printf("Tuesday and Thursday, 9:00-10:30am\n");
            break;
        case 6:
                         printf("ROOM NO:603\n");

            printf("Tuesday and Thursday, 10:45am-12:15pm\n");
            break;
        case 7:
                         printf("ROOM NO:701\n");

            printf("Tuesday and Thursday, 8:30-10:00am\n");
            break;
        case 8:
                         printf("ROOM NO:1001\n");

            printf("Tuesday and Thursday, 3:00-4:30pm\n");
            break;
        case 9:
                         printf("ROOM NO:102 (main building)\n");

            printf("Friday, 9:00-11:30am\n");
            break;
        case 10:

            printf("ROOM NO:202\n");

            printf("Friday, 1:15-3:45pm\n");
            break;
    }
    getch();

    return 0;
}
