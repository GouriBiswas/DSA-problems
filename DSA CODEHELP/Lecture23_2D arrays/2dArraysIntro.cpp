#include<iostream>
#include<limits.h>
using namespace std;
bool isPresent(int arr[3][3] , int target ,int row, int col)
{
   for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            if(arr[row][col] == target)
            {
                return 1;
            }
      }
    }
    return 0;
}

//to print row-wise sum
void printSum(int arr[][3] ,int row, int col)
{
    cout << "Printing Sum -> " <<endl;
 for(int row=0;row<3;row++) {
    int sum=0;
        for(int col=0;col<3;col++) {
           sum += arr[row][col];    
              }
          cout << sum << " ";
         }
   cout << endl;
}

 int largestRowSum(int arr[][3] , int row ,int col)
 {
     int maxi= INT_MIN;
     int rowIndex=-1;

     for(int row=0;row<3;row++) {
    int sum=0;
        for(int col=0;col<3;col++) {
           sum += arr[row][col];    
              }

           if(sum> maxi) {
            maxi=sum;
            rowIndex =row;
           }
         }
         cout << "the maximun sum is " << maxi << endl;
         return rowIndex;
 }


int main() {

    //create 2d array
    int arr[3][3];
    // int arr[3][4]  ={1,2,3,4} ,{6,5,4,3} , {8,9,3,6};
    // int arr[3][4]={1,2,5,4,3,6,7,8,9,10,11,12};

     cout << "Enter the elements" << endl;
     //taking input ->row wise
    for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            cin>> arr[row][col];      
              }
    }


    // //taking input ->column wise
    //  for(int col=0;col<4;col++) {
    //     for(int row=0;row<3;row++) {
    //         cin>> arr[row][col];      
    //           }
    // }

     cout << "Printing the array" <<endl;
     //print
    for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            cout <<  arr[row][col] << " ";      
              }
              cout << endl;
           }

// //searching the element call func
//      cout<< " Enter the element to search" << endl;
//      int target;
//      cin>> target;

//      if(isPresent(arr,target,3,3)) {
//         cout <<  "Element found " <<endl;  
//         }
//         else{
//             cout << " Not found" <<endl;
//         }

// //call print sum function
//         printSum(arr, 3,3);

      cout << "Max row is at index " << largestRowSum(arr ,3,3) << endl;


    return 0;
}