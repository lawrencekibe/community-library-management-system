/*------------------------------------
project:  Library Management System
Author :    Lawrence KIbe
Date:       July, 2021
Compiler:   C99
License:    MIT
-------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
//function prototypes
void execute_action(int action);
void close();
int menu();

int main()

{    int action;
      while(1) {
             action = menu();
             execute_action(action);
             printf("press any key to continue");
             getchar();
             getch();

             system("cls");
      }
     return 0;
}

void execute_action(int action){
     switch (action){
     case 1:
        printf("adding user\n");
     break;
     case 2:
        printf("adding book\n");
        break;
     case 3:
        Exit();
        break;
     default:
        printf("sorry.I don't know how to execute that\n");
     }
     }


void Exit()
{
     printf("Thank you for using the system.");
     Sleep(5000);
     exit(0);
}

int menu()  {
int action;


   do{
    printf("\tCommunity Library System\n");
    printf("Welcome Mr.Lawrence\n");
    printf("1. Add user\n");
    printf("2. Add book\n");
    printf("3. Exit\n");
    printf("Action(1-3): ");
    scanf("%d", &action);

    //validate
    if(action < 1 || action > 3){
        printf("Invalid action!!!. Try again\n");
        Sleep(2000);
        system("cls");

    }
    }while(action < 1 || action > 3);
    execute_action(action);
    return action;

}

