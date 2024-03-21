
// Sweet Seventeen Problem Statement
// https://prepinsta.com/tcs-coding-question-2/

// #include <iostream>
// #include <math.h>
// using namespace std;

// int SweetSeventeen(string str)
// {
//     int n = str.length();

//     int val = 0;
//     int j=0 ;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         int count = 0;
//         //48 to 57 are ascii values of 0 - 9
//         //say value is 8 its ascii will be 56
//         //val = hex[i] - 48 => 56 - 48 => val = 8
//         if (str[i] >= '0' && str[i] <= '9')
//         {
//             count = str[i] - 48;
//             val = val + count * pow(17, j);
//             j++;
//         }

//         //65 to 71 are values of A - G

//         else if (str[i] >= 'A' && str[i] <= 'G')
//         {
//             count = str[i] - 65 + 10 ;
//             val = val + count * pow(17, j);
//             j++;
//         }
//         //97 to 103 are ascii values of a - g
//         //say value is g its ascii will be 103
//         //val = hex[i] - 97 + 10 => 103 - 97 + 10=> val = 16
//         //10 is added as g value is 16 not 6 or a value is 10 not 0
//         else if (str[i] >= 'a' && str[i] <= 'b')
//         {
//             count = str[i] - 97 + 10;
//             val = val + count * pow(17, j);
//             j++ ;
//         }
//         else
//         {
//             cout << "Wrong Input" ;
//              break;
//         }
//     }

//     return val;
// }

// int main()
// {
//     string str = "1A";

//     cout << SweetSeventeen(str);

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------

// Jack and Jill are playing a string game. Jack has given Jill two strings A and B.
// Jill has to derive a string C from A, by deleting elements from string A,
// such that string C does not contain any element of string B. Jill needs help to do this task.
// She wants a program to do this as she is lazy. Given strings A and B as input, give string C as Output.

// #include<iostream>
// using namespace std ;

// void Removing(string str1, string str2)
// {
//     int n = str1.length();
//     int m = str2.length();
//     string str3 ;

//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(str2[i] == str1[j])
//                 str1[j] = '\0' ;
//         }
//     }
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(str1[i] != '\0')
//             str3 = str3 + str1[i];
//     }
//     for(int i=0;i< str3.length();i++)
//         cout<<str3[i];

// }
// int main()
// {
//     string str1 = "tiger";
//     string str2 = "it";

//     Removing(str1,str2);

//     return 0 ;

// }




// • Input:
// 3 -> Value of N1
// 3 -> Value of N2
// {3,5,2} -> a[ ], Elements a[0]to a[N1-1], where each input element is separated by new line
// {1,2,3} -> b[ ], Elements b[0]to b[N2-1), where each input element is separated by new line
// Output: 2.5

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// void Median(int arr1[], int arr2[], int n, int m)
// {
//     vector<int> vt;

//     for (int i = 0; i < n; i++)
//         vt.push_back(arr1[i]);
//     for (int i = 0; i < m; i++)
//         vt.push_back(arr2[i]);

//     sort(vt.begin(), vt.end());

//     int size = vt.size();

//     int Arr[size];
//     Arr[0] = vt[0];
//     int res = 1;

//     for (int i = 1; i < size; i++)
//     {
//         if (vt[i] != vt[i - 1])
//         {
//             Arr[res] = vt[i];
//             res++;
//         }
//     }
//     cout<< res <<endl ;
//     if(res % 2 == 0)
//     {
//         int mid = res/2;
//         float median = (Arr[mid]+Arr[mid-1])/2 ;
//         cout<< median ;
//     }
//     else
//     {
//         int mid = res/2 ;
//         float ret = Arr[mid];
//         cout<< ret ;
//     }
// }

// int main()
// {
//     int arr1[] = {3, 5, 2};
//     int arr2[] = {1, 2, 3};

//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     int m = sizeof(arr2) / sizeof(arr2[0]);

//     Median(arr1, arr2, n, m);

//     return 0;
// }

