
// Bubble Sort (optimized solution)

// #include<iostream>
// // #include<algorithm> // this header is used for in-built sort function
// using namespace std ;
// void bubble(int arr[],int n )
// {
//     for(int i=0;i<n-1;i++)
//     {
//         bool swapped = false ;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped = true ;
//             }
//         }
//         if(swapped == false)
//             break;
//     }
//     for(int i=0;i<n;i++)
//         cout<< arr[i] <<" " ;
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<" Enter the elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     bubble(arr,n);
//     return 0 ;
// }


// Selection Sort

// #include<iostream>
// using namespace std ;
// void selection(int arr[] , int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int min = i ;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]< arr[min])
//                 min = j ;
//         }
//         swap(arr[min],arr[i]);
//     }
//     for(int i=0;i<n;i++)
//         cout<<arr[i] << " " ;
// }
// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     cout<<" Enter the elements ";
//     for(int i=0;i<n;i++)
//     {
//         cin>> arr[i];
//     }
//     selection(arr,n);
//     return 0 ;
// }


// > Merge  two sorted array

// #include <iostream>
// using namespace std;
// void merge(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0;
//     int j = 0;
//     int k=0;
//     int temp[m+n];

//     while (i < m && j < n)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             temp[k]= arr1[i];
//             i++;
//             k++;

//         }
//         else
//         {
//             temp[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < m)
//     {
//         temp[k] = arr1[i];
//         k++;
//         i++;
//     }
//     while (j < n)
//     {
//         temp[k] = arr2[j] ;
//         j++ ;
//         k++ ;
//     }

//     for(int i=0;i< m+n ; i++)
//         cout<< temp[i]<<" ";

// }
// int main()
// {
//     int m, n;
//     cout << "Enter how many values you want in array 1 :";
//     cin >> m;
//     cout << "Enter how many values you want in array 2 :";
//     cin >> n;
//     int arr1[m], arr2[n];
//     cout << "Enter array 1 value :";
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr1[i];
//     }
//     cout << " Enter array 2 value :";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr2[i];
//     }

//     merge(arr1, arr2, m, n);
//     return 0;
// }


// Intersection of Two sorted array

// #include <iostream>
// using namespace std;

// void intersection(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;

//     while (i < m && j < n)
//     {
//         if (i > 0 && arr1[i] == arr1[i - 1])
//         {
//             i++;
//             continue;
//         }

//         if (arr1[i] < arr2[j])
//             i++;
//         else if (arr1[i] > arr2[j])
//             j++;
//         else
//         {
//             cout << "output : "<<arr1[i] << " ";
//             i++;
//             j++;
//         }
//     }
// }

// int main()
// {
//     int m, n;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];

//     cout << "Enter the array-1 elements :";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];

//     cout << "Enter the array-2 elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];

//     intersection(arr1, arr2, m, n);

//     return 0;
// }



// Union of two sorted array

// #include <iostream>
// using namespace std;
// void Union(int arr1[], int arr2[], int m, int n)
// {
//     int i =0;
//     int j=0 ;
//     while (i < m && j < n)
//     {
//         if(i>0 && arr1[i]==arr1[i-1])
//         {
//             i++;
//             continue;
//         }
//         if(j>0 && arr2[j]==arr2[j-1])
//         {
//             j++;
//             continue;
//         }
//         if (arr1[i] < arr2[j])
//         {
//             cout<< arr1[i]<<" ";
//             i++;
//         }
//         else if(arr1[i]> arr2[j])
//         {
//             cout<< arr2[j]<<" ";
//             j++;
//         }
//         else
//         {
//             cout<<arr1[i]<<" ";
//             i++;
//             j++;
//         }
//     }
//     while(i<m)
//     {
//         if(i>0 && arr1[i] != arr1[i-1])
//         {
//             cout<<arr1[i]<<" ";
//             i++;
//         }
//         else
//         {
//             i++;
//             continue;
//         }
//     }
//     while(j<n)
//     {
//         if(j>0 && arr2[j] != arr2[j-1])
//         {
//             cout<<arr2[j]<<" ";
//             j++;
//         }
//         else
//         {
//             j++;
//             continue;
//         }
//     }
// }

// int main()
// {
//     int m, n;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];

//     cout << "Enter the array-1 elements :";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];

//     cout << "Enter the array-2 elements :";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];

//     Union(arr1, arr2, m, n);

//     return 0;
// }


