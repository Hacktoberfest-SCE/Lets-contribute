//program to measure the BMI
#include<iostream>
#include<math.h>
int main()
{
    float bmi,w,h;
    cout<<"Please Enter your weight in Pounds : ";
    cin>>w;
    cout<<"Please Enter your Height in Inches : ";
    cin>>h;
    bmi=(w*703)/(h*h);
    cout<<"Your BMI is : "<<bmi<<endl;
 
    if(bmi>25)
    cout<<"Overweight";
    else if(bmi<25 && bmi>18.5)
            cout<<"Optimal";
            else
            cout<<"Underweight";
    return 0;
}
