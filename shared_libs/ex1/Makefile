CC=gcc
CFLG1=-o
CFLGS=-shared $(CFLG1)
SHRLIB=libmeso
OBJSRC=meso
PRGNAME=main
CTNR=session
PWD=$(shell pwd)

all: clean compile test
	@printf "Finished, build from sources...\n"

clean:
	@printf "Cleaning, older sessions.\n"
	@rm -rfv $(CTNR)
	@find . -type f -name "*.so" -delete
	@find . -type f -name "*.o" -delete

compile:
	@printf "Compiling $(PRGNAME)\n"
	mkdir -v $(CTNR)
	$(CC) -c -Wall -Werror -fpic $(OBJSRC).c
	$(CC) $(CFLGS) $(SHRLIB).so $(OBJSRC).o
	$(CC) -L$(PWD) -Wl,-rpath=$(PWD) -Wall $(CFLG1) $(CTNR)/sharedtest $(PRGNAME).c -l$(OBJSRC)

test:
	@printf "Starting, to test $(PRGNAME)\n"
