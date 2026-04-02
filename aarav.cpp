#include<iostream>
using namespace std;
int main()
{
int col,row;
for(row=1;row<=5;row++)
      {
           for(col=1;col<=row-1;col++)
           {
            cout<<"  ";
           }
           for(col=1;col<=4;col++)
           {
            cout<<"*"<<" ";
           }
           cout<<endl;
}
}



