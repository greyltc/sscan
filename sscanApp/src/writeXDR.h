#include <sys/types.h>
#include <stdio.h>
#define FALSE 0
#define TRUE -1

typedef int (*xdrproc_t)();

extern int writeXDR_char(FILE *fd, char *cp);
extern int writeXDR_short(FILE *fd, short *sp);
extern int writeXDR_int(FILE *fd, int *ip);
extern int writeXDR_long(FILE *fd, long *lp);
extern int writeXDR_float(FILE *fd, float *fp);
extern int writeXDR_double(FILE *fd, double *dp);
extern int writeXDR_counted_string(FILE *fd, char **p);
extern int writeXDR_string(FILE *fd, char **cpp, int maxsize);
extern int writeXDR_opaque(FILE *fd, caddr_t cp, int cnt);
extern int writeXDR_bytes(FILE *fd, caddr_t addr, u_int len);
extern int writeXDR_vector(FILE *fd, char *basep, int nelem, int elemsize, xdrproc_t xdr_elem);
extern long writeXDR_getpos(FILE *fd);
extern int writeXDR_setpos(FILE *fd, long pos); 