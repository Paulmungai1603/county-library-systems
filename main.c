/*
  county library systems
  marshmellow
  Jan,2021
  Compiler: GNU GNC
  Language C89
  License: MIT

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int action;
    printf("select an action below\n");
    printf("1. Add new patron\n");
    printf("2. view all patrons\n");
    printf("3. View all books\n");
    printf("4. Add new Book\n");
    printf("Your action: \n");
    if(action< 1|| action>4)
      printf("invalid action. Try again\n");

      return 0;
 void execute_action(int action){
    switch(action){
    case 1:
        printf("adding a new patron\n");
        break;
    case 2:
        printf("list of all patrons\n");
        break;
    case 3:
        printf("list os all books\n");
        break;
    case 4:
        printf("adding a new book\n");
        break;
    default: printf(" invalid action.\n");
    }
 }

    return 0;
}
