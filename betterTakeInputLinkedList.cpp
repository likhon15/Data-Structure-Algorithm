#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
  int data;
  Node* next;
  Node(int data) {
   this -> data = data;
   next = NULL;
  }
};


Node* takeInput_better(){
  int data;
  cin >> data;
  Node* head = NULL;
  Node* tail = NULL;
  while(data != -1) {
     Node* newNode = new Node(data);
     if(head == NULL){
       head=newNode;
       tail=newNode;
     }else{
       tail->next = newNode;
       tail = tail->next;
     }
   cin >> data;
  }
  return head;
}

// printingLinkedList
void print(Node* head) {
    cout << head -> data;
    head = head -> next;
  while(head != NULL) {
    cout << "->" << head -> data;
    head = head -> next;
  }
}

int main() {

 Node* head = takeInput_better();
 print(head);

}
