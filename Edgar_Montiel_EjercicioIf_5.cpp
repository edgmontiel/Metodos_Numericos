#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	//Billetes
	double M=1000;
	double Q=500;
	double D=200;
	double C=100;
	double T=50;
	double V=20;
	// Monedas
	double Di=10;
	double F=5;
	double Do=2;
	double P=1;
	
		//Billetes
	int BM=0;
	int BQ=0;
	int BD=0;
	int BC=0;
	int BT=0;
	int BV=0;
	// Monedas
	int BDi=0;
	int BF=0;
	int BDo=0;
	int BP=0;
    double monto=1873;
    
    cout << "Introduce un monto: ";
    cin >> monto;
    
    do{
    	if ((monto-M)>=0){
    		BM=BM+1;
    		monto= monto-M;
		}else if ((monto-Q)>=0){
    		BQ=BQ+1;
    		monto= monto-Q;
    	}else if ((monto-D)>=0){
    		BD=BD+1;
    		monto= monto-D;
    	}else if ((monto-C)>=0){
    		BC=BC+1;
    		monto= monto-C;
    	}else if ((monto-T)>=0){
    		BT=BT+1;
    		monto= monto-T;
    	}else if ((monto-V)>=0){
    		BV=BV+1;
    		monto= monto-V;
    	}else if ((monto-Di)>=0){
    		BDi=BDi+1;
    		monto= monto-Di;
    	}else if ((monto-F)>=0){
    		BF=BF+1;
    		monto= monto-F;
    	}else if ((monto-Do)>=0){
    		BDo=BDo+1;
    		monto= monto-Do;
    	}else if ((monto-P)>=0){
    		BP=BP+1;
    		monto= monto-P;
    	}
		
	}while(monto>0);
	
	
	cout << "Billetes de 1,000:  " << BM << "\n"; 
	cout << "Billetes de 500:  " << BQ << "\n"; 
	cout << "Billetes de 200:  " << BD << "\n"; 
	cout << "Billetes de 100:  " << BC << "\n"; 
    cout << "Billetes de 50:  " << BT << "\n"; 
    cout << "Billetes de 20:  " << BV << "\n"; 
    cout << "Monedas de 10:  " << BDi << "\n"; 
    cout << "Monedas de 5:  " << BF << "\n"; 
    cout << "Monedas de 2:  " << BDo << "\n"; 
	cout << "Monedas de 1:  " << BP << "\n"; 

}
