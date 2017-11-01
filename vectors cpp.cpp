#include<iostream>
#include<list>
using namespace std;
main()
{
list<int> first;
list<int> second;
first.assign(3,200);
second.assign(first.begin(),first.end());
int mylist[]={2,3,4};
first.assign(mylist,mylist+2);
cout<<first.size();
cout<<second.size();
}
