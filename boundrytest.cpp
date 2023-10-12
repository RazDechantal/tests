#include <iostream>
#include <vector>
int main()
{
  int list[] = {1, 2, 3};

  // boundary problems
  for (int i = 0; i < 4; ++i)
  {
    list[i] = 99;
  }
}