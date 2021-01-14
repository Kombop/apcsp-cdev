#include <stdio.h>
#include <string.h>



// student structure
//struct Student...
struct Student {
  char firstName[50];
  char lastName[50];
  int age;
  int id;
};

void printStudent(struct Student* student)
{
  printf("\n\nName: %s %s\n", student->firstName, student->lastName);
  printf("Age: %d\n", student->age);
  printf("Id: %d\n", student->id);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  for (int i = 0; i < num; i++) {
    printStudent(&students[i]);
  }
}


int main()
{

  // an array of students
  //xxx students;
  int numStudents = 0;
  struct Student students[numStudents];
  char input[256];

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
      printf("Enter new student\n");
      printf("What is the first name\n");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].firstName);
      
      printf("What is the last name\n");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].lastName);
      printf("What is the age\n");
      while (1)
      {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &students[numStudents].age) == 1) break;
        printf("Not a valid age\n");
      }
      printf("What is the id\n");
      while (1)
      {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &students[numStudents].id) == 1) break;
        printf("Not a valid id\n");
      }
      numStudents++;
      continue;
    }
  }
  
  printf("\nGoodbye!\n");
}
