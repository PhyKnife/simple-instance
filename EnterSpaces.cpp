#include <iostream>
using namespace std;
int main()
{ 
char buf[5][100];
 int i; 
for(i=0;i<5;i++)
 cin.getline(buf[i],100);
 cout << "cout：" << endl; 
for(i=0;i<5;i++) 
cout << buf[i] << endl;
 return 0;
}
