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

void ascii_to_int( char set_input ){
  printf("The Char: %c is %i.\n", set_input, set_input );
}

int selector( int svar, int get_input ){
  int _ret = 0;
  switch(svar){
    case 'i':
    ascii_to_int(get_input);
    break;
    default:
    printf("Error: Missing command parameter!\n");
    _ret = 1;
    break;
  }  
  return _ret;
}

void help_menu(){
  printf("Character Finder\n");
  printf("charfinder\t-i\t[ convert to integer ]\n");
  printf("charfinder\t-h\t[ Show help menu ]\n");
}

int main(int argc, char *argv[]){  
  if ( argc > 2 ){
    char 	_type = *++argv[1];
    char 	_input = *argv[2];
    selector(_type, _input);
  } else if ( argc == 2 ){
    char	option = *++argv[1];    
    switch ( option ){
      case 'h':
        help_menu();
      break;
      default:
        printf("Error: Try 'h' to view options.\n");
      break;
    }
  } else {
    printf(ERRORMSG1);
    exit_state = 1;
  }  
  return exit_state;
}
