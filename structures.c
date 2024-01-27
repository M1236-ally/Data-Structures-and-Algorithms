#include<stdio.h>

struct emp{
    int eid;
    char ename[10];
    int sal;
};


main()
{
    struct emp empd[5];

    for(int i=1;i<=5;i++)
    {
        printf("Details of emp %d \n",i);
        printf("Enter employee id-");
        scanf("%d",&empd[i].eid);
        printf("Enter employee name-");
        scanf("%s",empd[i].ename);
        printf("Enter emp sal- ");
        scanf("%d",&empd[i].sal);
    }

    printf("\n");

   for(int i=1;i<=5;i++)
    {
        printf("Details of emp %d \n",i);
        printf("Enter employee id %d \n",empd[i].eid);
        printf("Enter employee name %s \n",empd[i].ename);
        printf("Enter sal of emp %d \n",empd[i].sal);
        
    }

    int max_sal=empd[1].sal;
    int Im;
    for(int i=2;i<=5;i++)
    {
        if(max_sal<empd[i].sal)
        {
            max_sal=empd[i].sal;
            Im=i;
        }
    }
   
      printf("Employee details with highest salary: \n");
      printf("Emp id %d \n",empd[Im].eid);
      printf("Emp name %s \n",empd[Im].ename);
      printf("Emp sal %d \n",empd[Im].sal);
        
}