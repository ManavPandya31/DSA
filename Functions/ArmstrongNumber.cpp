#include<iostream>
using namespace std;

int Armstrong(int number){

    int sum = 0 , temp = number;

    while(temp > 0){

        int digit = temp % 10; //Get The Last Digit Of Given Number
        sum += digit * digit * digit; // Last Digit Cube  And That Store Into Sum
        temp /= 10; //Remove Last Digit Of Given Number From Temp 

    }

    return ( sum == number ) ? 1 : 0; //Return 1 If Armstrong Number,else 0

}

int main(){

    int num;

    cout << "Enter Any Number To Find Armstrong Number :-";
    cin >> num;

    if(Armstrong(num) == 1){

        cout << "Given Number Is An Armstrong Number..";

    }else{

        cout << "Given Number Is Not An Armstrong Number..";
    }


    return 0;
}