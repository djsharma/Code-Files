#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>         // std::vector
//#include <functional>     // std::greater

using namespace std;

class mycomparison
{
  //bool reverse;
public:
  
  bool operator() (const int& lhs, const int&rhs) const
  {
     return (lhs<rhs);
  }
  
};



int main ()
{
  
  // using mycomparison:
  typedef priority_queue<int,vector<int>,mycomparison> mypq_type;

  mypq_type fourth;                       // less-than comparison
  fourth.push(20);
  fourth.push(120);
  fourth.push(210);
  fourth.push(10);
  
  cout<<fourth.top()<<endl;
  //mypq_type fifth (mycomparison(true));   // greater-than comparison

  return 0;
}
