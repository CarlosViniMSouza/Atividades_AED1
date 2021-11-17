#include <stdio.h>

typedef struct {

    char name[100];
    int age;
    float height, salary;
} User;

User user;

void login() {

    printf("Your name: ");
    scanf("%[^\n]", user.name);
    fflush(stdin);

    printf("Your age: ");
    scanf("%d", &user.age);

    printf("Your height: ");
    scanf("%f", &user.height);

    printf("Your salary: ");
    scanf("%f", &user.salary);
    
    printf("\nLogin with Sucessfull!\n");
}

int main() {

    login();

    printf("\nLogin Workspace \nName: %s \nAge: %d \nHeight: %.1f \nSalary: %.2f", user.name, user.age, user.height, user.salary);
    return 0;
}
