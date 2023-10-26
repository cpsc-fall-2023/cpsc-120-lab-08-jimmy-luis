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
  if (arguments.size() < 2) {
    cout << "error: you must supply at least one number\n";
    return 1;
  }
  double avg{0};
  double sum{0};
  bool first{true};
  for (const string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double index{stod(argument)};
    sum += index;
    avg = sum / (argc - 1);
  }
  cout << "average = " << avg << "\n";
  return 0;
}