#include<stdio.h>

struct emp{
    int eid;
    char ename[10];
    int sal;
};


main()
{
    struct emp *ptr;

    for(int i=1;i<=5;i++)
    {
        printf("Details of emp %d \n",i);
        printf("Enter employee id-");
        scanf("%d",&(ptr+i)->eid);
        printf("Enter employee name-");
        scanf("%s",&(ptr+i)->ename);
        printf("Enter emp sal- ");
        scanf("%d",&(ptr+i)->sal);
    }

     printf("\n");

   for(int i=1;i<=5;i++)
    {
        printf("Details of emp %d \n",i);
        printf("Enter employee id %d \n",(ptr+i)->eid);
        printf("Enter employee name %s \n",(ptr+i)->ename);
        printf("Enter sal of emp %d \n",(ptr+i)->sal);   
    }

     int max_sal=(ptr+0)->sal;
    int Im;
    for(int i=1;i<5;i++)
    {
        if(max_sal<(ptr+i)->sal)
        {
            max_sal=(ptr+i)->sal;
            Im=i;
        }
    }
   
      printf("Employee details with highest salary: \n");
      printf("Emp id %d \n",(ptr+Im)->eid);
      printf("Emp name %s \n",(ptr+Im)->ename);
      printf("Emp sal %d \n",(ptr+Im)->sal);

}