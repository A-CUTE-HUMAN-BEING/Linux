proccessbar:main.o proccessbar.o
	gcc -o $@ $^
main.o:main.c
	gcc -c main.c
proccessbar.o:proccessbar.c
	gcc -c proccessbar.c
.PHONY:clean
clean:
	rm main.o proccessbar.o proccessbar
