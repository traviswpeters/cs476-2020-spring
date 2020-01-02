CC = gcc
CFLAGS = -Wall -std=c99 -ggdb

# targets
all: procs threads gsl uid

# executables
execs: fb t1 t2 gsl_example uid

# --- DEMO CODE ---

procs:
	$(CC) $(CFLAGS) fork_bomb.c -o fb

threads:
	$(CC) $(CFLAGS) threads01.c -o t1 -lpthread # no synchronization...
	$(CC) $(CFLAGS) threads02.c -o t2 -lpthread # pthreads for synchronization

gsl:
	$(CC) $(CFLAGS) gsl_example.c -lgsl -lgslcblas -lm -o gsl_example

uid:
	$(CC) $(CFLAGS) uid_example.c -o uid

clean:
	rm -f $(execs)
