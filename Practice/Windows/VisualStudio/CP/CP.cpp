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
#define MULTIPLE

uint64_t getMS() {
    auto time = std::chrono::high_resolution_clock::now().time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(time).count();
}

void solve() {
    int64_t n, q;
    cin >> n >> q;

    std::vector<int> input(n);
    for(auto& in : input) {
        cin >> in;
    }

    int a, b;
    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        std::map<int, int> count;

        bool no = false;
        const auto mx = (b - a + 1) / 2;
        for(int j = a - 1; j < b; j++) {
            count[input[j]]++;
            if(count[input[j]] > mx) {
                cout << "NO" << endl;
                no = true;
                break;
            }
        }
        if(!no) {
            cout << "YES" << endl;
        }
    }
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
    while(tests--) {
        solve();
    }
    return 0;
}