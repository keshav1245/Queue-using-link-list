
/* This file was first created on 16th September,2018 by Keshav Tangri
This is for educational purposes only.
This is for B.Tech Students who are or will be studying Data Structures in there curriculum
For queries mail me @ : tangri57@gmail.com
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
public:
Node* next;
int data;
};

class llist{
public:
Node* frnt;
llist(){
frnt =NULL;
}
Node* createnode(int val);
void insertele(int val);
void display();
void deleteatbeg();
};
int main(){
int i, value;
llist obj;
while(1){
cout<<"\n1.INSERT ELEMENT\n2.PRINTING(FOR DEMO PURPOSE)\n3.DELETE\n4.EXIT\nchoose : ";
cin>>i;
switch(i){
case 1:
cout<<"\n\nENTER VALUE\n\n";
cin>>value;
obj.insertele(value);
break;
case 2:
obj.display();
break;
case 3:
obj.deleteatbeg();
break;
case 4:
exit(0);
break;
}
}
}
//createnode
Node* llist::createnode(int val){
Node* temp = new Node;
temp->data = val;
return temp;
}

//insert element
void llist::insertele(int val){
if(frnt == NULL){
    Node* temp = createnode(val);
temp->next = frnt;
frnt = temp;
}else{
Node* temp = createnode(val);
Node* rear =frnt;
while(rear->next!=NULL){
rear=rear->next;
}
temp->next=NULL;
rear->next=temp;
}
}

//print
void llist::display(){
Node* rear = frnt;
if(frnt==NULL){
cout<<"\nEMPTY QUEUE !\n";
return;
}
while(rear!=NULL){
cout<<rear->data<<" ";
rear = rear->next;
}
cout<<"\n\n";
}
//delete at begin
void llist::deleteatbeg(){
if(frnt==NULL){
cout<<"\n\nUNDERFLOW\n\n";
return;
}
Node* fr;
fr = frnt;
frnt = frnt->next;
delete fr;
}
