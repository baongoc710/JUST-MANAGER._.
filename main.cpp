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
  vector <Course> courses; //vector để lưu nhiều course
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
      cout << "invalid choice" << endl;

      cin.clear(); //bị thì sẽ xóa bắt nhập lại chứ kh cần phải run lại
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;

    }
    if (choice == 1){
    cout << "View course" << endl;
    cout << " | courses size = " << courses.size() << endl;

    if (courses.size() == 0){
      cout << "no course available" << endl;}
    else if (courses.size() > 0){
      for(int i = 0; i < courses.size(); i++){
        cout << i + 1 << ". " << courses[i].course_name <<endl;
      }
      int course_choice;
      cout << "\nenter course number: ";
      cin >> course_choice;

      int i = course_choice - 1;

      cout << courses[i].course_name << endl;
      cout << courses[i].course_code << endl;
      cout << courses[i].platform << endl;
      cout << courses[i].instructor << endl;
      cout << courses[i].status << endl;
      cout << courses[i].start_date << endl;
      cout << courses[i].end_date << endl;
      cout << courses[i].expected_score << endl;
    } 
  }
   
    //for chỉ mới qly biến đếm và đi qua từng vị trí trg vector thôi

   else if (choice == 2){
    cout << "Edit course" << endl;
    if (courses.empty()){
      cout << "no course to edit" << endl;
    }

      else{
        for(int j = 0; j < courses.size(); j++){
          cout << j + 1 << ". " 
               << courses[j].course_name 
               << endl;
        }
        

        int course_choice;

        while (true) {
      cout << "\nchoose a course to edit: ";
      if (!(cin >> course_choice)){
          cout << "invalid course choiceeee" << endl;
          cin.clear();
          cin.ignore(
            numeric_limits<streamsize>::max(), '\n');
            continue;
       }

      if (course_choice >=1 && course_choice <= courses.size()){
        break;
      }
      cout << "invalid course choiceeee" << endl;
        }
      
      int i = course_choice -1;
      
      cout << "1) Course name: " << courses[i].course_name << endl;
      cout << "2) Course code: " << courses[i].course_code << endl;
      cout << "3) Platform: " << courses[i].platform << endl;
      cout << "4) Instructor: " << courses[i].instructor << endl;
      cout << "5) Status: " << courses[i].status << endl;
      cout << "6) Start date: " << courses[i].start_date << endl;
      cout << "7) End date: " << courses[i].end_date << endl;
      cout << "8) Expected score: " << courses[i].expected_score << endl;
      
      while (true){
    int field_choice;

      while (true){
      cout << "choose any field (just 1-8): " << endl;

      if(!(cin >> field_choice)){
        cout << "Invalid field choice" << endl;
        cin.clear();
        cin.ignore(
          numeric_limits<streamsize>::max(), '\n');
          continue;
        }

    if (field_choice >=1 && field_choice <= 8){
      break;
    }

    cout << "Invalid field choice" << endl;
  }

  cin.ignore(
    numeric_limits<streamsize>::max(), '\n');
  

    if (field_choice == 1){
      cout << "new course name: ";
      getline(cin, courses[i].course_name);
    }

    else if (field_choice == 2){
      cout << "new course code: ";
      getline (cin, courses[i].course_code);
    }

    else if (field_choice == 3){
      cout << "update platform: ";
      getline (cin, courses[i].platform);
    }

    else if (field_choice == 4){
      cout << "new instructor: ";
      getline (cin, courses[i].instructor);
    }

    else if (field_choice == 5){
      cout << "update status: ";
      getline (cin, courses[i].status);
    }

    else if (field_choice == 6){
      cout << "update start date: ";
      getline (cin, courses[i].start_date);
    }

    else if (field_choice == 7){
      cout << "update end date: ";
      getline (cin, courses[i].end_date);
    }

    else if (field_choice ==8){
      cout << "update expected score: ";
       (cin, courses[i].expected_score);
       
      while (!(cin >> courses[i].expected_score)) {
        cout << "invalid score" << "please enter a number: ";
        cin.clear();
        cin.ignore(
          numeric_limits<streamsize>::max(), '\n');
      }
    }
      
        
    cout << "oki bae, field updated!!" << endl;
  

    string edit_field;
    cout << "edit more?? confirm yes or no: ";
    cin >> edit_field;

    if (edit_field == "no"){
      break;
    }
    else if (edit_field =="yes"){
      continue;
    }
    else{
      cout << "invalid!!!!!!!!!" << endl;
    }
  
      }
      }
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


  
