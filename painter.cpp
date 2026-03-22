#include <iostream>
#include <fstream>
#include <ncurses.h>










int main()
{
  initscr();
  start_color(); 
  keypad(stdscr, TRUE);  
 
  int max_x = 0; 
  int max_y = 0;

  
  int hsp = 0;
  int vsp = 0;
  getmaxyx(stdscr, max_y,max_x);
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  init_pair(2, COLOR_RED, COLOR_BLACK);
  init_pair(3, COLOR_BLUE, COLOR_BLACK);     
  init_pair(4, COLOR_MAGENTA, COLOR_BLACK);
  init_pair(5, COLOR_YELLOW, COLOR_BLACK);      


int ch;
 while((ch = getch()) != 'q')
 {
     switch(ch)
     {
        case 'g':
             attron(COLOR_PAIR(1));
             break;

        case 'r':
             attron(COLOR_PAIR(2));
             break;

        case 'b':
             attron(COLOR_PAIR(3));
             break;

        case 'm':
             attron(COLOR_PAIR(4));
             break;

        case 'y':
             attron(COLOR_PAIR(5));
             break;

     }



      switch(ch)
     {
      case KEY_UP:
         move(vsp--,hsp);
         break;

      case KEY_DOWN:
          move(vsp++,hsp);
          break;

      case KEY_RIGHT:
          move(vsp,hsp++);
          break;

      case KEY_LEFT:
          move(vsp,hsp--);
          break;

     }
    refresh(); 
  }
  
  endwin();







}
