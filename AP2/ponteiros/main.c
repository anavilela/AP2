#include <stdio.h>
#include <stdlib.h>

struct tag{                     /* Definição da estrutura */
      char lname[20];           /* nome */
      int age;                  /* idade */
  };

  struct tag my_struct;         /* declaração da variável tipo structure */


  int main(void)
  {
      struct tag *st_ptr;         /* ponteiro para a estrutura */
      st_ptr = &my_struct;        /* ponteiro aponta para a variável my_struct */
      strcpy(my_struct.lname,"Ana Paula");
      printf("%s\n",my_struct.lname);
      my_struct.age = 23;
      printf("%s ", st_ptr->lname);
      printf("%d\n", st_ptr->age);    /* pass the pointer */
      *st_ptr.age=19;
      printf("%d\n",my_struct.age);
  }


