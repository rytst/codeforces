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

  line = (n % 2) || n < 4 ? "NO" : "YES";
  cout << line << endl;
  return 0;
}
