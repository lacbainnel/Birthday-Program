#include <iostream>
#include <cstdio>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

int greeting ();
int twenty ();
int ka ();
int na ();
int laugh ();
int repeat ();
int enjoy ();
int end();
void logo();
void syscls();
void gotoxy (short x, short y);

void gotoxy (short x, short y)
{
	COORD pos = {x,y};
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), pos);
}

void syscls()
{
	system("cls");
}

void logo()
{
	HANDLE  h= GetStdHandle( STD_OUTPUT_HANDLE );
}


int main ()
{
	int birthday;
	string name;
	char food, oppa, book;
	
	gotoxy (55, 0); cout << "R E G I S T R A T I O N  P R O C E S S";
	gotoxy (0, 5); cout << "Enter your name: ";
	gotoxy (20, 5); getline (cin, name);
	
	gotoxy (0, 7); cout << "Enter your birthday (MMDDYYYY): ";
	gotoxy (35, 7); cin >> birthday;
		if (birthday == 11071999) {
			syscls();
			gotoxy (55, 0); cout << "ANNE JELL\'S PROGRAM";
			gotoxy (43, 3); cout << "Welcome " << name << " to your personal birthday program!\n";
			Sleep (2000);
			gotoxy (17, 8); cout << "Please wait for a few seconds for we are preparing the system.\n\n";
			Sleep (2000);
			gotoxy (17, 13);cout << "A little more...\n\n";
			Sleep (3000);
			
			syscls();
			gotoxy (55, 0); cout << "VERIFICATION PROCESS";
			gotoxy (44, 5); cout << " S I K E! We need to verify if your are " << name << " first!\n\n\n";
			Sleep(4000);
			
			gotoxy (15, 9); cout << "What is her favorite merienda?\n";
			gotoxy (15, 11); cout << "	[A] Above all the below" << endl;
			gotoxy (15, 12); cout << "	[B] Fries" << endl;
			gotoxy (15, 13); cout << "	[C] Burger" << endl;
			gotoxy (15, 14); cout << "	[D] Mojos" << endl;
			gotoxy (15, 15); cout << "	[E] Potato Skin" << endl;
			gotoxy (15, 17); cout << "Enter choice: ";
			gotoxy (32, 17); cin >> food;
				switch (food) {
					case 'A':
					case 'a':
						gotoxy (15, 21); cout << "Oh nice! You passed stage uno!" << endl << endl;
						gotoxy (15, 23); cout << "Second: Who is her MAIN oppa?\n";
						gotoxy (15, 25); cout << "	[A] Lee Min Ho" << endl;
						gotoxy (15, 26); cout << "	[B] Lee Jun Ki" << endl;
						gotoxy (15, 27); cout << "	[C] Kim Tae Hyung" << endl;
						gotoxy (15, 28); cout << "	[D] Gong Yoo" << endl;
						gotoxy (15, 30); cout << "Enter choice: " << endl;
						gotoxy (32, 30); cin >> oppa;
							switch (oppa) {
								case 'a':
								case 'A':
									syscls();
									gotoxy (25, 20); cout << "U NAHT MAH SISTER!!!!";
									gotoxy (20, 21); cout << "Ha! You thought you can just go in easily ha!";
									break;
								case 'b':
								case 'B':
									gotoxy (15, 33); cout << "Nice guess! But I am still not convinced!!!\n" << endl;
									gotoxy (15, 35); cout << "Last question: What is her favorite book?\n" << endl;
									gotoxy (15, 37); cout << "	[A] Percy Jackson series (duh!)" << endl;
									gotoxy (15, 38); cout << "	[B] The Secret Horse (first book eme :>)" << endl;
									gotoxy (15, 39); cout << "	[C] The Secret Series (full of secrets eh?)" << endl;
									gotoxy (15, 40); cout << "	[D] Idk as well (Ang dami kasi -_-)" << endl;
									gotoxy (15, 42); cout << "Enter choice: ";
									gotoxy (32, 42); cin >> book;
										switch (book) {
											case 'a':
											case 'A':
												syscls();
												gotoxy (25, 20); cout << "U NAHT MAH SISTER!!!!";
												cout << "I thought so too!";
												break;
											case 'b':
											case 'B':
												syscls();
												gotoxy (25, 20); cout << "U NAHT MAH SISTER!!!!";
												cout << "Unfortunately, the first ain\'t always what you love.";
												break;
											case 'c':
											case 'C':
												syscls();
												gotoxy (25, 20); cout << "U NAHT MAH SISTER!!!!";
												cout << "Highly recommened reading material though!";
												break;
											case 'd':
											case 'D':
												gotoxy (20, 57); cout << "Congrats! You are " << name;
												syscls;
												Sleep (3000);
												cout << greeting ();
										}
										break;
								case 'c':
								case 'C':
								case 'd':
								case 'D':
									syscls();
									gotoxy (25, 20); cout << "U NAHT MAH SISTER!!!!";
									cout << "Ha! You thought you can just go in easily ha!";
								break;			
							}
							break;
					break;
					case 'b':
					case 'B':
					case 'c':
					case 'C':
					case 'd':
					case 'D':
					case 'e':
					case 'E':
						syscls();
						gotoxy (25, 20); cout << "U NAHT MAH SISTER!!!!";
						cout << "Intruder! Get out of my lawn!!!";
					break;		
				}
		} else {
			syscls();
			gotoxy (25, 3); cout << "Why are you using my program?!";

		}
}

