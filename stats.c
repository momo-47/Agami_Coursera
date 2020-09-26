/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <implementation file that contains the code for calulating stats of 
 * an array >
 *
 * <The file contains an array of unsigned char dataset and "8" functions:
 * ("main()", "print_statistics()", "print_array()","find_median()",
 * "find_mean()","find_maximum()","find_minimum()","sort_array()")to calculate
 * their statistics and print them>
 *
 * @author <Mohamed Agami>
 * @date <September,23,2020 >
 *
 */


void print_statistics(int median, int mean, int maximum, int minimum);
void print_array(unsigned char test[], int SIZE);
int find_median (unsigned char test[], int SIZE);
int find_mean (unsigned char test[], int SIZE);
int find_maximum (unsigned char test[], int SIZE);
int find_minimum (unsigned char test[], int SIZE);
void sort_array (unsigned char test[], int SIZE);

#include <stdio.h>
#include "stats.h"

/* SIZE of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int median, mean, maximum, minimum;

  /* Statistics and Printing Functions Go Here */
  sort_array(test,SIZE);
  median= find_median(test,SIZE);
  mean= find_mean(test,SIZE);
  maximum= find_maximum(test,SIZE);
  minimum= find_minimum(test,SIZE);
  print_array(test,SIZE);
  printf("///////////////////////////////////////////////////////////////////////////\n");
  print_statistics(median,mean,maximum,minimum);

}


/* Add other Implementation File Code Here */ 

int find_mean (unsigned char test[], int size){
	int sum, avg;
	for (int i=0; i<size; i++){
	sum+=test[i];
	}
	avg = sum/size;
	return(avg);
}

int find_maximum (unsigned char test[], int size){
	int max= test[0];
	for (int i=0; i<size; i++){
	if (max<test[i])	 max=test[i];
	}
	return(max);
}

int find_minimum (unsigned char test[], int size){
        int min= test[0];
        for (int i=0; i<size; i++){
        if (min>test[i])        min=test[i];
	}
        return(min);
}

void sort_array (unsigned char test[], int size){
	int temp=test[0];
	for (int x=0;	x<size;	x++){
		for (int y=0;	y<size-1;	y++){
			if (test[x] < test[y]) {
			temp=test[x];
			test[x]=test[y];
			test[y]=temp;
			}
		}
	}
}

int find_median (unsigned char test[], int size){
	int median; 
	if (size%2==0)		median= (test[size/2]+ test[(size/2)+1])/2;
	else median = test[(size+1)/2];
	return median;
}


void print_array(unsigned char test[], int size){
	printf("\nThe dataset:\n");
	printf("{");
	for(int i=0; i<size; i++){
	printf("%d\t",test[i]);
	}
	printf("}");
}

void print_statistics(int median, int mean, int maximum, int minimum){
	printf("\nThe median of the data set =\t%d",median);
	printf("\nThe mean of the data set =\t%d",mean);
	printf("\nThe maximum value of the data set =\t%d",maximum);
	printf("\nThe minimum value of the data set =\t%d",minimum);
}

