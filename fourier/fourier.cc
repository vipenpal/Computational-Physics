  #include<iostream>
  #include<cmath>
  #include<fstream>
    using namespace std;  
    ifstream input("squarewave.inp");
    ofstream output("squarewave.out"); 

    class fourier 
   {
    int j,n,N;
    float i,w,y,f,h,pi;
    public:
     void getdata();
    void calculate();
    };

      void fourier::getdata()
    {
      input>>h>>n>>N;
      }
     void fourier::calculate()
   {
    pi=4*atan(1);
      for(i=0;i<=N;i+=0.001)
    {
    y=0;
     w=2*i*pi;
       for(j=1;j<=n;j+=2)
     {
       y=y+(sin(j*w)/j);
     }
       f=(h/2)+(2*h*y/pi);
     output<<i<<"\t"<<f<<endl;
       }
       }
      int main()
     {
    fourier sqw;
    sqw.getdata();
    sqw.calculate();
     return 0;
     }

//create input file "squarewave.inp"
//write input paramteters in file "squarewave.inp"
//5  100 70
//Output is written to file "squarewave.out"
 
