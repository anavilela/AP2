/*#include <stdio.h>
#include <stdlib.h>

struct  cliente
{
    int numero;
    char nome[20];
};

void escreverArquivoBinario(char *nomeArq, void *cli, struct cliente c)
{
    // int i=0;
    cli=fopen(nomeArq,"a+");
    if (cli==NULL)
        printf("\Erro na abertura do arquivo: ");
    else
    {


        printf("\nDigite o número do cliente a ser incluído:");
        scanf("%d",&c.numero);
        printf("\nDigite o nome do cliente a ser incluído:");
        scanf(" %[^\n]s",c.nome);
        printf("Número: %d e Nome: %s\n",c.numero,c.nome);
        fwrite(&c,sizeof(struct cliente),1,cli);
        if (ferror(cli))
            printf("Erro na gravação\n");
        else
        {
            printf("Gravação realizada com sucesso.\n");
        }
        // i++;

        fclose(cli);
    }
}

void lerArquivoBinario(char *nomeArq, void *cli, struct cliente c)
{
    cli=fopen(nomeArq,"a+");
    if (cli==NULL)
        printf("\Erro na abertura do arquivo: ");
    else
    {
        fread(&c,sizeof(struct cliente),1,cli);
        if (ferror(cli))
            printf("Erro na leitura\n");
        else
            printf("Arquivo aberto para leitura....\n");
        while(!feof(cli))
        {

            printf("\nNúmero do cliente lido: %d",c.numero);
            printf("\nNome do cliente lido: %s\n\n",c.nome);
            fread(&c,sizeof(struct cliente), 1, cli);
            if (ferror(cli))
                printf("Erro na leitura\n");
            else
            {
                printf("Leitura realizada com sucesso.\n");
            }
            //i++;

        }
        printf("Encerrando o arquivo\n");
        fclose(cli);
    }
}

void posicionaInicio(char *nomeArq, void *cli, struct cliente c)
{
    cli=fopen(nomeArq,"a+");
    if (cli==NULL)
    {
        printf("\nErro na abertura do arquivo;");
    }
    else
    {
        fread(&c,sizeof (struct cliente), 1, cli);
        if (ferror(cli))
        {
            printf("\nErro na leitura");
        }
        else
        {
            printf("\nLeitura realizada com sucesso ... ");
            printf("\n Número do cliente: %d",c.numero);
            printf("\n Nome do cliente: %s", c.nome);
            rewind(cli);
            printf("\nCursor reposicionado no início");
            fread(&c, sizeof(struct cliente),1,cli);
            if(!ferror(cli))
            {
                printf("\nErro na leitura");
            }
            else
            {
                printf("\nLeitura realizada com sucesso ");
                printf("\nNúmero do cliente: %d", c.numero);
                printf("\nNome do cliente: %s", c.numero);
            }
        }
        fclose(cli);
    }
}


void remover(void *nomeArqu)
{
    remove(nomeArqu);
}

int main()
{

    FILE *cli;
    struct cliente c;
    char nomeArq[30];




*/    #include <stdio.h>

   void main() {
        FILE *arq;
        int i;
        // Esses dados vão ser gravados !
        int ret, vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        // arquivo alvo
        char nomearq[] = "vet.dat";
        arq = fopen(nomearq, "wb");
        if (arq != NULL) {
            // aqui é feita a escrita !!
            ret = fwrite(vet, sizeof(int), 10, arq);
            if (ret == 10)
                printf("Gravacao com sucesso\n");
            else
                printf("Foram gravados apenas %d elementos\n", ret);
            fclose(arq);
        }
        else
            puts("Erro: criacao do arquivo");


             arq = fopen(nomearq, "rb");
        if (arq != NULL) {
            // estou recuperando AQUI
            ret = fread(vet, sizeof(int), 10, arq);
            if (ret == 10) {
                printf("Elementos: ");
                for (i = 0; i < 10; i++)
                    printf("%d ", vet[i]);
            }
            else
                printf("Foram lidos apenas %d elementos\n", ret);
            fclose(arq);
        }
        else
            puts("Erro: abertura do arquivo");
    }



    /*
    printf("Digite o nome do arquivo:\n");
    scanf("%s",nomeArq);
    escreverArquivoBinario(nomeArq,cli,c);
  //  lerArquivoBinario(nomeArq,cli,c);
    posicionaInicio(nomeArq,cli,c);
    getchar();
    remover(nomeArq);
    getchar();
    return 0;
}
*/
