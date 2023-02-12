//program to combine the data of 2 files from 1 file
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifiles1,ifiles2;
   ofstream ifilet;
   char fname1[100],fname2[100],fname3[100],ch;
   cout<<"Enter first file name";
  cin>>fname1;
   cout<<"Enter second file name";
  cin>>fname2;
   cout<<"Enter third file name";
  cin>>fname3;
  ifiles1.open(fname1);
  ifiles2.open(fname2);
  if(!ifiles1||!ifiles2)
  {
      cout<<"Error in the file";
      return 0;
  }
  ifilet.open(fname3);
  if(!ifilet)
  {
      cout<<"Error in the file";
      return 0;
  }
  while(ifiles1.eof()==0)
  {
      ifiles1>>ch;
      ifilet<<ch;
  }
  while(ifiles2.eof()==0)
  {
      ifiles2>>ch;
      ifilet<<ch;
  }
  cout<<"\n The two files are merged into"<<fname3<<"File successfully";
  ifiles1.close();
  ifiles2.close();
  ifilet.close();
  return 0;
}
