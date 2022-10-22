#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int n;

typedef struct scores
{
    int math;
    int programing;
    int english;
}scores;

typedef struct date
{
    int day;
    int month;
    int year;
}date;

typedef struct student
{
    char name[50];
    struct date d;
    int id;
    char address[100];
    int phone;
    struct scores s;
}student;

void new_student(student *ptrs) // add students
{
    int i;
    printf("enter no. of students ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
      {
        printf("%d-enter students data\n",i+1);
        printf("enter students name: ");
        fflush(stdin);
        gets ((ptrs+i)->name);
        printf("enter students id: ");
        scanf("%d",&(ptrs+i)->id);
        printf("enter students date: ");
        scanf("%d %d %d",&(ptrs+i)->d.day,&(ptrs+i)->d.month,&(ptrs+i)->d.year);
        printf("enter students phone: ");
        scanf("%d",&(ptrs+i)->phone);
        printf("enter students address: ");
        fflush(stdin);
        gets ((ptrs+i)->address);
        printf("------------------------------------------------------\n");
      }
}
int delete_student(student *ptrs) // delete students
{
    int x,i=0;
    printf("enter no. of student you want to delete ");
    scanf("%d",&x);
    student s1[20];
    for (i=0;i<=x;i++)
      {
          if (i==x)
          {
            printf("deleted students name: %s\n",(ptrs+i)->name);
            printf("deleted students id: %d\n",(ptrs+i)->id);
            printf("deleted students date: %d %d %d",(ptrs+i)->d.day,(ptrs+i)->d.month,(ptrs+i)->d.year);
            printf("\n");
            printf("deleted students phone: %d\n",(ptrs+i)->phone);
            printf("deleted students address: %s\n",(ptrs+i)->address);
          }
      }
    i=0;
    while (i!=x)
    {
        s1[i]=*(ptrs+i);
        i++;
    }
    while (i<=n)
    {
        s1[i]=*(ptrs+i+1);
        i++;
    }
    i=0;
    while(i!=n)
    {
       *ptrs=*s1;
       i++;
    }
      n=n-1;
      return n;
}
void student_list(student *ptrs) // display students information
{
    int i;
            for (i=0;i<n;i++)
          {
            printf("students name: %s\n ",(ptrs+i)->name);
            printf("students id: %d\n",(ptrs+i)->id);
            printf("students date: %d %d %d",(ptrs+i)->d.day,(ptrs+i)->d.month,(ptrs+i)->d.year);
            printf("\n");
            printf("students phone: %d\n",(ptrs+i)->phone);
            printf("students address: %s\n",(ptrs+i)->address);
          }
}
void student_edit(student *ptrs) // modify students data
{
        int x,i=0;
    printf("enter no. of student you want to modify ");
    scanf("%d",&x);

        for (i=0;i<=x;i++)
      {
          if (x==i+1)
          {
            printf("enter students name: ");
            fflush(stdin);
            gets ((ptrs+i)->name);
            printf("enter students id: ");
            scanf("%d",&(ptrs+i)->id);
            printf("enter students date: ");
            scanf("%d %d %d",&(ptrs+i)->d.day,&(ptrs+i)->d.month,&(ptrs+i)->d.year);
            printf("enter students phone: ");
            scanf("%d",&(ptrs+i)->phone);
            printf("enter students address: ");
            fflush(stdin);
            gets ((ptrs+i)->address);
            printf("edit students name: %s\n",(ptrs+i)->name);
            printf("edit students id: %d\n",(ptrs+i)->id);
            printf("edit students date: %d %d %d",(ptrs+i)->d.day,(ptrs+i)->d.month,(ptrs+i)->d.year);
            printf("\n");
            printf("edit students phone: %d\n",(ptrs+i)->phone);
            printf("edit students address: %s\n",(ptrs+i)->address);
          }
      }
}
void rank_student(student *ptrs) //rearrange students accoding to score
{
    int i=0,max_n=0,m=0;
    student s2[10];
    do
    {
        max_n=m;
     for (i=m+1;i<n;i++)
     {
        if (((ptrs+i)->s.programing)>((ptrs+max_n)->s.programing))
        {
            max_n=i;
            printf("%d",max_n);
        }
     }

            printf("i1=%d\n",i);
            *s2=*(ptrs+m);
            *(ptrs+m)=*(ptrs+max_n);
            *(ptrs+max_n)=*s2;
        m++;
        printf("m=%d\n",m);
    }while(m<n);
    printf("i2= %d\n",i);
            for (i=0;i<n;i++)
            {
                printf("students name: %s ",(ptrs+i)->name);
                printf(" score: %d\n",(ptrs+i)->s.programing);
            }

}
void student_score(student *ptrs) // enter and edit students score
{
    int i;
    printf("enter students score\n ");
       for (i=0;i<n;i++)
    {
        printf("students name: %s ",(ptrs+i)->name);
        scanf("%d",&(ptrs+i)->s.math);
        scanf("%d",&(ptrs+i)->s.programing);
        scanf("%d",&(ptrs+i)->s.english);
    }
}


#endif // FUNCTIONS_H_INCLUDED
