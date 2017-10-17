#include <stdio.h>
 class Student
 {
 private:
 int age;
 public:
 Student();
  Student(int);
 ~Student();
 int Getage();
 };
 Student::Student(int a)
 {
 age = a;
 }
 Student::Student()
 {
  age = 0;
 }
 Student::~Student()
 {
 }
 Student::Getage()
 {
 return age;
 }
 int main(void)
 {
  Student a(12);
  printf("%d\n",a.Getage());
  return 0;
 }
