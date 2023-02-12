#include <iostream>

using namespace std;

int main()
{
   string s1="mandeep";
   string s2="ramandeep singh";
   // 1 length or size
   int x=s1.length();
   cout<<x<<endl;//7
   x=s2.size();
   cout<<x;//15
   //2 substring
   string s3=s1.substr(1,3);
   cout<<endl<<s3;//and
   s3=s1.substr(2);
   cout<<endl<<s3;//ndeep
   //Inserting
   s1.insert(3,s2);
   cout<<endl<<s1;//manramandeep singh
   //Replace
   s1.replace(2,2,s2);
   cout<<endl<<s1;//maramandeep singhamandeep singhdeep
   //Erasing
   s1.erase(0,4);
   cout<<endl<<s1;//mandeep singhamandeep singhdeep
   s1.erase(3);
   cout<<endl<<s1;//man
   //Clear
   s1.clear();
   cout<<endl<<s1;//all erase
   //empty
   int y=s1.empty();//true =1 false =0
   cout<<endl<<y;
}

