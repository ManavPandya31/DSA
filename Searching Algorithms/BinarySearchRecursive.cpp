// Problem Is Solve By Function Calling Again Means Recursive Binary Search

#include<iostream>
using namespace std;

int BinarySearchRecursive(int arr[] , int low , int high , int key){

        if(low <= high){
            
            int mid = low + (high - low ) /2;

            if(arr[mid] == key){
            
                return mid;

            }

            else if(arr[mid] < key){
            
                return BinarySearchRecursive(arr , mid + 1 , high , key); // if middle element smaller then mid then find in right side
            
            }else{

                return BinarySearchRecursive(arr , low , mid - 1 , key); // left side

            }

        }
        
        return -1;
}

int main(){

    int arr[] = {31 , 41 , 52 , 67 , 79};
    int key = 31;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = BinarySearchRecursive(arr , 0 , n - 1 , key);

    if(result != -1){

        cout << "Element Found At Index :-" << result << endl;

    }else{

        cout << "Element Is Not Found..";

    }

    return 0;
}