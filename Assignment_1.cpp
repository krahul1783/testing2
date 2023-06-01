#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node *left;
	Node *right;
	Node(int x){
		val=x;
		left=right=NULL;
	}
};



bool dls(Node *root,int value,int curr,int mx_index){
	if(root==NULL) 
		return false;
	if(curr==mx_index) 
		return false;
	
	bool l=dls(root->left,value,curr+1,mx_index);
	if(l) 
		return true;
	if(root->val == value) 
		return true;
	
	bool r=dls(root->right,value,curr+1,mx_index);
	if(r) 
		return true;
	return false;
}

bool bfs(Node *root, int value)
{
	queue<Node *> q;
    q.push(root);
    while (q.empty() == false) {
      Node *node = q.front();
      if(node->val == value)
      {
      	return true;
      }
	  else
      {
      	q.pop();
      }
      if (node->left != NULL)
         q.push(node->left);
      if (node->right != NULL)
         q.push(node->right);
   }

   return false;
}

int main(){

	Node *root=new Node (2);
	root->left=new Node (23);
	root->left->left=new Node(24);
	root->right=new Node(9);
	root->right->left=new Node(67);
	root->right->right=new Node(75);
	root->right->left->right=new Node(12);
	root->left->left->right=new Node(34);
	root->left->left->left=new Node(44);

	while(1)
	{
		cout << "1. BFS" << endl;
		cout << "2. DLS" << endl;

		int ch; 
		cout << "Enter your Choice: ";
		cin >> ch;
		if(ch == 1)
		{
			
			cout << "Enter the value to search: ";
			int value;
			cin >> value; 
			if(bfs(root, value))
			{
				cout << "Element Found" << endl;
			}

			else
			{
				cout << "Element Not found" << endl;
			}
		}

		else if(ch==2)
		{
			cout << "Enter the value to search: ";
			int value;
			cin >> value; 
			int limit;
			cout << "Enter the Limit: ";
			cin >> limit; 
			if(dls(root,value,0,limit)) 
				cout<<"Element Found"<<endl;
			else 
				cout<<"Element Not Found"<<endl;	
		}

		else
		{
			break;
		}

	}
}