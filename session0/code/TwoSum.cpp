#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

// The reason it didn't work on leetcode is that sorting modifies indices, and
// we want to return the indices of the element that sum up to `target`
// But this is a correct solution overall
int main() {
  int arr[] = {5, 2, 3, 7, 8, 3};
  int n = 6;
  int target = 7;

  int i = 0, j = n - 1;

  sort(begin(arr), end(arr));

  while (i < j) {
    if (arr[i] + arr[j] == target) {
      cout << arr[i] << " " << arr[j] << endl;
      return 0;
    } else if (arr[i] + arr[j] > target)
      j--;
    else if (arr[i] + arr[j] < target)
      i++;
  }

  return 0;
}
