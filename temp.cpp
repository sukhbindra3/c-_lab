#include<iostream>

using namespace std;

template<class T>
class test{
	T a;
	T b;
	public:
		test(T x,T y){
			a=x;
			b=y;
		}
		void show();

};


template<class T>
void test<T>::show(){
	cout<<a<<" ,"<<b<<endl;
}

int main(){
	test<int> t(5,6);
	t.show();
  	return 0;
}


