#include <iostream>

using namespace std;
int main(){
	cout<<"Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name<<",\n";
	cout << "How are you? i am fine. cya\n";
	cout << "Name a new friend:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name <<" lately?\n";
	cout << "Enter the age of the recipient:\n";
	int age;
	cin >> age;
	if (age == 0 || age >= 110){
		cout<<"you're kidding";
	} else if( age <12){
		cout <<"Next year you will be "<<age+1<<" years old.\n";
	} else if(age == 17){
		cout<< "Next year you will be able to vote!\n";
	}else if (age >70){
		cout << "Are you retired?\n";

	}else {
	cout << "I heard you just had a birthday and are " << age << " years old\n";
	}

	cout << "Sincerely yours\n";
	cout<<"\n\n";
}
