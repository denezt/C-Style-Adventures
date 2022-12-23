CC=gcc
CFLGS=-o
PRGNAME=json_parser
CTNR=session

all: clean compile test
	@printf "Finished, build from sources...\n"

clean:
	@printf "Cleaning, older sessions.\n"
	@rm -rfv $(CTNR)

compile:
	@printf "Compiling $(PRGNAME)\n"
	mkdir -v $(CTNR)
	$(CC) $(PRGNAME).c $(CFLGS) $(PRGNAME) -ljansson
	cp -a -v $(PRGNAME) $(CTNR)/$(PRGNAME)

test:
	@printf "Starting, to test $(PRGNAME)\n"
