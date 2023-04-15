#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main()
{
  /* get project name from user */
  printf("Name of project: ");

  char project_name[20];
  scanf("%20s", project_name);

  int root_dir = mkdir(project_name, 0770);

  return 0;  
}

  
