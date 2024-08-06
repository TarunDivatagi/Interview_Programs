//maximum possible sum of triplets
/*
You are given an array A which consists of N positive integers.
Find the maximum possible sum of triplets which are present in A

Input Format
The first line contains an integer, N, denoting the number of elements in A.
Each line i of the N subsequent lines (where 1 sis N) contains an integer describing A[i].

Sample Test Cases
Case 1
Input:145
Output 16
Explanation
Given N5, A [3, 7, 1, 4, 5].
The triplets can be of index 2, 4, 5 with a sum of A[2] A[4][5]-16.
*/
//    ** CODE **

#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the maximum possible sum of triplets
int maxTripletSum(std::vector<int>& A) {
    // Sort the array
    std::sort(A.begin(), A.end());

    // The maximum triplet sum will be the sum of the three largest numbers
    int N = A.size();
    return A[N-1] + A[N-2] + A[N-3];
}

int main() {
    int N;

    std::cout << "Input:\n";
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    int result = maxTripletSum(A);

    std::cout << "Output:\n" << result << std::endl;

    return 0;
}
