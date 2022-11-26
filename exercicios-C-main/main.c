#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/*
void main()
{
    float sal, novsal;

    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("\n");

    sal += (0.15*sal);

    printf("Seu novo salario eh %.2f", sal);
}
*/

// Estruturas condicionais

/*
int main()
{
    float hora;
    printf("Digite a hora que você quer verificar: ");
    scanf("%f", &hora);


    if (hora > 24)
        printf("Digite um horario valido");

    else if (hora >= 6 && hora < 12)
        printf("Voce esta na manha");

    else if (hora >= 12 && hora < 18)
        printf("Voce esta na tarde");

    else if (hora >= 18 && hora < 22)
        printf("Voce esta na noite");

    else if (hora >= 22 || hora < 4)
        printf("Voce eh vidaloka");

    else
        printf("Voce ta de ressaca");

    return 0;

}*/

/*
int main()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("A letra eh uma vogal");

    else if (letra >= 'a' && letra >= 'z')
        printf("A letra eh uma consoante");


}*/
/*
int main(){

    int lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &lado1);

    printf("\nDigite o valor do segundo lado: ");
    scanf("%d", &lado2);

    printf("\nDigite o valor do terceiro lado: ");
    scanf("%d", &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
        if(lado1 == lado2 && lado2 == lado3)
            printf("O triangulo eh equilatero");
        else if( lado1 != lado2 && lado2 == lado3 || lado3 != lado2 && lado2 == lado1 || lado2 != lado1 && lado1 == lado3)
            printf("O triangulo eh isosceles");
        else if (lado1 != lado2 && lado2 != lado3)
            printf("O triangulo eh escaleno");
    }

    else
        printf("Isso nao eh um triangulo");

    return 0;

}*/


/*
int main(){

    int oi;

    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &oi);

    switch (oi){
    case 1:
        printf("oi");
        break;
    case 2:
        printf("oioi");
        break;
    case 3:
        printf("oioioi");
        break;
    case 4:
        printf("oioioioi");
        break;
    case 5:
        printf("oioioioioi");
        break;

    default:
        printf("Digita um numero de 1 a 5 de novo ai vai la");

    }

}*/

//LISTA 2

/*
int main(){

    int dia;

    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terça");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Digite um valor valido");

    }

}*/

/*
int main(){

    float valor, conta;
    printf("Digite o valor de x: ");
    scanf("%f", &valor);

    if (valor < 1 || valor == 1)
            printf("O valor de x eh 1");

    else if (1 < valor && valor < 2 || valor == 2)
            printf("O valor de x eh 2");

    else if (2 < valor && valor < 3 || valor == 3){
            conta = valor*valor;
            printf("O valor de x eh %f", conta);
    }

    else if (valor > 3){
        conta = valor*valor*valor;
        printf("O valor de x eh %.0f", conta);
    }

    return 0;


}*/

/*
int main(){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16 && idade < 18)
        printf("Seu voto eh facultativo");

    else if (idade >= 18)
        printf("Seu voto eh obrigatorio");

    else if (idade < 16)
        printf("Voce eh um nao eleitor");

    return 0;

}*/

/*
int main(){

    float altura, peso, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);

    if (imc < 20)
        printf("Voce esta abaixo do peso");

    else if (20 <= imc && imc <=25)
        printf("Voce esta com peso normal");

    else if (25 < imc && imc <= 30)
        printf("Voce esta com sobrepeso");

    else if (30 < imc && imc <= 40)
        printf("Voce esta com obesidade");
    else if (40 < imc)
        printf("Voce esta com obesidade morbida");

    return 0;
}*/

/*
int main (){

    float numero, resultado;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero<0)
        printf("Nao eh possivel!!!!!!!!!");
    else {
        resultado = sqrt(numero);
        printf("A raiz de %.2f eh %.2f", numero, resultado);
    }

    return 0;
}*/

/*
int main() {

    float num1,num2,num3, maior, menor, meio;
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    maior = num1; menor = num1; meio = num1;

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    if (num2 > maior) maior = num2;
    if (num2 < menor) menor = num2;
    else if (num2 == meio) meio = num2;

    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    if (num3 > maior) maior = num3;
    if (num3 < menor) menor = num3;
    else if (num3 == meio) meio = num3;

    printf("Ordem: %f, %f, %f", maior,meio, menor);



}*/

//AULA ESTRUTURA DE REPETIÇÃO

/*
int main(){

    int valor;
    printf("Digite um valor entre 0 e 10: ");
    scanf("%d", &valor);

    while (valor > 10 || valor < 0){
        printf("DIGITA OUTRO BILL: ");
        scanf("%d", &valor);
    }
return 0;
}*/


