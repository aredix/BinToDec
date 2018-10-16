##                Compilation sous Linux                 


Sous un environement Linux : 

<code>gcc -lm BinToDec_Lin.c -o BinToDec_Lin </code>

L'argument<code>-lm</code> permet de prendre en compte la librairie math.h pour la fonction <code>pow(int a, int b)</code>


##                Compilation sous Windows               


Sous un environnement Windows : 

Vérifier que GCC est disponible sur votre machine.
Si ce n'est pas le cas, télécharger MinGW (www.mingw.org) et déclarer le répertorie d'installation de MinGW dans vos variables d'environnements.

<code> gcc -lm BinToDec_Lin.c -o BinToDec_Lin.exe </code>

L'argument <code>-lm</code> permet de prendre en compte la librairie math.h pour la fonction <code>pow(int a, int b)</code>
