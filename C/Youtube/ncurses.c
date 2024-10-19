/* ncurses.c */
#include <ncurses.h>

int main (){
    char letter;
    
    // initialize screen
    initscr();
    // you dont use printf but printw
    printw("Press any key");
    
    /*After calling functions like printw(), the changes are made to an internal buffer (off-screen). The refresh() function updates the actual screen with these changes. You need to call refresh() to reflect any changes made by ncurses functions like printw() or clear().
    Think of this as "pushing" the content to the screen.*/
    refresh();

    letter = getch();
    
    /*Clears the screen: This function erases all content currently displayed in the window (i.e., terminal screen). It clears the internal buffer, but you still need to call refresh() afterward to apply the change on the screen.*/
    clear();
    printw("You pushed: '%c'", letter);
    refresh();

    /*Wait before closing the window: This second getch() is called to prevent the program from immediately closing the window. It ensures the program waits for another key press, giving the user time to see the result before the program ends.*/
    getch();

    /*Restore terminal to normal mode: This function restores the terminal to its previous state before ncurses was initialized*/
    endwin();

    return 0;
}