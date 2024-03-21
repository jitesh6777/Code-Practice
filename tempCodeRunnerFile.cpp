#include<bits/stdc++.h>
using namespace std ;

void fun(int arr[] , int n , int Size)
{
unordered_set<int> us;
int i=0;
int sum =0;
int count=0;
for(i; i<Size+i && count< n - Size+1 ;i++)
{
    us.insert(arr[i]);
    sum++;
    if(sum == Size)
    {
        cout<< us.size()<<" ";
        count++;
        us.clear();
        sum =0;
        i=i-2;
    } 
}
}

int main()
{
    int arr[]={2,8,3,9,6,5,4};
    int n = 7;
    int size =3;

    fun(arr,n,size);

    return 0 ;
}