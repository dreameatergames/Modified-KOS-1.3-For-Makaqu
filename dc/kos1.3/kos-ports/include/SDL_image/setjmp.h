/* KallistiOS ##version##

   setjmp.h
   Adapted from setjmp.h and machine/setjmp.h from Newlib

*/

#ifdef _arch_dreamcast
#ifndef _SETJMP_H_
#ifdef __cplusplus
extern "C" {
#endif
#define _SETJMP_H_

#define _JBLEN 20

#ifdef _JBLEN
typedef	int jmp_buf[_JBLEN];
#endif

void longjmp(jmp_buf __jmpb, int __retval);
int	setjmp(jmp_buf __jmpb);

#ifdef __cplusplus
}
#endif
#endif /* _SETJMP_H_ */
#endif /* _arch_dreamcast */
