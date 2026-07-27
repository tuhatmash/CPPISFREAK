#include <iostream>
using namespace std;
/*Сколько разрезов нужно сделать, чтобы разрезать круглый торт на N одинаковых по форме и размеру кусков?*/
int main() {
   int N;
   cin >> N;
   if (N % 2 == 0) {
      cout << N / 2 << endl;
   } else {
      cout << N << endl;
   }
   return 0;
}