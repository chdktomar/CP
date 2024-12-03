#include <bits/stdc++.h>
using namespace std;
const int MAX_ARRAY = 1000000;

// #define MULTIPLE 1

void solve() {
  int n, m;
  cin >> n;
  std::map<int, int> count;
  int total{};
  for (int i = 0; i < n; i++) {
    cin >> m;
    count[m]++;
    total += m;
  }
  int x{}, y{}, temp{};
  for (auto [k, v] : count) {
    if (temp <= x && total >= y) {
      cout << v << endl;
      return;
    }
    temp += k;
    total -= k;
  }
  cout << 0 << endl;
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