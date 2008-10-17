linkApp: cmpApp
	gcc nome_inverso.o isel.o -o nome_inverso.exe

cmpApp: cmpLibrary
	gcc -c nome_inverso.c
 
cmpLibrary:
	gcc -c isel.c
  