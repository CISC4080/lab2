# CISC 4080 lab2

## Goal:

1. Implement  binarysearch, quicksort, insertionsort, distinct, sameset, and samemultiset functions.
2. Comment on the running time of your algorithms. 
3. Familiarize with C++ STL class vector
4. Practice using make and Makefile to compile and test program 

## Starter Code:

You can download the starter code by download it as a zip file. 

Since a Makefile is provided, you can simply type command make to compile the program.

```
$ cd Lab2/
$ ls
.  ..  main.cpp	Makefile  util.cpp  util.h
$ make
g++ -g --std=c++11 -c main.cpp
g++ -g --std=c++11 -c util.cpp
g++ -o lab2.exe -g --std=c++11 main.cpp util.cpp 

``` 

## General Guidance: 

The provided main.cpp basically test each of the functions one by one using several test cases, and compare the output/result versus the expected ones. You can modify main.cpp to add more test case in order to help debug your code. But you only submit util.cpp, and it will be linked with the original main.cpp. 

You can simply use the following command to compile: 

```
 $ make
```

The above command will use the rules specified in Makefile to compile all .cpp files as needed, and link them to create executable file lab2.exe.

 You can pass a command line argument to lab2.exe, to specify which function you want to test. Please see main() function to see the options. Here are some examples:

```
 $ ./lab2.exe binarysearch // test BinarySearch() function
 $ ./lab2.exe sameset //test SameSet function 
```
 If you don’t pass any argument, the program will test all functions:

```
  $ ./lab2.exe    // testing all functions 
```
The program will report “passed sameset test cases”  etc. 

## Details: 

-Here is a step-by-step instruction to finish this lab, for each step, add in your main some additional test cases to test the function you just write.  Implement the following functions in util.cpp.

1. Implement BinarySearch function described below:
```
/* Search for v in sorted list[first...last]. If v appears in the sublist, return the index 
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
   if (first==last) { //fill in this. 
        /* hint: if v==a[first]? 
                   If v<a[first], return first, as v needs to take this space, and a[first] should be shifted to right… 
                   If v>a[first]?
          */
} else if (first+1==last) { //fill in this. 
    /* Hint: Think about what shall be returned for each of the three possible situation, and implement them… 
         If v<=a[first]: 
         If v>a[first] && v<=a[last]?
         If v>a[last] */
} 
//general case 
int mid = (first+last)/2; 
if (v==a[mid])
    return mid; 
else if (v<a[mid])
     return BinarySearch (a, v, first, mid-1); // (... first, mid) also works 
else
      return BinarySearch (a, v, mid+1, last); //(... mid, last) also works 
} 

}
```

2. Implement InsertionSort function either iteratively or recursively: 
For iterative implementation: 
```
// You are required to use BinarySearch in your implementation of InsertionSort 
void InsertionSort (vector<int> & list)
```
For recursive implementation
```
// You are required to use BinarySearch in your implementation of InsertionSort 
void InsertionSort (vector<int> & list, int first, int last)
```

3. Implement the following function, and comment on the running time of your function in the function’s header, without using any data structure, or sorting the vector. 
```
/* Return a vector storing all distinct values in the input vector
 e.g., list=[2,4,4,4,2,1], return a vector containing [2,4,1]
 e.g., list=[1,1,4,5,1,3,2,2,2}, return a vector containing [1,4,5,3,2] 
  @param list: contain the data set
  @pre: list has been initialized with a certain number of elements 
  @post: return a vector storing elements from list, all duplicates are removed, and values keep the order of their first occurrences in list, i.e., as 2 appears first in list, it will also appears first in the returned vector.  
 */
vector<int> Distinct (vector<int> & list)   4.  Implement the following function a) without using any additional data structure, and without sorting the input vectors, b) using some C++ STL data structure
/* Given two vectors of integers, check if the two vectors contain same set of values:
 e.g.,   V1=[3,4,10,4,10,11] and V2=[3,3,4, 11, 10] stores same set int: {3, 4, 10, 11}. 
  Note that duplicates are removed when considering set 
   @param list1, list2: two vectors of integers
   @pre: list1, list2 have been initialized
   @post: return true if list1 and list2 stores same values (in same or different order); 
       return false, if not. */
 bool SameSet (const vector<int> & list1, const vector<int> & list2)
{
      /* approach a: do not use any data structure */
           

      /* approach b: using unordered_set, we can implement this function 
      More efficiently:   …..


         Your approach b here… 



    */ 
}
```

4.  Implement the following function, a) without using any data structure, b) using some data structure. 
```
/* Given two vectors of chars, check if the two vectors are permutations of each other, i.e., they contains same values, in same or different order.
e.g.,      V1=[‘a’,’b’,’a’] and V2=[‘b’,’a’,’a’] stores same multi-set of data points: i.e., both contains two ‘a’, and one ‘b’.
e.g.,      V3=[‘a’,’c’,’t’,’a’] and V4=[‘a’,’c’,’t’] are not same multi-set. V3 contains two ‘a’s, while V4 has only one ‘a’.  
 Note: when considering multiset, the number of occurrences matters. 
@param list1, list2: two vectors of chars
   @pre: list1, list2 have been initialized
   @post: return true if list1 and list2 stores same values (in
same or different order); return false, if not. */
 bool SameMultiSet (vector<char> list1, vector<char> list2)
{
       /* approach a: do not use any data structure */
           

       /* approach b: using unordered_set, we can implement this function 
      More efficiently:   …..


         Your approach b here… 



   */ 
} 
```

### Notes: 

 For 3 and 4 above, you can implement the function using one approach first, test it and then comment out the first approach and implement the second approach, and test it. When submitting your code, please include both, leaving approach b) commented out and approach a) used. 


## Submit:
Submit your util.cpp by going to the following autograder page:
TBA. 

You have a total of 20 submissions opportunities, and 3 submissions on a particular day.
There are two components for the grades:

- Automatic test cases (50 pts):  All test cases are already included in main.cpp:  10 pts for passing the testing of each function. 
- Handgrading (30 pts): style, comment, and logic… 
