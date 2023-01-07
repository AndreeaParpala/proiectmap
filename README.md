Se da o matrice generata aleatoriu, se cere să se calculeze: a) Suma elementelor aflate pe diagonala principală, respectiv pe diagonala secundară b) Minimul și maximul elementelor aflate sub diagonala principală, respectiv sub diagonala secundară.

Pentru inceput am creat o matrice alocata dinamic in care vom gasi citirea cat si afisarea acesteia urmand sa fie indeplinite conditiile mentionate mai sus.
În operaţiile de citire şi afişare, s-a parcurs matricea pe linii, adică elementele de
pe linia de indice 0 (a[0][0], a[0][1], a[0][2], ... a[0][m-1]), apoi elementele de pe linia de
indice 1 (a[1][0], a[1][1], a[1][2], ... a[1][m-1]), .... elementele de pe linia de indice n-1
(a[n-1][0], a[n-1][1], a[n-1][2], ... a[n-1][m-1]).
coloana 0 coloana 1 . . . coloana m-1
linia 0 . . .
linia 1 . . .
. . . . . . . . . . . . . . .
linia n-1 . . .
Matricea poate fi parcursă şi pe coloane (coloana 0, coloana 1, ... , coloana m-1)

Suma elementelor aflate pe diagonala principală

Diagonala principală împarte matricea în două zone: zona situată deasupra diagonalei principale şi zona situată dedesubtul diagonalei principale.

 ![sdp](https://user-images.githubusercontent.com/115788226/211169181-95730702-b259-4322-a040-b7a968ee4394.png)


Suma elementelor aflate pe diagonala secundara

Elementele situate pe diagonala secundară se caracterizează prin faptul că suma indicilor este egală cu n-1 (n este dimansiunea matricei).
 
![sds](https://user-images.githubusercontent.com/115788226/211169191-a3ab4f7b-b37b-49bf-af77-b06fe7fbc5b9.png)

Minimul și maximul elementelor aflate sub diagonala principală

 ![mmdp](https://user-images.githubusercontent.com/115788226/211169205-066c51c7-db6d-4367-a059-510c4abfc6ce.png)


Minimul și maximul elementelor aflate sub diagonala secundara

Avem o functie declarata minsimax_diagSec, doua variabile, i si j, si o conditie pentru satisfacerea coditiei m==n
 ![mmds](https://user-images.githubusercontent.com/115788226/211169209-07bd6726-362f-41d7-93fb-beaa13b45cb0.png)


Bibliografie

https://cppi.sync.ro/materia/lectii/matrice%20patratice.pdf

https://info.mcip.ro/?cap=Tablouri%20bidimensionale&prob=684

http://info.tm.edu.ro:8080/~junea/cls%209/C++/tablouri_bidimensionale.pdf

https://et.utcluj.ro/pclp2/cap2.pdf

