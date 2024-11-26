#include "student.h"
#include <iostream>
using namespace std;

 int main() {
 
     Student student1("John Doe");
     student1.addGrade(55.0);
     student1.addGrade(84.5);
     student1.addGrade(95);
     student1.addGrade(75);
     student1.printDetails();
     
  return 0;
}