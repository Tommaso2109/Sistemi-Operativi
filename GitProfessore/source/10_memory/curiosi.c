#include <iostream>
using namespace std;

struct Flagge {
  uint8_t primo: 1;
  uint8_t secondo: 1;
  uint8_t terzo: 1;
};

int main() {
  Flagge f;
  cerr << "size of f: " << sizeof(f) << endl;
  f.terzo=1;
  f.secondo=3;
  cerr << "value: " << (int) *((char*) &f) << endl;
}
