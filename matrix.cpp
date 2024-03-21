
// array of pointer / We will Use Always

// #include<iostream>
// using namespace std ;

// void Print(int *arr[],int m , int n)
// {
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//             cout<<arr[i][j]<<" ";
//         cout<<endl ;
//     }
// }

// int main()
// {
//     int m =3;
//     int n =3;

//     int *arr[m];

//     for(int i=0;i<m;i++)
//     {
//         arr[i] = new int[n];
//         for(int j=0;j<n;j++)
//             cin>>arr[i][j];
//     }

//     Print(arr,m,n);
//     return 0 ;


// }

// print matrix in snack pattern

// input -> 1 to 16
// output ->1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13

// #include<bits/stdc++.h>
// using namespace std ;

// void snack(int *arr[] , int R , int C)
// {
//     for(int i=0;i<R;i++)
//     {
//         if(i%2==0)
//         {
//             for(int j=0;j<C;j++)
//                 cout<<arr[i][j]<<" ";
//         }
//         else 
//         {
//             for(int j=C-1 ; j>=0;j--)
//                 cout<<arr[i][j]<<" ";
//         }
//     }
// }

// int main()
// {
//     int R, C;
//     cout << "Enter the value of R and C :";
//     cin >> R >> C;

//     int *arr[R];
//     for (int i = 0; i < R; i++)
//     {
//         arr[i] = new int[C];
//         for (int j = 0; j < C; j++)
//             cin >> arr[i][j];
//     }

//     snack(arr, R, C);
//     return 0;
// }



// Print Boundry Elements of Matrix

// input -> 1 to 16
// output -> 1 2 3 4 8 12 16 15 14 13 9 5

// #include <iostream>
// using namespace std;

// void boundry(int *arr[], int R, int C)
// {
//     if (R == 1)
//     {
//         for (int j = 0; j < C; j++)
//             cout << arr[0][j] << " ";
//     }
//     else if (C == 1)
//     {
//         for (int j = 0; j < R; j++)
//             cout << arr[j][0] << " ";
//     }
//     else
//     {
//         for (int j = 0; j < C; j++)
//             cout << arr[0][j] << " ";

//         for (int j = 1; j < R; j++)
//             cout << arr[j][C - 1] << " ";

//         for (int j = C - 2; j >= 0; j--)
//             cout << arr[R - 1][j] << " ";

//         for (int j = R - 2; j > 0; j--)
//             cout << arr[j][0] << " ";
//     }
// }
// int main()
// {
//     int R, C;
//     cout << "Enter the value of R and C :";
//     cin >> R >> C;

//     int *arr[R];
//     for (int i = 0; i < R; i++)
//     {
//         arr[i] = new int[C];
//         for (int j = 0; j < C; j++)
//             cin >> arr[i][j];
//     }

//     boundry(arr, R, C);
//     return 0;
// }



//  Transpose The matrix

// #include <iostream>
// using namespace std;
// void transpose(int *arr[], int R, int C)
// {
//     for (int i = 0; i < R; i++)
//     {
//         for (int j = i+1; j < C; j++)
//             swap(arr[i][j] , arr[j][i]);
//     }
//      for (int i = 0; i < R; i++)
//     {
//         for (int j = 0; j < C; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// }
// int main()
// {
//     int R, C;
//     cout << "Enter the value of R and C :";
//     cin >> R >> C;

//     int *arr[R];
//     for (int i = 0; i < R; i++)
//     {
//         arr[i] = new int[C];
//         for (int j = 0; j < C; j++)
//             cin >> arr[i][j];
//     }
//     transpose(arr, R, C);
//     return 0;
// }



// Rotate Matrix in 90 degree

// #include <iostream>
// using namespace std;
// void transpose(int *arr[], int R, int C)
// {
//     for (int i = 0; i < R; i++)
//     {
//         for (int j = i + 1; j < C; j++)
//             swap(arr[i][j], arr[j][i]);
//     }
//     for (int i = 0; i < C; i++)
//     {
//         int low = 0;
//         int high = R - 1;
//         while (low < high)
//         {
//             swap(arr[low][i], arr[high][i]);
//             low++;
//             high--;
//         }
//     }
//     for (int i = 0; i < R; i++)
//     {
//         for (int j = 0; j < C; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int R, C;
//     cout << "Enter the value of R and C :";
//     cin >> R >> C;
//     int *arr[R];
//     for (int i = 0; i < R; i++)
//     {
//         arr[i] = new int[C];
//         for (int j = 0; j < C; j++)
//             cin >> arr[i][j];
//     }
//     transpose(arr, R, C);
//     return 0;
// }



// Print matrix elements in spiral order

// #include <iostream>
// using namespace std;
// void spiral(int *arr[], int R, int C)
// {
//     int top = 0;
//     int left = 0;
//     int right = C - 1;
//     int bottom = R - 1;

//     while (top <= bottom && left <= right)
//     {
//         for (int i = top; i <= right; i++)
//             cout << arr[top][i] << " ";
//         top++;

//         for (int i = top; i <= bottom; i++)
//             cout << arr[i][right] << " ";
//         right--;
//         if (top <= bottom)
//         {
//             for (int i = right; i >= left; i--)
//                 cout << arr[bottom][i] << " ";
//             bottom--;
//         }
//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//                 cout << arr[i][left] << " ";
//             left++;
//         }
//     }
// }
// int main()
// {
//     int R, C;
//     cout << "Enter the value of R and C :";
//     cin >> R >> C;
//     int *arr[R];
//     for (int i = 0; i < R; i++)
//     {
//         arr[i] = new int[C];
//         for (int j = 0; j < C; j++)
//             cin >> arr[i][j];
//     }
//     spiral(arr, R, C);
//     return 0;
// }

