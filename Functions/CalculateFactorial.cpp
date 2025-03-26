#include<iostream>
using namespace std;

int Factorial(int n){

    int fact=1;

    for(int i = 1 ; i <= n ; i++){

        fact = fact * i;

    }

    return fact;

}

int main(){

    cout << Factorial(31);
    return 0;
}