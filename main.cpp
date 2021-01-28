
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout<<"请输入第一个数"<<endl;
    cin>>a;
    cout<<"请输入第二个数"<<endl;
    cin>>b;
    cout<<"请输入第三个数"<<endl;
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
