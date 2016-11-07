mainSeqChain : main.o sequence.o 
	@echo Creation du fichier executable mainSeqChain
	gcc -g -Wall -Werror -o mainSeqChain main.o sequence.o
	@echo ____________________________________________
main.o : main.c sequencechaineenoorder.h
	@echo Creation du fichier main.o
	gcc -g -Wall -Werror -c main.c
	@echo ____________________________________________
sequence.o : sequence.c sequencechaineenoorder.h
	@echo Creation du fichier sequence.o
	gcc -g -Wall -Werror -c sequence.c
	@echo _____________________________________________

clean :
	rm -f *.o