//AULA Estrutura de repetição FOR

/* for (parametro; condição; incremento)
    comando;*/
/*
int main(){

    int valor, i;
    printf("Digite um valor que você queira saber o fatorial: ");
    scanf("%d", &valor);

    while (valor < 0) {
    printf("Digite um valor que você queira saber o fatorial: ");
    scanf("%d", &valor);
    }

    for (i = 1; valor > 1; valor -= 1)
        i = i * valor;

    printf("O fatorial eh: %d", i);

    return 0;

}*/
// 1

/*
int main(){

    int num, var;
    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    while (num < 0) {
    printf("Digite um valor positivo: ");
    scanf("%d", &num);
    }

    for (var = num; var > 0; var--)
        printf("%d ", var);


}*/

// 2
/*
int main() {

    int num, var;
    printf("Digite um numero que queira saber o quadrado: ");
    scanf("%d", &num);

    while (num != 0) {
        for (var = num; num != 0; pow(num, 2))
            printf("")
    }

}*/

//VETORES E STRING

// DECLARANDO NOTA DE TRINTA ALUNOS E DIZENDO QUEM FOI ACIMA DA MEDIA

/*
int main(){

    float notas[50], media, maior, menor, aprov, reprov, avf, alu;
    int var;

    printf("Digite a quantidade de alunos (max. 50): ");
    scanf("%f", &alu);

    for(var = 0; var < alu; var++){
        printf("Digite a nota do aluno %d: ", (var+1));
        scanf("%f", &notas[var]);

        while (notas[var] < 0 || notas[var] > 10){
            printf("Digite a nota do aluno %d: ", (var+1));
            scanf("%f", &notas[var]);
        }
    }

    maior = 0;
    menor = 10;
    for (var = 0; var < alu; var++){
        if(notas[var] > maior){
            maior = notas[var];
        }
        if(notas[var] < menor){
            menor = notas[var];
        }
    }
    media = 0;
    for(var = 0; var < alu; var++){
        media += notas[var];
    }
    media = media/alu;
    printf("A media da sala foi: %.2f \n", media);

    for(var=0; var < alu; var++){
        if(notas[var] >= 7){
            aprov += 1;
        }
        if(notas[var] < 7 && notas[var] >= 3){
            avf += 1;
        }
        if(notas[var] < 3){
            reprov += 1;
        }
    }

    printf("A maior nota foi: %.2f \n", maior);
    printf("\nA menor nota foi: %.2f \n", menor);
    printf("%.2f alunos foram aprovados\n", aprov);
    printf("%.2f alunos foram reprovados\n", reprov);
    printf("%.2f alunos vao para a avf\n", avf);
    printf("A media da sala foi: %.2f", media);
}*/

//EXERCÍCIOS MATRIZ


// --------- LISTA 9 ---------


// Q1

/*
int main(){

    float matriz[3][3];
    int lin, col, dprin, dsec, det;

    for(lin = 0; lin < 3; lin++){
        for(col = 0; col < 3; col++){
            printf("Digite o valor da linha %d, coluna %d: ", (lin+1), (col+1));
            scanf("%f", &matriz[lin][col]);
        }
    }
    dprin = (matriz[2][0]*matriz[0][1]*matriz[1][2]) +
            (matriz[0][0]*matriz[1][1]*matriz[2][2]) +
            (matriz[1][0]*matriz[2][1]*matriz[0][2]);

    dsec = (matriz[2][2]*matriz[0][1]*matriz[1][0]) +
           (matriz[0][2]*matriz[1][1]*matriz[2][0]) +
           (matriz[1][2]*matriz[2][1]*matriz[0][0]);

    det = dprin - dsec;

    printf("O determinante da matriz eh: %d", det);

return 0;
}*/

//LISTA STRING

/*
int main(){
    char frase[50], c1, c2;
    int i;
    printf("Digite uma frase: ");
    gets(frase);

    printf("Digite um caractere: ");
    scanf("%s", &c1);

    printf("Digite o segundo caractere: ");
    scanf("%s", &c2);


    for(i = 0; i < strlen(frase); i++){
        if(frase[i] == c1){
            frase[i] = c2;
        }
    }
    printf("%s", frase);

    return 0;

}*/

/*
int main(){

    char frase[50];
    int i;

    printf("Digite uma frase: ");
    gets(frase);

    for(i = strlen(frase); i >= 0; i--){
        printf("%c", frase[i]);
    }
}*/
/*
int main(){

    char frase1[50], frase2[50];

    printf("Digite a primeira frase: ");
    gets(frase1);

    printf("Digite a segunda frase: ");
    gets(frase2);

    printf("%s", strcat(frase1, frase2));

}*/

