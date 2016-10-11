
complexe : complexe.o es_complexe.o op_complexe.o
	@echo creation de complexe :
	gcc -g -Wall -o complexe complexe.o op_complexe.o es_complexe.o
	@echo -------------------------------

complexe.o : complexe.c es_complexe.h op_complexe.h type_complexe.h
	@echo creation de complexe.o :
	gcc -g -Wall -c  complexe.c
	@echo -------------------------------

op_complexe.o : op_complexe.c type_complexe.h
	@echo creation de op_complexe.o :
	gcc -g -Wall -c  op_complexe.c
	@echo -------------------------------

es_complexe.o : es_complexe.c type_complexe.h
	@echo creation de es_complexe.o :
	gcc -g -Wall -c  es_complexe.c
	@echo -------------------------------

clean :
	rm -f *.o complexe

