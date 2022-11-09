#include<ncurses.h>
using namespace std;

int main(){
	initscr();
	
	printw("Nama saya Aliya");
	refresh();
	getch();
	endwin();
}
