#include <stdio.h>
#include <stdlib.h>
#include "binaryTree.h"
#include <string.h>

void tFree(struct employee *head){
  if(head){
      tFree(head->rightChild);
      tFree(head->leftChild);
      free(head);
  }
  return;
}

void printNames(struct employee *head){
  printf("Employee Name List:\n");
  printf("-------------------------\n");
  printInOrder(head);
  putchar('\n');
}

void printInOrder(struct employee *head){
  if(head){
    printf("Printing left children...\n");
    printInOrder(head->leftChild);
    printf("Printing root...\n");
    printf("%s\n", head->employeeName);
    printf("Printing right children...\n");
    printInOrder(head->rightChild);
  }
  return;
}

void insertEmployee(struct employee **head, struct employee *current){
  if(*head == NULL){
    printf("The root was NULL");
    (*head) = current;
    return;
  }
  if(*head != NULL){
    int compare;
    compare = strcmp((current->employeeName), ((*head)->employeeName));
    printf("This is what strcmp came up with %d", compare);
    if(compare > 0){
      if((*head)->rightChild == NULL){
	printf("Inserted into right child");
	(*head)->rightChild = current;
      }
      else{
	insertEmployee(&((*head)->rightChild), current);
      }
    }
    else if(compare < 0){
      if((*head)->leftChild == NULL){
	printf("Inserted into left child");
	(*head)->leftChild = current;
      }
      else{
	insertEmployee(&((*head)->leftChild), current);
      }
    }
  }
  return;
} 

void deleteEmployee(struct employee **head, struct employee *current){
  if(*head == NULL){
    return;
  }
  if(strcmp((*head)->employeeName, current->employeeName)){
    if(((*head)->leftChild == NULL) && ((*head)->rightChild) == NULL){
      *head = NULL;
      return;
    }
    if(((*head)->leftChild == NULL) && ((*head)->rightChild) != NULL){
      (*head) = (*head)->leftChild);
    }
  if(
  }
}






