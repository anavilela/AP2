 #include <stdio.h>
  #include <string.h>

  #include <stdio.h>
  #include <string.h>

  struct tag{                     /* the structure type */
      char lname[20];             /* last name */
      char fname[20];             /* first name */
      int age;                    /* age */
      float rate;                 /* e.g. 12.75 per hour */
  };

  struct tag my_struct;           /* define the structure */
  void show_name(struct tag *p);  /* function prototype */

  int main(void)
  {
      struct tag *st_ptr;         /* a pointer to a structure */
      st_ptr = &my_struct;        /* point the pointer to my_struct */
      strcpy(my_struct.lname,"Jensen");
      strcpy(my_struct.fname,"Ted");
      printf("\n%s ",my_struct.fname);
      printf("%s\n",my_struct.lname);
      my_struct.age = 63;
      show_name(st_ptr);          /* pass the pointer */
      return 0;
  }

  void show_name(struct tag *p)
  {
      printf("\n%s ", p->fname);  /* p points to a structure */
      printf("%s ", p->lname);
      printf("%d\n", p->age);
  }
/*
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale("LC_ALL","portuguese");
}

/*
    int V[3]={10,20,30},i;
    int *ptr;
    ptr=&V;
    i=0;
    while(i<3)
    {
    printf("%d\n",*ptr++);
    i++;
    }


}
/*
     int j, k;
  int *ptr;


      j = 1;
      k = 2;
      ptr = &k;
      printf("\n");
      printf("j has the value %d and is stored at %p\n", j, (void *)&j);
      printf("k has the value %d and is stored at %p\n", k, (void *)&k);
      printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
      printf("The value of the integer pointed to by ptr is %d\n", *ptr);

      return 0;

}
/*
  //  int *ptr=NULL, v[4],i;
    char a,*ptra;
    float f=12,*ptrf;
int V[3]={10,20,30};
int *ptr;
ptr=&V; //ptr=&V[0]
printf("%p\n",ptr);
}/*    ptr=v;
    ptra=&a;
    //a='w';
    ptrf=&f;
    //ptr=v;
    /* for(i=0; i<4; i++)
     {
         printf("\nDigite o %d elemento:\t",i+1);
         scanf("%d",&v[i]);
     }

     for(i=0; i<4; i++)
     {
         printf("\nO %d elemento é: \t %d\n",i+1,*ptr);

     }
    printf("\nO tamanho do vetor é: %d e do ponteiro %d",sizeof(v),sizeof(*ptr));
    printf("\nO tamanho do caractere é: %d e do ponteiro %d",sizeof(a),sizeof(&ptra));
    printf("\nO tamanho do float é: %d e do ponteiro %d",sizeof(f),sizeof(&ptrf));
}
*/
