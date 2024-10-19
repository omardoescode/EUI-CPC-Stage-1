#include "timer.h"
#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;

int constant_order(int n) {
  int sum = n * 3;
  return sum;
}

bool check_if_power_of_two(int n) {
  if (n <= 0)
    return false;

  while (n > 1) {
    if (n % 2 == 1)
      return false;
    n /= 2;
  }
  return true;
}

bool hasPairWithSum(int n, int arr[], int target) {
  for (int left = 0, right = n - 1; left < right;) {
    int sum = arr[left] + arr[right];

    if (sum == target) {
      return true; // Pair found
    } else if (sum < target) {
      left++; // Move the left pointer to increase the sum
    } else {
      right--; // Move the right pointer to decrease the sum
    }
  }

  return false; // No pair found
}

bool linear_search(ll n, ll arr[], ll target) {
  for (ll k = 0; k < n; k++)
    if (arr[k] == target)
      return true;
  return false;
}

void bubble_sort(ll n, ll arr[]) {
  for (ll i = 0; i < n - 1; i++) {
    // Track if any swapping happens
    bool swapped = false;

    for (ll j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }

    // If no elements were swapped, break
    if (!swapped) {
      break;
    }
  }
}

void find_triplets(ll size, ll arr[], ll target) {
  // Flag to check if we found any triplet
  bool found = false;

  // Loop for the first element
  for (ll i = 0; i < size - 2; i++) {
    // Loop for the second element
    for (ll j = i + 1; j < size - 1; j++) {
      // Loop for the third element
      for (ll k = j + 1; k < size; k++) {
        // Check if the sum of the triplet equals the target
        if (arr[i] + arr[j] + arr[k] == target) {
          // cout << "Triplet found: (" << arr[i] << ", " << arr[j] << ", "
          //      << arr[k] << ")" << endl;
          found = true;
        }
      }
    }
  }
}
int main() {
  int option;
  cout << "0. O(1): Sum elements" << endl;
  cout << "1. O(n): Linear Search" << endl;
  cout << "2. O(n^2): Bubble Sort" << endl;
  cout << "3. O(n^3): Find Triplets" << endl;
  cout << "4. O(log n): Check if power of two" << endl;
  cout << "Option: ";
  cin >> option;

  if (option > 4) {
    cout << "Invalid option" << endl;
    return 1;
  }

  ll n, i;
  cout << "Enter n: ";
  cin >> n;
  i = n; // so we have to iterate over all list

  switch (option) {
  case 0: {
    timer t; // initalize a timer
    constant_order(n);
    t.Stop();
  }
  case 1: {
    ll arr[n];
    timer t; // initalize a timer
    linear_search(n, arr, i);
    t.Stop();
    break;
  }
  case 2: {
    ll arr[n];
    timer t; // initalize a timer
    bubble_sort(n, arr);
    t.Stop();
    break;
  }
  case 3: {
    ll arr[n];
    timer t; // initalize a timer
    find_triplets(n, arr, n * 3 + 1);
    t.Stop();
    break;
  }
  case 4: {
    timer t; // initailize the timer
    check_if_power_of_two(n);
    t.Stop();
    break;
  }
  default:
    cout << "Invalid Option" << endl;
  }

  return 0;
}
