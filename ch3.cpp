#include <iostream>
#include<vector>
#include <string>
int main(){

double x,y,temp;
	std::string x1,y1;
//	std::vector<int> v;
	
	while(std::cin>>temp>>y1>>x>>x1){
	
	//	v.push_back(temp); 
		//std::cout<<temp<<"\n";
		//
		//
		//“cm, m, in, ft.”

if(y1 != "cm" && y1 != "m" && y1 !="in" && y1 != "ft"){
			std::cout<<"bad y1\n";
			return 0;
		} 

if(x1 != "cm" && x1 != "m" && x1 !="in" && x1 != "ft"){
			std::cout<<"bad x1\n";
			return 0;
		} 


		
	 if(x==temp){
			std::cout<<"The numbers are equal.\n";
		}
	
		else if  ((x-temp <1.0/100 && x>temp) || (temp-x < 1.0/100&& temp>x))
		{
			std::cout<<"approx equal\n";
		}
	
		else if(x>temp){
			std::cout<<"The smaller value is:" <<temp<<"\n";
std::cout<<"The larger value is:" <<x<<"\n";

		} else if (x<temp){
			std::cout<<"The smaller value is: "<<x<<"\n";
std::cout<<"The larger value is: " <<temp<<"\n";

		}
		else if(x==temp){
			std::cout<<"The numbers are equal.\n";
		}
	
	}

}
