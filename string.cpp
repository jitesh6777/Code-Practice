
// print the frequencies of characters(in sorted order)in a string of lower case alphabets

// #include<iostream>
// using namespace std ;

// int CHAR[26] ={0};

// void freq(string &str)
// {
//     int n=0;
//     for(int i=0;str[i] !='\0';i++)
//     {
//         CHAR[str[i]-'a']++ ;
//     }
    
//     for(int i=0;i<26;i++)
//     {
//         if(CHAR[i] > 1) 
//             cout<<(char)(i+'a')<<" "<<CHAR[i]<<endl ;
//     }
    

// }

// int main()
// {
//     string str ="geeksforgeeks";

//     freq(str);

//     return 0 ;
// }

// check is the given string is pallindrom or not

// #include<iostream>
// using namespace std ;

// void Palli(string &str1)
// {
//     int n = 0 ;
//     for(int i=0;str1[i]!='\0';i++)
//         n++;
    
//     int end = n-1;
//     int strt = 0 ;

//     string NEWStr = str1 ;

//     while(strt < end )
//     {
//         // char temp = str1[strt];
//         // str1[strt] = str1[end];
//         // str1[end] = temp ;

//         swap(str1[strt], str1[end]);

//         strt++;
//         end--;
//     }

//     if(str1 == NEWStr)
//         cout<<"String is Pallindrome";
//     else
//         cout<<"string is not Pallindrome";


// }

// int main()
// {
//     string str1 = "aba";

//     Palli(str1);

//     return 0 ;

// }


// check if a string is a subsequence of other

// s1 = ABCD
// s2 = AD

// #include<iostream>
// using namespace std ;

// void subseq(string &str1, string &str2)
// {
//     int j=0;

//     int SizeOfStr2 = 0;
//     for(int i=0;str2[i] !='\0' ; i++)
//     {
//         SizeOfStr2++;
//     }

//     for(int i=0;str1[i]!='\0';i++)
//     {
//         if(str1[i] == str2[j])
//         {
//             j++;
//         }
//     }

//     if(j== SizeOfStr2)
//         cout<<"Subsequences";
//     else
//         cout<<"Not Subsequences";
// }

// int main()
// {
//     string str1 ="ABCDE";
//     string str2 ="AED";

//     subseq(str1 , str2);

//     return 0 ;
// }

// check for anagram 

// #include<iostream>
// #include<algorithm>
// using namespace std ;

// void Anagram(string &str1 ,string &str2)
// {
//     sort(str1.begin() , str1.end());
//     sort(str2.begin() , str2.end());

//     if(str1 == str2)
//         cout<<"Anagram";
//     else
//         cout<<"Not Anagram";


// }

// int main()
// {
//     string str1 = "listen";
//     string str2 ="tensil";

//     Anagram(str1,str2);

//     return 0;

// }

// left most repeating character

// #include<iostream>
// using namespace std ;

// void repeating(string &str)
// {
//     int count[26]={0};
//     for(int i=0;str[i]!='\0';i++)
//     {
//         count[str[i]-'a']++;
//     }
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(count[str[i]-'a'] > 1)
//         {
//             cout<< str[i]<<" ";
//             break;
//         }
//     }
// }

// int main()
// {
//     string str ="geeksforgeeks";

//     repeating(str);

//     return 0 ;
// }


// left most non-repeating character

// #include<iostream>
// using namespace std ;

// void repeating(string &str)
// {
//     int count[26]={0};
//     for(int i=0;str[i]!='\0';i++)
//     {
//         count[str[i]-'a']++;
//     }
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(count[str[i]-'a'] == 1)
//         {
//             cout<< str[i]<<" ";
//             break;
//         }
//     }
// }

// int main()
// {
//     string str ="geeksforgeeks";

//     repeating(str);

//     return 0 ;
// }

//  reverse a whole santances

// input -> welcome to geeksforgeeks
// output-> geeksforgeeks to welcome

// #include<bits/stdc++.h>
// using namespace std ;

// void PRINT(char str[])
// {
//     cout<< str ;
// }
// void reverse(char str[] , int strt , int end)
// {
//     while(strt<end)
//     {
//         char temp = str[strt];
//         str[strt] = str[end];
//         str[end] = temp ;

