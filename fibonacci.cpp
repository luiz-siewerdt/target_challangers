#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <limits>

using namespace std;

bool isPerfectSquare(int x) {
  int square = sqrt(x);
  return square * square == x;
}

bool isFibonacci(int value) {
  int x1 = 5 * value * value + 4;
  int x2 = 5 * value * value - 4;
  return isPerfectSquare(x1) || isPerfectSquare(x2);
}

int main(int argc, char *args[]) {
  if (argc < 2) {
    cerr << "Passe um número como argumento" << endl;
    return 1;
  }

  char *end;
  int argValue = strtol(args[1], &end, 10);

  if (args[1] == end || argValue > numeric_limits<uint16_t>::max()) {
    cerr << "Passe um número válido como argumento" << endl;
    return 1;
  }

  bool foundedValue = isFibonacci(argValue);

  string message = foundedValue ? "valor pertence a fibonacci!"
                                : "valor não pertence a fibonacci";

  cout << message << endl;
  return 0;
}
