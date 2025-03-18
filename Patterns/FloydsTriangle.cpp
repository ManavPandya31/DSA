#include<iostream>
using namespace std;

int main(){

    int n;
    int number = 1;

    cout << "Enter Number :-";
    cin >> n;

    for (int i = 0 ; i <= n ; i++){

        for (int j = 1 ; j <= i + 1 ; j++){
            //or foe inner loop

           // for (int j = i + 1 ; j > 0 ; j--){

            cout << number << " ";
            number ++ ;
        }

        cout << endl;
    }


    return 0;
}