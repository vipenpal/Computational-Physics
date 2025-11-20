#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

class super

{

float a1, a2, w1, w2, p1, p2, r1, r2, t, pi, y1, y2, y;

public:

void getdata();
void calculate();

};

void super::getdata()

{cout<<"enter amplitude , phase, frequency of first wave"<<endl;

cin>>a1>>p1>>w1;

cout<<"enter amplitude , phase, frequency of first wave"<<endl;

cin>>a2>>p2>>w2;

}


void super::calculate()
{pi=4*atan(1);
r1=(pi/180)*p1;
r2=(pi/180)*p2;
ofstream outfile("super.txt");

for(t=0;t<5;t+=0.01)

{

y1=a1*sin ((w1*t)+a1);

y2=a2*sin ((w2*t)+a2);

y=y1+y2;

outfile<<t<<" "<<y<<" "<<y1<< " "<<y2<<endl;}

}


int main()
{super s;
s.getdata();
s.calculate();
return 0;
}


//Output
//enter amplitude , phase, frequency of first wave
//5 45 70
//enter amplitude , phase, frequency of first wave
//5 46 65








