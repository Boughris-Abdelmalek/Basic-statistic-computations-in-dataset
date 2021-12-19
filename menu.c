#include<stdio.h>
#include"functions.h"

void menu(){

    printf("\n\n\n\t\t\tBasic statistic computations in dataset\n\n\n\t\t\t");
    printf("\nEnter : \n");
    printf("\n\'A' if you want to visualize the table format\n");
    printf("\n'B' if You Want to calculate summary and order statistics for a given column\n");
    char letter;
	scanf("%c",&letter);
	
	switch(letter){
	case 'A':
    printf("\nEnter '1' if you want to vizualize the entire table\n");
    printf("\nEnter '2' to vizualize k lines of the file\n");
        //ReadAll();
			break;
	case 'B':
			printf("BBBB");
			break;
	case 'C':
			printf("CCCC");
			break;
	case 'D':
			printf("DDDD");
			break;
	case 'E':
			printf("EEEE");
			break;
	case 'F':
			printf("FFFF");
			break;
	case 'G':
			printf("GGGG");
			break;
	case 'H':
			printf("HHHH");
			break;				
	default:
			printf("%c",letter);
	}
}