#include<iostream>
using namespace std;

int main(){

    int n;
     
    cout << "Enter An Number:-";
    cin >> n;

    for (int i = n ; i > 0 ; i--){

        for (int j = i + 1 ; j > 0 ;j--){

            cout << j;
        }

        cout << endl;
    }
    
    return 0;
}