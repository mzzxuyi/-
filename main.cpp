#include <iostream>
using namespace std;

int a=0;
int b=0;
int c=0;
int main()
{
   
    cout<<"请输入数字A"<<endl;
    cin>>a;
    cout<<"请输入数字B"<<endl;
    cin>>b;
    cout<<"请输入数字C"<<endl;
    cin>>c;
  
  
    if (a>=b)
    {
        if(a>c)
        {
             if( a == b )
             {
                cout<<"最大的数为A和B，大小为： "<<a<<endl;
             }
             else
             {
             cout<<"最大的数为A，大小为： "<<a<<endl;
             }
        }
        else if(a == c)
        {
            if( a == b )
            {
               cout<<"三个数一样大，大小为： "<<a<<endl;
            }
            else
            cout<<"最大的数为A和C，大小为： "<<a<<endl;
        }
        else
        {
            cout<<"最大的数为C，大小为： "<<c<<endl;
        }
    }
   else if (a<b)
   {
       if(b == c)
       {
           cout<<"最大的数为B和C，大小为： "<<b<<endl;
       }
       
       else if (b > c)
       {
           cout<<"最大的数为B，大小为： "<<b<<endl;
       }
       else
       {
           cout<<"最大的数为C，大小为： "<<c<<endl;
       }
   }
  
     return 0;
}
