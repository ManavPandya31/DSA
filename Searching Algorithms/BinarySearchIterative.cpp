// Problem Solving Using While Loop Means Iterative Binary Search

#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int n , int key  ){

    int low = 0 ; //Starting Index
    int high = n - 1; //Last Index

    while(low <= high){

        int mid = low + (high - low ) / 2;

        if(arr[mid] == key){ //Mid Element Is Key Then Return Mid
            return mid;

        }

       else if (arr[mid] < key){ //If Key In Right Side
            low = mid + 1;

        }

        else{
            high = mid - 1; // If key In Left Side

        }
    }

    return -1;

}

int main(){

    int arr[] =  {28 , 31 , 35 , 42 , 54}; //Alwayes Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 31;
    int result = BinarySearch(arr , n , key);

    if(result != -1){

        cout << "Element Found At Index :-" << result << endl;
        
    }else{

        cout << "Elemet Is Not Found";

    }

    return 0;
}