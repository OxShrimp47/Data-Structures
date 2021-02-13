
#ifndef StringQueue_h
#define StringQueue_h

#include <string>
using namespace std;
struct Link {
    // Provide your code here...
    string word;
    Link* next;
};

struct Queue {
    // Provide your code here...
     Link *f = NULL;
     Link *s= NULL;
     Link *t= NULL;
     
  
    
bool isEmpty() {
  return !f;
  }

void push( string x) {
 Link *nTop = new Link;
 nTop->word=x;
 
 if(!f==NULL){
     if(s==NULL){
         s=nTop;
     }
     else{
         s=f->next;
     s->next=t;
         if(s->next==NULL){
     
     t=nTop;
         }
         else{
             t->next=nTop;
     s->next=t;
         }
     }
     f->next=s;
 }
 else{
 f=nTop;
 }
 
}
string pop() {
    Link* pre;
 pre = f;
        f=f->next;
 
 return pre->word;
}
 
 string peek(){
 	return f->word;
 }
 
 

};

#endif
