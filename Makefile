CC=gcc
BINARY=out
SOURCES=main.c operacoes.c
INCLUDES=.
LIBRARIES=-lm

greetings:
	@echo "Welcome to Makefile Tutorial"

compile0: #Normal
	gcc main.c operacoes.c -o out 

compile1: #Substituindo variaveis
	$(CC) $(SOURCES) -o $(BINARY) 

compile2: #Com warnigs
	@$(CC) -Wall $(SOURCES) -o $(BINARY)

compile3: #Com gdb
	@$(CC) -g $(SOURCES) -o $(BINARY)
	#gdb out
	#(gdb) run
	#(gdb) quit

compile4: #Adicionando os .h
	@$(CC) $(SOURCES) -o $(BINARY) -I$(INCLUDES)

compile5: #Linkando lib
	@$(CC) $(SOURCES) -o $(BINARY) $(LIBRARIES)

compile6: #Otimizando
	@$(CC) -O3 $(SOURCES) -o $(BINARY)

run:
	@./$(BINARY)

clean:
	@rm $(BINARY)

zip:
	@zip -r Operacoes.zip *.c *.h Makefile