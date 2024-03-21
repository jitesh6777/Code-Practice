
// traversing singly LL through function

// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }

// };

// void Print(node *head)
// {
//     while(head!=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next;
//     }
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     Print(head);

//     return 0;
// }

// Insert Item at beginning in singly LL

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// node *InsertBeg(node *head , int item)
// {
//     node *temp = new node(item) ;
//     temp->next = head;
//     return temp;
// }

// void Print(node *head)
// {
//     while(head!=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next;
//     }
// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     Print(head);
//     cout<<endl<<"After inserting item"<<endl;
//     head = InsertBeg(head,6);
//     head = InsertBeg(head,5);
//     Print(head);

//     return 0;

// }

// Insert at end of singly LL

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// node *InsertEnd(node *head , int item)
// {
//     node *temp = new node(item) ;
//     node *curr = head ;
//     while( curr->next!=NULL)
//     {
//         curr= curr->next;
//     }
//     curr->next = temp;
//     return head;
// }

// void Print(node *head)
// {
//     while(head!=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next;
//     }
// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     Print(head);
//     cout<<endl<<"After inserting item at end"<<endl;
//     head = InsertEnd(head,6);
//     head = InsertEnd(head,5);
//     Print(head);

//     return 0;

// }

// Delete first Node in Singly LL

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// node *DelFirst(node *head )
// {
//     node *curr ;
//     if(head==NULL)
//         return NULL;

//     curr = head ;
//     head = head->next;
//     delete curr ;
//     return head;
// }

// void Print(node *head)
// {
//     while(head!=NULL)
//     {
//         cout<< head->data <<" ";
//         head = head->next;
//     }
// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     Print(head);
//     cout<<endl<<"After inserting item at end"<<endl;
//     head = DelFirst(head);
//     head = DelFirst(head);
//     Print(head);

//     return 0;

// }

// Circular Singly Linked List

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int item)
//     {
//         data = item;
//         next = NULL;
//     }
// };

// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = head ;

//     Print(head);

//     return 0;
// }

// insert at begin in singly circular linked list , time comp ->(O(n))

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *inrtAtBeg(node *head, int item)
// {

//     node *temp = new node(item);
//     if (head == NULL)
//         temp->next = temp;

//     node *curr = head;
//     while (curr->next != head)
//         curr = curr->next;

//     temp->next = head;
//     curr->next = temp;

//     return temp;
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = head;

//     head = inrtAtBeg(head, 5);
//     Print(head);

//     return 0;
// }

// insert at begin in singly circular linked list , time comp ->(O(1))

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;
//     node(int item)
//     {
//         data = item;
//         next = NULL;
//     }
// };

// void Print(node *head)
// {
//     if(head == NULL)
//         return;
//     cout<< head->data<<" ";
//     for(node *curr = head->next ; curr!=head;curr=curr->next)
//     {
//         cout<<curr->data<<" ";
//     }
//     cout<<endl ;
// }

// node *InsertAtBeg(node *head , int item)
// {
//     node *temp = new node(item);

//     if(head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }
    
//     temp->next = head->next;
//     head->next = temp;

//     int jitesh = head->data;
//     head->data = temp->data;
//     temp->data = jitesh;

//     return head ;


// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = head;

//     Print(head);

//     head = InsertAtBeg(head,50);;

//     Print(head);

//     return 0 ;


// }


//  insert at end in singly circular linked list , time comp ->(O(1))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int item)
//     {
//         data = item;
//         next = NULL;
//     }
// };
// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *inrtAtEnd(node *head, int item)
// {
//     node *temp = new node(item);

//     if (head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }

//     temp->next = head->next;
//     head->next = temp;
//     int t = head->data;
//     head->data = temp->data;
//     temp->data = t;

//     return temp;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = head;

//     head = inrtAtEnd(head,5);
//     Print(head);

//     return 0;
// }



// delete head of the singly circular linked list O(n) [Naive Solution]

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// void Print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data << " ";
//     for (node *p = head->next; p != head; p = p->next)
//         cout << p->data << " ";
// }

// node *delBeg(node *head)
// {
//     if (head == NULL)
//         return NULL;

//     if (head->next == head)
//     {
//         delete head;
//         return NULL;
//     }
//     else
//     {
//         node *curr = head;
//         while (curr->next != head)
//             curr = curr->next;

//         curr->next = head->next;
//         delete head;
//         return (curr->next);
//     }
// }
// int main()
// {

//     node *head = new node(5);
//     head->next = new node(10);
//     head->next->next = new node(15);
//     head->next->next->next = new node(20);
//     head->next->next->next->next = head;

//     head = delBeg(head);
//     Print(head);

//     return 0;
// }

