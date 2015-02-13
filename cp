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

void cpfstr(string in, string out){
	
	return;
}

void cprwchar(string in, string out) {

	return;
}
	
void cprwcharr(string in, string out) {
	int n;
     	int fd = open(in.c_str(), O_RDONLY);
     	char buf[BUFSIZ];
 	int ofd = open(out.c_str(), O_RDWR|O_CREAT);
 	
 	if((n = read(fd, buf, BUFSIZ)) == 0)
        {               
        	perror("read");
        }
        
        if((n = write(ofd, buf, BUFSIZ)) == 0)
        {            
        	perror("write");
        }
        
        close(fd);
	close(ofd);
	return;
}	
