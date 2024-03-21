
// sum of Digits

// #include<bits/stdc++.h>
// using namespace std ;

// int rec(int num)
// {
//     if(num==0)
//         return 0;
    
//     return(num%10)+rec(num/10);
// }

// int main()
// {
//     int num = 1 ;

//     int ans = rec(num);
//     cout<< ans ;

//     return 0;

// }

// print 1 to n numbers using recursion 

// #include<bits/stdc++.h>
// using namespace std ;

// void rec(int n)
// {
//     if(n==0)
//         return;
//     rec(n-1);
//     cout<< n <<" ";
// }

// int main()
// {

//     int n =10;

//     rec(n);
//     return 0;
// }

// print n to 1 numbers using recursion 

// #include<bits/stdc++.h>
// using namespace std ;

// void rec(int n)
// {
//     if(n==0)
//         return;
//     cout<< n <<" ";
//     rec(n-1);
// }

// int main()
// {

//     int n =10;

//     rec(n);
//     return 0;
// }

// print sum of all the natural numbers 



#include<bits/stdc++.h>
using namespace std ;

int rec(int n)
{
    if(n==0)
        return 0 ;
   return rec(n-1)+n;
}

int main()
{

    int n = 3 ;

   int ans = rec(n);
   cout<< ans ;
    return 0;
}