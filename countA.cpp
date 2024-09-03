#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  cout << "Escreva o texto: ";
  getline(cin, input);

  cout << endl;

  int count = 0;
  for (char ch : input) {
    if (ch == 'a' || ch == 'A') {
      count++;
    }
  }

  if (count > 0) {
    cout << "A letra 'a' aparece " << count << " vezes na string." << endl;
  } else {
    cout << "A letra 'a' não foi encontrada na string." << endl;
  }

  return 0;
}
