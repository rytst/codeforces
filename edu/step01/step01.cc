#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;

  s += '$';

  size_t len = s.length();
  cout << s.length() << endl;

  vector<size_t> p;
  vector<size_t> c;

  for (size_t i = 0; i < len; i++) {
    p.push_back(i);
    c.push_back(i);
  }

  cout << s << endl << p.size() << c.size() << endl;
  return 0;
}
