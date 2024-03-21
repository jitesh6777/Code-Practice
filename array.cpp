
// return multiple value from function using vetctor

// #include<iostream>
// #include<vector>
// using namespace std ;

// vector<int> jitesh(vector<int> &num , int target)
// {
//     int n = num.size();

//     int strt=0;int end = n-1;
//     while(strt<end)
//     {
//         int sum = num[strt]+num[end];
//         if( sum == target)
//             return{strt,end};
//         else if( sum < target)
//             strt++;
//         else
//             end--;

//     }
//     return{};
// }

// int main()
// {
//     vector<int> num ={1,2,3,4,5,6};
//     int target = 6 ;

//     vector<int> New ;

//    New = jitesh(num,target);

//    for(auto X : New)
//         cout<< X<<" ";

// return 0 ;

// }

// Prime Numbers between two given numbers

// #include <iostream>
// using namespace std;

// void Prime(int a, int b)
// {
//     for (int i = a; i <= b; i++)
//     {
//         int count = 0;
//         if(i==0 || i==1 || i==2)
//         {
//             cout<<i<<" ";
//             continue;
//         }
//         for (int j = 2; j < i; j++)
//         {
//             if(i%j==0)
//                 count++;
//                 break;
//         }

//         if (count == 0)
//             cout << i << " ";
//     }
// }

// int main()
// {
//     int a = 1;
//     int b = 10;

//     Prime(a, b);

//     return 0;
// }

// Insert elements in a given position in array

// #include<iostream>
// using namespace std ;

// void Insert(int arr[] , int n , int itm , int pos)
// {
//     for(int i=n-1;i>=pos-1;i--)
//         arr[i+1] = arr[i];
//     arr[pos-1]= itm;

//     for(int i=0;i<n;i++)
//         cout<< arr[i]<<" ";
// }

// int main()
// {
//     int n=10;
//     int itm =100;
//     int pos = 5;

//     int arr[n]={1,2,3,4,5,6,7,8,9} ;

//     Insert(arr,n,itm,pos);



//     return 0 ;

// }

// Frequency in sorted array (O(n)) without using hashMap

// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
//     int count=1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == arr[i+1])
//             count++;
//         else
//         {
//             cout<< arr[i] <<" "<<count<<endl ;
//             count=1;
//         }
//     }
// }

// int main()
// {
//     int n = 12;
//     int arr[] = {1,2,2,2,3,4,5,5,6,6,6,7};

//     freq(arr,n);

//     return 0 ;


// }


// rotate array by one

// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
//     int temp = arr[0];
//     int i ;
//     for(i=0;i<n;i++)
//         arr[i] = arr[i+1];
    
//     arr[i-1]= temp ;

//     for(int j=0;j<n;j++)
//         cout<<arr[j]<<" ";

// }

// int main()
// {
//     int n = 6;
//     int arr[] = {1,2,3,4,5,6};

//     freq(arr,n);

//     return 0 ;



// }


// remove duplicate from sorted array

// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
//      int Arr[n] ;
//      int j=0;
//      Arr[j] = arr[0];

//      for(int i=1;i<n;i++)
//      {
//         if(Arr[j] != arr[i])
//         {
//             Arr[j+1] = arr[i];
//             j++ ;
//         }
//      }
//      for(int i=0;i<j+1;i++)
//         cout<< Arr[i]<<" ";


// }

// int main()
// {
//     int n = 8;
//     int arr[] = {1,2,2,3,3,4,5,6};

//     freq(arr,n);

//     return 0 ;
// }


// check array is sorted or not

// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
//      bool flag = true ;

//      for(int i=0;i<n;i++)
//      {
//         if(arr[i] > arr[i+1] && arr[i] != arr[i+1])
//         {
//             flag = false ;
//             break;
//         }
//      }
//      if(flag == false)
//         cout<<"Array is not sorted";
//     else
//         cout<<" array is sorted ";

// }

// int main()
// {
//     int n = 8;
//     int arr[] = {1,2,2,7,3,4,5,6};

//     freq(arr,n);

//     return 0 ;
// }

// find the greatest number in given array


// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
    
//     int res=0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > res)
//             res = arr[i];
//     }

//     cout<< res ;
// `
// }

// int main()
// {
//     int n = 8;
//     int arr[] = {1,2,15,7,3,4,5,6};

//     freq(arr,n);

//     return 0 ;
// }


// find second greatest number in an array

// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
    
//     int res=0;
//     int New=0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > res)
//             res = arr[i];
//     }

//     for(int j=0;j<n;j++)
//     {
//         if(arr[j] == res)
//             continue;
//         else
//         {
//             if(arr[j] > New)
//                 New = arr[j];
//         }
//     }

//     cout<< New ;

// }

// int main()
// {
//     int n = 8;
//     int arr[] = {1,2,15,7,3,8,5,6};

//     freq(arr,n);

//     return 0 ;
// }


// Maximum consecutive of 1's Binary array


// #include<iostream>
// using namespace std ;
// void freq(int arr[] , int n)
// {
//     int count =1 ;
//     int res =0;

//     for(int i=0 ;i<n-1 ;i++)
//     {
//         if(arr[i] == 1)
//         {
//             if(arr[i] == arr[i+1])
//             {
//                 count++;
//                 res = max(count, res);
//             }
//             else
//                 count =1;
//         }
//     }
//     cout<< res ; 
    
    

// }

// int main()
// {
//     int n = 12;
//     int arr[] = {0,1,1,1,0,1,0,1,1,1,1,0};

//     freq(arr,n);

//     return 0 ;
// }


// Moves All zeros at end


// Input:
// 	• 7  – Value of N
// 	• [4,5,0,1,9,0,5] – Element of arr[O] to arr[N-1],While input each element is separated by newline
// Output:
// 4 5 1 9 5 0 0

// #include<bits/stdc++.h>
// using namespace std ;

// void Zero(int arr[] , int n)
// {
//     int last = n-1 ;
//     int ex=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == 0 )
//         {
//             swap(arr[i] , arr[last]);
//             n--;
//             last--;
//             i--;
//             ex++;
//         }
//     }
//     for(int i=0;i<n+ex;i++)
//         cout<< arr[i]<<" ";

// }

// int main()
// {
//     int n=6;
//     int arr[]={6,0,1,8,0,2};

//     Zero(arr,n);

//     return 0;
// }

// Prefix Sum

// #include<bits/stdc++.h>
// using namespace std ;

// void Prefix(int arr[], int l , int r)
// {
//     int sum =0;
//     for(int i=l;i<=r;i++)
//     {
//         sum = sum+arr[i];
//     }

//     cout<< sum ;
// }

// int main()
// {
    
//     int arr[]={2,8,3,9,6,5,4} ;


//     Prefix(arr,2,6);

//     return 0 ;

// }

