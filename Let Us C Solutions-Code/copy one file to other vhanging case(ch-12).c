#include "stdio.h"
main( )
{
FILE *fs, *ft ;
char ch,m;
fs = fopen ( "abc.txt", "r" ) ;
if ( fs == NULL )
{
puts ( "Cannot open source file" ) ;
}
ft = fopen ( "abcd.txt", "w" ) ;
if ( ft == NULL )
{
puts ( "Cannot open target file" ) ;
fclose ( fs ) ;
}
while ( 1 )
{
ch = fgetc ( fs ) ;
m=toupper(ch);
if ( ch == EOF )
break ;
else
fputc ( m, ft ) ;
}
fclose ( fs ) ;
fclose ( ft ) ;
}
