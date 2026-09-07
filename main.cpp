#include <iostream> 
#include <string>
#include <limits>
#include <vector>

using namespace std;
struct Course {
    string course_name;
    string course_code;
    string platform;
    string instructor;
    string status;
    string start_date;
    string end_date;
    double expected_score;
};
int main(){
  vector <Course> courses;
    int choice = 1;

    while (choice !=5){

    cout <<"1) View course" << endl;
    cout <<"2) Edit course" << endl;
    cout <<"3) Add course" << endl;
    cout <<"4) Archive course" << endl;
    cout <<"5) Exit" << endl;

    cout << "Enter your choice: ";
    //check xem choice có là số hay kh
    if (!(cin >> choice)){
      cout << "invalid" << endl;

      cin.clear(); //bị thì sẽ xóa bắt nhập lại chứ kh cần phải run lại
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;

    }
    if (choice ==1){
    cout << "View course";
}

   else if (choice == 2){
    cout << "Edit course";
}

   else if (choice == 3){
    Course course;
    cout <<"Add course ";

    cin.ignore (numeric_limits <streamsize> :: max(), '\n');

    cout <<"\n____Course information____\n";

    cout << "Course name: ";
    getline (cin, course.course_name);
    cout << "Course code: ";
    getline (cin, course.course_code);
    cout << "Platform: ";
    getline (cin, course.platform);
    cout << "Instructor: ";
    getline (cin, course.instructor);
    cout << "Status: ";
    getline (cin, course.status);
    cout << "Start date: ";
    getline (cin, course.start_date);
    cout << "End date: ";
    getline (cin, course.end_date);
    cout << "Expected score: ";
cin >> course.expected_score;

while (cin.fail()) {
    cout << "Invalid score, pls enter a number: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> course.expected_score;
}
courses.push_back(course);
cout << "\nCourse saved successfully!" << endl;
cout << "Total course: " << courses.size() << endl;
  
    cout <<"\n____Course information____\n";
    cout <<"Course name: " << course.course_name <<endl;
    cout <<"Course code: " << course.course_code <<endl;
    cout <<"Platform: " << course.platform << endl;
    cout <<"Instructor: " << course.instructor << endl;
    cout <<"Status: " << course.status << endl;
    cout <<"Start date: " <<course.start_date << endl;
    cout <<"End date: " <<course.end_date << endl;
    cout <<"Expected score: " <<course.expected_score << endl;
   }

      else if (choice == 4){
    cout <<"Archive course";
}
      else if (choice == 5){
        cout <<"Exit";
}
      else {
        cout <<"Invalid choice!!";
}
 }
//getline cần 1 biến kiểu string nên expected score phải dùng cin
//cin: hỏi người dùng
//getline/cin: nhận câu trl

return 0;
}
