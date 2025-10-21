#include<stdio.h>
#include<stdlib.h>
#include<iostream>
/* Create a program which uses an array of integers to store student marks with functions to fill (readMarks) and print (printMarks) the array.

The read function should take the array and its maximum size as inputs and return the number of items read. Input ends when -1 is entered.

The print function takes the array and the number of elements (not its size) and outputs them to screen.*/
int readMarks(int marks[], int size);
int printMarks(int marks[], int size);
int main()
{
	int students;
	printf("how many students are there?\n");
	scanf_s("%d",&students);
	int* marks = new int[students];
	readMarks(marks, students);
	printMarks(marks, students);
	exit(0);
}
int readMarks(int marks[], int size)
{
	printf("please enter the marks\n");
	for (int i = 0; i < size; i++) 
	{
		printf("student %d:\n",i+1);
		scanf_s("%d", &marks[i]);
	}
	return(0);
}
int printMarks(int marks[], int size)
{
	printf("please enter the marks\n");
	for (int i = 0; i < size; i++)
	{
		printf("student %d got:%d\n", i + 1, marks[i]);
		
	}
	return(0);
}

