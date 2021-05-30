#include<bits/stdc++.h>
using namespace std;

// Define the error that you can tolerate
#define EPSILON 0.000001

bool areSame(double a, double b) {
   return fabs(a - b) < EPSILON;
}

int main() {
   double a = 1.005;
   double b = 1.006;
   cout << areSame(a, a);
   cout << areSame(a, b);
}