#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

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
}
