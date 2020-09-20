#include <iostream>
using namespace std;


int main()
{
   int x = 10;
   //int y = 20;    
   int *xptr;
   //int *yptr; 
   xptr = &x;
   //yptr = &y; 
    
   cout<< &x<<endl;
   cout<< xptr<<endl;
    
   //cout<< &y<<endl;
   //cout<< yptr<<endl; 
   
   cout<< *(&x)<<endl;
   cout<< *(xptr)<<endl;
    
   //cout<< *(&y)<<endl;
   //cout<< *(yptr)<<endl;
    
   cout<< *(&xptr)<<endl;
   cout<< &(*xptr)<<endl;
    
   //cout<< *(&yptr)<<endl;
   //cout<< &(*yptr)<<endl;

return 0;    
}

out put:
0x7fffb3e5e364
0x7fffb3e5e364
10
10
0x7fffb3e5e364
0x7fffb3e5e364
