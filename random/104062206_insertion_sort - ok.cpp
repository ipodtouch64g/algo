#include <iostream>
#include <fstream>

using namespace std;



int main(){
  char filename[] = "input.txt";
  char filenameout[] = "output.txt";
  ifstream fp;
  ofstream fpo;
  fp.open(filename, ios::in);
  fpo.open(filenameout,ios::out);

  int size=0,o=0;
  fp>>size;
  int *arr = new int[size];
  fp>>o;

  for(int a=0;a<size;a++)
    fp>>arr[a];

  for(int i=1;i<size;i++)
  {
    int tmp=arr[i],j=0;
    for(j=i;j>0 && tmp < arr[j-1] ;j--)
      arr[j] = arr[j-1];
    arr[j] = tmp;
  }

  cout<<arr[o-1];
  fpo<<arr[o-1];
  fp.close();
  fpo.close();
  return 0;

}
