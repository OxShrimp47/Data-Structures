#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
    int data;
    char op;
    Link* next;
};

// Now define the Stack struct. It should be a stack of Links...

struct Stack{
    Link *Top = NULL;
  
    
bool isEmpty() {
  return !Top;
  }

void push(int x, char y) {
 Link *nTop = new Link;
 
 if(Top==NULL){
     nTop->data = x;
 nTop->op = y;
 nTop->next = NULL;
 Top =nTop;
 }
 else{
 nTop->data = x;
 nTop->op = y;
 nTop->next = Top;
 Top =nTop;
 }
}
Link* pop() {
 Link* pre = Top;
 Top = Top->next;

 return pre;
 
 
 
 
}
};

#endif