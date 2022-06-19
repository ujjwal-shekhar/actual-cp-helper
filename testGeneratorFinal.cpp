#include "jngen.h"

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
int main() 
{
      int flag;
      cin >> flag;

      srand(chrono::high_resolution_clock::now().time_since_epoch().count());
      int runs = 1;
      // cout << runs << '\n';
      while (runs--)
      {
            

            if (flag == 1)
            {
                  // n given, n limits given, array of n rand ints in bounds (also given)
                  int n_lower = 1, n_upper = 10, arr_lower = -30, arr_upper = 30;
                  int n = rnd.next(n_lower, n_upper);
                  cout << Array::random(n, arr_lower, arr_upper).printN().add1() << '\n';
            }
            else if (flag == 2)
            {
                  // n given, n limits given, array of n rand ints in bounds (also given) and all are unique
                  int n_lower = 1, n_upper = 10, arr_lower = -30, arr_upper = 30;
                  int n = rnd.next(n_lower, n_upper);
                  cout << Array::randomUnique(n, arr_lower, arr_upper).printN().add1() << '\n';
            }
            else if (flag == 3)
            {
                  // n given, n limits given, array of n rand ints in bounds (also given) and permutation
                  int n_lower = 1, n_upper = 10, arr_lower = -30, arr_upper = 30;
                  int n = rnd.next(n_lower, n_upper);
                  cout << Array::id(n).shuffled().printN().add1() << '\n';
            }
            else if (flag == 4)
            {
                  // n given, n limits given, array of n rand ints in bounds (also given) and non decreasing
                  int n_lower = 1, n_upper = 10, arr_lower = -30, arr_upper = 30;
                  int n = rnd.next(n_lower, n_upper); 
                  // cout << sort(Array::randomUnique(n, arr_lower, arr_upper).printN().add1()) << '\n';
            }
            else if (flag == 5)
            {
                  // n given, which is the size of string , generate  str [n]
                  int n_lower = 1, n_upper = 10;
                  int n = rnd.next(n_lower, n_upper);
                  string parseVal = "[a-z]{";
                  parseVal += to_string(n);
                  parseVal += "}";
                  cout << n << '\n';
                  cout << rnd.next(parseVal) << '\n';
            }
            else if (flag == 6)
            {
                  // n given, which is the size of string , generate  binary str [n]
                  int n_lower = 1, n_upper = 10;
                  int n = rnd.next(n_lower, n_upper);
                  string parseVal = "[0-1]{";
                  parseVal += to_string(n);
                  parseVal += "}";
                  cout << n << '\n';
                  cout << rnd.next(parseVal) << '\n';
            }
            else if (flag == 7)
            {
                  int n = abs(rng(16)) + 2;
                  cout << n << " ";

                  long long int UP_LIM = pow(10, n - 1);

                  long long int x = abs(rng(UP_LIM - 2)) + 1;
                  cout << abs(x) << "\n";
            }
            // Further functionality will be added later
      }

      return 0;
}
