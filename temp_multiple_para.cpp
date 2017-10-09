#include<iostream>

using namespace std;

template<class T1,class T2>
class test{
	T1 a;
	T2 b;
	public:
		test(T1 x,T2 y){
			a=x;
			b=y;
		}
		void show();
};

template<class T1, class T2>
void test<T1,T2>::show(){
	cout<<a<<" ,"<<b<<endl;
}

int main(){
	test<int,int> t(5,7);
	t.show();
	return 0;
}
