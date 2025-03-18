#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter Number :-";
    cin >> n;

    for (int i = 0 ; i <=n ; i++){

        for (int j = 0 ; j < i ; j++){ //For Printing The Spaces

            cout << " ";

        }

            for(int k = 0 ; k < n - i ; k++){ //For Printing Numbers

                cout << i+1;
            }

            cout << endl;
    }

    return 0;
}