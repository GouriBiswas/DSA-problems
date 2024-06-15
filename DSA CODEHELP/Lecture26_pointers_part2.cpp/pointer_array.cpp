#include<iostream>
using namespace std;

int main()
{
   // int arr[10] = {23 , 122 , 41, 67};

/*
    cout << " address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << " address of first memory block is " << &arr[0] << endl;
     
 cout << "4th: " << *arr << endl;
 cout << "5th: " << *arr + 1 << endl;
 cout << "6th: " << *(arr + 1 )<< endl;
 cout << "7th: " << (*arr) + 1 << endl;
 cout << "8th: " << arr[2] << endl;
 cout << "9th: " << *(arr+2) << endl;

 int i=3;
 cout << i[arr] << endl;
*/


//18:20
/*
//size of arrays
int temp[10]={1,2};
cout << sizeof(temp) << endl;
cout << "1st "  << sizeof(*temp) << endl;
cout << "2nd " << sizeof(&temp) << endl;

//size of pointer
int *ptr = &temp[0];
cout << sizeof(ptr) << endl;
cout << sizeof(*ptr) << endl;
cout << sizeof(&ptr) << endl;
*/



//26:00
 /*
//adress of arrays
int a[20] ={1,2,3,5};
cout << &a[0] << endl;
cout << &a << endl;
cout << a << endl;

//address of pointers
int *p = &a[0];
cout << p << endl;
cout << *p << endl;
cout << "address of ->" << &p << endl;
*/

//32:40

int arr[10];

//Error
//arr = arr+1;

int *ptr = &arr[0];
cout << "adress pointer -> " << ptr << endl;
ptr = ptr +1;
cout << "after incrementing adress -> (+ 4bytes): " << ptr << endl; 












    return 0;
}