CC=gcc
CFLGS=-o
PRGNAME=multidimensional
CTNR=session

all: clean compile test
	@printf "Finished, build from sources...\n"

clean:
	@printf "Cleaning, older sessions.\n"
	@find * -type f -wholename "$(CTNR)/$(PRGNAME)" -delete

compile:
	@printf "Compiling $(PRGNAME)\n"
	@mkdir -v $(CTNR) 2> /dev/null || true
	$(CC) $(PRGNAME).c $(CFLGS) $(CTNR)/$(PRGNAME)

test:
	@printf "Starting, to test $(PRGNAME)\n"
