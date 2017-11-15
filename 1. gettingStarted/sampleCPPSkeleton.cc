#include <iostream>
#include <cmath> // you can either include C libraries by adding the "c" prefix ...
#include <stdio.h> // or using the normal c include.
// Add more Libraries here if needed.

using namespace std;
// add more namespaces here if needed
int main(void){
    freopen("file.in", "r", stdin); // getting input from the file.in, and put it in stdin (no need to change scanf or cin)
    
    double n; cin >> n; // get the value of n from Stdin
    cout << sqrt(n) << endl; // outputs the square root of n
    return 0;
}