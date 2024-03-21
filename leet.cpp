
// input -> 1 1 1 2 2 3
// output -> 1,1,2,2,3

// #include <bits/stdc++.h>
// using namespace std;

// class jitesh
// {
//     public:

//     int RM(vector<int> &nums)
//     {
//         int size = nums.size();
//         int k = 0;
//         int count = 1;
//         for (int i = 1; i < size; i++)
//         {
//             if (nums[i] == nums[i - 1])
//                 count++;
//             else
//                 count = 1;

//             if (count > 2)
//             {
//                 for (int j = i; j < size - 1; j++)
//                 {
//                     nums[j] = nums[j + 1];
//                 }
//                 size--;
//                 i--;
//             }
//         }
//         for (int i = 0; i < size; i++)
//             k++;

//         return k;
//     }
// };
// int main()
// {
//     jitesh obj ;
//     vector<int> nums = {1, 1, 1,1,2, 2, 2, 3};

//     int SIZE  = obj.RM(nums);
//     for(int i=0;i<SIZE;i++)
//         cout<< nums[i]<<" ";

//     return 0;
// }

// put all zero to  End

// input->{8,5,0,10,0,10}
// output->{8,5,10,10,0,0}

// O(n^2)
// #include <bits/stdc++.h>
// using namespace std;

// void ZeroEnd(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[j] != 0)
//                 {
//                     swap(arr[i], arr[j]);
//                     break;
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// int main()
// {
//     int n = 6;

//     int arr[] = {0, 0, 0, 0, 10, 0};

//     ZeroEnd(arr, n);

//     return 0;
// }

// O(n^2)

// #include <bits/stdc++.h>
// using namespace std;

// void ZeroEnd(int arr[], int n)
// {
//     int i= 0;
//     int last = n-1 ;
//     sort(arr,arr+n);
//     while(i<last)
//     {
//         if(arr[i] == 0 && arr[last]!=0)
//         {
//             swap(arr[i],arr[last]);
//             last--;
//             i++;
//         }
//         else
//             i++ ;
//     }

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// int main()
// {
//     int n = 6;

//     int arr[] = {0,5,0,10,0,20};

//     ZeroEnd(arr, n);

//     return 0;
// }

// first non-duplicate element

// ip -> statics
// op -> 2

// #include<bits/stdc++.h>
// using namespace std ;

// int CHAR[126] ={0};
// void Distinctlatter(string str)
// {
//     int size = str.length();
//     for(int i=0;i<size;i++)
//     {
//         CHAR[str[i]]++;
//     }

//     for(int i=1;i<size;i++)
//     {
//         if(CHAR[str[i]]==1)
//         {
//             cout<< i <<" ";
//             break;
//         }
//     }
// }

// int main()
// {
//     string str = "statistics";

//     Distinctlatter(str);

//     return 0 ;

// }

// hashing method

// #include <bits/stdc++.h>
// using namespace std;

// void Distinctlatter(string str)
// {
//     map<char, int> mp;

//     for (int i = 0; i < str.length(); i++)
//     {
//         mp[str[i]]++;
//     }

//     for (auto i : mp)
//     {
//         if (i.second == 1)
//         {
//             cout<< i.first  ;
//             break;
//         }
//     }
// }

// int main()
// {
//     string str = "statistics";

//     Distinctlatter(str);

//     return 0;
// }

// return multiple value via the vector

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     int n = nums.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }
// int main()
// {

//     vector<int>nums={1,2,3,4,5} ;
//     int target = 6 ;

//     vector<int> New ;
//     New = twoSum(nums,target);
//      for(auto vt : New)
//          cout<< vt <<" ";

//     return 0 ;

// }
// Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.



// #include<bits/stdc++.h>
// using namespace std ;

// void toggle(int n )
// {
//     vector<int> vt ;
//     while(n!=0)
//     {
//      int  rem = n%2;
//      vt.push_back(rem);
//      n = n/2;      
//     }
//    int j= vt.size()-1;
//    int res = 0;
//    for(int i=0;i< vt.size();i++)
//    {
//     if(vt[i] != 0 )
//     {
//         res = res + pow(2,j);
//         j--;
//     }
//     else
//         j--;
//    }

//    cout<< res ;
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;

//     toggle(n);

//     return 0 ;


// }
// arr = [4,5,0,1.9,0,5,0]
// 	• 4 5 1 9 5 0 0


// #include<iostream>
// using namespace std ;

// void ZeroLast(int arr[] , int n)
// {
//     int A[n]={0};
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] !=0)
//         {
//             A[j] = arr[i];
//             j++;
//         }
//     }

//     for(int i=0;i<n;i++)
//         cout<< A[i]<<" ";
// }

// int main()
// {

//     int arr[] ={4,5,0,1,9,0,5,0};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     ZeroLast(arr,n);

//     return 0 ;

// }

// Naive Approach

// #include<iostream>
// using namespace std ;

// void ZeroLast(int arr[] , int n)
// {
//     int j;
//     int m = n ;
//     for(int i=0;i<n;i++)
//     {
        
//         if(arr[i] == 0 )
//         {
//             int temp = arr[i];
//             for( j= i;j<n-1;j++)
//             {
//                 arr[j] = arr[j+1];
//             }
//             arr[j] = temp;
//             i--;
//             n--;
//         }
//     }

//     for(int i=0;i<m;i++)
//         cout<< arr[i]<<" ";
// }

// int main()
// {

//     int arr[] ={6,0,1,8,0,2};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     ZeroLast(arr,n);

//     return 0 ;

// }