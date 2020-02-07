#include <bits/stdc++.h>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double a[],int b,double c[]){
	double avg=0,sum=0,sum2=0,sd=0,max=0,min=0;
	for(int i=0;i<b;i++){
		sum+=a[i];
		sum2+=a[i]*a[i];
		//max
		if(max==0||a[i]>max){
			max=a[i];
		}
		//min
		if(min==0||a[i]<min){
			min=a[i];
		}
	}
	avg=(double)sum/b;
	sd=sqrt(sum2/b-pow(avg,2));
	c[0]=avg;
	c[1]=sd;
	c[2]=max;
	c[3]=min;
}
