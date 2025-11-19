//Pseduo random number generation using LCG(0-999)   
#include<iostream>
#include<cmath>
using namespace std;
class random
{
long i,x,n,a,c,M,y;
int seed;

public:

void calculate();
};

void random::calculate()
{
cout<<"enter the no of random nos. to be generated"<<endl;
cin>>n;
cout<<"enter seed"<<endl;
cin>>seed;
cout<<"random nos are"<<endl;
M=256;                              //M = 2^8
a=65;
c=27;
x=1;

for(i=0;i<=n;i++)
{
y=((a*seed)+c)%M;
cout<<y<<endl;
seed=y;
}
}

int main()
{
random r;
r.calculate();
return 0;
}


//Output 1

//enter the no of random nos. to be generated
//5
//enter seed
//11
//random nos are
//230
//129
//220
//247
//210
//109

//Output 2

//enter the no of random nos. to be generated
//5
//enter seed
//20
//random nos are
//47
//10
//165
//0
//27
//246