// Input:
// 	• 6
// 	• — Value of N.
// 	• [6,0,1,8,0,2] – Element of arr[0] to arr[N-1], While input each element is separated by newline
// Output:
// 	• 6 1 8 2 0 0

// #include<bits/stdc++.h>
// using namespace std ;

// int *PutAllZeroAtLast(int arr[], int n )
// {
//     int i ;
//     for(i=0;i<n;i++)
//     {
//         if(arr[i] == 0 )
//         {
//             int temp = arr[i];
//             int j ;
//             for(j = i+1 ; j<n;j++)
//             {
//                 arr[j-1] = arr[j];
//             }
//             arr[j-1] = temp ;
//             i--;
//             n--;
//         }
//     }
//     return arr ;
// }
// int main()
// {
//     int arr[]={6,0,1,8,0,2};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<size;i++)
//         cout<< arr[i]<<" ";
//     cout<<endl ;
//     auto x = PutAllZeroAtLast(arr,size);

//     for(int j=0;j<size;j++)
//         cout<< x[j]<<" ";

//     return 0 ;

// }

// Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

// Input :

// 10  -> Integer

// Output :

// 5    -> result- Integer

//  Explanation:

// Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence     output will print “5”.

// #include <iostream>
// #include<vector>
// #include<math.h>
// using namespace std;

// void BinaryToggling(int n )
// {
//     vector<int> v ;

//     while( n!= 0)
//     {
//         int rem = n%2;
//         v.push_back(rem);
//         n = n/2 ;
//     }
//     int size = v.size() ;

//     int j =size - 1;
//     int ans =0;
//    for(int i=0;i<size ;i++)
//    {
//         if(v[i] !=0)
//         {
//             ans = ans + pow(2,j) ;
//         }
//         j-- ;
//    }

//    cout<< ans ;
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;

//     BinaryToggling(n);

//     return 0 ;

// }

// Input :
// 7  -> Value of N
// [1,0,2,0,1,0,2]-> Element of arr[0] to arr[N-1], while input each element is separated by new line.

// Output :

// 0 0 0 1 1 2 2  -> Element after sorting based on risk severity

// 2nd method is best

// #include<iostream>
// #include<vector>
// using namespace std ;
// void SORT(int arr[] , int n)
// {
//     vector<int> vt ;
//     for(int i=0;i<=2;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(arr[j] == i)
//             {
//                 vt.push_back(arr[j]);
//             }
//         }
//     }
//     for(auto x : vt)
//         cout<< x<<" ";
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the value of n ";
//     cin>> n ;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     SORT(arr ,n);

//     return 0 ;

// }

// Best method -> O(n)

// #include<iostream>
// using namespace std ;

// void Sort(int arr[], int n)
// {
//     int countONE=0;
//     int countTWO=0;
//     int countZERO=0;

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == 0)
//             countZERO++;
//         else if(arr[i]==1)
//             countONE++;
//         else
//             countTWO++;
//     }

//     int j=0;
//     while(countZERO > 0)
//     {
//         arr[j] = 0;
//         j++ ;
//         countZERO-- ;
//     }
//     while(countONE > 0)
//     {
//         arr[j] = 1;
//         j++;
//         countONE-- ;
//     }
//     while(countTWO > 0)
//     {
//         arr[j] = 2;
//         j++;
//         countTWO-- ;
//     }
//     cout<< endl ;
//     for(int i=0;i<n;i++)
//         cout<< arr[i]<<" ";

// }
// int main()
// {
//     int n ;
//     cout<<"Entre the value of n :";
//     cin>> n ;

//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>> arr[i];

//     for(int i=0;i<n;i++)
//         cout<< arr[i]<<" ";

//     Sort(arr,n);
//     return 0 ;

// }

// Given an array Arr[] of size T, contains binary digits, where

// 0 represents a biker running to the north.
// 1 represents a biker running to the south.
// The task is to count crossing biker in such a way that each pair of crossing biker(N, S), where 0<=N<S<T, is passing when N is running to the north and S is running to the south.

// Naive approach

// #include<iostream>
// using namespace std ;