int greeting ()
{
	syscls();
	
	char A[50]={"HAPPY BIRTHDAY TO MY ONE AND ONLY SISTER!"};
	
	gotoxy (45, 7); cout << "= = = = = = = = = = = = = = = = = = = = =";
	gotoxy (45, 8); cout << "=                                       =";
	gotoxy (45, 9); cout << "=                                       =";
	gotoxy (45, 10); cout << "=                                       =";
	gotoxy (45, 11); cout << "=                                       =";
	gotoxy (45, 12); cout << "=                                       =";
	gotoxy (45, 13); cout << "=                                       =";
	gotoxy (45, 14); cout << "= = = = = = = = = = = = = = = = = = = = =";
	
	gotoxy (58, 9);
	for (int i=0; i<14;i++) {
		cout << A[i];
		Beep (1000, 100);
	}
	gotoxy (62, 10);
	for (int i=15; i<20; i++) {
		cout << A[i];
		Beep (1000, 100);
	}
	gotoxy (59, 11);
	for (int i=21; i<33; i++) {
		cout << A[i];
		Beep (1000, 100);
	}
	gotoxy (62, 12);
	for (int i=34; i<41; i++) {
		cout << A[i];
		Beep (1000, 100);
	}

	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	
	syscls();
	SetConsoleTextAttribute(h, 14);
	twenty ();
	Sleep (1000);
	
	SetConsoleTextAttribute (h, 11);
	ka ();
	Sleep (1000);

	SetConsoleTextAttribute (h, 12);
	na ();
	Sleep (1000);
	
	syscls();
	system("color 2e");
	laugh ();
	Sleep (1000);
	
	syscls ();
	system("color 0a");
	repeat ();
	
	syscls();
	Sleep (1000);
	SetConsoleTextAttribute (h, 12);
	enjoy();
	
	syscls();
	end();
}

int repeat ()
{
	gotoxy (55, 15); cout << "Nah jk";
	Sleep (3000);
	
	syscls ();
	char J[100] = {"I just wanna say that I really love you and I am so blessed to have you as my sister!"};
	
	gotoxy (30, 10);
	for (int i=0; i<22; i++) {
		cout << J[i];
		Beep (1000, 100);
	}
	gotoxy (35, 12);
	for (int i=22; i<40; i++) {
		cout << J[i];
		Beep (1000, 100);
	}
	gotoxy (40, 14); 
	for (int i=40; i<60; i++) {
		cout << J[i];
		Beep (1000, 100);	
	}
	gotoxy (45, 16);
	for (int i=60; i<85; i++){
		cout << J[i];
		Beep (1000, 100);
	}
}

int twenty ()
{
	gotoxy (45, 5);  cout << "@@@@@@   @@@@@@   @@      @  @@@@@@@  @@@@@@  ";
	gotoxy (45, 6);  cout << "@     @  @        @ @     @     @     @       ";
	gotoxy (45, 7);  cout << "@    @   @@@@@    @  @    @     @     @@@@@   ";
	gotoxy (45, 8);  cout << "@@@@     @        @   @   @     @     @       ";
	gotoxy (45, 9);  cout << "@   @    @        @    @  @     @     @       ";
	gotoxy (45, 10); cout << "@    @   @        @     @ @     @     @       ";
	gotoxy (45, 11); cout << "@@@@@@   @@@@@    @      @@     @     @@@@@   ";
	
	return 0;
}

int ka ()
{
	gotoxy (58, 15); cout << "&     &     &&&&&&&&   ";
	gotoxy (58, 16); cout << "&    &     &        &  ";
	gotoxy (58, 17); cout << "&   &      &        &  ";
	gotoxy (58, 18); cout << "&  &       &        &  ";
	gotoxy (58, 19); cout << "& &        &        &  ";
	gotoxy (58, 20); cout << "&&         &&&&&&&&&&  ";
	gotoxy (58, 21); cout << "& &        &        &  ";
	gotoxy (58, 22); cout << "&   &      &        &  ";
	gotoxy (58, 23); cout << "&     &    &        &  ";
	gotoxy (58, 24); cout << "&       &  &        &  ";
	
	return 0;
}

int na ()
{
	gotoxy (58, 28); cout << "##      #     ######  ";
	gotoxy (58, 29); cout << "# #     #    #      # ";
	gotoxy (58, 30); cout << "#  #    #    #      # ";
	gotoxy (58, 31); cout << "#   #   #    #      # ";
	gotoxy (58, 32); cout << "#    #  #    ######## ";
	gotoxy (58, 33); cout << "#    #  #    #      # ";
	gotoxy (58, 34); cout << "#     # #    #      # ";
	gotoxy (58, 35); cout << "#      ##    #      # ";
}

