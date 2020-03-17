#include <iostream>
#include <cstdlib>
using namespace std;

struct Node{
  int data;
  Node *next;
} *head;
int main(){

  Node *p, *temp;

  p = new Node;
  p -> data = 1;
  p -> next = NULL;

  head = p;
  temp = p;

  p = new Node;
  p -> data = 2;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 3;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 4;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  p = new Node;
  p -> data = 5;
  p -> next = NULL;
  temp -> next = p;
  temp = temp -> next;

  int inData, pos, k = 1;
  cin >> inData >> pos;

  if(pos == 1){
    p = new Node;
    p -> data = inData;
    p -> next = head;
    head = p;
  } else{
    temp = head;
    pos--;
    while(k < pos){
      temp = temp -> next;
      if(temp == NULL){
        cout << "Node is less than position\n";
        exit(1);
      }
      k++;
    }

    p = new Node;
    p -> data = inData;
    p -> next = temp -> next;
    temp -> next = p;
  }

  p = head;
  while(p != NULL){
    cout << p -> data << " ";
    p = p -> next;
  }

  return 0;
}