#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#include <curses.h>

//letra a
typedef struct biblioteca
{
    int cod,num,doado;
    char nome[30], livro[30], editora[30];
} bib;

void leitura(bib *e,bib *h, bib *b)
{
    int i=0,j=0,k=0, flag=1, op, area;
    do
    {
        printf("\nVocê deseja inserir um novo registro? Sim = 1\n");
        scanf("%d", &op);
        printf("\nDigite a área:");
        scanf("%d",&area);

        if (op==1)
        {
            if (area==1)//exatas
            {
                do
                {
                    printf("\n\n________________________________________\nDigite os dados do %d -esimo registro:\n",i+1);
                    printf("\nCódigo do %d -esimo registro:\t",i+1);
                    scanf("%d",&e[i].cod);
                    printf("\nNúmero do %d -esimo registro:\t",i+1);
                    scanf("%d",&e[i].num);
                    printf("\nAutor do %d -esimo registro:\t",i+1);
                    scanf(" %[^\n]s", e[i].nome);
                    printf("\nNome do livro do %d -esimo registro:\t",i+1);
                    scanf(" %[^\n]s",e[i].livro);
                    printf("\nDoado: sim = 1 não = 0:\t");
                    //fflush(stdin);
                    scanf("%d",&e[i].doado);
                    printf("\nNúmero de páginas:\t");
                    //fflush(stdin);
                    scanf("%d",&e[i].num);
                    i++;
                    if(i<2)
                    {
                        printf("\nVocê deseja inserir um novo registro? Sim = 1\n");
                        scanf("%d", &op);
                        if (op!=1)
                        {
                            flag=0;
                            i=2;
                        }
                    }
                    else

                        if ((op!=1))
                        {
                            i=2;
                            flag=0;
                        }

                }
                while(i<2);       //fim enquanto não preenche todos os elementos do vetor da área
            } // fim if área = 1
        }//fim if op = 1
        //else
        //{
        flag=0;
        //}

        /*if (area==2)//humanas
        {
            printf("\n\n________________________________________\nDigite os dados do %d -esimo registro:\n",i+1);
            printf("\nCódigo do %d -esimo registro:\t",i+1);
            scanf("%d",&e[i].cod);
            printf("\nNúmero do %d -esimo registro:\t",i+1);
            scanf("%d",&e[i].num);
            printf("\nAutor do %d -esimo registro:\t",i+1);
            scanf(" %[^\n]s", e[i].nome);
            printf("\nNome do livro do %d -esimo registro:\t",i+1);
            scanf(" %[^\n]s",e[i].livro);
            printf("\nDoado: sim = 1 não = 0:\t");
            //fflush(stdin);
            scanf("%d",&e[i].doado);
            i++;
        }

        if (area==3)//biológicas
        {
            printf("\n\n________________________________________\nDigite os dados do %d -esimo registro:\n",i+1);
            printf("\nCódigo do %d -esimo registro:\t",i+1);
            scanf("%d",&e[i].cod);
            printf("\nNúmero do %d -esimo registro:\t",i+1);
            scanf("%d",&e[i].num);
            printf("\nAutor do %d -esimo registro:\t",i+1);
            scanf(" %[^\n]s", e[i].nome);
            printf("\nNome do livro do %d -esimo registro:\t",i+1);
            scanf(" %[^\n]s",e[i].livro);
            printf("\nDoado: sim = 1 não = 0:\t");
            //fflush(stdin);
            scanf("%d",&e[i].doado);
            i++;
        }*/

    }
    while(flag==1);
}


