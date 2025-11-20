    #include<iostream>
    #include<cmath>
    using namespace std;
    class simpson
     {
     int i,n;
     float a,b,x[100],y[100],h,so,se,intfx;


     public: 
     void getdata ();
     void calculate();
     };
    
     void simpson::getdata()
    {
    cout<<"enter the value of lower limit of integration a, upper limit of integration b, no of intervals n"<<endl;
    cin>>a>>b>>n;
    }
  
  void simpson::calculate()
  {
   so=0;
   se=0;
   h=(b-a)/n;
   
 for(i=0;i<=n;i++)
  {
    x[i]=a+(i*h);
    y[i]=1/(1+x[i]);
  }

 for(i=1;i<=n-1;i++)
 {

    if(i%2==0)
    {
    se=se+y[i];
    }
    
    else
    {
    so=so+y[i];
    }
  }   

 intfx=(h/3)*(y[0]+(4*so)+(2*se)+y[n]);
 cout<<"intfx="<<intfx;
}
 
int main()
{
 simpson s;
 s.getdata();
 s.calculate();
 return 0;
  }

//Output
//enter the value of lower limit of integration a, upper limit of integration b, no of intervals n
//2 4 4 
//intfx=0.510847