// delete head of the singly circular linked list O(1) [Efficient Solution]

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next;
//     node(int key)
//     {
//         data = key ;
//         next = NULL ;
//     }
// };
// void Print(node *head)
// {
//     if(head == NULL)
//     {
//         return ;
//     }
//     cout<<head->data<<" ";
//     for(node *P=head->next ; P!=head; P=P->next)
//         cout<<P->data <<" ";
// }

// node *delBeg(node *head)
// {
//     if(head== NULL)
//         return NULL;
//     if(head->next == head)
//     {
//         delete head ;
//         return NULL ;
//     }
//     else{
//         head->data = head->next->data ;
//         node *temp = head->next ;
//         head->next = head->next->next ;

//         delete temp ;
//         return head;
//     }
// }
// int main()
// {
//     node *head = new node(5);
//     head->next = new node(10);
//     head->next->next = new node(15);
//     head->next->next->next = new node(20);
//     head->next->next->next->next = head ;

//     cout<<"before deletion  ";
//     Print(head);
//     cout<< "\n";
//     head = delBeg(head);
//     cout<<"After deletion  ";
//     Print(head);

//     return 0 ;
// }


// Delete Kth node from a Circular Linked list O(k)

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
//     node(int key)
//     {
//         data = key;
//         next = NULL ;
//     }
// };

//  void Print( node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (node *P = head->next; P != head; P = P->next)
//         cout << P->data << " ";
// }
// node *delBeg(node *head)
// {
//     if(head== NULL)
//         return 0;
//     if(head->next == head)
//     {
//         delete head ;
//         return NULL ;
//     }
//     else{
//         head->data = head->next->data ;
//         node *temp = head->next ;
//         head->next = head->next->next ;

//         delete temp ;
//         return head;
//     }
// }

// node *delKth(node *head , int k)
// {
//     if(head == NULL)
//         return NULL;
//     if(k==1)
//         return delBeg(head);

//     node *curr = head ;
//     for(int i = 0  ;i<k-2;i++)
//         curr = curr->next ;

//     node *temp = curr->next ;
//     curr->next = curr->next->next ;
//     delete temp ;

//     return head ;
// }
// int main()
// {
//     node *head = new node(5);
//     head->next = new node(10);
//     head->next->next = new node(15);
//     head->next->next->next = new node(20);
//     head->next->next->next->next = new node(25);
//     head->next->next->next->next->next = head ;

//     head = delKth(head , 3);
//     Print(head);
//     return 0 ;
// }

// Sorted Insertion In Singly Linked List

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// node *sortedIns(node *head, int item)
// {
//     node *temp = new node(item);
//     if (head == NULL)
//         return temp;
//     if (item < head->data)
//     {
//         temp->next = head;
//         return temp;
//     }
//     node *curr = head;
//     while (curr->next != NULL && item > curr->next->data)
//     {
//         curr = curr->next;
//     }

//     temp->next = curr->next;
//     curr->next = temp;
//     return head;
// }
// void Print(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (node *P = head->next; P != head; P = P->next)
//         cout << P->data << " ";
// }

// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);

//     cout << "before insertion : ";
//     Print(head);

//     head = sortedIns(head, 25);
//     cout << ("After Insertion : ");
//     Print(head);

//     return 0;
// }


// Print middle of the linked list (O(n))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void MiddleEle(node *head)
// {
//     if (head == NULL)
//         return;
//     int count = 0;
//     node *curr;
//     for (curr = head; curr != NULL; curr = curr->next)
//         count++;
//      curr = head;

//      for(int i=0;i<count/2;i++)
//         curr=curr->next;

//     cout<< curr->data ;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     MiddleEle(head);

//     return 0 ;
// }

// Print middle of the linked list (O(1))

// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void MiddleEle(node *head)
// {
//     if (head == NULL)
//         return;
//     node *slow = head , *fast = head ;
//     while( fast != NULL && fast->next !=NULL)
//     {
//         slow = slow->next ;
//         fast =fast->next->next ;
//     }
//     cout<< slow->data ;
// }
// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     // head->next->next->next->next->next = new node(60);

//     MiddleEle(head);

//     return 0 ;
// }


// 1st Method -> Find Kth node from end of linked list (O(n))
// #include<bits/stdc++.h>
// using namespace std ;
// struct node
// {
//     int data ;
//     node *next;
//     node(int key)
//     {
//         data = key ;
//         next = NULL;
//     }
// };
// void KthElem(node *head , int k)
// {
//     if(head == NULL)
//         return;
//     int count = 0 ;
//     node *curr = head ;
//     for( curr ; curr!=NULL ; curr = curr->next)
//             count++ ;
//     if(count < k)
//         return;
//     curr = head ;
//     for(int i=1;i<(count-k+1);i++)
//         curr = curr->next ;
//     cout<< curr->data;
// }
// int main()
// {
//     int k;
//     cout<<"Enter the kth Elements ";
//     cin>> k ;
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);
//     KthElem(head , k);
//     return 0 ;
// }


