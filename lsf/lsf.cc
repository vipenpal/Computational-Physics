   #include<iostream>
   #include<cmath>
   #include<fstream>
    using namespace std;
   ifstream input("inp.dat");
   ofstream output("out.dat");


    class LSF
{
    int i,n;
    float x[20],y[20],a,b,s1,s2,s3,s4,z[20];
    public:
    void getdata();
    void calculate();
    };
    
    void LSF::getdata()
{   cout<<"enter the no of values"<<endl;
    input>>n;
    cout<<"enter parameter x[i],y[i]in file"<<endl;
    for(i=1;i<=n;i++)
    {    
    input>>x[i]>>y[i];
}   }

    void LSF::calculate()
    {
    for(i=1;i<=n;i++)
{
    s1=s1+(x[i]*y[i]);
    s2=s2+x[i];
    s3=s3+y[i];
    s4=s4+(x[i]*x[i]);
        }
    print<<s1<<s2<<s3<<s4<<endl;
    a=((n*s1)-(s2*s3))/((n*s4)-(s2*s2));
    b=((-a*s2)+(s3))/n;

    cout<<"required curve is "<<a<<"x+"<<b<<endl;
    
    for(i=1;i<=n;i++)
    {
    z[i]=a*x[i]+b;
    output<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
}
    int main()
    {
    LSF msc;
    msc.getdata();
    msc.calculate();
    return 0;
    }


//create input file "inp.dat"
//write input paramteters in file "inp.dat"
//  6
//    1   2
//    2   3
//    3   4
//    4   5
//    5   7
//    6   9
////Output is written to file "out.dat"