/*
int main(){

    char frase[50], palavra[50];
    int cont, i, j, cont2, k;

    printf("Digite uma frase: ");
    gets(frase);

    printf("Digite uma palavra: ");
    gets(palavra);

    i = 0;
    cont2 = 0;
    cont = 0;
    k = 0;
    for(j = 0; j < strlen(frase); j++){
        for(i = 0; i < strlen(palavra); i++){
            if(frase[j+i] == palavra[i]){
                cont2++;
            } else{
                cont2 = 0;
            }

            if (cont2 == strlen(palavra)){
                cont++;
                cont2 = 0;
            }
        }
    }
    printf("A palavra %s foi encontrada %d vezes na frase %s", palavra, cont, frase);

    return 0;
}*/

//LISTA DE MATRIZES

/*
int main(){

    int l, c, i, j, val;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &c);

    l = l - 1;
    c = c - 1;
    int matriz[l][c];

    for(i = 0; i <= l; i++){
        for(j = 0; j <= c; j++){
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA matriz: \n");
    for(i = 0; i <= l; i++){
        for(j = 0; j <= c; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n A transposta: \n");
    for(i = 0; i <= c; i++){
        for(j = 0; j <= l; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}*/

// MATRIZ COM PONTEIROS:
/*
int main(){

    float **v;
    int i, j, m, n;

    scanf("%d", &n); //linha
    scanf("%d", &m);// coluna

    v = (float **)malloc(n * sizeof(float *));

    for(i = 0; i < n; i++){
        v[i] = (float *)malloc(m * sizeof(float));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Digite o valor da matriz de posição [%d][%d]: ", i, j);
            scanf("%f", &v[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%.0f ", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/* SIZEOF(): calcula o tamanho em bytes de uma variavel ou tipo de dado na memoria*/

//VETOR COM ALOCAÇÃO DINAMICA

/*
int main(){

    int v[10], i, *p;

    p = v;
    for(i = 0; i < 10; i++){
        v[i] = i+1;
    }

    for(i = 9; i >= 0; i--){
        printf("%d, ", *(p+i));
    }

}*/

//PRIMEIRA PROVA:

int maior(int *p, int t){
    int maior, i;

    for(i = 0; i < t; i++){
        if(i == 0){
            maior = p[i];
        } else if(p[i] > maior){
            maior = p[i];
        }
    }

    return maior;
}

int verifica_num(int **p, int n, int num){
    int i, j, val;

    val = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(p[i][j] == num){
                val = 0;
                return val;
            }
        }
    }

    return val;

}

int num_diff(int **p, int n){
    int i, j, k, l, val;

    val = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for (k = 0; k < n; k++){
                for(l = 0; l < n; l++){
                    if(i != k || j != l){
                        if(p[i][j] == p[k][l]){
                            val = 0;
                            return val;
                        }
                    }
                }
            }
        }
    }
    return val;

}


int main(){

    int i, j, **m, tam, *v, x, verif, loc;

    printf("digite a quantidade de linhas e colunas da matriz e a quantidade de valores do vetor: ");
    scanf("%d", &tam);

    m = (int **)malloc(tam * sizeof(int*));

    for(i = 0; i < tam; i++){
        m[i] = (int*)malloc(tam * sizeof(int));
    }

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    verif = num_diff(m, tam);
    if(verif == 0){
        while(verif == 0){
            printf("\nValores repitidos encontrados, preencha novamente: \n");
            for(i = 0; i < tam; i++){
                for(j = 0; j < tam; j++){
                    printf("Digite o valor da posicao [%d][%d]: ", i, j);
                    scanf("%d", &m[i][j]);
                }
            }
            verif = num_diff(m, tam);
        }
    }

    v = (int *) malloc(tam * sizeof(int));

    printf("\nDigite o valor que queira encontrar na matriz: ");
    scanf("%d", &x);

    loc = verifica_num(m, tam, x);
    int lin, col;

    if(loc == 1){
        printf("Numero nao encontrado! ate logo:)");
        return 0;
    } else{
        for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
                if(x == m[i][j]){
                    lin = i;
                    col = j;
                }
            }
        }

        for(i = 0; i <= tam; i++){
            v[i] = m[lin][i];
        }
        printf("\nVetor = ");
        for(i = 0; i <= col; i++){
            printf("%d ", v[i]);
        }

        printf("\nO maior valor do vetor eh: %d", maior(v, tam));
    }

}
