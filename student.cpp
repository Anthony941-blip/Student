#include "student.h"
#include <iostream>
#include <iomanip>


Student::Student(string studentName) {

      name = studentName;
}




void Student::addGrade(double grade) {

      grades.push_back(grade);
}




double Student::calculateAverage() {
  
  if (grades.empty()) {
      return 0.0;
  }
  
  double sum = 0.0;

  for (double grade : grades) {
      sum += grade;
    }

   return sum / grades.size();
}





//the method that prints Student name 
//and grade with the printf("%.2f") 
//that rounds to two d.p.

void Student::printDetails() {

    cout << "Student name: " << name << endl;
    cout << "Average Grade: " << fixed << setprecision(2) << calculateAverage() << endl;     
}