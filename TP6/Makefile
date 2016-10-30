test_sequence : main.o sequence.o 
	@echo Creation du fichier executable test_sequence
	gcc -g -Wall -Werror -o test_sequence main.o sequence.o
	@echo ____________________________________________
main.o : main.c sequence.h
	@echo Creation du fichier main.o
	gcc -g -Wall -Werror -c main.c
	@echo ____________________________________________
sequence.o : sequence.c sequence.h
	@echo Creation du fichier sequence.o
	gcc -g -Wall -Werror -c sequence.c
	@echo _____________________________________________

clean :
	rm -f *.o test_sequence
