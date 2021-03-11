IDIR =../header
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../bin

LIBS=-lm

_DEPS = init_module.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init.o module.o event_manager.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

event_managing: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
