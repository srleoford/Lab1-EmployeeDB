#include <stdio.h>

#define LENGTH 100

struct employee{
  char *employeeName;
  struct employee *leftChild;
  struct employee *rightChild;
};

void printNames(struct employee **head);
void insertEmployee(struct employee **head, struct employee *current);
void deleteEmployee(struct employee **head, struct employee *current);
void getEmployees(struct employee **head, char *fileName);
void printInOrder(struct employee **head);
