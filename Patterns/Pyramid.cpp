#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter A Number :-";
    cin >> n;

    for (int i = 0 ; i <= n ; i++){

        for (int j = 0  ; j < n - i - 1 ; j++){

            cout << " ";

        }

            for (int k = 1 ; k <= i + 1 ; k++){

                cout << k ;
                
        }

        for (int m = i ; m  >= 1  ; m--){

            cout << m ;

        }

        cout << endl;
    }

    return 0;
}