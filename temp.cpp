#include <iostream>
double faren_to_cel(int f);
double cel_to_faren(double c);
int main() {
	char x;


	std::cout << "Enter temp and c or f (27 f, 32 c, etc): \n";
	double temp;
	std::cin >> temp>>x;

	//(32°F − 32) × 5/9 = 0°C 
	//
	double c_temp= faren_to_cel(temp);


	if(x=='c' || x =='C'){
		x='F';
		temp=cel_to_faren(temp);
	}
	else if(x=='f' || x =='F'){
		x='C';
		temp=faren_to_cel(temp);
	}
	else {
		std::cout<<"enter c or f\n";
		return 0;
	}
	std::cout<<"converted to: \n";
	std::cout << temp <<" "<< x << "\n";
}

double faren_to_cel(int f){

	return (f-32)*(5/9.0);

}

double cel_to_faren(double c){
	return (c *(9.0/5)) +32;

}