//         strt++;
//         end--;
//     }
// }

// void Nreverse(char str[] , int n)
// {
//     int strt =0;
//     int end =0;
//     for( end =0;end<n;end++)
//     {
//         if( str[end] == ' ')
//         {
//             reverse(str , strt,end-1);
//             strt = end+1;
//         }
//     }
//     reverse(str,strt,end-1);
//     reverse(str,0,n-1);
//     PRINT(str);
// }

// int main()
// {
//     char str[] ="welcome to geeksforgeeks" ;    
//     int n = strlen(str);
//     Nreverse(str,n);

//     return 0 ;


// }

// overview of pattern finding

// #include<bits/stdc++.h>
// using namespace std ;

// void pattern(string &txt , string &ptr)
// {
//     int n = 0;
//     for(int i=0;txt[i]!='\0';i++)
//     {
//         n++ ;
//     }
//     int m = 0;
//     for(int i=0;ptr[i]!='\0';i++)
//     {
//         m++ ;
//     }
//     int j=0;
//     for(int i=0; i< n && j<m ;i++)
//     {
//         if(txt[i] == ptr[j])
//         {
//             j++;
//         }
//         else{
//             j=0;
//         }
//     }

//     if(j==m)
//         cout<<"pattern found";
//     else   
//         cout<<"pattern not found";
// }

// int main()
// {
//     string txt ="geeksforgeeks";
//     string ptr = "sf";

//     pattern(txt,ptr);

//     return 0 ;


// }

// check for Rotation


// #include<bits/stdc++.h>
// using namespace std ;

// void pattern(string &S1 , string &S2)
// {
//     string txt = S1 + S1 ;
//     int n = 0;
//     for(int i=0;txt[i]!='\0';i++)
//     {
//         n++ ;
//     }
//     int m=0 ;
//     for(int i=0;S2[i]!='\0';i++)
//     {
//         m++ ;
//     }
//     int j=0 ;
//     for(int i=0;i<n && j<m;i++ )
//     {
//         if(txt[i]== S2[j])
//         {
//             j++;
//         }
//         else
//             j=0;
//     }

//     if(j==m)
//         cout<<"pattern found";
//     else
//         cout<<"pattern not found";
// }

// int main()
// {
//     string S1 ="ABAB";
//     string S2 = "ABBA";

//     pattern(S1,S2);

//     return 0 ;


// }

// Input:
// s1 = aacdb
// s2 = gafd
// Output: cbgf
// Input:
// s1 = abcs
// s2 = cxzca
// Output: bsxz

// #include<bits/stdc++.h>
// using namespace std ;

// void duplicate(string &s1 , string &s2)
// {
//     int count[26]={0};

//     for(int i=0;i<s1.size();i++)
//     {
//         count[s1[i]-'a']++ ;
//     }
//     for(int i=0;i<s2.size();i++)
//     {
//         count[s2[i]-'a']++ ;
//     }
//     string str;
//     for(int i=0;i<s1.size();i++)
//     {
//         if(count[s1[i]-'a'] == 1)
//             str = str+s1[i];
//     }
//      for(int i=0;i<s2.size();i++)
//     {
//         if(count[s2[i]-'a'] == 1)
//             str = str+s2[i];
//     }
//     for(int i=0;str[i] !='\0';i++)
//         cout<<str[i] ;

// }

// int main()
// {
//     string S1 ="abcs";
//     string S2 = "cxzca";

//     duplicate(S1,S2);

//     return 0 ;
// }


// One programming language has the following keywords that cannot be used as identifiers:
// break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var
// Write a program to find if the given word is a keyword or not
// Input – defer
// Expected Output – defer is a keyword
// Input – While
// Expected Output – while is not a keyword

// #include<bits/stdc++.h>
// using namespace std ;

// void CheckKey(string &str)
// {
//       string str1[] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if","map", "range", "return", "struct", "type", "var"};

//     bool flag = true ;
//     for(int i=0;i<16;i++)
//     {
//         if(str1[i] == str)
//         {
//             flag = false;
//             break;
//         }
//     }
//     if(flag == false)
//         cout<<"given string is Keyword";
//     else
//         cout<<"given string is identifiers";


// }

// int main()
// {
       
//     string str = "if";

//     CheckKey(str);

//     return 0 ;
// }
