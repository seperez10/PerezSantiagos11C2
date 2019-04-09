#include <iostream>
int main(){
int x1;
int x2;
std::cout<<"Introdduzca x1"<<std::endl;
std::cin>>x1;
std::cout<<"Introdduzca x2"<<std::endl;
std::cin>>x2;

for (int i=x1;i<=x2;i++){
int contador=0;
	for (int j=2;j<i;j++){
		if(i%j==0){contador++;}
	if(contador==0){
		std::cout<<i<<std::endl;
		}
}
}

}
