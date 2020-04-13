#include<bits/stdc++.h>
using namespace std;
struct tnode
{
	tnode *l;
	int length;
	tnode *r;	
};
struct list1{
	tnode *root;
	list1 *next;}*start=NULL,*end=NULL,*m,*temp;
void getnode(){
	m=new list1;
	m->root=new tnode;
	cout<<"enter the element"<<endl;
	cin>>m->root->length;
	m->root->l=NULL;
	m->root->r=NULL;
	m->next=NULL;
}
void insertatfirst(){
	m->next=start;
	start=m;
}
void insertatend(){
	end->next=m;
	end=m;
}
void insertatpos(){
	temp=start;
	while(temp->next->root->length<m->root->length){
		temp=temp->next;
	}
	m->next=temp->next;
	temp->next=m;
}
void insert(){
	if(start=NULL){
	start=m;
	end=m;}
	else if(m->root->length<=start->root->length)
	insertatfirst();
	else if(m->root->length>=end->root->length)
	insertatend();
	else
	insertatpos();
}
tnode *Least(tnode *temp){
	if(start==end){
	start=NULL;
	end=NULL;}
	else{
		start=start->next;}
		return temp;
	
}
int main()
{
	int n;
	cout<<"enter number of files"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		getnode();
		insert();
	}
	int sum=0;
	for(int i=1;i<n;i++){
		list1 *newm=new list1;
		newm->root=new tnode;
		newm->root->l=Least(start->root);
		newm->root->r=Least(start->root);
		newm->root->length=newm->root->l->length+newm->root->r->length;
		sum+=newm->root->length;
		m=newm;
		insert();
	}
	cout<<"result="<<sum<<endl;
return 0;
}
