#define _POSIX_C_SOURCE 200809L
#define _ATFILE_SOURCE

#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main()
{
  int atfd ,dirfd, fd;

  /* get project name from user */
  printf("Name of project: ");

  char project_name[20];
  scanf("%20s", project_name);

  dirfd = openat(AT_FDCWD, ".", O_DIRECTORY | O_CLOEXEC);
  printf("%d", dirfd);
  printf("%s", errno);
  
  int root_dir = mkdirat(dirfd,project_name, 0770);
  
  printf("%d", root_dir);
  return 0;  
}

 
