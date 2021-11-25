#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "movie1.c"



struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;
	

}b;

int seat = 60 ;

void insert_details();//for inserting movie details
void viewAll(); // for view all data 
void find(); // for finding data
void book_ticket(); //for booking tickets
void old_record(); //for view old recorrds of users,booked tickets