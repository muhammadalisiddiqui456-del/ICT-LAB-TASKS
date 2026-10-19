//Muhammad Siddiqui
//L1F26BSCS0298
//#include<iostream>
//using namespace std;
//int main()
//{
	/*cout << "Hello World!" << endl;
	cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026";
	cout << "Welcome!"<<endl;
	cout << "2026\n45"<<endl;
    cout << 45 * 3<<endl;
	cout << 1000 + 500 - 250<<endl;
	cout << "Total Fee:" << 45000 + 9000<<endl;
		return 0;*/
//}
//#include<iostream>
//		using namespace std;//not witten
//		int main()
//		{
//		cout << "Part A (corrected program):" << endl;
//		cout <<"Orientation Day" << endl;//semicolon missing
//		cout << "Total students: "<< 450 << endl;//less than sign missing
//		cout << "Seats left: " << 500 - 450 << endl;
//		cout << "Have a nice day" << endl;//invereted commas missing
//		cout << "Part B:" << endl;
//		cout << "Average: " << 60 + 70 + 80 / 3 << endl;
//		cout << "Average:" << (60 + 70 + 80) / 3 << endl;
//			return 0;
//	}
//#include<iostream>
//using namespace std;
//	int main()
//{
//	cout << "Expression 1=" << 10 + 5 * 2 << endl;
//	cout << "Expression 2=" << (10 + 5) * 2 << endl;
//	cout << "Expression 3=" << 20 - 5 - 3 << endl;//left to right
//	cout << "Expression 4=" << 100 / 7 << endl;
//	cout << "Expression 5=" << 100 % 7 << endl;
//	cout << "Expression 6=" << 2 * 3 + 8 / 4 - 1 << endl;
//	cout << "Expression 6=" << 2 * 3 + 8 / (4 - 1) << endl;//adding brackets for answer=8
//	return 0;
	//My Prediction / Actual Output
	/*20/20
	 30/30
	 12/12
	 14.28/14
	 2/2
	 7/7
	*/
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int rollNo = 1045;
//	int semester = 1;
//	char section = 'B';
//	float CGPA = 3.5;
//	int totalfee = 45000;
//	int feepaid = 20000;
//
//	cout << "Roll No:" << rollNo<<endl;
//	cout << "Semester:" << semester << endl;
//	cout << "Section:" << section << endl;
//	cout << "CGPA:" << CGPA << endl;
//	cout << "Total Fee:" << totalfee << endl;
//	cout << "Fee Paid:" << feepaid << endl;
//	
// 
//     semester = semester + 1;//assignment statement
//	 feepaid = feepaid + 5000;//assignment statement
//
//	 int remainingfee = totalfee - feepaid;
//	 int percentagepaid = feepaid * 100 / totalfee;
//	  
//	 cout << "Semester:" << semester << endl;
//	 cout << "Fee Paid:" <<feepaid<<endl;
//	 cout << "Remaining Fee:" << remainingfee << endl;
//	 cout << "Percentage Paid:" << percentagepaid << endl;
//	 return 0;
	 //Invalid:2nd year,total-marks,Roll No
	 //Valid:marks2,student_name,_fee
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int age = 0, creditHours = 0, feePerCreditHour = 0;
//	cout << "Enter Your Age" << endl;
//	cin >> age;
//	cout << "Enter Credit Hours" << endl;
//	cin >> creditHours;
//	cout << "Fee Per Credit Hours" << endl;
//	cin >> feePerCreditHour;
//
//	int totalfee = creditHours * feePerCreditHour;
//	int feediscount = totalfee - 2000;
//
//	cout << "Total Fee:Rs." << totalfee << endl;
//	cout << "Total Fee After 2000 Discount:Rs." << feediscount << endl; 
//
//	int birthyear = 2026-age;
//	int year25 = birthyear + 25;
//	
//	cout << "Year of Birth:" << birthyear << endl;
//	cout << "You Will Turn 25:" << year25 << endl;
//	return 0;
//	//As 19.8 cannot be hold by int so cin enters in fail state because of '.8'
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int price,quantity,total,tax,grandtotal;
//	cout << "Enter Price" << endl;
//	cin >> price;
//	cout << "Enter Quantity" << endl;
//	cin >> quantity;
//	
//	 total = price * quantity;
//	 tax = total * 5 / 100;
//	 grandtotal = total + tax;
//	 
//	cout << "Total:" << total << endl;
//	cout << "Tax:" << tax << endl;
//	cout << "Grand Total:" << grandtotal << endl;
//	return 0;
//	//the program shows 34 while calculator shows 34.65 (when price=99 and quantity =7)
//	//this is because the 'int' holds only whole numbers with no decimal point
//}
//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	int celsius;
//
//	cout << "Enter temperature in Celsius: ";
//	cin >> celsius;
//	int fahrenheit = celsius * 9 / 5 + 32;
//    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
//	cout << "Celsius " << celsius << " gives Fahrenheit " << fahrenheit << endl;
//return 0;
////when celsius=37 the fahrenheit=98 and doesnot show '.6' because int doesnot hold decimal place
//}