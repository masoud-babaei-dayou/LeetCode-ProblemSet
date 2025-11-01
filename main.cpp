#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Merges two strings alternately, starting with word1.
 *
 * This function takes two input strings and combines them
 * by alternating their characters. If one string is longer,
 * the remaining characters are appended to the result.
 *
 * @param word1 The first input string.
 * @param word2 The second input string.
 * @return A merged string with alternating characters.
 *
 * @example
 * mergeAlternately("abc", "pqr") returns "apbqcr"
 * mergeAlternately("ab", "pqrs") returns "apbqrs"
 * mergeAlternately("abcd", "pq") returns "apbqcd"
 */
string mergeAlternately(string word1, string word2) {
    string merged = "";
    int n1 = word1.length();
    int n2 = word2.length();

    for (int i = 0; i < n1 || i < n2; i++) {
        if (i < n1) merged += word1[i];
        if (i < n2) merged += word2[i];
    }

    return merged;
}

/**
 * @brief Example usage of the mergeAlternately function.
 */
int main() {
    string word1 = "abc";
    string word2 = "pqr";
    cout << mergeAlternately(word1, word2);
    return 0;
}