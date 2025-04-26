#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int key){

    for(int i = 0 ; i < n ; i++){

        if (arr[i] == key){
            return i;

    }
}

    return -1; // if key not found
}

int main(){

    int arr[] = {5 , 4 , 5 , 9 , 2};
    int n = sizeof(arr)/sizeof(arr[0]); //sizeof find the dattype size ,here arr is datatype and his size is 4
    int key = 31; // Which Element Is Find That Defined In Key
    int result = linearSearch(arr , n ,key);

    if(result != -1){
        cout << "Element Found At IndexNo. :-" << result <<endl;
    }
    else{
        cout << "Element Is Not Found";
    }
    
    return 0;
}