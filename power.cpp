#include <iostream>
#include <string>

int power(int base, int exponent){
    int multiplication = 1;
    for(int i=0; i<exponent; i++){
        multiplication*=base;
    }
    
    return multiplication;
    
}

int main()
{
  int a;
  std::cout << "Please enter an integer value: ";
  std::cin >> a;
  int b;
  std::cout << "Please enter an integer value: ";
  std::cin >> b;
  int result = power(a,b);
  std::cout << result;
  return 0;
}
