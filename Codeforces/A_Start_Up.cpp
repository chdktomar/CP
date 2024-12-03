#include <bits/stdc++.h>
using namespace std;
const int MAX_ARRAY = 1000000;

// #define MULTIPLE 1

void solve() {
  int n, m;
  std::string str;
  cin >> str;
  auto copy = str;
  std::reverse(copy.begin(), copy.end());
  if (str != copy) {
    cout << "NO" << endl;
    return;
  }
  const std::string allowedChars = "AHIMOTUVWXY";
  const auto ok = std::all_of(str.begin(), str.end(), [&](const char ch) {
    return std::any_of(allowedChars.begin(), allowedChars.end(),
                       [&](const char allow) { return allow == ch; });
  });

  cout << (ok ? "YES" : "NO") << endl;
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