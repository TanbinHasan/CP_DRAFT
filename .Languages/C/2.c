#include <stdio.h>
#include <string.h>

struct student_record {
  char name[20];
  int marks;
  struct
  {
    int day;
    int month;
    int year;
  } birth;
} student[10];

int main() {
  int i;
  for (i = 1; i <= 10; i++) {
    printf("Student name:");
    scanf("%s", &student[i].name);
    printf("Date of Birth:");
    scanf("%d %d %d", &student[i].birth.day, &student[i].birth.month, &student[i].birth.year);
    printf("Marks obtained:");
    scanf("%d", &student[i].marks);
  }
  printf("\nStudent Name      D.O.B      Marks\n");
  for (i = 1; i <= 10; i++)
    printf("%-15s %2d/%2d/%4d %-5d\n", student[i].name, student[i].birth.day, student[i].birth.month, student[i].birth.year, student[i].marks);
  return 0;
}