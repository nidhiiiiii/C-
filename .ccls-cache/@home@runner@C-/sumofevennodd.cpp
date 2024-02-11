#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int oddsum = 0, evensum = 0;
  while (n > 0) {
    int last = n % 10;
    if (last % 2 == 0) {
      evensum += last;
    } else {
      oddsum += last;
    }
    n = n / 10;
  }
  cout << evensum << " " << oddsum;
}
// #include <iostream>
// using namespace std;

// int main() {
//   int oddSum = 0, evenSum = 0;
//   int n;
//   cin >> n;
//   while (n > 0) {
//     int last = n % 10;
//     cout << last << endl;
//     if (last % 2 == 0) {
//       evenSum += last;
//     } else {
//       oddSum += last;
//     }
//     n = n / 10;
//   }
//   cout << evenSum << " " << oddSum;
// }