/* TODO: write a function that takes a vector and searches for
 * a particular value x, returning true if and only if x is found. */
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool VectorSearch(int x, vector<int>Vector){
 for (size_t i = 0 ; i < Vector.size(); i++) {
   if(Vector[i] == x){
    cout << x << " was found inside VectorSearch" << endl;
    return true;
   }
 }
 cout << "not found" << endl;
 return false;
}

int main() {
  vector<int> V;
  for (int i = 0; i < 5; i++) {
    V.push_back(i); //  V = [0,1,2,3,4]
  }
  VectorSearch(2,V);
  return 0;
}