#include <iostream>
using namespace std;
void reacHome(int src,int dest)
{
    //base case
    cout<<"started from "<<src<<endl;
    if(src==dest)
{
    cout<<"reached home"<<endl;
}
//recursive case

else{
    
    cout<<"going to "<<src+1<<endl;
    reacHome(src+1,dest);
}
}
int main()
{
    int src=1;
    int dest=10;
    reacHome(src,dest);
    
}