// void Sum(int arr[], int n )
// {
//     int sum =0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] == 0 )
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(arr[i] != arr[j])
//                     sum = sum+1 ;
//             }
//         }
//     }
//     cout<< sum ;
// }

// int main()
// {
//     int arr[] = {1,1,1,0,1};
//     int n=5 ;

//     Sum(arr,n);

//     return 0 ;

// }

// Effieient Approach

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, a, sum = 0, c = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         if (a)
//             sum += c;
//         else
//             c++;
//     }
//     cout << sum;
// }

// One programming language has the following keywords that cannot be used as identifiers:

// break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

// Write a program to find if the given word is a keyword or not

// Input – defer
// Expected Output – defer is a keyword

// Input – While
// Expected Output – while is not a keyword

// break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
// #include <iostream>
// using namespace std;

// int main()
// {
//     string str1[] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
//     string str = "case";

//      bool flag = true ;
//     for (int i = 0; i < 16; i++)
//     {
//         if (str == str1[i])
//         {
//             cout << str << " is keyword";
//             flag = false ;
//         }
//     }
//     if(flag == true)
//         cout<< str<< " is not keyword";

//     return 0;
// }

// Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits

// #include<iostream>
// using namespace std ;

// void DiffBetEvenOdd(string str)
// {
//     int n = str.length();

//     int sum = 0;
//     int sum1 = 0 ;
//     int sum2 = 0;

//     for(int i=0;i<n;i++)
//     {
//         if(i%2 !=0)
//         {
//             sum1 = (str[i] - 48) + sum1 ;
//         }
//         else
//         {
//             sum2 = (str[i]-48) + sum2 ;
//         }
//     }

//     sum = abs(sum2 - sum1 );
//     cout<< sum ;
// }

// int main()
// {
//     string str = "9834698765123";

//     DiffBetEvenOdd(str);

//     return 0 ;
// }

// Check the given years is Leap or not

// #include<iostream>
// using namespace std ;

// void Leap( int n)
// {
//      if(n%4 == 0 && n%100 !=0 || n%400==0 )
//         cout<< n <<" is leap years" ;
//     else
//         cout<< n <<" is not a leap years";
// }

// int main()
// {
//     int n ;
//     cout<<"Enter the year ";
//     cin>> n ;

//     Leap(n);

//     return 0 ;

// }

// Program 4

// From <https://prepinsta.com/tcs-ninja/coding-questions/>

// #include<iostream>
// using namespace std ;

// void Axis(int n )
// {
//     char c = 'R';
//     int dist = 10 ;
//     int x =0;
//     int y =0;

//     while(n)
//     {
//         switch(c)
//         {
//             case 'R':
//             x= x+dist;
//             c = 'U';
//             dist = dist+10;
//             break;

//             case 'U':
//             y=y+dist;
//             c = 'L';
//             dist = dist+10;
//             break;

//             case 'L':
//             x = x-dist;
//             c = 'D';
//             dist = dist+10 ;
//             break;

//             case 'D':
//             y=y-dist;
//             c = 'A';    // Again right side in x-axis
//             dist = dist+10;
//             break;

//             case 'A':
//             x = x+dist;
//             c = 'R';
//             dist = dist+10;
//             break;
//         }
//         n--;
//     }

//     cout<<"( "<< x<<" , "<< y<<" )"<< endl ;

// }

// int main()
// {
//  int n ;
//  cout<<"Enter the value of n ";
//  cin>> n ;

//  Axis(n);

//  return 0 ;

// }

// Ques. Write a code to check whether no is prime or not. Condition use function check() to find whether entered no is positive or negative ,if negative then enter the no, And if yes pas no as a parameter to prime() and check whether no is prime or not?

// #include<iostream>
// using namespace std ;

// void prime(int n)
// {
//      int count = 1;

//      bool flag = false ;
//      for(int i=2;i<n;i++)
//      {
//         if( n % i == 0)
//         {
//             flag = true ;
//             break;
//         }
//      }
//      if(flag == false)
//         cout<< "given number is prime number ";
//     else
//         cout<<"given number is not a primt numbers";
// }
// int main()
// {
//     int n ;
//     cout<<" Enter the value of n ";
//     cin>> n ;

