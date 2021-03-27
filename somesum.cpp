#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int number;
  
  cin >> number;
  
  if(number%2 == 1){
      cout << "Either";
  }
  else if((number/2)%2 == 1){
      cout << "Odd";
  }
  else if((number/2)%2 == 0){
      cout << "Even";
  }
  
  return 0;
  
}