CC=gcc
CFLGS=-o
PRGNAME=multidimensional
CTNR=session

all: clean compile test
	@printf "Finished, build from sources...\n"

clean:
	@printf "Cleaning, older sessions.\n"
	@rm -rfv $(CTNR)

compile:
	@printf "Compiling $(PRGNAME)\n"
	mkdir -v $(CTNR)
	$(CC) $(PRGNAME).c $(CFLGS) $(CTNR)/$(PRGNAME)

test:
	@printf "Starting, to test $(PRGNAME)\n"
