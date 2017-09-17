#include <iostream>
#include <fstream>
#include <cmath>
#include <deque>
using namespace std;




int main(){
  unsigned long long a;
  deque<unsigned long long> factor;
  ifstream input;
  ofstream output;
  input.open("input.txt",ios::in);
  output.open("output.txt",ios::out);
  input>>a;
  unsigned long long root_of_a = sqrt(a);
  for(unsigned long long i=2;i<=root_of_a;i++)
  {
    if(a%i==0)
     factor.push_back(i);
  }

  if(factor.empty())
    output<<"T"<<endl;
  else
    output<<"F"<<endl;

  factor.push_front(1);



  if(a%root_of_a==0)
  {
    for(deque<unsigned long long>::reverse_iterator rit=(++factor.rbegin()); rit!=factor.rend(); ++rit)
      factor.push_back(a/(*rit));
  }
  else
  {
    for(deque<unsigned long long>::reverse_iterator rit=factor.rbegin(); rit!=factor.rend(); ++rit)
      factor.push_back(a/(*rit));
  }



  for(long long i=0;i<(factor.size()-1);i++)
    output<<factor[i]<<" ";
  output<<factor[factor.size()-1]<<endl;
}
