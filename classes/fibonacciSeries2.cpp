#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter the value of N: ";
  cin >> n;

  int t1 = 0;
  int t2 = 1; 
  int nextTerm = 0;

  for(int i = 1; i <= n; ++i) {
    if(i == 1) {
      cout << t1 << ", ";
      continue;
    }
    if(i == 2) {
      cout << t2 << ", ";
      continue;
    }

    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
    
    cout << nextTerm << ", ";
  }

  return 0;
}