#include<iostream>
using namespace std;

int main(){

    int arr[] = {31 , 30 , 29 , 21 , 25} , n = 5;
    int minVal = arr[0] , maxval = arr[0];

    for(int i = 1 ; i < n ; i++){

        if(arr[i] < minVal ){
            minVal = arr[i];
        }

        else if (arr[i] > maxval){
            maxval = arr[i];

        }
       
    }

    cout << "Minimum Value Is In The Array Is :- " << minVal << endl;
    cout << "Maximum Value Is In The Array Is :- " << maxval;

    return 0;
}