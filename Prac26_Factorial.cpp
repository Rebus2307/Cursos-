#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int n, factorial =  1; 

    cout<<"\nDigite un numero: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    cout<<"\nEl resutado es: "<<factorial<<endl;
    getch();

    return 0;
}