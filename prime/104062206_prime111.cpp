#include <iostream>
#include <fstream>
#include <cmath>
#include <deque>
using namespace std;



int main(){
  
  deque<unsigned long long> factor;
  ifstream input;
  ofstream output;
  input.open("input.txt",ios::in);
  output.open("output.txt",ios::out);
  //input>>a;

  for(unsigned long long a=2;a<18446744073709551615;a++)
  {
    unsigned long long root_of_a = sqrt(a);
	bool isPrime=true;
  for(unsigned long long i=2;i<=root_of_a;i++)
  {
    if(a%i==0)
	{
		isPrime=false;
		break;
	}
  }
	if(isPrime)
		output<<a<<" is Prime!!!!!";
 
    
  }


  
}
