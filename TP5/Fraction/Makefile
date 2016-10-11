fraction : fraction.o es_fraction.o op_fraction.o
	@echo creation du fichier executable fraction
	gcc -Wall -o fraction fraction.o es_fraction.o op_fraction.o
	@echo ---------------------------------------------

fraction.o : fraction.c es_fraction.h op_fraction.h type_fraction.h
	@echo creation du fichier fraction.o
	gcc -c fraction.c
	@echo ---------------------------------------------

es_fraction.o : es_fraction.c type_fraction.h
	@echo creation du fichier es_fraction.o
	gcc -c es_fraction.c
	@echo ---------------------------------------------

op_fraction.o : op_fraction.c type_fraction.h
	@echo creation du fichier op_fraction.o
	gcc -c op_fraction.c
	@echo ---------------------------------------------

clean :
	rm -f *o fraction
