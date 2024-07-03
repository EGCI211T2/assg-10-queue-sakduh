
#ifndef queue_h
#define queue_h
#include "Node.h"
#include <cstring>
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
  if(new_node){ 
    if(size==0){
      headPtr=new_node;
    }  
    else{
      tailPtr->set_next(new_node);
    } 
      tailPtr=new_node;
      size++;


    /* Add head and tail for me please 
  1. connect & Change tail
  2. (may be) change head  when the queue is empty
  3. increase size*/
	
 }
}

int Queue::dequeue(){
  if(headPtr!=NULL){
     NodePtr t=headPtr;
     int value= t->get_value();
     if(size==1){
      tailPtr=NULL;
     }
     /* Add head and tail for me please */
     headPtr = headPtr->get_next();
        if (headPtr == nullptr) {
            tailPtr = nullptr;
        }
     delete t;
     --size;

     return value;
  }
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
    //initialize Queue
    headPtr = nullptr;
    tailPtr = nullptr;
    size=0;
}
Queue::~Queue(){
    //delete all remaning Queue (i.e. DQ all) 
    
    cout<<"clearing queue.."<<endl;
    while(size>0) dequeue();
}


#endif
