#include <iostream> 
#include <string>
#include <limits>

using namespace std;
int main(){
    int choice;

    string view_course;
    string edit_course;
    string add_course;
    string archive_course;

    string course_name;
    string course_code;
    string platform;
    string instructor;
    string status;
    string start_date;
    string end_date;
    double expected_score;

    cout <<"1) View course" << endl;
    cout <<"2) Edit course" << endl;
    cout <<"3) Add course" << endl;
    cout <<"4) Archive course" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

   if (choice == 1){
    cout << "View course";
}

   else if (choice == 2){
    cout << "Edit course";
}

   else if (choice == 3){
    cout <<"Add course: ";

    cin.ignore (numeric_limits <streamsize> :: max(), '\n');

    cout <<"\n____Course information____\n";

    cout << "Course name: ";
    getline (cin, course_name);
    cout << "Course code: ";
    getline (cin, course_code);
    cout << "Platform: ";
    getline (cin, platform);
    cout << "Instructor: ";
    getline (cin, instructor);
    cout << "Status: ";
    getline (cin, status);
    cout << "Start date: ";
    getline (cin, start_date);
    cout << "End date: ";
    getline (cin, end_date);
    cout << "Expected score: ";
    cin >> expected_score;

    cout <<"\n____Course information____\n";
    cout <<"Course name: " << course_name <<endl;
    cout <<"Course code: " << course_code <<endl;
    cout <<"Platform: " << platform << endl;
    cout <<"Instructor: " << instructor << endl;
    cout <<"Status: " << status << endl;
    cout <<"Start date: " <<start_date << endl;
    cout <<"End date: " <<end_date << endl;
    cout <<"Expected score: " <<expected_score << endl;
   
   }
   else if (choice == 4){
    cout << "Archive course";
   }
    
//getline cần 1 biến kiểu string nên expected score phải dùng cin

//cin: hỏi người dùng
//getline/cin: nhận câu trl

return 0;
}
