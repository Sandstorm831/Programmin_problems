// Problem Link - https://www.interviewbit.com/problems/sorted-insert-position/
#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& A, int B){
    int low = 0;
    int high = A.size()-1;
    while(low<high)
    {
        int mid = (low+high)/2;
        if(A[mid] == B) return mid;
        else if(A[mid] > B) high = mid-1;
        else low = mid+1;
    }
    if(low == high)
    {
        
        if(A[low] == B) 
        {
            return low;
        }
        if(A[low] > B)
        {
            return low;
        }
        else
        {
            return low+1;
        }
    }
}
int main()
{}