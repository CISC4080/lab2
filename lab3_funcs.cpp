#include <iostream>
#include <vector>
#include <functional>
#include "lab3_funcs.h"
using namespace std;

// Read int from standard input until -1 is reached, return the values in a vector
vector<int> GenerateVectorFromInput () {
    vector<int> v;
    int input; // take in user input

    while (cin >> input && input!=-1)
        v.push_back(input);

    return v;
}


//Generate random numbers: 0...999
vector<int> GenerateRandomVector(int size)
{
        vector<int> res(size);

        for (int i=0;i<size;i++)
        {
                res[i] = rand()%10000;
        }

        return res;
}

// print vector
void PrintVector (const vector<int> & L) {
    for (auto i = L.begin(); i != L.end(); i++) {
        cout << *i << " ";
    }
    cout<<endl;
}



/*pre-condition: v1, v2 are two sorted vectors (in ascending order).
 Result might or might not be empty (i.e., you need to clear it)
 post-condition: vector result stores values from v1 and v2, in ascending order*/
void Merge (const vector<int> & list1, const vector<int> & list2, vector<int> & result)
{

}


/* sort the vector into ascending order using merge sort algorithm
 @param L: the vector to be sorted
 @pre:
 @post: elements in L have been rearranged into ascending order
*/
void MergeSort (vector<int> & L)
{
 //Note: You will use the MergeSorted function implemented above
}

/* Sort list[first...last] into ascending order */
void QuickSort(vector<int> & list, int first, int last)
{

}


 /* Given a vector of sorted vector, merge them all into one sorted vector
  @param listOfLists: a vector of sorted vector of ints
  @param result: the merged sorted list
   @pre-condition: listOfLists contains a certain number of sorted vectors
   @post-condition: all ints are merged and saved into result, in ascending order
  */
void KWayMerge_BF (vector<vector<int>> listOfLists, vector<int> & result)
{

}

void KWayMerge_DAC (vector<vector<int>> listOfLists, vector<int> & result)
{

}

/* Sort the given list using simplified TimSort
  First using insertion sort or other sorting algorithm to generate sorted sublists, each of #run_length
  Then use KWayMerge function to merge these sorted sublists into one sorted list */
void TimSort (vector<int> & list, int run_length)
{
       vector<vector<int>> listOfRuns;

       //For example, if run_length is 100, copy each of the following sublists (i.e., run)
      //  list[0…99], list[100…199], list[200…299], … list[len/100*100… len-1] into a seperate new/shorter vector,
      //  and push these vectors into listOfRuns

       //Note: you can refer to this post about how to extract a subvector:
       //https://stackoverflow.com/questions/421573/best-way-to-extract-a-subvector-from-a-vector
       //vector<int> sublist (list.begin(), list.begin()+100); //this will copy list[0…99] to sublist
       //vector<int> sublist2 (list.begin()+100, list.begin()+200); //this will copy list[100…199] to sublist2

       // call selection or other sorting algorithm to sort each segment/run of list into sorted order.


       //Call KWayMerge (either version) to merge listOfRuns back to the original list
}