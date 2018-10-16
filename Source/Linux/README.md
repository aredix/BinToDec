##                Compilation sous Linux                 


Sous un environement Linux : 

<code>gcc -lm BinToDec_Lin.c -o BinToDec_Lin </code>

L'argument <code>-lm</code> permet de prendre en compte la librairie math.h pour la fonction <code>pow(int a, int b)</code>


##                Compilation sous Windows               


Sous un environnement Windows : 

Vérifier que GCC est disponible sur votre machine.
Si ce n'est pas le cas, télécharger MinGW (www.mingw.org) et déclarez le répertorie d'installation de MinGW dans vos variables d'environnements.

Avant de compiler, veillez à remplacer les bouts de codes suivant : <code>system("clear");</code> en <code>system("cls");</code> car la commande clear sous Linux n'est pas disponible telle quel sous Windows mais via la commande cls.
Ajoutez aussi en fin de programme après le dernier <code>printf</code>, un <code>system("PAUSE");</code> afin de ne pas voir la fenêtre se fermer dès la fin d'éexécution du programme.

<code> gcc -lm BinToDec_Lin.c -o BinToDec_Lin.exe </code>

L'argument <code>-lm</code> permet de prendre en compte la librairie math.h pour la fonction <code>pow(int a, int b)</code>
