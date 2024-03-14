# Definir el compilador y las opciones de compilación
CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11

# Directorios de origen y destino
OBJDIR := obj

# Obtener todos los archivos fuente en el directorio de origen
SRCS := $(wildcard *.cpp)

# Convertir los archivos fuente en nombres de archivo de objeto
OBJS := $(patsubst %.cpp,$(OBJDIR)/%.o,$(SRCS))

BIN :=  $(patsubst %.cpp,%,$(SRCS))

# Regla para crear el directorio de objetos si no existe
$(shell mkdir -p $(OBJDIR))

# Regla para compilar cada archivo fuente individualmente

$(OBJDIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


# Regla principal para construir todos los objetos
all: $(BIN)

# Regla para limpiar los archivos generados
clean:
	$(RM) -r $(OBJDIR)

# No crear ningún archivo llamado clean o all
.PHONY: clean all

