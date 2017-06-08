RM =	cmd //C del



# Compilador

CC=g++ 



# Variaveis para os subdiretorios

LIB_DIR=lib

INC_DIR=include

SRC_DIR=src

OBJ_DIR=build

BIN_DIR=bin

DOC_DIR=doc

TEST_DIR=test
 


# Opcoes de compilacao

CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/questao2



# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome

.PHONY: all init clean debug doxy doc



# Define o alvo (target) para a compilacao completa e os alvos de dependencia.

# Ao final da compilacao, remove os arquivos objeto.

all:	printer


debug: CFLAGS += -g -O0

debug: all




printer: $(OBJ_DIR)/questao2/main.o

	@echo "============="

	@echo "Ligando o alvo $@"

	@echo "============="

	$(CC) $(CFLAGS) -o $(BIN_DIR)/questao2/printer $^

	@echo "+++ [Executavel palindromo criado em  $(BIN_DIR)/printer] +++"

	@echo "============="


# Alvo (target) para a construcao do objeto build/programa1/main.o

# Define os arquivos src/programa1/main.cpp e os arquivos de cabecalho como dependencias.

$(OBJ_DIR)/questao2/main.o: $(SRC_DIR)/questao2/main.cpp $(INC_DIR)/questao2/print1.h

	$(CC) -c $(CFLAGS) -o $@ $<




###########programa 2 ###


# Opcoes de compilacao

CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/questao4



# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome

.PHONY: all init clean debug doxy doc



# Define o alvo (target) para a compilacao completa e os alvos de dependencia.

# Ao final da compilacao, remove os arquivos objeto.

all:	primos


debug: CFLAGS += -g -O0

debug: all




primos: $(OBJ_DIR)/questao4/main.o $(OBJ_DIR)/questao4/isprime.o
	@echo "============="

	@echo "Ligando o alvo $@"

	@echo "============="

	$(CC) $(CFLAGS) -o $(BIN_DIR)/questao4/primos $^

	@echo "+++ [Executavel duplamente criado em $(BIN_DIR)/questao4] +++"

	@echo "============="



$(OBJ_DIR)/questao4/isprime.o: $(SRC_DIR)/questao4/isprime.cpp $(INC_DIR)/questao4/isprime.h

	$(CC) -c $(CFLAGS) -o $@ $<
# Alvo (target) para a construcao do objeto build/programa2/main.o

# Define os arquivos src//programa2main.cpp e os arquivos de cabecalho como dependencias.

$(OBJ_DIR)/questao4/main.o: $(SRC_DIR)/questao4/main.cpp $(INC_DIR)/questao4/isprime.h

	$(CC) -c $(CFLAGS) -o $@ $<



############  questao1  #########

CFLAGS=-Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/questao1



# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome

.PHONY: all init clean debug doxy doc



# Define o alvo (target) para a compilacao completa e os alvos de dependencia.

# Ao final da compilacao, remove os arquivos objeto.

all:	pertomedia


debug: CFLAGS += -g -O0

debug: all




pertomedia: $(OBJ_DIR)/questao1/main.o

	@echo "============="

	@echo "Ligando o alvo $@"

	@echo "============="

	$(CC) $(CFLAGS) -o $(BIN_DIR)/questao1/pertomedia $^

	@echo "+++ [Executavel palindromo criado em  $(BIN_DIR)/pertomedia] +++"

	@echo "============="


# Alvo (target) para a construcao do objeto build/programa1/main.o

# Define os arquivos src/programa1/main.cpp e os arquivos de cabecalho como dependencias.

$(OBJ_DIR)/questao1/main.o: $(SRC_DIR)/questao1/main.cpp $(INC_DIR)/questao1/funcoes.h

	$(CC) -c $(CFLAGS) -o $@ $<

# Alvo (target) para a gera��o automatica de documentacao usando o Doxygen.

# Sempre remove a documentacao anterior (caso exista) e gera uma nova.

doxy:
	
	doxygen -g

doc:

	$(RM) $(DOC_DIR)/questao2/*

	$(RM) $(DOC_DIR)/questao1/*

	$(RM) $(DOC_DIR)/questao4/*


	doxygen



# Alvo (target) usado para limpar os arquivos temporarios (objeto)

# gerados durante a compilacao, assim como os arquivos binarios/executaveis.

clean:

	$(RM) $(BIN_DIR)/questao2/printer

	$(RM) $(OBJ_DIR)/questao2/*

	$(RM) $(BIN_DIR)/questao1/pertomedia

	$(RM) $(OBJ_DIR)/questao1/*

	$(RM) $(BIN_DIR)/questao4/primos

	$(RM) $(OBJ_DIR)/questao4/*



