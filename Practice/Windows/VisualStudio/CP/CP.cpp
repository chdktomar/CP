#if defined(_MSC_VER)
#include <__msvc_all_public_headers.hpp>
#elif defined(__GNUC__)
#include <bits/stdc++.h>
#else
#error "Unsupported compiler"
#endif

using namespace std;
const int MAX_ARRAY = 1000000;

// #define ONLINE_JUDGE
#define MULTIPLE 1

template <typename T>
void print(const T& cont) {
    cout << "[";
    for(const auto& in : cont) {
        cout << in << ", ";
    }
    cout << "]\n";
}

uint64_t getMS() {
    auto time = std::chrono::high_resolution_clock::now().time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(time).count();
}

inline void solve(const int testCase) {
    std::string str;
    cin >> str;

    int cnt0{}, cnt1{};
    for(auto ch : str) {
        ch == '0' ? ++cnt0 : ++cnt1;
    }
    cnt0 = min(cnt0, cnt1);
    std::cout << (cnt0 & 1 ? "DA" : "NET") << std::endl;
}

int main() {
    /* #ifndef ONLINE_JUDGE
        auto read = freopen("Input.txt", "r", stdin);
        auto write = freopen("Output.txt", "w", stdout);
    #endif
    */

    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout.tie(nullptr);

    int tests{ 1 };
#ifdef MULTIPLE
    cin >> tests;
#endif
    int testCount{};
    while(testCount++ != tests) {
        solve(testCount);
    }
    return 0;
}