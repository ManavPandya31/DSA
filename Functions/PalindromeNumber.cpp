#include<iostream>
using namespace std;

int Palindrome(int number){

        int originalNum = number;
        int revNumber = 0;

        while (number > 0){

            int digit = number % 10;//Find Out Last Number Of Given Number
            revNumber = revNumber * 10  + digit;
            number /= 10; //Remove The Last Digit Of GIven Number

        }

        return ( originalNum == revNumber) ? 1 : 0 ;
}


int main(){

    int number;

    cout << "Enter Any Number To Find Palindrome Number :-";
    cin >> number;

    if(Palindrome(number) == 1){

        cout << "Given Number Is Palindrome Number..";

    }else{

        cout << "Given Number Is Not A Palindrome Number..";

    }

    return 0;
}