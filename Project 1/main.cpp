/******************************************************************
** Program: Chapter 8, Programming Project 4
** Course: CS226 CRN 36331
** Professor: Ping-Wei Tsai
** Student: Samson Pak
** Due Date: 02/28/22
******************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "bookInfo.h"
#include "cashier.h"
#include "invMenu.h"
#include "reports.h"
#include "strUpper.h" 
using namespace std;

//global arrays
char title[20][51], isbn[20][14], author[20][31], publisher[20][31], date[20][11];
int qty[20];
double wholesale[20], retail[20];

int main() {
	int choice;
	do {
		//displays menu
		cout << endl << endl
			<< "           Serendipity Booksellers" << endl
			<< "                   Main Menu" << endl << endl
			<< "          1. Cashier Module" << endl
			<< "          2. Inventory Database Module" << endl
			<< "          3. Report Module" << endl
			<< "          4. Exit" << endl;
		//repeats the enter prompt if an invalid input was made
		do {
			cout << endl << "          Enter Your Choice: ";
			cin >> choice;
			switch (choice) {
			case 1:
				cashier();
				break;
			case 2:
				invMenu();
				break;
			case 3:
				reports();
				break;
			case 4:
				exit(0);
				break;
			default:
				cout << endl << "          Please enter a number in the range 1 - 4" << endl;
				break;
			}
		} while (choice > 5 || choice < 1);
	} while (choice != 4);
	return 0;
}