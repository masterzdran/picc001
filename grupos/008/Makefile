linkApp: cmpApp
	gcc app.o isel.o -o app.exe

cmpApp: cmpLibrary
	gcc -c app.c

cmpLibrary:
	gcc -c isel.c
  