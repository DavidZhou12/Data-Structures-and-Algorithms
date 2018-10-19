#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>

class Chain
{
public:
  Chain(); // Default constructor
  Chain(const int& an_item); // One Parameter Constructor
  Chain(const Chain& a_chain); // Copy constructor
  virtual ~Chain(); // Destructor should be virtual.
    
  // Overloads the operator= for Chain
  // @returns right_hand_side if the array is the same.
  Chain& operator=(const Chain& right_hand_side); // Copy assignment operator
    
  // Overloads the operator+ for Chain
  // creates a new_chain to contain the addition of the current Chain and the right_hand_side Chain
  // @returns the right_hand_side Chain if the current Chain is empty
  // @returns the new_chain
  Chain operator+(const Chain& right_hand_side) const;
    
  // Overloads the const operator[]
  const int& operator[](const int index) const;
    
  // Overloads the operator[]
  int& operator[](const int index);
    
  // friend function to overload the << operator for Chain
  friend std::ostream& operator<<(std::iostream& out_stream, const Chain& output_chain);
    
  // friend function to overload the >> operator for Chain
  friend std::istream& operator>>(std::istream& in_stream, Chain& input_chain);

  int GetSize() const; // Returns current size_ of the Chain
  int GetMaxSize() const; // Returns maximum_size_ of the Chain
  bool IsEmpty() const; // Determines whether the Chain is empty or not
    
  // Adds an_entry to the last index where size_ points to.
  // This function uses the ResizeHelper() private function to accmodate situations
  // where more space is needed in the array's maximum_size_
  void PushBack(const int& an_entry);
private:
  int size_; // current size of the Chain
  int maximum_size_; // maximum size of the Chain
  int *dynamic_array_; // Dynamic Array of the Chain
    
  // Resizes the maximum size to accomodate larger sizes
  // If more space is needed in the maximum array, the array will be moved to a new array
  // with a maximum_size_ of twice the size of the previous array.
  void ResizeHelper();
};

#include "Chain.cpp"

#endif // CHAIN_H
