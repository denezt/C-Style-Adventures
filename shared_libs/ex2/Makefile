CC=gcc
CFLG1=-o
CFLGS=-shared $(CFLG1)
SHRLIB=libutils
OBJSRC=utils
PRGNAME=main
CTNR=session
PWD=$(shell pwd)

all: clean build compile test
	@printf "Finished, build from sources...\n"

clean:
	@printf "Cleaning, older sessions.\n"
	@rm -rfv $(CTNR)
	@find . -type f -name "*.so" -delete
	@find . -type f -name "*.o" -delete

build:
	@printf "Running, build"
	mkdir -v $(CTNR)
	$(CC) -c -Wall -Werror -fpic $(OBJSRC).c
	$(CC) $(CFLGS) $(SHRLIB).so $(OBJSRC).o
	cp -a -v $(SHRLIB).so /usr/lib

compile:
	@printf "Compiling $(PRGNAME)\n"
	$(CC) -Wall $(CFLG1) $(CTNR)/sharedtest $(PRGNAME).c -l$(OBJSRC)

test:
	@printf "Starting, to test $(PRGNAME)\n"
