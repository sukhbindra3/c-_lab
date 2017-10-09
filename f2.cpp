#include<iostream>

using namespace std;

template<class T1,class T2>
void display(T1 a,T2 b){
	cout<<a<<" , "<<b<<endl;
}

int main(){
	display(5,10);
	display(2.5,10);
	display(7.5,8.7);
	return 0;
}
