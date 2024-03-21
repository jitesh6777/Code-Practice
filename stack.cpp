

// Balanced Parathesis -->
//  we can not solve this problem without using stack ..
//  we can but it will become very complecated.........

// #include <bits/stdc++.h>
// using namespace std;

// bool matching(char a, char b)
// {
//     return ((a == '(' && b == ')') ||
//             (a == '[' && b == ']') ||
//             (a == '{' && b == '}')) ;
// }

// bool Paranthesis(string str)
// {
//     stack< char > s;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(' || str[i] == '{' || str[i] == '[')
//             s.push(str[i]);
//         else
//         {
//             if (s.empty() == true)
//                 return false;
//             if (matching(s.top(), str[i]) == false)
//                 return false ;
//             else
//                 s.pop();
//         }
//     }
//     return (s.empty() == true );
// }
// int main()
// {
// bool res ;
// string str =  "({[]})" ;

// res = Paranthesis(str);
// cout<< res ;

// return 0 ;

// }


// Insert Two Stack In an Array

// #include<bits/stdc++.h>
// using namespace std ;

// class jitesh
// {
//     public :

//     int *arr , cap , top1 , top2 ;

//     jitesh(int n)
//     {
//         cap = n ;
//         top1 = -1;
//         top2 = cap;
//         arr = new int[n];
//     }

//     int Push1(int item)
//     {
//         if(top1 < top2 )
//         {
//             top1++;
//             arr[top1] = item ;
//         }
//         else
//             return 0;
//     }
//     int Push2(int item)
//     {
//         if(top2 > top1 )
//         {
//             top2 --;
//             arr[top2] = item ;
//         }
//         else
//             return 0;
//     }
//     int Pop1()
//     {
//         if(top1 >= 0)
//         {
//             int x = arr[top1];
//             top1 --;
//             return x ;
//         }
//     }
//     int Pop2()
//     {
//         if( top2 < cap)
//         {
//             int y = arr[top2];
//             top2 ++ ;
//             return y ;
//         }
//     }

//     void Print()
//     {
//         cout<<"top1 :" <<" " ;
//         for(int i=0 ; i<= top1 ;i++)
//             cout<< arr[i]<<" ";
//         cout<<endl ;
//         cout<< "top2 :"<<" ";
//         for(int i= cap-1 ; i>= top2 ;i--)
//             cout<< arr[i]<<" ";
//         cout<<endl ;

//     }
// };

// int main()
// {
//     jitesh j(7);

//     j.Push1(100);
//     j.Push1(200);
//     j.Push1(300);
//     j.Push1(400);
//     j.Push2(1100);
//     j.Push2(1200);
//     j.Push2(1300);

//     j.Print();

//     cout<< "Popped Item : " << j.Pop1()<< endl ;
//     cout<< "Popped Item : " <<j.Pop2()<< endl ;

//     j.Print();

//     return 0 ;
// }

// Stock Span Problem [naive solution (O(n^2))]

// #include<bits/stdc++.h>
// using namespace std ;

// void span(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int Span = 1;

//         for(int j = i-1 ; j>=0;j--)
//         {
//             if(arr[j]<=arr[i])
//                 Span++ ;
//         }
//         cout<< Span <<" ";
//     }
// }

// int main()
// {
//     int n  ;

//     int arr[]= {40,30,20,10} ;
//     span(arr,sizeof(arr)/sizeof(arr[0]));

//     return 0 ;
// }

// Stock Span Problem [efficient solution (O(n)) ]

// #include<bits/stdc++.h>
// using namespace std ;

// void span(int arr[],int n)
// {
//     stack<int> s ;
//     s.push(0);
//     cout<< 1 <<" ";

//     for(int i=1;i<n;i++)
//     {
//         while(s.empty() == false && arr[s.top()] <= arr[i])
//         {
//             s.pop();
//         }

//         int Span = s.empty() ? i+1 : i-s.top() ;
//         cout<< Span <<" " ;
//         s.push(i);
//     }
// }
// int main()
// {
//     int n  ;

//     int arr[]= {60,10,20,40,35,30,50,70,65} ;
//     span(arr,sizeof(arr)/sizeof(arr[0]));

//     return 0 ;
// }



// Delete middle element of a stack

// input - 1 2 3 4 5
// output - 1 2 4 5 

#include <bits/stdc++.h>
using namespace std;

void deleteMid(stack<int> &s, int sizeOfStack)
{
    int n = s.size() / 2;

    stack<int> st2  ;

    for (int i = 1; i <= n; i++)
    {
        st2.push(s.top());
        s.pop();
    }
    s.pop();

   while(!st2.empty())
   {
    
        s.push(st2.top())  ;
        st2.pop();
   }
   while(!s.empty())
   {
        cout<< s.top()<<" ";
        s.pop();
   }
    
   
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int d = s.size();
    deleteMid(s, d);

    return 0;
}