// Reverse Linked List

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data ;
//     node *next ;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// node *Reverse(node *head)
// {
//     vector<int> arr;

//     for(node *curr = head ; curr !=NULL;curr=curr->next)
//         arr.push_back(curr->data);
//     for(node *curr = head ;curr!=NULL;curr=curr->next)
//     {
//         curr->data = arr.back();
//         arr.pop_back() ;
//     }
//     for(node *curr = head ;curr!=NULL;curr=curr->next)
//     {
//        cout<< curr->data <<" " ;
//     }
// }
// int main()
// {

//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     head->next->next->next->next = new node(50);
//     head->next->next->next->next->next = new node(60);

//     Reverse(head);

//     return 0 ;
// }

// Remove Duplicates From the Sorted Linked List

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// node *RmDuplicate(node *head)
// {
//     node *curr = head;
//     while (curr != NULL && curr->next != NULL)
//     {
//         if (curr->data == curr->next->data)
//         {
//             node *temp = curr->next;
//             curr->next = curr->next->next;
//             delete temp;
//         }
//         else
//             curr = curr->next;
//     }
//     return head;
// }
// void Print(node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     cout << head->data << " ";
//     for (node *P = head->next; P != head; P = P->next)
//         cout << P->data << " ";
// }

// int main()
// {
//     node *head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(20);
//     head->next->next->next = new node(30);
//     head->next->next->next->next = new node(30);
//     head->next->next->next->next->next = new node(30);

//     head = RmDuplicate(head);
//     Print(head);

//     return 0 ;
// }


// Intersection point of two linked list -- method 1

// #include<bits/stdc++.h>
// using namespace std ;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// int intersection(node *head1 , node *head2)
// {
//     unordered_set< int > s ;

//     for(node *curr = head1 ; curr != NULL;curr = curr->next)
//         s.insert(curr->data);
//     for(node *curr1 = head2 ; curr1 != NULL ; curr1 = curr1->next)
//         {
//             if(s.find(curr1->data) != s.end())
//                 return (curr1->data);
//         }
// }

// int main()
// {
//     int res ;

//     node *head1 = new node(5);
//     head1->next = new node(8);
//     head1->next->next = new node(7);
//     head1->next->next->next = new node(10);
//     head1->next->next->next->next = new node(12);
//     head1->next->next->next->next->next = new node(15);

//     node *head2 = new node(9);
//     head2->next = new node(10);
//     head2->next->next = new node(12);
//     head2->next->next->next = new node(15);

//     res = intersection(head1 , head2);

//     cout<< res ;

//     return 0 ;

// }

// Intersection point of two linked list -- method 2

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };
// int intersection(node *head1, node *head2)
// {
//     int c1, c2 = 0;
//     int c3;
//     for (node *curr1 = head1; curr1 != NULL; curr1 = curr1->next)
//         c1++;
//     for (node *curr2 = head2; curr2 != NULL; curr2 = curr2->next)
//         c2++;

//     c3 = abs(c2-c1);
//     int mov = 0;
//     node *curr1 = head1;
//     while (mov != c3)
//     {
//         curr1 = curr1->next;
//         mov++;
//     }
//     node *curr2 = head2;

//     while (curr1 != NULL && curr2 != NULL)
//     {
//         if (curr1 == curr2)
//             return (curr1->data);
//         curr1 = curr1->next;
//         curr2 = curr2->next;
//     }
//     return -1 ;
// }

// int main()
// {
//     int res;

//     node *head1 = new node(5);
//     head1->next = new node(8);
//     head1->next->next = new node(7);
//     head1->next->next->next = new node(10);
//     head1->next->next->next->next = new node(12);
//     head1->next->next->next->next->next = new node(15);

//     node *head2 = new node(9);
//     head2->next = new node(10);
//     head2->next->next = new node(12);
//     head2->next->next->next = new node(15);

//     res = intersection(head1, head2);

//     cout << res;

//     return 0;
// }

// Delete a Node with only pointer given to it

// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;

//     node(int key)
//     {
//         data = key;
//         next = NULL;
//     }
// };

// void DelPointer(node *ptr)
// {
//     node *temp = ptr->next;
//     ptr->data = temp->data;
//     ptr->next = temp->next;

//     delete temp;
// }

// int main()
// {

//     node *head1 = new node(5);
//     head1->next = new node(8);
//     head1->next->next = new node(7);
//     head1->next->next->next = new node(10);
//     head1->next->next->next->next = new node(12);
//     head1->next->next->next->next->next = new node(15);

//     node *ptr = head1->next->next->next->next;

//     DelPointer(ptr);

//     for (node *curr = head1; curr != NULL; curr = curr->next)
//         cout << curr->data << " ";

//     return 0;
// }

#include<iostream>
using namespace std ;

int main(){
    cout<<"Jitesh Verma";
}
