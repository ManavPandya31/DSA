//Prime Number :- Avi Sankhya K koi Na vde Divide Nai Thay  Jem k  1 3 5 11 7 

#include<iostream>
using namespace std;

int main(){

    int number;
    int count = 0;

    cout << "Enter Any Number To Check Number Is Prime or Not \n";
    cin >> number;

    for (int i = 1 ; i <=number ; i++){

        if (number % i == 0){ // Check Number Is Divisible By i (Reminder 0)

            count ++; //Divisible Then Increase The Count

        }

    }

    if (count == 2){ //Any Number Is Divide 2  More Then 2 Times Then It Is Not A Prime Number

        cout << "Given Number Is Prime Number..";

    }else{

        cout << "Given Number Is A Not Prime Number..";
    }

    return 0;

}