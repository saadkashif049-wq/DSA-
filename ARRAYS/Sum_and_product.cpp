#include<iostream>
using namespace std;
//Find the sum and product of an array
void sumandproductofarray(int arr[],int size){
    int sum=0,product=1;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
        product=product+arr[i];

        /* code */
    }
    cout<<"Sum of Array"<<sum<<endl;
    cout<<"Product of Array"<<product;
    
}
int main (){
    int arr[]={1,2,3};
    int size =sizeof(arr)/sizeof(int );
    sumandproductofarray(arr,size);
}
