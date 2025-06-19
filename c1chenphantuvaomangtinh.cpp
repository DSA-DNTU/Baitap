
#include <iostream>
using namespace std;
#include <conio.h>

void inSA(int arr[], int& length, int x, int LoC)
{
    for (int i = length; i > LoC; i--) {
        arr[i] = arr[i - 1];
    }
    arr[LoC] = x;
    length++;
}
 
void inA(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}
void exA(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << arr[i] << endl;
    }
}
int main()
{do{
int n; cout<<" Hay nhap n:"; cin>>n;
    int arr[100]; inA(arr, n);
    int length, x, LoC;
    cout<<"Hay nhap lenght, x, LoC; "; cin>>length>>x>>LoC;
    exA(arr,length);
    inSA(arr,length,x,LoC);
    cout<<" Mang sau khi hoan thanh la: ";
    for(int i=0; i<length; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}while(getch());
    
}

