//Pseudo random number generation using computer clock 
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<fstream>
#include<ctime>
using namespace std;
ofstream output("rand_time.txt");


class Rclk
{
int i;
float r,p;
public:
void calculate();
};

void Rclk::calculate()
{
srand((int) time(0));       //use of computer clock 
i=0;
while(i++<100)
{
r= (rand()%100)+1;
p= r/100;
output<<p<<endl;
}
}

int main()
{
Rclk T;
T.calculate();
return 0;
}

