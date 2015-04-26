/******************************************************************
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Please free to contact Richard Jackson for any questions.
email: <denezt@yahoo.com>
Created 24 April 2015
*******************************************************************/

#include "stdio.h"
#include "math.h"
#include "ctype.h"

#define	 ERRORMSG1	"Error: Missing or invalid parameter was entered!\n"


static const int reps = 10;
int exit_state = 0;

void ascii_to_int( char g_input ){
	printf("The Char: %c is %i.\n", g_input, g_input );
	}

int selector( int svar, int g_input ){
	int _ret = 0;
	switch(svar){
		case 'i':
			ascii_to_int(g_input);
		break;
		default:
			printf("Error: Missing command parameter!\n");
			_ret = 1;
		break;
	}

	return _ret;
	}


int main(int argc, char *argv[]){
	if ( argc > 2 ){
		char _type = *++argv[1];
		char _input = *argv[2];
		selector( _type, _input );
	} else {
		printf(ERRORMSG1);
		exit_state = 1;
	}

	return exit_state;
}