//consulta(exatas,humanas,biologicas,codigo, area);
void consulta(bib *e, bib *h, bib *b, int codigo, int area)
{
    int i, cont=1;

    if(area==1)
    {
        for(i=0; i<2; i++)
        {
            if (e[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Imprimindo os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1,e[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1,e[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,e[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,e[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",e[i].doado);
                printf("\n__________________________________________");
                cont++;

            }
        }
        if (cont==1)
            printf("Este livro não foi cadatrado");


    }


}

void consultaDoado(bib *e, bib *h, bib *b, int doado)
{
    int i, cont=1;

    //if(area==1)


    for(i=0; i<2; i++)
    {
        printf("O valor de e[%d].cod=%d",i,e[i].doado);
        getchar();
        if (e[i].doado==doado)
        {
            printf("\n__________________________________________");
            printf("\n\Imprimindo os campos do registro         |");
            printf("\n|Código do %d -esimo registro:\t%d        |",i+1,e[i].cod);
            printf("\n|Número do %d -esimo registro:\t%d        |",i+1,e[i].num);
            printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,e[i].nome);
            printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,e[i].livro);
            printf("\n|Doado: sim = 1 não = 0:\t%d              |",e[i].doado);
            printf("\n|Número de páginas:\t%d                   |",e[i].num);
            printf("\n__________________________________________");
            cont++;
            system("cls");

        }// fim if e[i]=doado

        if (h[i].doado==doado)
        {
            printf("\n__________________________________________");
            printf("\n\Imprimindo os campos do registro         |");
            printf("\n|Código do %d -esimo registro:\t%d        |",i+1,h[i].cod);
            printf("\n|Número do %d -esimo registro:\t%d        |",i+1,h[i].num);
            printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,h[i].nome);
            printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,h[i].livro);
            printf("\n|Doado: sim = 1 não = 0:\t%d              |",h[i].doado);
            printf("\n__________________________________________");
            cont++;

        }// fim if h[i]=doado

        if (b[i].doado==doado)
        {
            printf("\n__________________________________________");
            printf("\n\Imprimindo os campos do registro         |");
            printf("\n|Código do %d -esimo registro:\t%d        |",i+1,b[i].cod);
            printf("\n|Número do %d -esimo registro:\t%d        |",i+1,b[i].num);
            printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,b[i].nome);
            printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,b[i].livro);
            printf("\n|Doado: sim = 1 não = 0:\t%d              |",b[i].doado);
            printf("\n__________________________________________");
            cont++;

        }// fim if b[i]=doado
    }
    if (cont==1)
        printf("Não consta livro doado. A variavel cont=%d",cont);


}//fim módulo consulta doado





void consultaPagina(bib *e, bib *h, bib *b)
{
    int i, cont=1;

    //if(doado==0)
    //{
    for(i=0; i<2; i++)
    {
        if(e[i].doado==0)
        {
            if (e[i].num>=100 && e[i].num<=300)
            {
                printf("\n__________________________________________");
                printf("\n\Imprimindo os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1,e[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1,e[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,e[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,e[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",e[i].doado);
                printf("\n|Número de páginas:\t%d                   |",e[i].num);
                printf("\n__________________________________________");
                cont++;
                // system("cls");

            }
        }//fim entre 100 e 300

        if(h[i].doado==0)
        {
            if (h[i].num>=100 && h[i].num<=300)
            {
                printf("\n__________________________________________");
                printf("\n\Imprimindo os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1,h[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1,h[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,h[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,h[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",h[i].doado);
                printf("\n__________________________________________");
                cont++;

            }//fim entre 100 e 300
        }// fim if h[i]=doado

        if(e[i].doado==0)
        {

            if (b[i].num>=100 && b[i].num<=300)
            {
                printf("\n__________________________________________");
                printf("\n\Imprimindo os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1,b[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1,b[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,b[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,b[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",b[i].doado);
                printf("\n__________________________________________");
                cont++;

            }//fim entre 100 e 300
        }// fim if b[i]=doado
    }//fim for

    if (cont==1)
        printf("\nEntre os livros comprados, não consta um título que tenha o número de páginas entre 100 e 300\n");

}//fim módulo consulta número de páginas


