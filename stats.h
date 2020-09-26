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
 * @file <stats.h> 
 * @brief <The file contains the function declarations that is used in the 
 * implementation file"stats.c" >
 *
 * <Contains the declarations of the functions "print_statistics()",
 * "print_array(),","find_median()", "find_mean()","find_maximum()",
 * "find_minimum()","sort_array()" >. It defines only their inputs and outputs
 * as well their purpose without the function body.
 *
 * @author <Mohamed Agami>
 * @date <September,23,2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(int median, int mean, int maximum, int minimum); 

/**
 * @brief <prints the statistics of an array including minimum, maximum, mean,
 * and median.>
 *
 * <This function takes the ouput of the other functions as inputs,
 * and prints them on the screen>
 *
 * @param <int median> <median value of the array>
 * @param <int mean> <mean value of the array>
 * @param <int maximum> <maximum value in the array>
 * @param <int minimum> <minimum value in the array>

 *
 * @return <No value returned, but Values"mean, median, min, max" are printed >
 */

void print_array(unsigned char test[], int size);

/**
 * @brief <prints the dataset of an array and its size.>
 *
 * <This function takes the array and its size as inputs, and prints them on
 * in an ordered way on the screen>
 *
 * @param <unsigned char test[]> <array that needs statistics>
 * @param <int size> <size of the array>
 *
 * @return <No value returned, but contents and size of array are printed >
 */

int find_median (unsigned char test[], int size);

/**
 * @brief <calculates the median of the given dataset>
 *
 * <This function takes the sorted array and its size as inputs, and finds
 * their median based on the size of the array>
 *
 * @param <unsigned char test[]> <array that needs statistics>
 * @param <int size> <size of the array>
 *
 * @return <median of the array>
 */

int find_mean (unsigned char test[], int size);

/**
 * @brief <calculates the mean of the given dataset>
 *
 * <This function takes the array and its size as inputs, and finds
 * their mean by adding all of the array and deviding by its size >
 *
 * @param <unsigned char test[]> <array that needs statistics>
 * @param <int size> <size of the array>
 *
 * @return <mean of the array>
 */


int find_maximum (unsigned char test[], int size);

/**
 * @brief <finds the maximum of the given dataset>
 *
 * <This function takes the array and its size as inputs, and finds
 * their maximum value through a for loop >
 *
 * @param <unsigned char test[]> <array that needs statistics>
 * @param <int size> <size of the array>
 *
 * @return <max value in the array>
 */


int find_minimum (unsigned char test[], int size);

/**
 * @brief <finds the minimum of the given dataset>
 *
 * <This function takes the array and its size as inputs, and finds
 * their minimum value through a for loop >
 *
 * @param <unsigned char test[]> <array that needs statistics>
 * @param <int size> <size of the array>
 *
 * @return <min value in the array>
 */


void sort_array (unsigned char test[], int size);

/**
 * @brief <sorts the array from largest to smallest >
 *
 * <This function takes the array and its size as inputs, and sorts them through
 * selections sorting >
 *
 * @param <unsigned char test[]> <array that needs statistics>
 * @param <int size> <size of the array>
 *
 * @return <No value returned, but the array will be sorted descendingly>
 */

#endif /* __STATS_H__ */
