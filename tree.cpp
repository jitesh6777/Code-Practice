
// Tree Traversal -> Inorder , Preorder , Postorder

// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int data;
//     node *left , *right;
//     node(int item)
//     {
//         data = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void Inorder(node *root)
// {
//     if(root!=NULL)
//     {
//         Inorder(root->left);
//         cout<<root->data<<" ";
//         Inorder(root->right);
//     }
// }
// void Preorder(node *root)
// {
//     if(root!=NULL)
//     {
//         cout<<root->data<<" ";
//         Preorder(root->left);
//         Preorder(root->right);
//     }
// }
// void Postorder(node *root)
// {
//     if(root!=NULL)
//     {
//         Postorder(root->left);
//         Postorder(root->right);
//         cout<<root->data<<" ";
//     }
// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->right->left = new node(40);
//     root->right->right = new node(50);
//     root->right->right->left = new node(60);
//     root->right->right->right = new node(70);
//     root->right->right->left->left = new node(80);
//     root->right->right->left->right = new node(90);

//     cout<<"Inorder"<<" ";
//     Inorder(root);
//     cout<<endl;

//     cout<<"Preorder"<<" ";
//     Preorder(root);
//     cout<<endl;

//     cout<<"PostOrder"<<" ";
//     Postorder(root);

//     return 0 ;

// }

    // Height Of Binary Tree

    // #include<bits/stdc++.h>
    // using namespace std;

    // struct node
    // {
    //     int key ;
    //     node *left;
    //     node *right;

    //     node(int item)
    //     {
    //         key = item;
    //         left=NULL;
    //         right=NULL;
    //     }
    // };

    // int Height(node *root)
    // {
    //     if(root==NULL)
    //         return 0;
    //     else
    //         return(max(Height(root->left),Height(root->right))+1);
    // }

    // int main()
    // {

    //     node *root = new node(10);
    //     root->left = new node(20);
    //     root->right = new node(30);
    //     root->right->left = new node(40);
    //     root->right->right = new node(50);
    //     root->right->right->left = new node(60);
    //     root->right->right->right = new node(70);
    //     root->right->right->left->left = new node(80);
    //     root->right->right->left->right = new node(90);
        
    //     cout<<Height(root);

    //     return 0 ;

    // }

//Level Order traversal

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key;
//     node *left;
//     node *right;
//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void LevelorderTraversal(node *root)
// {
//     if(root == NULL)
//         return;

//     queue<node*>Q;

//     Q.push(root);

//     while(!Q.empty())
//     {
//         node *curr = Q.front();
//         Q.pop();

//         cout<<curr->key<<" ";
//         if(curr->left !=NULL)
//             Q.push(curr->left);
//         if(curr->right != NULL)
//             Q.push(curr->right);
//     }

// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->right->left = new node(40);
//     root->right->right = new node(50);
//     root->right->right->left = new node(60);
//     root->right->right->right = new node(70);
//     root->right->right->left->left = new node(80);
//     root->right->right->left->right = new node(90);

//     LevelorderTraversal(root);


//     return 0 ;


// }


// Line by Line Traversal

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key;
//     node *left;
//     node *right;
//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void LineByLineTraversal(node *root)
// {
//     if(root == NULL)
//         return;

//     queue<node*>Q;

//     Q.push(root);
//     Q.push(NULL);

//     while(Q.size()>1)
//     {
//         node *curr = Q.front();
//         Q.pop();
//         if(curr == NULL)
//         {
//             cout<<endl;
//             Q.push(NULL);
//             continue;
//         }
//         cout<<curr->key<<" ";
//         if(curr->left !=NULL)
//             Q.push(curr->left);
//         if(curr->right != NULL)
//             Q.push(curr->right);
//     }

// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->right->left = new node(40);
//     root->right->right = new node(50);
//     root->right->right->left = new node(60);
//     root->right->right->right = new node(70);
//     root->right->right->left->left = new node(80);
//     root->right->right->left->right = new node(90);

//     LineByLineTraversal(root);


//     return 0 ;


// }

// Size of the tree --> Iteration Method using level order traversal

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left ;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL;
//         right = NULL;
//     }
// };

// void SizeOfTree(node *root)
// {
//     if (root == NULL)
//         return;
//     int count = 0 ;
//     queue<node*> Q;
//      Q.push(root);

//      while(!Q.empty())
//      {
//         node *curr = Q.front();
//         Q.pop();
//         count++ ;
//         if(curr->left != NULL)
//             Q.push(curr->left);
//         if(curr->right != NULL)
//             Q.push(curr->right);
//      }

//      cout<< count ;
// }

// int main()
// {

//     node *root = new node(10);
//     root->left = new node(15);
//     root->left->left = new node(30);

//     root->right = new node(20);
//     root->right->left = new node(40);
//     root->right->left->left = new node(60);
//     root->right->left->right = new node(70);

//     root->right->right = new node(50);

//     SizeOfTree(root);

//     return 0 ;

// }


// Size of the tree --> recurssive method

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item ;
//         left = NULL;
//         right = NULL;
//     }
// };

//  int SIZE(node *root)
//  {
//     if(root == NULL)
//         return 0 ;
//     else
//         return(SIZE(root->left)+SIZE(root->right)+1) ;
//  }

// int main()
// {
//     int val ;

//     node *root = new node(10);

//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->right = new node(70);
//     root->right->left = new node(60);
//     root->right->left->left = new node(90);

//     val = SIZE(root);

//     cout<< val ;

//     return 0 ;

//

// Maximum element in Binary Tree -> Recurssive Method

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left;
//     node *right ;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL ;
//     }
// };

// int maxi(node *root)
// {
//     if(root = NULL)
//         return INT_MIN;
//     else
//         return( max(root->key , max(maxi(root->left),maxi(root->right)))) ;
// }
// int main()
// {
//     int val ;

//     node *root = new node(10);

//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->right = new node(70);
//     root->right->left = new node(60);
//     root->right->left->left = new node(90);

//     val = maxi(root);

//     cout<< val ;

//     return 0 ;

// }

// Print Left View of a Binary tree

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int key ;
//     node *left;
//     node *right;

//     node(int item)
//     {
//         key = item;
//         left = NULL;
//         right = NULL;
//     }
// };

// void LeftView(node *root)
// {
//     if(root == NULL)
//         return;
//     queue<node*> q ;

//     q.push(root);

//     while(!q.empty())
//     {
//         int count = q.size();

//         for(int i=0;i<count;i++)
//         {
//             node *curr = q.front();
//             q.pop();

//             if(i%2 == 0)
//                 cout<< curr->key <<" ";

//             if(curr->left != NULL)
//                 q.push(curr->left);
//             if(curr->right != NULL)
//                 q.push(curr->right);
//         }
//     }
// }

// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->left->left = new node(40);
//     root->left->right = new node(50);

//     root->right = new node(30);
//     root->right->left = new node(60);

//     LeftView(root);

//     return 0 ;

// }
