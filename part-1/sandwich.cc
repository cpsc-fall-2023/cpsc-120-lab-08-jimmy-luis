// Luis Martinez
// luiangelmart@csu.fullerton.edu
// @luiangelmart
// Partners: @Utheg1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
  vector<string> arguments{argv, argv + argc};
  int expect_input{4};
  if (arguments.size() != expect_input) {
    cout << "error: you must supply three arguments\n";
    return 1;
  }
  string protein{arguments.at(1)};
  string bread{arguments.at(2)};
  string condiment{arguments.at(3)};
  cout << "Your order: A " << protein << " sandwich on " << bread << " with "
       << condiment << "\n";
  return 0;
}