#pragma once
int getopt(int argc, char* const *argv, const char *optstr);
static int optiserr(int argc, char * const *argv, int oint, const char *optstr, int optchr, int err);
extern int optreset;
extern int optind;
extern int opterr;
extern int optopt;