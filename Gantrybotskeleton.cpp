#include <iostream> 
using namespace std; 
int main()
{
  double a[3],d[3],v,t; 
  int choice,i; 
  for(i=0;i<3;i++)
  {
    a[i] = 0;
  }
  stat1:
  cout<<"Enter the motor velocity (0-10) in cm/s:"; 
  cin>>v;
  if((v<0)||(v>10))
  {
    goto stat1; 
  }
  stat2:
  cout<<"Enter the X,Y,Z coordinate of the destination position respectively in cm:"; 
  for(i=0; i<3; i++)
  {
    cin>>d[i]; 
  }
  for(i=0;i<3;i++)
  {
    if(a[i]<d[i])
    {
      t = (d[i]-a[i])/v;
      a[i] = d[i];
      cout<<"Motor "<<i<<" rotates counter clockwise for "<< t<<" seconds"<<endl;
    }
    else if(a[i]>d[i])
    {
      t = (a[i]-d[i])/v;
      a[i] = d[i];
      cout<<"Motor "<<i<<" rotates clockwise for "<< t<<" seconds"<<endl;
    } 
    else
    {
      cout<<"Motor "<<i<<" doesnt rotate"<<endl;
    } 
    }
  ques:
  cout<<"Press 1 to enter new destination coordinate, press 2 to exit program:"; 
  cin>>choice;
  switch(choice)
  {
    case 1: goto stat2; break;
    case 2: break;
    default: cout<<"Invalid answer!!";
    goto ques; 
  }
  return 0;
}
