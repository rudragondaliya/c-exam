// Q-5 develop a c program that defines a structure representing a house
//(with attributes like room_quantity,established_year and city).
// list N number of 'house' details using array of objects.


#include <stdio.h>
#include <string.h>


struct House {
    int room_quantity;
    int established_year;
    char city[50];
};

int main() {
    int n,i;

    printf("Enter the number of houses: ");
    scanf("%d", &n);

    
    struct House houses[n];


    for (i = 0; i < n; i++) {
        printf("\nEnter details for house %d:\n", i + 1);
        printf("Number of rooms: ");
        scanf("%d", &houses[i].room_quantity);
        printf("Year established: ");
        scanf("%d", &houses[i].established_year);
        printf("City: ");
        scanf("%s",&houses[i].city);
//        fgets(houses[i].city, sizeof(houses[i].city), stdin);
//        houses[i].city[strcspn(houses[i].city, "\n")] = '\0'; 
    }

    printf("\nHouse details:\n");
    for (i = 0; i < n; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Number of rooms: %d\n", houses[i].room_quantity);
        printf("Year established: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }

    return 0;
}

