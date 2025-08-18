#include<iostream>
#include<map>
using namespace std;
class node {
public:
int data;
node*next;
public:
node(int data){
    this->data=data;
    this->next=NULL;
}
};
void insertathead(node* &head, int d) {
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail( node* &tail, int d){
node* temp=new node(d);
tail->next=temp;
tail=temp;

}
void insertatmiddle(node* &head, node* &tail,int pos,int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
node* temp= head;
int cnt=1;
while(cnt<pos-1){
     temp=temp->next;
     cnt++;
}
if(temp->next==NULL){
    insertattail(tail,d);
    return;
}
node* inserttonode= new node(d);
 inserttonode->next=temp->next;
 temp->next=inserttonode;

}
void deletenode(int pos,node* &head){

}
void print(node* &head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

}


int main(){
    node* node1 = new node(6);
    node* head=node1;
    node* tail=node1;
    print(head);
    insertathead(head,7);
    print(head);
    insertathead(head,8);
    print(head);
    insertatmiddle(head,tail,2,5);
    print(head);
    insertattail(tail,9);
    print(head);
}    