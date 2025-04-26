#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5} , n = 5;

    for(int i = 0 ; i < n/2 ; i++){ //Break Into 2 Parts For Swapping

        swap(arr[i] , arr[n - i - 1]); // Swap 1 to 5 , 2 to 4 

    }

    for(int i = 0 ; i < n ; i++){

        cout << arr[i] << "";
            
    }

    return 0;
}