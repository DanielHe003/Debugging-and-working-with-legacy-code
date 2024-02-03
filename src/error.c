/*
 * Error handling routines
 */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int errors = 0;
int warnings = 0;
int dbflag = 1;

void fatal(char *fmt, ...)
{
        fprintf(stderr, "\nFatal error: ");
        va_list args;
        va_start(args, fmt);
        vfprintf(stderr, fmt, args);
        va_end(args);
        fprintf(stderr, "\n");
        exit(1);
}

void error(char *fmt, ...)
{
        fprintf(stderr, "\nError: ");
        va_list args;
        va_start(args, fmt);
        vfprintf(stderr, fmt, args);
        va_end(args);
        fprintf(stderr, "\n");
        errors++;
}

void warning(char *fmt, ...)
{
        fprintf(stderr, "\nWarning: ");
        va_list args;
        va_start(args, fmt);
        vfprintf(stderr, fmt, args);
        va_end(args);
        fprintf(stderr, "\n");
        warnings++;
}

void debug(char *fmt, ...)
{
        if(!dbflag) return;
        fprintf(stderr, "\nDebug: ");
        va_list args;
        va_start(args, fmt);
        vfprintf(stderr, fmt, args);
        va_end(args);
        fprintf(stderr, "\n");
}