void altera(bib *e, bib *h, bib *b, int codigo, int area)
{
    int i, cont=1;

    if(area==1)
    {
        for(i=0; i<2; i++)
        {
            if(e[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Alterando os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&e[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&e[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1);
                scanf(" %s",&e[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1);
                scanf(" %s",&e[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",i+1);
                scanf("%d",&e[i].doado);
                printf("\n|Número de páginas:\t%d                   |",i+1);
                scanf("%d",&e[i].num);
                printf("\n__________________________________________");
                cont++;
            }//fim if e[i]codigo=codigo
        }// fim for

    }//fim if area =1


    if(area==2)
    {
        for(i=0; i<2; i++)
        {
            if(h[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Alterando os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&h[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&h[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1);
                scanf(" %s",&h[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1);
                scanf(" %s",&h[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",i+1);
                scanf("%d",&h[i].doado);
                printf("\n|Número de páginas:\t%d                   |",i+1);
                scanf("%d",&h[i].num);
                printf("\n__________________________________________");
                cont++;
            }//fim if h[i]codigo=codigo
        }// fim for

    }//fim if area=2

    if(area==3)
    {
        for(i=0; i<2; i++)
        {
            if(b[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Alterando os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&b[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&b[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1);
                scanf(" %s",&b[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1);
                scanf(" %s",&b[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",i+1);
                scanf("%d",&b[i].doado);
                printf("\n|Número de páginas:\t%d                   |",i+1);
                scanf("%d",&b[i].num);
                printf("\n__________________________________________");
                cont++;
            }//fim if h[i]codigo=codigo
        }// fim for

    }//fim if area=3



    if (cont==1)
        printf("\nEste livro não existe.\n");


}


void exclui(bib *e, bib *h, bib *b, int codigo, int area)
{
    int i, cont=1, max=2;

    if(area==1)
    {
        for(i=0; i<max; i++)
        {
            if(e[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Excluindo os campos do registro         |");
                e[i].cod=e[i+1].cod;
                e[i].num=e[i+1].num;
                strcpy(e[i].nome,e[i+1].nome);
                strcpy(e[i].livro,e[i+1].livro);
                e[i].doado=e[i+1].doado;

                cont++;
                max--;
            }//fim if e[i]codigo=codigo
        }// fim for

    }//fim if area =1


    if(area==2)
    {
        for(i=0; i<2; i++)
        {
            if(h[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Alterando os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&h[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&h[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1);
                scanf(" %s",&h[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1);
                scanf(" %s",&h[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",i+1);
                scanf("%d",&h[i].doado);
                printf("\n|Número de páginas:\t%d                   |",i+1);
                scanf("%d",&h[i].num);
                printf("\n__________________________________________");
                cont++;
            }//fim if h[i]codigo=codigo
        }// fim for

    }//fim if area=2

    if(area==3)
    {
        for(i=0; i<2; i++)
        {
            if(b[i].cod==codigo)
            {
                printf("\n__________________________________________");
                printf("\n\Alterando os campos do registro         |");
                printf("\n|Código do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&b[i].cod);
                printf("\n|Número do %d -esimo registro:\t%d        |",i+1);
                scanf("%d",&b[i].num);
                printf("\n|Autor do %d-esimo registro:\t%s          |",i+1);
                scanf(" %s",&b[i].nome);
                printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1);
                scanf(" %s",&b[i].livro);
                printf("\n|Doado: sim = 1 não = 0:\t%d              |",i+1);
                scanf("%d",&b[i].doado);
                printf("\n|Número de páginas:\t%d                   |",i+1);
                scanf("%d",&b[i].num);
                printf("\n__________________________________________");
                cont++;
            }//fim if h[i]codigo=codigo
        }// fim for

    }//fim if area=3



    if (cont==1)
        printf("\nEste livro não existe.\n");


}


int main()
{
    setlocale(LC_ALL,"Portuguese");
    bib exatas[2], humanas[2], biologicas[2], e[4]= {{1,150,1,"Ana Paula","Algoritmos","Elsevier"},{10,0,0,"Paula","Alg","Els"},{12,1502,1,"Ana Paula2","Algoritmos2","Elsevier2"},{13,150,1,"Ana Paula3","Algoritmos3","Elsevier3"}};
    int area, codigo, i, cont=1, max=4, flag=0;

    //if(area==1)


    for(i=0; i<max; i++)
    {
        //printf("O valor de e[%d].cod=%d",i,e[i].doado);
        getchar();
        //  if (e[i].doado==doado)
        // {
        printf("\n__________________________________________");
        printf("\n\Imprimindo os campos do registro         |");
        printf("\n|Código do %d -esimo registro:\t%d        |",i+1,e[i].cod);
        printf("\n|Número do %d -esimo registro:\t%d        |",i+1,e[i].num);
        printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,e[i].nome);
        printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,e[i].livro);
        printf("\n|Doado: sim = 1 não = 0:\t%d              |",e[i].doado);
        printf("\n|Número de páginas:\t%d                   |",e[i].num);
        printf("\n__________________________________________");
        cont++;
        //system("cls");

    }// fim if e[i]=doado


    getchar();
    printf("Excluindo registros");
    for(i=0; i<max; i++)
    {
        //printf("O valor de e[%d].cod=%d",i,e[i].doado);
        getchar();


        if (e[i].cod==1)
        {
            flag=1;
            max--;
        }
        if (flag==1)
        {

            printf("\nEstamos excluindo os registros");
            printf("\ncódigo de %d para %d\n",e[i].cod,e[i+1].cod);
            e[i].cod=e[i+1].cod;
            e[i].num=e[i+1].num;
            //strcpy (str2,str1);
            strcpy(e[i].nome,e[i+1].nome);
            // strcpy(e[i].livro,e[i+1].livro);
            e[i].doado=e[i+1].doado;

            cont++;

        }
        //system("cls");

    }// fim if e[i]=doado

    getchar();
    printf("Listando novamente os registros");

    for(i=0; i<max; i++)
    {
        //printf("O valor de e[%d].cod=%d",i,e[i].doado);
        getchar();
        //  if (e[i].doado==doado)
        // {
        printf("\n__________________________________________");
        printf("\n\Imprimindo os campos do registro         |");
        printf("\n|Código do %d -esimo registro:\t%d        |",i+1,e[i].cod);
        printf("\n|Número do %d -esimo registro:\t%d        |",i+1,e[i].num);
        printf("\n|Autor do %d-esimo registro:\t%s          |",i+1,e[i].nome);
        //printf("\n|Nome do livro do %d -esimo registro:\t%s |",i+1,e[i].livro);
        printf("\n|Doado: sim = 1 não = 0:\t%d              |",e[i].doado);
        printf("\n|Número de páginas:\t%d                   |",e[i].num);
        printf("\n__________________________________________");
        cont++;
        //system("cls");

    }// fim if e[i]=doad




    /*leitura(exatas, humanas, biologicas);

    printf("\n\n Letra b:");
    printf("\n\n Digite a área: ");
    scanf("%d",&area);
    printf("\n\n Digite o código:");
    scanf("%d",&codigo);
    while(codigo!=-1)
    {
        consulta(exatas,humanas,biologicas,codigo,area);
        printf("\nDeseja consultar outro livro? Para sair digite -1:\n");
        scanf("%d",&codigo);
        if (codigo!=-1)
        {
            printf("\n\n Digite a área: ");
            scanf("%d",&area);
            consulta(exatas,humanas,biologicas,codigo,area);
        }//fim if código != -1


    }//fim while código != -1

    printf("\n\n Letra c:");
    printf("\n Relação de livros doados: ");
    consultaDoado(exatas,humanas,biologicas,1);
    printf("\n\n Letra d:");
    consultaPagina(exatas,humanas,biologicas);
    printf("\n\n Letra e:\n");
    printf("Digite o código: \t");
    scanf("%d",&codigo);
    printf("Digite a área: \t");
    scanf("%d",&area);

    // area=1;
    altera(exatas,humanas,biologicas,codigo,area);


    printf("\n\n Letra f:\n");
    printf("Digite o código: \t");
    scanf("%d",&codigo);
    printf("Digite a área: \t");
    scanf("%d",&area);
    exclui(exatas,humanas,biologicas,codigo,area);

    consultaPagina(exatas,humanas,biologicas);

    //Elabore um módulo que faça a alteração de um registro. Para tal, o usuário
    //fornece o código, a áreas e as demais informações sobre o livro. Lembre-se de
    // que somente pode ser alterado um livro existente.


    //printf("Hello world!\n");
    return 0;*/
}
