#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  size_t n;
  string line;

  getline(cin, line);

  stringstream sstream(line);
  sstream >> n;

  size_t count = 0;
  for (size_t i = 0; i < n; i++) {
    getline(cin, line);

    istringstream is(line);

    string word;

    size_t j = 0;
    while (is >> word) {
      size_t num;
      stringstream sstream(word);
      sstream >> num;

      if (num == 1) j++;
    }
    if (j > 1) count++;
  }
  cout << count << endl;
  return 0;
}