//     if( n>0 )
//         prime(n);
//     else
//         cout<< " entered number is negative number! please enter another number ";

//     return 0 ;
// }

// Question. Find the nth term of the series.

// 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243,64, 729, 128, 2187 ….

// This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. Write a program to find the Nth term in the series.

// The value N in a positive integer that should be read from STDIN.
// The Nth term that is calculated by the program should be written to STDOUT.
// Other than value of n th term,no other character / string or message should be written to STDOUT.
// For example , if N=16, the 16th term in the series is 2187, so only value 2187 should be printed to STDOUT.
// You can assume that N will not exceed 30.

// #include<iostream>
// #include<math.h>
// using namespace std ;

// void Nthnumber(int n)
// {
//     int even =1;
//     int odd = 1;
//     int POW =0;

//     if(n==1 || n==2)
//         cout<< 1;
//     for(int i=3;i<=n;i++)
//     {
//         if(i%2==1)
//         {
//             POW = pow(2,even);
//             even++;
//         }
//         else{
//             POW = pow(3,odd);
//             odd++;
//         }
//     }

//     cout<<POW;
// }

// int main()
// {
//     int n ;
//     cin>> n ;

//     Nthnumber(n);

//     return 0 ;

// }

// to convert char string to Upper Case

// #include<bits/stdc++.h>
// using namespace std ;

// int main()
// {
//     char ch[] = "jitesh";

//     for(int i=0;i< strlen(ch);i++)
//     {
//         ch[i] = toupper(ch[i]);
//     }

//     for(int i=0;i< strlen(ch);i++)
//     {
//         cout<< ch[i];
//     }
//     return 0 ;
// }

// 1. The program will receive 3 English words inputs from STDIN
// 	1. These three words will be read one at a time, in three separate line
// 	2. The first word should be changed like all vowels should be replaced by *
// 	3. The second word should be changed like all consonants should be replaced by @
// 	4. The third word should be changed like all char should be converted to upper case
// 	5. Then concatenate the three words and print them
// Other than these concatenated word, no other characters/string should or message should be written to STDOUT
// For example if you print how are you then output should be h*wa@eYOU.
// You can assume that input of each word will not exceed more than 5 chars

// Input
// 	• how
// 	• are
// 	• you
// Expected Output : h*wa@eYOU

// #include<bits/stdc++.h>
// using namespace std ;

// void Convert(char ch1[], char ch2[] , char ch3[])
// {
//     for(int i=0; ch1[i] !='\0';i++)
//     {
//         if(ch1[i] == 'a'||ch1[i] == 'e'||ch1[i] == 'i'||ch1[i] == 'o'||ch1[i] == 'u' || ch1[i] == 'A'||ch1[i] == 'E'||ch1[i] == 'I'||ch1[i] == 'O'||ch1[i] == 'U')
//         {
//             ch1[i] = '*';
//         }
//     }
//     for(int i=0; ch2[i] !='\0';i++)
//     {
//         if(!(ch2[i] == 'a'||ch2[i] == 'e'||ch2[i] == 'i'||ch2[i] == 'o'||ch2[i] == 'u' || ch2[i] == 'A'||ch2[i] == 'E'||ch2[i] == 'I'||ch2[i] == 'O'||ch2[i] == 'U'))
//         {
//             ch2[i] = '@';
//         }
//     }
//     for(int i=0;ch3[i] != '\0';i++)
//     {
//         ch3[i] = toupper(ch3[i]);
//     }
//    another methods to converts lowwer case to upper case
//     for(i=0;c[i]!='\0';i++)
//       {
//     if(c[i]>='a'&&c[i]<='z')
//         c[i]=c[i]-32;
//       }
//     cout<< ch1 << endl ;
//     cout<< ch2 << endl ;
//     cout<< ch3 << endl ;

// }

// int main()
// {
//     char ch1[6];
//     char ch2[6];
//     char ch3[6];

//     cin>> ch1 ;
//     cin>> ch2 ;
//     cin>> ch3 ;

//     Convert(ch1,ch2,ch3);

// }