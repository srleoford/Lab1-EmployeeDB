#include <stdio.h>

#define LENGTH 100
#define emalloc (struct employee *)malloc(sizeof(struct employee));
#define errorCheck printf("Error isn't here\n");

/* Object employee */
struct employee {
  char *employeeName;
  struct employee *rightChild;
  struct employee *leftChild;
};

void tFree(struct employee *head);
void printNames(struct employee *head);
void insertEmployee(struct employee **head, struct employee *current);
void deleteEmployee(struct employee **head, struct employee *current);
void getEmployees(struct employee **head, char *fileName);
void printInOrder(struct employee *head);




