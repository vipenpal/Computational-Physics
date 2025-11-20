  #include<iostream>
  #include<cmath>
  using namespace std;
  
    class MVS
    {
    int i,n;
    float x[200],sum,var,mean,variance,SD;
    
   public: 
   void getdata();
   void caldata();
   };
   
   void MVS::getdata()
   {
    cout<<"enter the value of n="<<endl;
    cin>>n;
    cout<<"enter the value of x[]="<<endl;
   
    for(i=0;i<n;i++)
      {
         cin>>x[i];
      }    
   }
  
   void MVS::caldata()
   { 
       for(i=0;i<n;i++)
       {     
          sum=sum+x[i];
       }
   
        mean=sum/n;
        cout<<"mean="<<mean<<endl;
 
       for(i=0;i<n;i++)
       {
       var=var+pow((x[i]-mean),2);
       }
       
       variance=var/n;
       cout<<"variance="<<variance<<endl;
       
       SD=sqrt(variance);
       cout<<"standard deviation="<<SD<<endl;
   }

   int main()
   {
    MVS a;
    a.getdata();
    a.caldata();
    return 0;
    }   
  

//Output 
//enter the value of n=
//25
//enter the value of x[]=
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
//mean=13
//variance=52
//standard deviation=7.2111
   
 
