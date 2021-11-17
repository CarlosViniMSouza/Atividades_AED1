#include <stdio.h>

typedef struct {

  char name[20];
  int age;
  float height;
  char gener;

} System_Client;

System_Client client;

int main() {

  printf("\n|---- Client register ----|\n\n");

  printf("Your name: ");
  fgets(client.name, 20, stdin);
  fflush(stdin);

  printf("Your age: ");
  scanf("%d", &client.age);
  fflush(stdin);

  printf("Your height: ");
  scanf("%f", &client.height);
  fflush(stdin);

  printf("Your gener: ");
  scanf("%c", &client.gener);
  fflush(stdin);

  printf("\n\n|---- Client Information Registed ----|\n");
  printf("Name: %s", client.name);
  printf("Age: %d", client.age);
  printf("\nHeight: %.2f", client.height);
  printf("\nGener: %c", client.gener);
}