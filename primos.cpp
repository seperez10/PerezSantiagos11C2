#include <iostream>
int main(){
int x1;
int x2;
std::cout<<"Introdduzca x1"<<std::endl;
std::cin>>x1;
std::cout<<"Introdduzca x2"<<std::endl;
std::cin>>x2;
int contador=0;
for (int i=x1;i<=x2;i++){
	for (int j=1;j<=i;j++){
		if(i%j==0){contador++;}
	if(contador==1){
		std::cout<<i<<std::endl;
		}
}
}

}
