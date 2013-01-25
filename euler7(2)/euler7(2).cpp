#include <iostream>
#include <math.h>
using namespace std;

int main(){
	const  float asize = 20.0;
	bool a[asize];
	for(int i=2; i<= asize; i++){ a[i]= true; 
	}
	for(int i=2; i<=  sqrt(asize)  /*asize/2*/; i++){
		if(a[i]==true){
			for(int j=i+1; j<=asize; j++){
				if(j%i==0){a[j]=false;}
			}
		}
	}
	int sum =0;
	for(int i =2; i<=asize; i++){
		if (a[i]==true){cout<< i<<"   ";
		sum =sum+i;
		}
	}
	cout<< endl<< sum<< endl;
	

	//}
	//for(int i=2; i*i<=asize; i++){
	//	if(a[i]==true){
	//		for(int j=i*i;j<=asize; j+=i){
	//			if(a[j]==true){
	//			a[j]=false;s
	//			}
	//		}
	//	}}
	//int count = 0;
	//int sum = 0;
	//	for(int i =0; i<=asize; i++){
	//		if (a[i]==true){
	//			sum=sum+i;
	//			cout<< i<< "  ";
	//			
	//			/*count++;
	//			if(count==10001){cout<< i<< "  -- Hurra!!! "; 
	//			break;
	//			}*/
	//		}
	//	}
	//	cout<< endl<< sum << " - IS THE SUM OF PRIME NUMBERS!!!!!!!! Hurrrraaaa!!!";
	cin.get();
	cin.get();
	return 0;
	}