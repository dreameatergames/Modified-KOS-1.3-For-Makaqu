/*
	setjmp.h
	stubs for future use.
*/

#ifndef _SETJMP_H_
#define _SETJMP_H_

/*
#include "_ansi.h"
#include <machine/setjmp.h>

_BEGIN_STD_C

void	_EXFUN(longjmp,(jmp_buf __jmpb, int __retval));
int	_EXFUN(setjmp,(jmp_buf __jmpb));

_END_STD_C

*/

typedef int jmp_buf;

static __inline__ void longjmp(jmp_buf __jmpb, int __retval){}
static __inline__ int setjmp(jmp_buf __jmpb){ return 0; }

#endif /* _SETJMP_H_ */

