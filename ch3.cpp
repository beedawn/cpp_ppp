#include <iostream>
#include<vector>
#include <string>




enum measurement {
	in,
	cm,
	m,
	ft
};

measurement check_measurement(std::string const& mtype){
	if(mtype=="in") return in;
	if(mtype=="cm") return cm;
	if(mtype=="ft") return ft;
	if(mtype=="m") return m;
	return m;
}

double convert_temp(std::string const& mtype, double value){
	double return_val=0;
	switch(check_measurement(mtype)){
		case cm:
			return_val=value*0.01;
			break;
		case in:
			return_val=value*0.0254;
			break;
		case ft:
			return_val=value*0.3048;
			break;
		case m:
			return_val=value;
			break;
		}
return return_val;
}

int main(){
	double x,y,temp;
	std::string x1,y1;
	std::vector<double> v;
	while(std::cin>>temp>>y1>>x>>x1){
		if(y1 != "cm" && y1 != "m" && y1 !="in" && y1 != "ft"){
			std::cout<<"bad y1\n";
			return 0;
		} 
		if(x1 != "cm" && x1 != "m" && x1 !="in" && x1 != "ft"){
			std::cout<<"bad x1\n";
			return 0;
		} 
		double meters_temp=convert_temp(y1,temp);
		double meters_x=convert_temp(x1,x);
		v.push_back(meters_temp); 
		v.push_back(meters_x);	
		if(x==temp){
			std::cout<<"The numbers are equal.\n";
		} else if  ((x-temp <1.0/100 && x>temp) || (temp-x < 1.0/100&& temp>x)){
			std::cout<<"approx equal\n";
		} else {	
		} 
		if(meters_x>meters_temp){
			std::cout<<"The smaller value is the first one " <<temp << y1<<" or "<<meters_temp<<" meters\n";
			std::cout<<"The larger value is: the second one " <<x<<x1<<" or "<<meters_x<<"meters \n";
		} else if (meters_x<meters_temp){
			std::cout<<"The smaller value is the second one: "<<x<< x1 <<" or "<<meters_x<< " meters\n";
			std::cout<<"The larger value is the first one: " <<temp<<y1<<" or "<<meters_temp<<"meters \n";
		} else if(meters_x==meters_temp){
			std::cout<<"The numbers are equal.\n";
		}
	}
}
