#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryTree.h"

#define errorCheck printf("Error isn't here\n");

int readInput(char *s, int limit);

int main(void){
  struct employee *head = NULL;
  char *name;
  char response[10];
  int loop = 0;
  printf("Welcome to the EDB Management System!!!\n");
  while(loop == 0){
    printf("Do you wish to add employee('A'), remove employee('R'), or list employees('L')?");
    readInput(response, LENGTH);
    switch(response[0]){
    case 'a':
      /* printf("Is there a text file('READ') or an employee name to add('A')?");*/
      /* readInput(response, LENGTH); */
      /* if(response[0] == 'R' || response[0] == 'r'){
	printf("Enter the name of the text file \n");
	} */
      /*  else if(response[0] == 'a' || response[0] == 'A'){ */
	printf("Enter the name of the employee:\n");
	readInput(name, LENGTH); 
	struct employee *current = NULL;
	current = emalloc;
	current->employeeName = name;
	insertEmployee(&head, current);
	putchar('\n');
	/* } */
	printf("Is there more you would like to do? Y|N\n");
	readInput(response, LENGTH);
	if(response[0] == 'N' || response[0] == 'n'){
	  tFree(head);
	  loop++;
	}
	break;  
    case 'A':
      printf("Is there a text file('READ') or an employee name to add('A')?");
      readInput(response, LENGTH);
      if(response[0] == 'R' || response[0] == 'r'){
	printf("Enter the name of the text file \n");
      }
      else if(response[0] == 'a' || response[0] == 'A'){
	printf("Enter the name of the employee:\n");
	readInput(name, LENGTH); 
	struct employee *current = NULL;
	current = emalloc;
	current->employeeName = name;
	insertEmployee(&head, current);
	putchar('\n');
      }
      printf("Is there more you would like to do? Y|N\n");
      readInput(response, LENGTH);
      if(response[0] == 'N' || response[0] == 'n'){
	tFree(head);
	loop++;
      }
      break;
    case 'R':
      printf("Enter the name of the employee to remove from the system:\n");
      
      
      printf("Is there more you would like to do? Y|N\n");
      readInput(response, LENGTH);
      if(response[0] == 'N' || response[0] == 'n'){
	tFree(head);
	loop++;
      }
    case 'r':
      printf("Enter the name of the employee to remove from the system:\n");
      
      
      printf("Is there more you would like to do? Y|N\n");
      readInput(response, LENGTH);
      if(response[0] == 'N' || response[0] == 'n'){
	tFree(head);
	loop++;
      }
    case 'L':
      printNames(head);
      printf("Is there more you would like to do? Y|N\n");
      readInput(response, LENGTH);
      if(response[0] == 'N' || response[0] == 'n'){
	tFree(head);
	loop++;
      }
      break;
    case 'l':
      printNames(head);
      printf("Is there more you would like to do? Y|N\n");
      readInput(response, LENGTH);
      if(response[0] == 'N' || response[0] == 'n'){
	tFree(head);
	loop++;
      }
      break;
    default:
      loop++;
      tFree(head);
    }
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
