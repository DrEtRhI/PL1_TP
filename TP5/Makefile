exo2 : exo2.o lire.o ecrire.o
	@echo creation de executable exo :
	gcc -Wall -o exo2 exo2.o lire.o ecrire.o
	@echo -------------------------------

lire.o : lire.c
	@echo creation du fichier lire.o :
	gcc -c lire.c
	@echo -------------------------------

exo2.o : exo2.c lire.h ecrire.h
	@echo creation du fichier exo2.o :
	gcc -c exo2.c lire.h ecrire.h
	@echo -------------------------------

ecrire.o : ecrire.c
	@echo creation du fichier ecrire.o :
	gcc -c ecrire.c
	@echo ------------------------------- 
