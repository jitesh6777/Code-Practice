
// Input :
// 10  -> Integer
// Output :
// 5    -> result- Integer

// Explanation:
// Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.

// #include<bits/stdc++.h>
// using namespace std ;

// void toggle(int n)
// {
//     vector<int>vt ;

//     while(n!=0)
//     {
//         int b= n%2;
//         vt.push_back(b);
//         n /=2;
//     }

//     int size = vt.size();
//     int j=size-1;
//     int ans =0;

//     for(int i=0;i<size;i++)
//     {
//         if(vt[i]!=0)
//         {
//             ans = ans + pow(2,j);
//         }
//         j--;
//     }

//     cout<< ans ;

// }

// int main()
// {
//     int n = 12;

//     toggle(n);

//     return 0 ;

// }

// Input :
// 7  -> Value of N
// [1,0,2,0,1,0,2]-> Element of arr[0] to arr[N-1], while input each element is separated by new line.
// Output :
// 0 0 0 1 1 2 2  -> Element after sorting based on risk severity

// #include<bits/stdc++.h>
// using namespace std ;

// void Sorting(int arr[] , int n)
// {
//     int Count0 =0;
//     int Count1 =0;
//     int Count2 =0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//             Count0++;
//         else if(arr[i]==1)
//             Count1++;
//         else
//             Count2++;
//     }

//     int Arr[n];
//     int j=0;
//      while(Count0 >0)
//      {
//         Arr[j]=0;
//         j++;
//         Count0--;
//      }
//      while(Count1 >0)
//      {
//         Arr[j]=1;
//         j++;
//         Count1--;
//      }
//      while(Count2 >0)
//      {
//         Arr[j]=2;
//         j++;
//         Count2--;
//      }

//     for(int i=0;i<n;i++)
//         cout<< Arr[i]<<" ";
// }
// int main()
// {
//     int arr[]={1,0,2,0,1,0,2,0,0};
//     int n = 9;

//     Sorting(arr,n);

//     return 0;
// }

// Check Given number is Prime or Not

// #include<bits/stdc++.h>
// using namespace std ;

// void Prime(int n)
// {
//     bool flag = false;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             flag = true;
//             break;
//         }
//     }
//     if(flag== false)
//         cout<<"Given number is Prime";
//     else
//         cout<<"Given Number In Not A Prime";
// }

// int main()
// {
//     int num =5;
//     Prime(num);

//     return 0;
// }

// 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243,64, 729, 128, 2187 ….
// One base indexing

// #include<bits/stdc++.h>
// using namespace std ;

// void series(int n)
// {
//     int sum =1;
//     if(n==0||n==1)
//         cout<<"1";
//     else if(n%2 == 1)
//     {
//         for(int i=3;i<=n;i=i+2)
//         {
//             sum = sum*2;
//         }
//     }
//     else
//     {
//         for(int i=4;i<=n;i=i+2)
//         {
//             sum= sum*3;
//         }
//     }

//     cout<< sum ;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the value of n ";
//     cin>>n;

//     series(n);

//     return 0 ;

// }

//    The first word should be changed like all vowels should be replaced by *
//    The second word should be changed like all consonants should be replaced by @
//    The third word should be changed like all char should be converted to upper cas

// • how
// • are
// • you
//   Expected Output : h*w a@e YOU

// #include <bits/stdc++.h>
// using namespace std;

// void STRING(string &str1, string &str2, string &str3)
// {
//     for (int i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U' )
//         {
//             str1[i] = '*';
//         }
//     }
//     for (int i = 0; str2[i] != '\0'; i++)
//     {
//         if (str2[i] != 'a' && str2[i] != 'e' && str2[i] != 'i' && str2[i] != 'o' && str2[i] != 'u' && str2[i] != 'A' && str2[i] != 'E' && str2[i] != 'I' && str2[i] != 'O' && str2[i] != 'U' )
//         {
//             str2[i] = '@';
//         }
//     }

//     for(int i=0;str3[i]!='\0';i++)
//         str3[i] = toupper(str3[i]);

//     cout<< str1<<endl;
//     cout<< str2<<endl;
//     cout<< str3<<endl;

// }

// int main()
// {
//     string str1 = "how";
//     string str2 = "are";
//     string str3 = "you";

//     STRING(str1,str2,str3);

//     return 0 ;

// }

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
 
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// We have to return multiple values from the function

// #include<bits/stdc++.h>
// using namespace std ;

// vector<int>TWOsum(vector<int>&num, int target)
// {
//     for(int i=0;i<num.size();i++)
//     {
//         for(int j=i+1;i<num.size();j++)
//         {
//             if((num[i] + num[j]) == target )
//                 return{i,j};
//         }
//     }
//     return{-1,-1};

// }

// int main()
// {
//     vector<int>vt={2,7,11,15};
//     int target = 9;

//     vector<int>NEW;

//     NEW = TWOsum(vt,target);

//     for(auto x : NEW)
//         cout<< x <<" ";
    
//     return 0 ;
// }

// write a program to interchange 2 variables without using the third one.

// #include<bits/stdc++.h>
// using namespace std ;

// void interchange(int a , int b)
// {
//     cout<< a <<" "<<b<<endl ;
//     b = (a+b)-(a=b);

//     cout<< a <<" "<<b<<endl;
// }

// int main()
// {
//     int a =10;
//     int b =20;

//     interchange(a , b);

//     return 0;
// }

// Push all the multiple of 10 at the end

// {10,12,5,40,30,7,5,9,10}
// o/p -> 12 5 7 5 9 10 40 30 10 

// #include<bits/stdc++.h>
// using namespace std ;

// void PUSH(vector<int>&num , int n)
// {
//     vector<int> V1 , V2 ;

//     for(int i=0;i<n;i++)
//     {
//         if(num[i]%10==0)
//             V1.push_back(num[i]);
//         else
//             V2.push_back(num[i]);
//     }

//     int j=0;
//     for(int i=0;i<V2.size();i++)
//     {
//         num[j]=V2[i];
//         j++;
//     }
//     for(int i=0;i<V1.size();i++)
//     {
//         num[j]=V1[i];
//         j++;
//     }
// }

// int main()
// {
//     vector<int>arr={10,12,5,40,30,7,5,9,10};

//     int N = arr.size();

//     PUSH(arr ,N);

//     for(int i=0;i<N;i++)
//         cout<< arr[i]<<" ";

// }


#include<bits/stdc++.h>
using namespace std ;

bool Add(int n )
{
    while(n != 1)
    {
        int sum =0 ;
        int item=n;
        sum = sum +pow(item%10,2);
        item = item/10;
        sum =sum+ pow(item%10,2);
        n=sum;
    }
     if(n==1)
        return true;
    else
        return false;
}
int main()
{
    int n ;
    cout<<"Enter the value of n ";
    cin>>n;
    
   cout<<Add(n);
   
    
    return 0;
    
}