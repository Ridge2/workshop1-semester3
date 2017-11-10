/***********************************************************************
// OOP244 Workshop 1: Compiling modular source code
// File  graph.h
// Version 1.0
// Date  2017/01/15
// Author: Ridge Francis
// Description
// This header file contains the headers that are
// to be used in the graph.cpp module
//
// Revision History
// -----------------------------------------------------------
// Name: Ridge Francis    Date: 2017/09/12    Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/
//
// Maximum number of samples in an graph
//
#define MAX_NO_OF_SAMPLES 20
// Fills the samples array with the statistic samples
//
void getSamples(int samples[], int noOfSamples);
// Finds the largest sample in the samples array, if it is larger than 70,
// therwise it will return 70.
//
int findMax(int samples[], int noOfSamples);
// Prints a scaled bar relevant to the maximum value in samples array
//
void printBar(int val, int max);
// Prints a graph comparing the sample values visually
//
void printGraph(int samples[], int noOfSamples);
