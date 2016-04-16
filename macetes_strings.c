while (scanf("%d", &N) != EOF)//le até acabar

scanf("%[^\n]", frase); // irá ler até o caractere quebra de linha ('\n')

scanf("%[abc]", frase); //fará a função ler todos os caracteres até o primeiro que não seja a, b ou c

scanf("%[a-cek]", frase); //rá fazer a função ler até o primeiro caractere que não tenha código entre a e c (inclusive), ou e ou k.

scanf("%[a-z A-Z]", frase);//iria ler até o primeiro caractere que não esteja entre 'a' e 'z', ou entre 'A' e 'Z' ou não seja espaço em branco (pois ele aparece entre o z e o A)

char frase[110][30]; scanf(" %s", frase[i]); //isso em um for le 110 strings
