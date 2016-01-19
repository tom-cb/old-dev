#include <iostream>
#include <string>
#include <cstring>

int eval(char* a, int* i)
{
  //std::cout << "index: " << *i << "\n";

  while (a[*i] == ' ')
    (*i)++;

  if (a[*i] == '+')
    { (*i)++; return eval(a, i) + eval(a, i); }

  if (a[*i] == '*')
    { (*i)++; return eval(a, i) * eval(a, i); }

  int x = 0;

  while ((a[*i] >= '0') && (a[*i] <= '9'))
  {
    x = 10*x + (a[*i]-'0');
    (*i)++;
    //std::cout << "eval'd value: " << x << "\n";
  }

  return x;
}


// Simple recursive method for calculating N!
int simpleFactorial(int N)
{
  if (N == 0) return 1;
  else
  return N*simpleFactorial(N-1);
}

// Prog 5.3 Euclid's Algorithm for calculation of GCD
int euclidGCD(int m, int n)
{
  if (n==0)
    return m;
  else
   return euclidGCD(n, m % n);
}



main (int argc, char* argv[])
{
  std::cout << "Recursion test\n";

  std::cout << "factorial 5: " << simpleFactorial(5) << "\n";

  std::cout << "euclid GCD of 27, 36: " << euclidGCD(36, 27) <<"\n";
  
  // Test prefix expression evaluation
  // Allocate a char array on heap to hold expression
  char* expr = new char[12]; 
  strcpy(expr, "* + 7 * * 4 6 + 8 9 5");

  int* index = new int;
  *index = 0;

  std::cout << "expression: " << expr << "\n";
  std::cout << "result: " << eval(expr, index) << "\n";
}

