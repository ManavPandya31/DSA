#include<iostream>
using namespace std;

int isPrime(int n){

    int count = 0;

    for (int i = 1 ; i <= n ; i++){

        if(n % i == 0){

            count ++;

        }

    }

    if(count == 2){

       return 1;

    }else{

       return 0;

    }

}

int main(){

    int n;

    cout << "Enter A Number :-";
    cin >> n;

   if(isPrime(n)==1){

    cout << "Number Is Prime..";

   }else{

    cout << "Number Is Not Prime..";
    
   }

    return 0;
}