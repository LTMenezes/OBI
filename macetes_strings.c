while (scanf("%d", &N) != EOF)//le at� acabar

scanf("%[^\n]", frase); // ir� ler at� o caractere quebra de linha ('\n')

scanf("%[abc]", frase); //far� a fun��o ler todos os caracteres at� o primeiro que n�o seja a, b ou c

scanf("%[a-cek]", frase); //r� fazer a fun��o ler at� o primeiro caractere que n�o tenha c�digo entre a e c (inclusive), ou e ou k.

scanf("%[a-z A-Z]", frase);//iria ler at� o primeiro caractere que n�o esteja entre 'a' e 'z', ou entre 'A' e 'Z' ou n�o seja espa�o em branco (pois ele aparece entre o z e o A)

char frase[110][30]; scanf(" %s", frase[i]); //isso em um for le 110 strings
