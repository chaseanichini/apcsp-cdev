#include <stdio.h>

// student structure
int getInputNumber()
{
char input[256];
int num;
while (1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%ud", &num) == 1 && num >= 0) break;

    printf("Not a valid number, please try again\n");
   }
return num;
}


//struct Student...
struct Student
{
  char firstName[20];
  char lastName[20];
  unsigned int age;
  long id;
};


void printStudent(struct Student* student)
{
  printf( " Student: %s %s\n", student->firstName, student->lastName);
  printf("   age: %d\n", student->age);
  printf("   id: %ld\n", student->id);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
 for (int i = 0; i < num; i++) {
    printf("\n----- student %d ------\n", i);
    printStudent(&students[i]);
 }
}


int main()
{
  char input[256];

  // an array of students
  struct Student students[10];

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q')
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    printf("\n First Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", students[numStudents].firstName);

    printf(" Last Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", students[numStudents].lastName);

    printf(" Age: ");
    students[numStudents].age = getInputNumber();

    printf(" ID: ");
    students[numStudents].id = getInputNumber();

    numStudents++;
    }
  }

  printf("\nGoodbye!\n");
}
