#include<stdio.h>
#include<stdlib.h>
#include<iostream>

const int max_names = 10;
const int max_length = 32;
int readMarks(int marks[], int size);
int printMarks(int marks[], int size);
void printHeader();
void readNames(char names[][max_length], int size);
void printNames(char names[][max_length], int size);
void printNamesandMarks(char names[][max_length], int marks[], int size);
int average(int marks[], int size);
int minimumMark(int marks[], int size);
int maximumMark(int marks[], int size);
int range(int marks[], int size);
int main()
{
	
	char names[max_names][max_length];
	int students;
	printHeader();

	printf("how many students are there?\n");
	scanf_s("%d",&students);
	if (students <= 0 || students > max_names) {
		printf("Invalid number of students. Must be between 1 and %d.\n", max_names);
		exit(0);
	}
	int* marks = new int[students];
	printf("\n\nNames:\n");
	readNames(names, students);
	printNames(names, students);
	printf("\n\nMarks:\n");
	readMarks(marks, students);
	printMarks(marks, students);
	printNamesandMarks(names, marks, students);
	printf("\n\nAverages:\n");
	average(marks, students);
	minimumMark(marks, students);
	maximumMark(marks, students);
	range(marks, students);
	delete[] marks;
	exit(0);
}
void printHeader()
{
	printf("__ STUDENT MARKS __\n");
}
void printNamesandMarks(char names[][max_length], int marks[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s got: %d marks\n",names[i],marks[i]);
		
	}
}
void readNames(char names[][max_length], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		printf("student name :%d\n", i + 1);
		scanf_s("%s", names[i],max_length);
		count++;
	}
	printf("Number of entries in names:%d\n", count);
}
void printNames(char names[][max_length], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("student %d's name :%s\n",i+1, names[i]);
		

	}

}
int readMarks(int marks[], int size)
{
	printf("please enter the marks\n");
	int count = 0;
	for (int i = 0; i < size; i++) 
	{
		printf("student %d:\n",i+1);
		scanf_s("%d", &marks[i]);

		if(marks[i]<0)
		{
			exit(0);
		}
		else
		{
			count++;
		}
		
	}
	printf("Number of entries in marks:%d\n", count);
	return(0);
}
int printMarks(int marks[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		printf("student %d got:%d\n", i + 1, marks[i]);
		
	}
	
	return(0);
}
int average(int marks[], int size)
{
	int average = 0;
	for (int i = 0; i < size; i++)
	{
		average = average + marks[i];

	}
	int total = average / size;
	printf("The average of the marks is :%d\n", total);
	return(0);
}
int minimumMark(int marks[], int size)
{
	int min = marks[0];
	for (int i = 1; i < size; i++) {
		if (marks[i] < min) {
			min = marks[i]; 
		}
	}
	printf("The smallest of the marks is :%d\n", min);
	return(0);
}
int maximumMark(int marks[], int size)
{
	int max = marks[0];
	for (int i = 1; i < size; i++) {
		if (marks[i] > max) {
			max = marks[i];
		}
	}
	printf("The biggest of the marks is :%d\n", max);
	return(0);
}
int range(int marks[], int size)
{
	int range;
	int min = marks[0];
	for (int i = 1; i < size; i++) {
		if (marks[i] < min) {
			min = marks[i];
		}
	}
	int max = marks[0];
	for (int i = 1; i < size; i++) {
		if (marks[i] > max) {
			max = marks[i];
		}
	}
	range = max - min;
	printf("The range of the marks is :%d\n", range);
	return(0);
}
