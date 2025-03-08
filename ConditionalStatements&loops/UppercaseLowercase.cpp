#include<iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter A Any Chacter :- ";
    cin >> ch;

   // if (ch >= 'a' && ch <= 'z'){
   if (ch >= 97 && ch <= 122){  // Both If Condition Is True

        cout << "Lowercase\n";

    }else{

        cout << "Uppercase ";

    }
    return 0;
}