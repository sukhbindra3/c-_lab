#include<iostream>

using namespace std;

template<class T,int size>
class array{
	T A[size];
	public:
		void input();
		void output();
};

template<class T,int size>
void array<T,size>::input(){
	int i;
	cout<<"Enter the elements of array : ";
	for(i=0;i<size;i++)
		cin>>A[i];
}

template<class T,int size>
void array<T,size>::output(){
	int i;
	for(i=0;i<size;i++)
		cout<<A[i]<<"\t";
}

int main(){
	array<float,5> t;
	t.input();
	t.output();
	return 0;
}

