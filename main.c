/*
    This program ask the user for the hour and sent a message
    of "Good Morning!", "Good afternoon!", "Good evening!" or
    "Good night!" according to the hour received
    Author: Hugo Aguirre Doria
    Date: August 27, 2018
    */

#include <stdio.h>

int main(void) {

    //Variable declaration
    int hour;


    // Here we ask the user for the actual hour using
    // a 24 hour format.

    printf("Welcome User, what time is it? Enter a 24-hour format: \n ");
    scanf("%i", &hour);


    // Here the program evaluate the entered data and
    // according to that data sent a message to the user.
    if (hour < 0 || hour > 23 ) {
        printf("Error\t Invalid hour format\n");
    } else {
        if (hour < 12 && hour > 2) {
            printf("Good Morning!");
        } else if (hour >= 12 && hour < 19) {
            printf("Good Afternoon!");
        } else if (hour >= 19 && hour < 22) {
            printf("Good Evening!");
        } else {
            printf("Good Night!");
        }
    }

                return 0;
}
