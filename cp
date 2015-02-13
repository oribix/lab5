#include <fstream>
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include "Timer.h"



int main() {
	
	string srcfile;
	cout << "enter source file: " << flush;
	cin >> srcfile;
	cout << endl;
	
	string dstfile;
	cout << "enter destination file: " << flush;
	cin >> dstfile;
	cout << endl;
	
	string choice;
	cout << "which function?: " << endl;
	cin >> choice;
	cout << endl;

	if(choice == "1") cpfstr(srcfile, dstfile);
	else if (choice == "2") cprwchar(srcfile, dstfile);
	else if (choice == "3") cprwcharr(srcfile, dstfile);
	else {
		cout << "wtf are you doing?" << endl;
	}
}

void cpfstr(){
	
	return;
}

void cprwchar() {

	return;
}
	
void cprwcharr() {

	return;
}	
