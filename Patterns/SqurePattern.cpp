#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter Number :-";
    cin >> n;

    //Using Nested Loop

    for(int i = 1 ; i < n ; i++){ // Outer Loop
        // In The Outer Loop How Much Line Will Be Print Is Defined In Outer Loop

        for (int j = 1 ; j <n ;j++){ //Inner Loop
            //In The Inner Loop Defined The Logic

            cout << j;
            //cout << "*";

        }

        cout << endl;

    }
 
    return 0;
}