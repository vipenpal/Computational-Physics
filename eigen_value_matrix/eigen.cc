#include<iostream>
#include<cmath>
using namespace std;

class eigenvalue
{
float a,b,c,d,deter,dis,t,l1,l2,real,imag;
public:
void getdata();
void calculate();
};

void eigenvalue::getdata()
{
    cout<<"Enter matrix elements a11,a12,a21,a22"<<endl;
    cin>>a>>b>>c>>d;
}

void eigenvalue::calculate()
{
    deter=(a*d)-(b*c);
    cout<<"Determinant of the given matrix is "<<deter<<endl;
    t=a+d;
    cout<<"Trace is "<<t<<endl;     
    dis=(t*t)-(4*deter);
    cout<<"Discriminant is "<<dis<<endl;

    if(dis>0)
    {
        cout<<"eigen values are real and different"<<endl;
        l1=(t/2)+sqrt(dis)/2;
        l2=(t/2)-sqrt(dis)/2;
        cout<<"eigen value of given matrix are "<<l1<<" and "<<l2<<endl;
    }


    else if(dis==0)
    {
        cout<<"eigen values are real and equal"<<endl;
        l1=t/2;
        l2= t/2;
        cout<<"eigen value of given matrix are "<<l1<<" and "<<l2<<endl;
    }

    else if(dis<0)
    {
        cout<<"eigen values are complex no"<<endl;
        real=(t/2);
        imag= (sqrt(-dis))/2;
        cout<<"First eigen value of given matrix are "<<real<<"+i"<<imag<<endl;
        cout<<"Second eigen value of given matrix are "<<real<<"-i"<<imag<<endl;
    }

}

int main()
{
eigenvalue e;
e.getdata();
e.calculate();
return 0;
}


//Output
//Enter matrix elements a11,a12,a21,a22
//3 9 0 3
//Determinant of the given matrix is 9
//Trace is 6
//Discriminant is 0
//eigen values are real and equal
//eigen value of given matrix are 3 and 3


//Enter matrix elements a11,a12,a21,a22
//5 4 4 5
//Determinant of the given matrix is 9
//Trace is 10
//Discriminant is 64
//eigen values are real and different
//eigen value of given matrix are 9 and 1

//Enter matrix elements a11,a12,a21,a22
//2 -1 1 2
//Determinant of the given matrix is 5
//Trace is 4
//Discriminant is -4
//eigen values are complex no
//First eigen value of given matrix are 2+i1
//Second eigen value of given matrix are 2-i1


