//Quicksort
//Quicksort is one of the most efficient sorting algorithms, and this makes of it one of the most used as well.

//Quicksort
//From the family of Exchange Sort Algorithms.
//Divide and conquer paradigm.
//Worst case complexity O(n²)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  sort(a.begin(),a.end());
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
