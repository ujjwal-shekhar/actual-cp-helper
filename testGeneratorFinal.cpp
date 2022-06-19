#include "jngen.h"

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// If t is the number of test cases given then ignore

/*
#Ask for the number of initial inputs : 0,1,2,>2
## FOR 0 INITIAL INPUTS

"""
Ask wheter string or array is given :
IF string given :
      1. certain values only
      2. certain set of values only
      3. binary
      3. anything

IF array given : *
      1. permutation? *
      2. Increasing
      3. Non-decreasing
      4. Decreasing
      5. Non-Increasing
      6. distinct *
      7. certain values only
      8. certain set of values only
"""

# FOR >2 INITIAL INPUTS
"""
Ask for number of initial inputs + boundaries of each input -> create array and store
Ask for relative constraint if exist : apply array manipulation accordingly
IF first_int depicts length of array:
      1. Create array + apply manipulations
"""

# FOR 1 INITIAL INPUT
"""
Ask if array, or string or space speerated integers or nothing given
IF array given :
      1. Ask how many arrays given (absolute number/linear function of n : a*n +b) [by default a=1, b=0]
      2. Ask for array manipulation
IF string given :
      1. Ask how many strings given(absolute number/linear function of n : a*n + b) [bydefault a=1, b=0]
      2. Ask for string manipulation
IF space seperated integers given :
      IF all have same num of integers :
           1.Ask for number of integers in each line
           2.use array thingy.
           3. Number of such lines = number of such arrays
      IF have different (dependent on first integer) :
          #Ignoring for now
"""
 */
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
            else if (flag == 8)
            {
            }
            else if (flag == 9)
            {
            }
            else if (flag == 10)
            {
            }
            else if (flag == 11)
            {
            }
            else if (flag == 12)
            {
            }
            else if (flag == 13)
            {
            }
            else if (flag == 14)
            {
            }
            else if (flag == 15)
            {
            }
            else if (flag == 16)
            {
            }
      }

      return 0;
}