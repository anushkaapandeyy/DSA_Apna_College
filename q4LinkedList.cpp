//delete without head nodes
#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int data;
      ListNode *next;
      ListNode() : data(0), next(nullptr) {}
      ListNode(int x) : data(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : data(x), next(next) {}
};

//pushing in the front
/*
void push(ListNode** head,int new_data)
{
	ListNode* new_node =new ListNode();
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
}
*/
//pushing from back
void append(ListNode** head,int new_data)
{
	ListNode* new_node = new ListNode();
	ListNode* last = *head;
	new_node->data = new_data;
	new_node->next = NULL;
	if(*head == NULL)
	{
		*head = new_node;
		return;
	}
	while(last->next!= NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return;
}

void reverse(ListNode** head)
{
	ListNode* curr = *head;
	ListNode* prev = NULL,*next = NULL;
	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
}
void printList(ListNode* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
int n,k;
cin>>n;
ListNode* head = NULL;
for(int i=0;i<n;i++)
{
	cin>>k;
	append(&head,k);
}
reverse(&head);
printList(head);
}