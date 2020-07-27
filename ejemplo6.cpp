#include <iostream>
#include <thread>

using namespace std;

struct container {
  int var;
};

void setX(container& cont)
{
  cont.var = 3;
}

int main()
{
  container num;
  thread t1(setX, num);

  t1.join();

  cout << num.var;
}