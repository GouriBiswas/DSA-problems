#include<iostream>
using namespace std;

int main() {

//pointer to int is created and is pointing to some garbage value
    // int *p;

    // cout << *p << endl;
   /*
    int i = 5;

    int *q = &i;
    cout << q << endl;
    cout << *q << endl;
      

      int *p = 0;
      p = &i;
      cout << p << endl;
      cout << *p << endl;
*/

    int num=5;
    int a=num;
    a++; 

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;

//copy to new pointer 
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q <<endl;

    //important concept
    int i=3;
    int *t=&i;
    //cout << (*t)++ << endl;
    *t = *t +1;
    cout << *t << endl;

    cout << " before " << t<< endl;
    t=t+1;
     cout << " after " << t<< endl;

    return 0;

}