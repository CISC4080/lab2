#include <iostream>
#include "util.h"
/* Implement all util functions */


/* Search for v in list[first...last]. If v appears in the sublist, return the index 
 * of its appearance; if v does not appear in the sublist, return the insert location
 * if v=[2,4,5,7,9], first=0, last=4, v=8, the function return 4
 * if v=[2,4,5,7,9], first=0, last=4, v=1, the function return 0
 * if v=[2,4,5,7,9], first=3, last=4, v=7, the function returns 3
 @param list: a vector of int, sorted in ascending order
 @param first, last: specify the range of vector where we search v in
 @param v: the value we are searching for
 @return: the index or insert location
 */
int BinarySearch (const vector<int> & list, int first, int last, int v)
{
   return 0; //a place holder
}

// You are required to use BinarySearch in your implementation of InsertionSort 
void InsertionSort (vector<int> & list)
{

}

//Recursive Insertion Sort to sort list[first...last] recursively
//You need to use BinarySearch 
void InsertionSort (vector<int> & list, int first, int last)
{

}

void QuickSort(vector<int> & list, int left, int right)
{

}

//Return the k-th smallest element in list[left...right]
//k=1, ... right-left+1 
// if k=1, reutnr the smallest value;
// if k=2, return the second smallest value,...
// if k=right-left+1, return the largest value in list[left...right]
int Selection (vector<int> & list, int left, int right, int k)
{

}

//return a vector that stores distinct numbers from the list,
// i.e., duplicate values are removed.
// if list=[3,2,4,2], a vector contains the values 3,2,4 should
// be returned. 
vector<int> Distinct(vector<int> & list)
{
	vector<int> result;

	//Todo by you.
	return result; 
}

//Return true if the list1 and list2 stores the same set of numbers
//if list1=[2,3,6], and list2=[3,2,6,6], the function returns true (as they both 
//contain the same set of numbers: {2,3,6}. 
bool SameSet (const vector<int> & list1, const vector<int> & list2)
{
	//Todo by you
	return false; //a place holder
}






