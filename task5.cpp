#include<iostream>
using namespace std;
class qorial{
private:
     const int x;


 public:
     int Calculate( )const; // prototype //
     int Result( int)const; // prototype //
     qorial(int a):x(a){ //which is same as const int x=a //
}
};
int qorial::Calculate()const{
    int x2=1;
for(int i=1 ; i<=x ; i++){
x2=x2*i;
}
return x2;
}
int qorial::Result(int a)const{
cout<<a<<endl;
}
int main(){
int a;
cout<<" ENTER THE NUMBER OF WHICH YOU WANT TO FIND qORIAL"<<endl;
cin>>a;
int q;
	const qorial f1(a);
	q=f1.Calculate();
	f1.Result(q);

	return 0;
}
