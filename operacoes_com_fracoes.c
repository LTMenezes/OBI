#include <stdio.h>
//https://www.urionlinejudge.com.br/judge/en/problems/view/1022
//fuctions : calcula, simplify
//FORMAT : N1 / D1 (OPERATOR) N2 / D2

int main(){
    int num_of_operations, i;
    scanf("%d", &num_of_operations);

    //char input[13][num_of_operations];
    char *input = malloc(sizeof(char)* 13 * num_of_operations);
    //guarda dois numeros para cada resultado parte de cima e de baixo
    int *keep_numbers = malloc(sizeof(int)* 2 * num_of_operations);
    //get operations
    for(i=0; i < num_of_operations;i++){
        printf("Insert %d operation : ", i);
        //gets(input[i]);
        scanf("%c %c %c %c %c %c %c %c", input+i*13,input+1+i*13, input+2+i*13,input+3+i*13, input+4+i*13, input+5+i*13, input+6+i*13, input+7+i*13);
    }
    for(i=0; i < num_of_operations;i++){
        calcula(*(input + i*13 + 1), *(input + i*13 + 3), *(input + i*13 + 5), *(input + i*13 + 7), *(input + i*13 + 4), (keep_numbers + i * 2), (keep_numbers + i * 2 + 1));
        printf("%d/%d ", *(keep_numbers + i * 2),*(keep_numbers + i * 2 + 1));
        simplifica((keep_numbers + i * 2),(keep_numbers + i * 2 + 1));
        printf("= %d/%d",*(keep_numbers + i * 2),*(keep_numbers + i * 2 + 1));
        printf("\n");
    }
}

void calcula(char n1_aux, char d1_aux, char n2_aux, char d2_aux, char operation, int *result1, int *result2){
    int aux1, aux2, aux3;
    int n1,d1,n2,d2;
    n1 = n1_aux  - '0';
    d1 = d1_aux  - '0';
    n2 = n2_aux  - '0';
    d2 = d2_aux  - '0';
    int input = operation;
    switch(input){
    case 47 :
        aux1 = n1 * d2;
        aux2 = n2 * d1;
        *result1 = aux1;
        *result2 = aux2;
        break;
    case 42 :
        aux1 = n1 * n2;
        aux2 = d1 * d2;
        *result1 = aux1;
        *result2 = aux2;
        break;
    case 45 :
        aux1 = (n1 * d2 - n2*d1);
        aux2 = d1 * d2;
        *result1 = aux1;
        *result2 = aux2;
        break;
    case 43 :
        aux1 = (n1 * d2 + n2*d1);
        aux2 = d1 * d2;
        *result1 = aux1;
        *result2 = aux2;
        break;
    }
}

void simplifica(int *result1, int *result2){
    //Euclid's algorithm
    int m=*result1, n=*result2, r, gcd;
    while (n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	gcd = m;
	*result1 = *result1 / gcd;
	*result2 = *result2 / gcd;
}
