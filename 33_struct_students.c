#include <stdio.h>
/* Store the register number, name and 4 marks of a set of students in an array of structure
and display the details along with total marks in the descending order of total marks. */

struct Student
{
    char name[40];
    int rollno;
    int marks[4];
};

void read_data(int limit, struct Student *arr);
void sort_data(int limit, struct Student *arr);
void print_data(int limit, struct Student *arr);

int main()
{
    int limit;
    printf("Enter number of students: ");
    scanf("%d", &limit);

    struct Student students[limit];
    read_data(limit, students);

    // Sort data in ascending order
    sort_data(limit, students);

    // Show data in descending order
    print_data(limit, students);

    return 0;
}

void read_data(int limit, struct Student *arr)
{
    for (int i=0; i<limit; i++)
    {
        while (getchar() != '\n');
        printf("*** Enter details of student %d ***\n", i+1);
        printf("Name: ");
        fgets(arr[i].name, 40, stdin);
        printf("Rollno: ");
        scanf("%d", &arr[i].rollno);
        for (int j=0; j<4; j++)
        {
            printf("Enter mark of subject %d: ", j+1);
            scanf("%d", &arr[i].marks[j]);
        }
        printf("\n\t-------------------------\n\n");
    }
}

void sort_data(int limit, struct Student *arr)
{
    for (int i = 0; i < limit-1; i++)
        for (int j = 0; j < limit - i - 1; j++)
        {
            int total1 = 0, total2 = 0;

            for (int k = 0; k < 4; k++)
            {
                total1 += arr[j].marks[k];
                total2 += arr[j+1].marks[k];
            }

            if (total1 < total2)
            {
                struct Student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}

void print_data(int limit, struct Student *arr)
{
    printf("Student list (sorted by marks):\n");
    for (int i=limit-1; i>=0; i--)
    {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", arr[i].name);
        printf("Roll no: %d\n", arr[i].rollno);
        printf("Marks: %d\n", arr[i].marks[0]);
        printf("Marks: %d\n", arr[i].marks[1]);
        printf("Marks: %d\n", arr[i].marks[2]);
        printf("Marks: %d\n", arr[i].marks[3]);
        int total_mark = 0;
        for (int j=0; j<4; j++) total_mark += arr[i].marks[j];
        printf("Total marks: %d\n", total_mark);
        printf("\n\t-----------------\n");
    }
}