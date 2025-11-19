//Pseduo random number generation (0-99)   
#include<iostream>
#include<fstream>
using namespace std;

class rand
{
int i,n;
float r,r1,r2,seed;

public:
void calculate();
};

void rand::calculate()
{
cout<<"enter the seed"<<endl;
cin>>seed;
ofstream out("rand_0-99.txt");
for(i=0;i<500;i++)              //algorithm
{
r=(seed*99)/100;
r1=int(r);
r2=(r-r1)*100;
out<<r2<<endl;
seed=r2;
}
}

int main()
{
rand R;
R.calculate();
return 0;
}



