/*
* Module 3, Lecture 10.
* 4 april 2020
* Input functions getch(), getche() and getchar().
*/

#include <stdio.h>
#include <conio.h>

// getch example
// Doesn't print input
// Doesn't wait for Enter

int main(){
    char ch;
    ch = getch(); // doesn't print input on screen
    //putchar(ch); // unformatted single char output function. This is what displays the character on the screen even when getch() doesn't.
    getch(); //to halt the screen
}


// getche example
// Prints input
// Doesn't wait for Enter
/*
int main(){
    char ch;
    ch = getche(); // prints input on screen
    putchar(ch); // unformatted single char output function. This function will display a second character on the screen, in addition to the one displayed by getche().
    getch(); //to halt the screen
}
*/


// getchar example
// Prints input
// Waits for Enter

/*
int main(){
    char ch;
    ch = getchar(); // prints input on screen, and waits for enter. If other keys are pressed, it will hold the value of the first one and keep displaying the others as typed untill Enter is pressed.
    putchar(ch); // unformatted single char output function. This will add to the screen the value of 'ch' after getchar() ends.
    getch(); //to halt the screen
}
*/
