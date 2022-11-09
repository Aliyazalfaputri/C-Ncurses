// #include<curses.h>
//using namespace std;
//
//int main(){
//	initscr();
//	
//	printw("Nama saya Aliya");
//	refresh();
//	getch();
//	endwin();
//}

#include<curses.h>
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	system("color 70");
	initscr();
	float a;
	scanw("%f",&a);
	printw("nilai a : %f", a);
	refresh();
	getch();
	endwin();
}

