#ifndef _REGEX_H_
#define	_REGEX_H_	/* never again */
/* ========= begin header generated by ../rxspencer-3.8.g.3-src/mkh ========= */
#ifdef __cplusplus
extern "C" {
#endif

/* === ../rxspencer-3.8.g.3-src/regex2.h === */
#ifdef _OFF64_T_
typedef off64_t regoff_t;
#else
typedef long long regoff_t;
#endif
typedef struct {
	int re_magic;
	size_t re_nsub;		/* number of parenthesized subexpressions */
	const char *re_endp;	/* end pointer for REG_PEND */
	struct re_guts *re_g;	/* none of your business :-) */
} regex_t;
typedef struct {
	regoff_t rm_so;		/* start of match */
	regoff_t rm_eo;		/* end of match */
} regmatch_t;
#ifndef __GNUC__
# define __DLL_IMPORT__	__declspec(dllimport)
# define __DLL_EXPORT__	__declspec(dllexport) 
#else
# define __DLL_IMPORT__	__attribute__((dllimport)) extern
# define __DLL_EXPORT__	__attribute__((dllexport)) extern
#endif 

#if (defined __WIN32__) || (defined _WIN32)
# ifdef BUILD_RXSPENCER_DLL
#  define RXSPENCER_DLL_IMPEXP	__DLL_EXPORT__
# elif defined(RXSPENCER_STATIC)
#  define RXSPENCER_DLL_IMPEXP	 
# elif defined (USE_RXSPENCER_DLL)
#  define RXSPENCER_DLL_IMPEXP	__DLL_IMPORT__
# elif defined (USE_RXSPENCER_STATIC)
#  define RXSPENCER_DLL_IMPEXP 	 
# else 
#  define RXSPENCER_DLL_IMPEXP	__DLL_IMPORT__
# endif
#else 
# define RXSPENCER_DLL_IMPEXP	 
#endif


/* === ../rxspencer-3.8.g.3-src/regcomp.c === */
RXSPENCER_DLL_IMPEXP int regcomp(regex_t *, const char *, int);
#define	REG_BASIC	0000
#define	REG_EXTENDED	0001
#define	REG_ICASE	0002
#define	REG_NOSUB	0004
#define	REG_NEWLINE	0010
#define	REG_NOSPEC	0020
#define	REG_PEND	0040
#define	REG_DUMP	0200


/* === ../rxspencer-3.8.g.3-src/regerror.c === */
#define	REG_OKAY	 0
#define	REG_NOMATCH	 1
#define	REG_BADPAT	 2
#define	REG_ECOLLATE	 3
#define	REG_ECTYPE	 4
#define	REG_EESCAPE	 5
#define	REG_ESUBREG	 6
#define	REG_EBRACK	 7
#define	REG_EPAREN	 8
#define	REG_EBRACE	 9
#define	REG_BADBR	10
#define	REG_ERANGE	11
#define	REG_ESPACE	12
#define	REG_BADRPT	13
#define	REG_EMPTY	14
#define	REG_ASSERT	15
#define	REG_INVARG	16
#define	REG_ATOI	255	/* convert name to number (!) */
#define	REG_ITOA	0400	/* convert number to name (!) */
RXSPENCER_DLL_IMPEXP size_t regerror(int, const regex_t *, char *, size_t);


/* === ../rxspencer-3.8.g.3-src/regexec.c === */
RXSPENCER_DLL_IMPEXP int regexec(const regex_t *, const char *, size_t, regmatch_t [], int);
#define	REG_NOTBOL	00001
#define	REG_NOTEOL	00002
#define	REG_STARTEND	00004
#define	REG_TRACE	00400	/* tracing of execution */
#define	REG_LARGE	01000	/* force large representation */
#define	REG_BACKR	02000	/* force use of backref code */


/* === ../rxspencer-3.8.g.3-src/regfree.c === */
RXSPENCER_DLL_IMPEXP void regfree(regex_t *);

#ifdef __cplusplus
}
#endif
/* ========= end header generated by ../rxspencer-3.8.g.3-src/mkh ========= */
#endif