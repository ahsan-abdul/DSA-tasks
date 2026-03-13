//#include<iostream>
//#include<string>
//using namepsace std;
//
//class Employee {
//public:
//	virtual double cal_salary() = 0;
//	Employee* next = nullptr;
//	virtual~Employee();
//};
//class FTEmployee :public EMployee{
//	double salary;
//public:
//	FTEmployee(double s) {
//		salary = s;
//	}
//	double Cal_salary()override {
//		return salary;
//	}
//
//};
//class PTEmployee:public Employee {
//	double rate;
//	int hours;
//public:
//	PTEmployee(double r, int h) {
//		rate = r;
//		hours = h;
//	}
//	double Cal_salary()override {
//		return rate*hours;
//	}
//};
//int main() {
//	Employee* head = new FTEmployee(60000);
//	head->next = new PTEmployee(500,50);
//	Emplpoyee* temp = head;
//	int count = 1;
//	while (temp!=nullptr)
//	{
//		cout << "Employee " << count << " Salary : " << temp->cal_salary() << endl;
//		temp = temp->next;
//		count++;
//	}
//	delete head->next;
//	delete head;
//	return 0;
//}