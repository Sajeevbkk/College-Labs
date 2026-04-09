#include <stdio.h>
/* Store the register number, name and 4 marks of a set of students in an array of structure
and display the details along with total marks in the descending order of total marks. */

struct Student
{
    char name[40];
    int rollno;
    int marks[4];
    int total;
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

    // Sort data in descending order
    sort_data(limit, students);

    print_data(limit, students);

    return 0;
}

void read_data(int limit, struct Student *arr)
{
    for (int i=0; i<limit; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf("Rollno: ");
        scanf("%d", &arr[i].rollno);
        printf("Name: ");
        while (getchar() != '\n'); // to skip charcters
        fgets(arr[i].name, 40, stdin);
        printf("Enter 4 mark: ");
        arr[i].total = 0;
        for (int j=0; j<4; j++)
        {
            scanf("%d", &arr[i].marks[j]);
            arr[i].total += arr[i].marks[j];
        }
        printf("\n");
    }
}

void sort_data(int limit, struct Student *arr)
{
    while (limit>1)
    {
        for (int i=1; i<limit; i++)
        {
            if (arr[i].total>arr[i-1].total)
            {
                struct Student temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
        limit--;
    }
}

void print_data(int limit, struct Student *arr)
{
    printf("--- Student Details (Sorted by Total Marks Descending) ---\n\n");
    for (int i=0; i<limit; i++)
    {
        printf("Roll no: %d\n", arr[i].rollno);
        printf("Name: %s", arr[i].name);
        printf("Marks: %d %d %d %d\n",
            arr[i].marks[0],
            arr[i].marks[1],
            arr[i].marks[2],
            arr[i].marks[3]);
        printf("Total marks: %d", arr[i].total);
        printf("\n\n");
    }
}