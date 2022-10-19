#include "stack.h"
#include <assert.h>


void initialize(stack* s){
  //implement initialize here
   
  s->head = NULL; //Initializes the stack, with a NULL element

}

void push(int x, stack* s){
    //implement push here

    node *top = s->head; //node top pointing at stack head

    node *push = (node*)malloc(sizeof(node)); //creates new element of size node
    push->data = x; //new element data x
    push->next = top; //the new elements "next" points at the top of the stack
    s->head = push; // the top is now the new element that was created

}

int pop(stack* s){
    // implement pop here
    assert(s->head != NULL);

    node *top = s->head; //node top pointing at stack head
    int popped_top = s->head->data; //the current tops data is saves as popped_top

    s->head = top->next; //the new top is set as the next element in the stack
    free(top); //the popped top is then freed
    
  return popped_top; //returns the value of the popped top
}

bool empty(stack* s)
{
  //implement empty here

  node *top = s->head; //sets the node top as stack head
  if(top != NULL){ //if the top of the stack isnt a NULL element
    return false; //then its not empty - returns false
  }
  else{
    return true; //else the stack is empty - return true
  }
}

bool full(stack* s) {
    //implement full here
    
    //the list cant be full as the list is dynamic


  return false;
}
