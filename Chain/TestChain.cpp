#include <cstdlib>
#include "Chain.h"
using namespace std;

Chain GetChain() {
  Chain new_chain;
    
  // Generates a Chain with a random size between 1-10
  // Generates random numbers to fill in the array
  for (int i = 0; i < rand()% 10 + 1; i++) {
    new_chain.PushBack(rand()& 101);
  } // end for
  return new_chain;
} // end GetChain()

int main() {
  srand(time(NULL)); // needed for the use of rand
    
  Chain a,b,c;
  cout << "Chains a, b, c have been created." << endl;
  cout << "Is Chain a empty?: " << a.IsEmpty() << endl;
  cout << "Is Chain b empty?: " << b.IsEmpty() << endl;
  cout << "Is Chain c empty?: " << c.IsEmpty() << endl << endl;
    
  Chain d{10};
  cout << "Chain d: " << d << endl;
    
  cout << "Length of a: " << a.GetSize() << endl;
  cout << "Please enter a Chain for Chain a within brackets [] (ex. [a b c]): ";
  cin >> a;
  cout << "Chain a: " << a << endl;
    
  cout << "Please enter a Chain for Chain b within brackets [] (ex. [a b c d]): ";
  cin >> b;
  cout << "Chain b: " << b << endl;
    
  c = a;
  cout << "Chain c: " << c << endl;
    
  cout << "Chain a+b: " << a + b << endl;
    
  cout << "Chain a+5: " << a + 5 << endl;
    
  Chain e{c};
  cout << "Chain e: " << e << endl;
    
  cout << "a[1]: " << a[1] << endl;
    
  c[1] = 100;
  cout << endl << "Chain c: " << c << endl;
    
  cout << "Chain e: " << e << endl;
    
  Chain f = GetChain();
  cout << "f: " << f << endl;
    
  return 0;
}
