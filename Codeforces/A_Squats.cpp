#include <bits/stdc++.h>
using namespace std;
const int MAX_ARRAY = 1000000;

// #define MULTIPLE 1

void solve() {
  int n, m;
  std::string str;
  cin >> n >> str;
  int up{}, down{};
  for (const auto ch : str) {
    ch == 'X' ? ++up : ++down;
  }
  int i = 0, cnt{};
  while (up != down) {
    str[i] == 'x' && down > up ? str[i] = 'X', --down, ++up, ++cnt : 0;
    str[i] == 'X' && up > down ? str[i] = 'x', ++down, --up, ++cnt : 0;
    i++;
  }
  cout << cnt << endl;
  cout << str << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  cout.tie(nullptr);

  int tests{1};
#ifdef MULTIPLE
  cin >> tests;
#endif
  while (tests--) {
    solve();
  }
  return 0;
}