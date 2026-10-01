#include<iostream>
using namespace std;
class Car{
	private:
		string brand;
		string model;
		bool isRunning;
	public:
		Car(string b, string m) {
			brand = b;
			model = m;
			isRunning = false;
		}
	void start(){
		isRunning = true;
		cout << brand << " " << model << " is started!" << endl;
	}
	void stop(){
		isRunning = false;
		cout << brand << " " << model << " is stopped!" << endl;
	}
	void displayInfo(){
		cout << "Brand: " << brand << ", Model: " << model << endl;
        cout << "Status: " << (isRunning ? "Running" : "Stopped") << endl;
	}
};
int main(){
	Car obj("Toyota","Fortuner");
    obj.start();
	obj.displayInfo();
	obj.stop();
	return 0;
}
