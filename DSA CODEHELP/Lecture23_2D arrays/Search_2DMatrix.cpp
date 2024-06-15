#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row=m-1;
        int col=0;
        while(col<n&&row>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                col++;
            }
            else{
                row--;
            }
        }
        return false;
        
    }
};


//INTUITION:
// Starting from the bottom-left corner, 
// we can make decisions to move either up or right based 
// on the comparison between the current element and the target.

// Approach:

// Start from the bottom-left corner of the matrix, initializing row to m - 1 and col to 0.
// Start from the bottom-left corner of the matrix, initializing row to m - 1 and col to 0.
// If the current element matrix[row][col] is equal to the target, return true.
// If matrix[row][col] is less than the target, increment col (move right).
// If matrix[row][col] is greater than the target, decrement row (move up).
// If the loop terminates without finding the target, return false.