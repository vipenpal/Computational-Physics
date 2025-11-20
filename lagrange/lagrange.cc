#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
ifstream input("inp.dat");
class lagrange
{

int i,k,n;
float x[100],y[100],s,z,t;

public:
void getdata();
void calculate();
};

void lagrange::getdata()
{
cout<<"enter number of values (input file)"<<endl;
input>>n;
cout<<"enter the value at which interpolation in to carried out (input file)"<<endl;
input>>z;
cout<<"enter data points (input file)"<<endl;
for(i=1;i<=n;i++)
{
input>>x[i]>>y[i];
}
}

void lagrange::calculate()
{

for(k=1;k<=n;k++)
{
t=1;
for(i=1;i<=n;i++)
 {
   if(i!=k)
     {
     t=t*(z-x[i])/(x[k]-x[i]);
     }
  }
s=s+(t*y[k]);
}
cout<<"LGI at "<<z<<" = "<<s<<endl;
}

int main()
{
lagrange lgi;
lgi.getdata();
lgi.calculate();
return 0;
}

//Output
//enter number of values (input file)
//enter the value at which interpolation in to carried out (input file)
//enter data points (input file)
//LGI at 2.25 = 5.0625





