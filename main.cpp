 #include <iostream> 
#include <string>

using namespace std;
int main(){
    string course_name;
    string course_code;
    string platform;
    string instructor;
    string status;
    string start_date;
    string end_date;
    double expected_score;
//getline cần 1 biến kiểu string nên expected score phải dùng cin
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
//cin: hỏi người dùng
//getline/cin: nhận câu trl

return 0;
}
