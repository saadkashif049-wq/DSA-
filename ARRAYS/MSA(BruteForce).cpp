#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 5;
    int arr[5]={1,2,3,4,5};
    int maxsum = 0;
    for (int st = 0 ; st<n;st++)
    {
        int currnetsum = 0;
        for(int end = st ; end<n ; end++){
            currnetsum = currnetsum  + arr[end];
            max(currnetsum,maxsum);
        }

    }
    cout<<"Maximum Subarray"<<maxsum;
}
