
// count Disctint elements  ( O(n) )


// #include<bits/stdc++.h>
// using namespace std ;
// int dist(int arr[],int n)
// {
//     int res = 0;
//     unordered_set<int> s ; // here we used Unordered-set
//     for(int i=0;i<n;i++)  // O(n) for traversing the arra
//         s.insert(arr[i]);

//     return s.size();
// }
// int main()
// {
//     int n , result ;
//     cout<<"Enter the value of n :";
//     cin>> n ;

//     int arr[n] ;
//     cout<<"Enter the array elements :";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     result = dist(arr,n);
//     cout<<"No. of Dictinct elements : "<< result ;

//     return 0 ;

// }

// Frequency of an Array O(n)
// #include<bits/stdc++.h>
// using namespace std ;

// void freq(int arr[],int n)
// {
//     unordered_map<int , int> uset ;

//     for(int i=0;i<n;i++)
//         uset[arr[i]]++ ;
//     for(auto x : uset)
//         cout<< x.first <<" "<<x.second  <<endl;

// }
// int main()
// {

//     int n = 5 ;
//     int arr[] = {10,20,20,30,10};

//     freq(arr,n);

//     return 0 ;

// }

// Intersection of two unsorted array using unordered set ( O(n) )


// #include <bits/stdc++.h>
// using namespace std;
// int intersection(int arr1[], int arr2[], int m, int n)
// {
//     int res = 0 ;
//     unordered_set<int> s ;

//     for(int i=0;i<m;i++)
//         s.insert(arr1[i]);

//      for(int j=0;j<n;j++)
//      {
//         if(s.find(arr2[j]) != s.end())
//         {
//             res++;
//             s.erase(arr2[j]);
//         }
//      }
//      return res ;
// }

// int main()
// {
//     int n, m, result;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];
//     result = intersection(arr1, arr2, m, n);
//     cout << "No. of Dictinct elements : " << result;
//     return 0;
// }


// Union of two unsorted array using unordered set ( O(n) )

// #include<bits/stdc++.h>
// using namespace std ;

// int Union(int a[],int b[],int m ,int n)
// {
//     int res = 0 ;

//     unordered_set<int> s ;

//     for(int i=0;i<m;i++)
//         s.insert(a[i]);

//     for(int j=0;j<n;j++)
//         s.insert(b[j]);

//     return s.size() ;

// }
// int main()
// {
//     int n, m, result;
//     cout << "Enter the value of m and n :";
//     cin >> m >> n;

//     int arr1[m];
//     int arr2[n];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];
//     cout << "Enter the array elements m:";
//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];
//     result = Union(arr1, arr2, m, n);
//     cout << "No. of Dictinct elements : " << result;
//     return 0;
// }