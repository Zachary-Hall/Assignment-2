/*************************
* Zachary Hall Assignment 2
* COSC 2436-004
* 8/24/23
**************************/

#include <iostream>
#include <string>
#include <cstring>
#include "functions.h"
using namespace std;
int string_length(char *str)
{
int words= 1;
int wordlen;
char *word = NULL;
while(*str != '\0')
{
	if(*str == ' ') {
        words++;
        wordlen = str - word;
        *str = '\0';
        cout <<"The length of Parameter " << words-1 <<" is " << wordlen << " " << word<< endl;  
        word = NULL;
    }
    else if (word == NULL) word = str;
    str++;
}
wordlen = str - word;
cout <<"The length of Parameter " << words <<" is " << wordlen << " " << word<< endl;  
cout << "The number of command line parameters are: "; return words;
}
