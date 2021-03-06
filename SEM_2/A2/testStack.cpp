/*
CH08-320143
a1_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#include <iostream>
#include "Stack.h"

using namespace std;

template <class T>
Stack<T>::Stack(int size) {
  this->size = size;
  this->count = 0;
  stack = new T[size];
}

template <class T>
Stack<T>::Stack() {
  this->size = 10;
  this->count = 0;
  stack = new T[size];
}

template <class T>
Stack<T>::Stack(const Stack& stack) {
  this->array = stack.arary;
  this->size = stack.size;
  this->count = count;
}

template <class T>
Stack<T>::~Stack() {
  delete[] stack;
}

template <class T>
bool Stack<T>::push(T element) {
  if (this->count > this->size-1)
    return false;
  
  stack[count] = element;
  (this->count)++;
  return true;
}

template <class T>
bool Stack<T>::pop(T& out) {
  if (this->count <= 0)
    return false;
  out = stack[count-1];
  (this->count)--;
  return true;
}

template<class T>
T Stack<T>::back(void) {
  return stack[count-1];
}

template<class T>
int Stack<T>::getNumEntries() {
  return (this->count);
}

// Resize function
template<class T>
void Stack<T>::resize(int size) {
  // New array of size: size
  T *new_stack = new T[size];

  int index = 0;
  // Index of our last element of new stack
  if (size < this->count)
    index = size;
  else
    index = this->count;

  // Index of the last element of previous stack
  int old_index = this->count;
  // Update count
  this->count = index;

  // Copy the elements
  for (int i = index; i > 0; i--) {
    new_stack[i-1] = this->stack[old_index-1];
    old_index--;
  }

  // Update size
  this->size = size;
  // Update stack
  this->stack = new_stack;

  delete[] new_stack;
}

template <class T>
int Stack<T>::getSize(){
  return this->size;
}

int main() {
  Stack <int>stack;

  int counter = 0;
  // Push until true
  while (stack.push(counter+5)){counter++;};

  // Print current element and total entries
  cout << "Back: " << stack.back() << endl
       << "GetNumEntries: "<< stack.getNumEntries() << endl;

  int out;
  // Pop until true
  while (stack.pop(out)){
    cout << "Popping " << out << endl;
  }  

  // New stack of strings
  Stack <string>fruits(3);
  fruits.push("apple");
  fruits.push("orange");
  fruits.push("watermelon");
 
  // Returns false (0)
  cout << fruits.push("pineapple") << endl;
 
  fruits.resize(5);
 
  // Returns true (1)
  cout << fruits.push("Pineapple") << endl;
  // Still true
  cout << fruits.push("Kiwi") << endl;
  // False now
  cout << fruits.push("Another apple") << endl;
 
  // Resizing again!
  fruits.resize(2);
  string str_out;
 
  // Prints kiwi then pineapple:
  // It prevents our latest data incase resize < count
  fruits.pop(str_out);
  cout << str_out << endl;
  fruits.pop(str_out);
  cout << str_out << endl;
  
  // Size
  cout << fruits.getSize() << endl;
  
  
  return 0;
}
