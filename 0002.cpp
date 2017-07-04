#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	double sum=0,n=400,000,000;
	double fa=1,fb=2;
	double fc=0;
	sum+=2;
	for(double i=3;i<n;i++){
		fc=fa+fb;
		if(fmod(fc,2)==0){
			sum+=i;
		}
		fa=fb;
		fb=fc;
	}
	
	
	cout<<sum;
	
	return 0;
} 
