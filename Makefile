OBJECTS = corona19.c manager.o confirmer.o search.o

corona: $(OBJECTS)
	gcc -o $@ $^

corona_debug : $(OBJECTS)
	gcc -DDEBUG -o $@ $^

manager.o: manager.c corona.h
	gcc -c manager.c -o manager.o

confirmer.o: confirmer.c corona.h
	gcc -c confirmer.c -o confirmer.o

search.o : search.c corona.h
	gcc -c search.c -o search.o

clean:
	rm *.o corona corona_debug
