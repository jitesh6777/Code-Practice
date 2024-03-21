
// binary search

// #include<bits/stdc++.h>
// using namespace std ;

// int binary(int arr[] , int n , int item)
// {
//     int beg = 0;
//     int end = n-1;

//     while(beg<=end)
//     {
//         int mid = (beg+end)/2;
//         if(arr[mid]== item)
//             return mid;
//         else if(arr[mid]> item)
//             end = mid-1;
//         else
//             beg = mid+1;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[]={10,20,30,40,50,60,70};
//     int n =7;
//     int item = 60;
//     cout<< binary(arr,n,item);
//     return 0;

// }


// Index of First occurence in sorted array

// #include <iostream>
// using namespace std;
// int fir_occu(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//         {
//             if (mid == 0 || arr[mid - 1] != x)
//                 return mid;
//             else
//                 high = mid - 1;
//         }
//     }
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item to find first occurence ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements which should be in sorted(increasing order)";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = fir_occu(arr,n,item);
//     cout<<"position " <<m ;
//     return 0;
// }


// Index of last occurence in sorted array

// #include <iostream>
// using namespace std;
// int last_occu(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > x)
//             high = mid - 1;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//         {
//             if (mid == n - 1 || arr[mid + 1] != x)
//                 return mid;
//             else
//                 low = mid + 1;
//         }
//     }
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item to find first occurence ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements which should be in sorted(increasing order)";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = last_occu(arr,n,item);
//     cout<<"position " <<m ;
//     return 0;
// }



// count 1s in sorted Binary array

// #include <iostream>
// using namespace std;
// int count_1(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == 0)
//             low = mid + 1;
//         else
//         {
//             if (mid == 0 || arr[mid - 1] == 0)
//                 return (n - mid);
//             else
//                 high = mid - 1;
//         }
//     }
//     return -1  ;
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter elements should be in sorted(0s to 1s )";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = count_1(arr,n);
//     cout<<"Occurences " <<m ;
//     return 0;
// }



// search in finite sized array

// #include <iostream>
// using namespace std;
// int binary(int arr[],int item,int low,int high)
// {
//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(arr[mid]== item)
//             return mid ;
//         else if(arr[mid]>item)
//             high = mid-1;
//         else
//             low=mid+1;
//     }
//     return -1 ;
// }
// int finite(int arr[], int item)
// {
//     if (arr[0] == item)
//         return 0;
//     int i = 1;
//     while (arr[i] < item)
//     {
//         i = i * 2;
//     }
//     if (arr[i] == item)
//         return i;
//     else
//         return binary(arr, item, i / 2 + 1, i);
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter elements should be in sorted(0s to 1s )";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = finite(arr,item);
//     cout<<"Occurences " <<m ;
//     return 0;
// }


// Square Root of the given number [O(root-n)]

// #include<iostream>
// using namespace std ;
// int root(int n)
// {
//     int i=1;
//     while(i*i<=n)
//         i++;
//     return (i-1);
// }
// int main()
// {
//     int n,m;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     m=root(n);
//     cout<< " Square root of "<< n <<" is "<< m ;
//     return 0;
// }



// Search in sorted roated array

// #include<iostream>
// using namespace std ;
// int srted_roated(int arr[],int n,int item)
// {
//     int low=0;;
//     int high=n-1;
//     while(low<=high)
//     {
//         int mid=(low+high)/2 ;
//         if(item==arr[mid])
//             return mid ;
//         if(arr[mid]> arr[low])
//         {
//             if(item>=arr[low]&&item<arr[mid])
//                     high=mid-1;
//             else
//                     low=mid+1;
//         }
//         else
//         {
//             if(item>arr[mid]&& item<=arr[high])
//                     low=mid+1;
//             else
//                     high=mid-1;
//         }
//     }
//     return -1 ;
// }
// int main()
// {
//     int n,m,item;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     cout<<"Enter the item ";
//     cin>> item ;
//     int arr[n];
//     cout<<"Enter sorted roated elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     m = srted_roated(arr,n,item);
//     cout<<"Occurences " <<m ;
//     return 0;
// }

// find a sorted array and a sum , find if there is a pair with given sum
// [O(n)] --> sorted array

// #include<bits/stdc++.h>
// using namespace std ;
// void Two(int arr[],int n , int item)
// {
//     int beg = 0;
//     int end =n-1;
//     while(beg<=end)
//     {
//         int sum = arr[beg]+arr[end] ;
//         if(sum == item)
//         {
//             cout<<arr[beg]<<" "<<arr[end]<<endl;
//             beg++;
//             end--;
//         }
//         else if( sum < item)
//         {
//             beg = beg+1;
//         }
//         else
//             end = end-1;
//     }
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n =8;
//     int item =10;

//     Two(arr,n,item);

//     return 0 ;

// }