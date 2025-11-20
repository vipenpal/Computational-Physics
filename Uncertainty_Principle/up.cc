#include<iostream>
#include<cmath>
using namespace std;

class unpr
{
int i,n;
float a,b,x[100],p[100],I[100],X,P,H,h,so1,se1,so2,se2,pi;

public:
void getdata();
void calculate();
};

void unpr::getdata()
{
cout<<"enter the lower and upper limit of integration"<<endl;
cin>>a>>b;
cout<<"enter the even no of intercvals"<<endl;
cin>>n;
}

void unpr::calculate()
{  
h=(b-a)/n;
pi=4.0*atan(1);
    for(i=0;i<=n;i++)
    {
        I[i]=a+(i*h);
        x[i]=(1/sqrt(pi))*pow(I[i],2)*exp(-pow(I[i],2));
        p[i]=(1/sqrt(pi))*exp(-pow(I[i],2))*(1-pow(I[i],2));
    }


    for(i=1;i<=n-1;i++)
    {
    
        if(i%2==0)
        {
            se1=se1+x[i];
            se2=se2+p[i];
        }
    
        else
        {
            so1=so1+x[i];
            so2=so2+p[i];
        }
    
    }

    X=(h/3)*(x[0]+(4*so1)+(2*se1)+x[n]);
    P=(h/3)*(p[0]+(4*se2)+(2*se2)+p[n]);
    
    cout<<"uncertainity in position "<<X<<endl;
    cout<<"uncertainity in momentum "<<P<<endl;
    H=X*P;
    cout<<"value of unbcertainty product"<<H<<endl;
}

int main()
{
    unpr UP;
    UP.getdata();
    UP.calculate();
    return 0;
}


//Output
//enter the lower and upper limit of integration
//  -5 5
//enter the even no of intercvals
//  50
//uncertainity in position 0.5
//uncertainity in momentum 0.5
//value of unbcertainty product0.25


