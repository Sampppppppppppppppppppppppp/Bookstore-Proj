/******************************************************************
** Program: Chapter 14, Programming Project 10
** Course: CS226 CRN 36331
** Professor: Ping-Wei Tsai
** Student: Samson Pak
** Due Date: 04/25/22
******************************************************************/
#include "strUpper.h"

void strUpper(char *ptr) {
	while (*ptr != 0) {
		*ptr = toupper(*ptr);
		ptr++;
	}
}