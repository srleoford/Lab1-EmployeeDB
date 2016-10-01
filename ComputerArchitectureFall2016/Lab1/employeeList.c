#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"
#include <string.h>

#define emalloc (struct employee*)malloc(sizeof(struct employee));
int readInput(char *s, int limit);
  
int main(void){
  struct employee *head = NULL;
  printf("Enter name of employee or type READ to read file");
  char *name;
  int loop = 0;
  while(loop == 0){
    int strLength;
    strLength = readInput(name, LENGTH);
    if(strcmp(name, "READ") == 0){
      printf("Enter the name of the text file \n");
    }
    else{
      struct employee *current = emalloc;
      current->employeeName = name;
      insertEmployee(&(head), current);
    }
    printf("Is there a file to read or another name to enter? Y|N");
    char *response;
    readInput(response, LENGTH);
    if(response[0] == 'N' || response[0] == 'n')
      loop++;
  }
}

int readInput(char *s, int limit){
  char *temp = s;
  int i = 0;
  if(fgets(s, limit, stdin)){
    while(temp[i] != '\n' && temp[i] != 0){
      i++;
    }
  }
  temp[i] = 0;
  return (temp-s);
}

void printNames(struct employee **head){
  printf("Employee name");
  printf("-------------------------");
  printInOrder(head);
  putchar('\n');
}

void printInOrder(struct employee **head){
  struct employee* temp = *head;
  if(head){
    printInOrder(&(temp->leftChild));
    printf("%LENGTHs\n", temp->employeeName);
    printInOrder(&(temp->rightChild));
  }
  return;
}

void insertEmployee(struct employee **head, struct employee *current){
  int compare;
  
  compare = strcmp((current->employeeName), ((*head)->employeeName));
  if(compare > 0){
    if((*head)->rightChild == NULL){
      (*head)->rightChild == current;
    }
    else{
      insertEmployee(&((*head)->rightChild), current);
    }
  }
  else if(compare < 0){
    if((*head)->leftChild == NULL){
      (*head)->leftChild = current;
    }
    else{
      insertEmployee(&((*head)->leftChild), current);
    }
  }
  return;
}









