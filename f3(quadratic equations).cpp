#include<iostream>
#include<cmath>

using namespace std;

template<class T1,class T2,class T3>
void quad(T1 a,T2 b,T3 c){
	T1 D;
	D=b*b-4*a*c;
	if(D==0)
		cout<<"Roots are real and equal : "<<(-b/(2*a))<<" and "<<(-b/(2*a))<<endl;
	else if(D>0)
		cout<<"Roots are real and unequal : "<<((-b+sqrt(D))/(2*a))<<" and "<<((-b-sqrt(D))/(2*a))<<endl;
	else if(D<0)
		cout<<"Roots are imaginary"<<endl;
}

int main(){
	quad(2,4,2);
	quad(4,3,6);
	quad(2,5,2);
	return 0;
}
