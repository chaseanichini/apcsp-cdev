//
// student.c
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"
#include "encrypt.h"


const char* STUFILE = "studentdata.txt";

// keeps track of the number of students in the students array
int numStudents = 0;

// holds the student pointer array
Student* students[100] = {0};

// holds student data before it is saved
char studentString[200];





void createStudent(char* fname, char* lname, int age, int id)
{
  // createStudent dynamically creates a Student on the heap and adds that
  // student to the student array
  //  - the firstName and lastName strings should be dynamically created
  //    based on the size of the fname and lname args
  Student* student = (Student*)malloc(sizeof(char));

  student->firstName = (char*)malloc(strlen(fname)+1);
  student->lastName = (char*)malloc(strlen(fname)+1);

  strcpy(student->firstName, fname);
  strcpy(student->lastName, lname);

  student->age = age;
  student->id = id;

  students[numStudents] = student;

  numStudents ++;
}






void deleteStudent(Student* student)
{
  free(student);
}





void deleteStudents()
{
  for (int i = 0; i < numStudents; i++) {
      deleteStudent(students[i]);
  }
}






void saveStudents(int key)
{
  FILE* fp;

  fp = fopen(STUFILE, "w");
  if (fp)
  {
    for (int i = 0; i < numStudents; i++) {
      sprintf(studentString, "%s %s %d %ld", students[i]->firstName, students[i]->lastName, students[i]->age, students[i]->id);
      fprintf(fp, "%s\n", studentString);
    }
    fclose(fp);
  }
}





void loadStudents(int key)
{
  // load the students from the data file overwriting all exisiting students in memory
  //  - make sure you first deleteStudents before loading new ones
  //  - when loading it is best to load data into four strings and then (optionally) decrypt the
  //    strings
  //  - call createStudent to correctly create the students

  deleteStudents();
  numStudents = 0;
  char firstName;
  char lastName;
  unsigned int age;
  long id;


  FILE* fp;

  fp = fopen(STUFILE, "r");
   if (fp)
  {
    while (fscanf(fp, "%s %s %d %ld", &firstName, &lastName, &age, &id)!= EOF){
    createStudent(firstName, lastName, age, id);
}
    fclose(fp);
  }
}


void printStudent(Student* student)
{
  printf("  Student: %s %s\n", student->firstName, student->lastName);
  printf("    age: %d\n", student->age);
  printf("    id: %ld\n", student->id);
}


void printStudents()
{
  for (int i = 0; i < numStudents; i++) {
    printf("\n----- student %d ------\n", i);
    printStudent(students[i]);
  }
}




