struct DoB {
	short int day;
	short int month;
	short int year;
};
struct NOTE1 {
	char name[9];
	long long int TelNumber;
	DoB DateOfBirth;
};
void Task1();
struct tovar {
	char name[10];
	int count[10];
	int price[10];
	DoB DateOfComing;
};
void Task2();
struct MARSHRUT {
	int numMars[10];
	char Beginning[10];
	char End[10];
	int length[10];
};
void Task3();
struct NAMES {
	char fname;
	char sname[12];
	char lname;
};
struct ABON {
	NAMES name;
	long long int TelNumber;
	DoB connect;
	int price[12];
	int balance[12];
};
void Task4();