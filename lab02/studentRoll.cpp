#include <string>
#include "studentRoll.h"

StudentRoll::StudentRoll() {
  head = tail = NULL;
}

void StudentRoll::insertAtTail(const Student &s) {
  Node *temp = new Node;
  temp->s = new Student(s);
  temp->next = NULL;
  if (head == NULL){
    head = tail = temp;
  }else{
    tail->next=temp;
    tail = temp;
  }
  temp = NULL;
}

std::string StudentRoll::toString() const {
  std::string result = "[";
  Node *temp = head;
  while(temp!=NULL){
    result+=temp->s->toString();
    if (temp != tail) 
      result+= ",";
    temp = temp->next;
  }
  result+="]";
  return result;
}

StudentRoll::StudentRoll(const StudentRoll &orig) {
  head = tail = NULL;
  Node *temp = orig.head;
  while (temp!=NULL){
    this->insertAtTail(*(temp->s));
    temp=temp->next;
  }
}

StudentRoll::~StudentRoll() {
  Node *temp = head;
  while(temp!=NULL){
    Node *tempNext = temp->next;
    delete temp->s;
    delete temp;
    temp = tempNext;
  }
  head = NULL;
}

StudentRoll & StudentRoll::operator =(const StudentRoll &right ) {
  // The next two lines are standard, and you should keep them.
  // They avoid problems with self-assignment where you might free up
  // memory before you copy from it.  (e.g. x = x)
  if (&right == this)
    return (*this);
  // TODO... Here is where there is code missing that you need to
  // fill in...
  Node *temp = head;
  while(temp!=NULL){
    Node *tempNext = temp->next;
    delete temp->s;
    delete temp;
    temp = tempNext;
  }
  head = NULL;

  Node* copy = right.head;
  while (copy!=NULL){
    this->insertAtTail(*(copy->s));
    copy=copy->next;
  }
  // KEEP THE CODE BELOW THIS LINE
  // Overloaded = should end with this line, despite what the textbook says.
  return (*this);
}