int laugh ()
{
	gotoxy (45, 15); cout << "______      ______    _________     ";
	gotoxy (45, 16); cout << "|    |      |    |   /         \\   ";
	gotoxy (45, 17); cout << "|    |      |    |  /   ____    \\  ";
	gotoxy (45, 18); cout << "|    |______|    |  |  /    \\   |  ";
	gotoxy (45, 19); cout << "|                |  |  |    |   |   ";
	gotoxy (45, 20); cout << "|     _______    |  |  |____|   |   ";
	gotoxy (45, 21); cout << "|     |     |    |  |   _____   |   ";
	gotoxy (45, 22); cout << "|     |     |    |  |   |   |   |   ";
	gotoxy (45, 23); cout << "|     |     |    |  |   |   |   |   ";
	gotoxy (45, 24); cout << "|_____|     |____|  |___|   |___|   ";
	Sleep (500);
	
	syscls();
	gotoxy (70, 12); cout << "______      ______    _________     ";
	gotoxy (70, 13); cout << "|    |      |    |   /         \\   ";
	gotoxy (70, 14); cout << "|    |      |    |  /   ____    \\  ";
	gotoxy (70, 15); cout << "|    |______|    |  |  /    \\   |  ";
	gotoxy (70, 16); cout << "|                |  |  |    |   |   ";
	gotoxy (70, 17); cout << "|     _______    |  |  |____|   |   ";
	gotoxy (70, 18); cout << "|     |     |    |  |   _____   |   ";
	gotoxy (70, 19); cout << "|     |     |    |  |   |   |   |   ";
	gotoxy (70, 20); cout << "|     |     |    |  |   |   |   |   ";
	gotoxy (70, 21); cout << "|_____|     |____|  |___|   |___|   ";
	Sleep (500);
	
	syscls();
	gotoxy (38, 25); cout << "______      ______    _________     ";
	gotoxy (38, 26); cout << "|    |      |    |   /         \\   ";
	gotoxy (38, 27); cout << "|    |      |    |  /   ____    \\  ";
	gotoxy (38, 28); cout << "|    |______|    |  |  /    \\   |  ";
	gotoxy (38, 29); cout << "|                |  |  |    |   |   ";
	gotoxy (38, 30); cout << "|     _______    |  |  |____|   |   ";
	gotoxy (38, 31); cout << "|     |     |    |  |   _____   |   ";
	gotoxy (38, 32); cout << "|     |     |    |  |   |   |   |   ";
	gotoxy (38, 33); cout << "|     |     |    |  |   |   |   |   ";
	gotoxy (38, 34); cout << "|_____|     |____|  |___|   |___|   ";
	Sleep (500);
	
	return 0;
}

int enjoy ()
{
	
	gotoxy (20, 5);  cout << "             \\             |                                          /                 /                                 ";
	gotoxy (20, 6);  cout << "              \\            |            /      |          /          /                 /                                  ";
	gotoxy (20, 7);  cout << "               \\           |           /       |         /          /                 /                        /          ";
	gotoxy (20, 8);  cout << "                \\          |          /        |        /          /                 /                        /           ";
	gotoxy (20, 9);  cout << "                 \\         |         /         |       /          /                 /                        /            ";
	gotoxy (20, 10); cout << "                  \\       =========     =====       =====        =====     =======     =====     =====       /             ";
	gotoxy (20, 11); cout << "                          +             +      +    +   +        +   +    +       +     +   +   +   +                      ";
	gotoxy (20, 12); cout << "     ______________       +======       +   |\\  +   +   +        +   +    +       +      +   + +   +                       ";
	gotoxy (20, 13); cout << "                          +             +   | \\  +  +   +  ====  +   +    +       +       +   +   +    _________           ";
	gotoxy (20, 14); cout << "                          +             +   |  \\  + +   +  +   ++   +     +       +        +     +                         ";
	gotoxy (20, 15); cout << "                   /      +             +   |   \\  ++   +   +      +       +     +         +     +                         ";
	gotoxy (20, 16); cout << "                  /       +========     ====     ========     ======        =====           ======                         ";
	gotoxy (20, 17); cout << "                 /                                                                                   \\                    ";
	gotoxy (20, 18); cout << "                /           |             /             |             \\               \\             \\                   ";
	gotoxy (20, 19); cout << "               /            |            /              |              \\               \\             \\                  ";
	gotoxy (20, 20); cout << "              /             |           /               |               \\               \\             \\                 ";
	gotoxy (20, 21); cout << "                            |          /                |                \\               \\             \\                ";
		
}

int end ()
{
	HANDLE  h= GetStdHandle( STD_OUTPUT_HANDLE );
	
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 12);
	enjoy();
	Sleep(300);
	
	syscls();
	SetConsoleTextAttribute (h, 11);
	enjoy();
	Sleep(300);
	
	syscls ();
	SetConsoleTextAttribute(h, 14);
	enjoy();
	Sleep(300);
	
	return 0;
}
