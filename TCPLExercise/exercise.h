#pragma once
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getline(char s[], int lim);
void copy(char from[], char to[]);
int atoi(char s[]);