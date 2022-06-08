// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ptr1 = head1, *ptr2 = head2;
    unordered_set<int> s;
    while(ptr2){
        s.insert(ptr2->data);
        ptr2 = ptr2->next;
    }
    
    Node* list = new Node(-1);
    Node* head = list;
    
    while(ptr1){
        // find ptr1 data in set created by ptr2
        auto it = s.find(ptr1->data);
        if(it != s.end()){
            
            Node* temp = new Node(ptr1->data);
            list->next = temp;
            list = list->next;
        }    
         
         ptr1 = ptr1->next;   
    }    
          head = head->next;  
          return head;    
    
}