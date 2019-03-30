//BINARY SEARCH TREE
#include<iostream>
using namespace std;

//TO CREATE A CLASS OF NODE WITH FOLLOWING FEATURES
class Node{
//MAKING THE CLASS PUBLIC
		public:
			Node*left;
			Node*right;
			Node*parent;
			int data;
//THE NODE WILL HAVE THREE POMTERS AND A DATA PART
//A CONSTRUCTOR FUNCTION THAT WILL ADD DEFAULT VALUS
	Node(){	
			left=NULL;
			right=NULL;
			parent=NULL;
			data=value;
		}
};	     
//TO MAKE THE CLASS BST
//TO INSERT NODES IN THE SEARCH TREE
class bst{
//MAKING THE CLASS PUBLIC
		public:
//THE INSERT FUNCTION TO INSERT VALUES TO THE NODES
	void insert(int value){
//THWE INSERTION TO BE DONE INDIRECTLY BY ANOTHER FUNCTION INSERTHELPER
//CALLING THE INSERTHELPER FUNCTION PASSING THE ROOT AND VALUR 
						inserthelper(root,value);
                        }
	void inserthelper(Node*curr,int value){
//the condition arises that if the curr is null when there in no node at all in the tree
        if (curr==NULL){
            			curr=new Node(value);
//by this we are saynig that the new node that is created in the heap & having the add in the new kewword,we are storing the add to the curr
//thus the current now points to that node having the value we are given
//if the root also points to null we need to make it point to curr
			if (root==NULL){
							root=curr;
                           }
						}
		     if(value<curr->data){
//THEN MAKE A NEW NODE & STORE THE VALUE IN THAT NODE
								curre->left=new Node(value);
//BY THIS WE ARE SAYING THAT THE NEW NODE HAS BEEN CREATED WITH THAT VALUE GIVEN BY US THE ADD IS STORED IN THE CURR THAT ESTABLISHING A LINK BETWEEN THEM
//THUS MOVING THE VALUE TO THE LEFT IF IT IS SMALL THAN ROOT
		     if(value >curr->data){
   			curr->right=new Node(value);
//if the value is greater then move it to right and then establish the link
			}
         }
//THE FUNCTION TO SEARCH THE ADD OF THE NODE WITH A GIVEN VALUE
	Node*search	(int value){
//FOR THIS WE ADOPT AN INDIRECT METHOD BY CALLING ANOTHER FUNCTION & PASSING ROOT AS ARGUMENT WHO WITH THE GIVEN VALUE FINDS THE ADDRESS
							search2(root,value);
						   }
 		Node*search2(Node*curr,int value){
										 if((value<curr->data){
															 search2(curr->left);
                                                            }
//it means that the value is lss than root thus keep finding it at the left side
                                          if (value==curr->data){
                                                                      return curr;
                                                                     }
//if the cuee data is equal then give the address
                                          if(value>curr->data){
                                                               search2(curr->right);
                                                              }
  }
//the function to display the values in the node in orderly ( ascending order
//the prototype is to go to the left print then middle print & then to the right
     void display(){
//this is also to be done indirectly by another display2 function
//calling the display2 function while passing the argument root
                    display2(root);
                   }
     void display2(Node*curr){
//if the tree is empty then return nothing
                              if (curr==NULL){
                                              return;
                                             }
                              else {
                                     display2(current->left);
                                     cout << curr->data;
                                     display2(curr->right);
                                     return;
                                   }
//this is saynig that fing curr until it points to null then while returning print the value and go to the right of the curr
       }
//a function to find the minimum value of the nodes and give the address
	Node*getmin(Node*curr){
 //assign the curr value to thr root
                           Node*curr=root;
//if there were no nodr in the tree then return null   
                            if (curr==NULL){
                                            return NULL;
                                           }
                            else if (curr->left==null){
                                                       return curr;
                                                       }
//to move the curr to that point when it points to null
                            else {
//sine the minimum of the BST lies in the left side so we need to go to the left
                                  getmin(curr->left);
                                  }
   }
//a function to get the address of the maximum value node
	Node*getmax(Node*curr){
//since the maximum of the node will lie in the extreme right so need to move curr to that position
                           if (curr==NULL){
                                            return NULL;
                                           }
                            else if (curr->right==null){
                                                       return curr;
                                                       }
                             else {
                                   getmax(curr->right);
                                  }
         }
//to delete the nodes from the BInary search tree
//the three condition arises 
     void delet(int value){
//storing the address of the node in the temp
//calling the function search to find the address of the value to store it to temp
                           Node*temp=search(value);
//if it is a leaf node with no child then simply delete the add and make its parent to point to the null 
            if (temp->left==NULL && temp->right==NULL){
                                                      temp->parent=NULL;
                                                       delete temp;                           
                                                      }
//if the node has only one child 
//there will be two conditions whether it is having left child or right child
//if it has right child
		if (temp->left==NULL && temp->right!=NULL){
													temp->parent->right=temp->right;
//this is to make temp->parent to point towards the temp->right child & thereafter delete the node
													delete temp;
												  }
//if the node has only the left child the algorithm remains almost same
        if (temp->left=!NULL && temp->right==NULL){
													temp->parent->left=temp->left;	
                                                    delete temp;
                                                  }
//the most trickiest part is that to delete the node with two children
//replace right subtree minimum with the curr
			else if(temp->data > temp->parent->data){
				node*x=getMax(curr->left);
				temp->data=x->data;
			    x->parent->left=x->left;
				delete x;
			}
				
			else if(temp->data > temp->parent->data){
				node*x=getMax(curr->left);
				temp->data=x->data;
			    x->parent->left=x->left;
				delete x;
			}	
		} 
};
int main(){
	bst b1;
	b1.insert(5);
	b1.insert(3);
	b1.insert(7);
	b1.insert(4);
	b1.insert(6);
	b1.insert(9);
	b1.insert(8);
	b1.insert(13);
	b1.insert(2);
	b1.insert(10);
	b1.insert(14);
	b1.display();
    cout<<b1.Search(13);
	b1.delet(7);
	b1.display();
return 0;
}





































                                  }





                                        



























                                             


















				

        
	
