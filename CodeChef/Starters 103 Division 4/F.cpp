// Wrong answer on last test case //


#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <cmath>

bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}

int longestSquarifiedSubsequence(std::vector<int>& A) {
    int N = A.size();
    std::vector<int> dp(N, 1);  

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            long long product = 1LL * A[i] * A[j];
            if (isPerfectSquare(product)) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }

    int max_length = 0; 
    for (int i = 0; i < N; i++) {
        max_length = std::max(max_length, dp[i]);
    }

    return max_length;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N;
        std::cin >> N;
        std::vector<int> A(N);

        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }

        int longestLength = longestSquarifiedSubsequence(A);
        std::cout << longestLength << std::endl;
    }

    return 0;
}
