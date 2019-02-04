#ifndef __SYS_LOCK_H__
#define __SYS_LOCK_H__

/* Map everything (approximately) to KOS stuff. Note that if the definition
   of spinlock_t changes size, or the definition of SPINLOCK_INITIALIZER
   changes, this will also have to be changed. */
typedef int _LOCK_T;
typedef struct { int a, b, c; } _LOCK_RECURSIVE_T;

#define __LOCK_INIT(class,lock) class _LOCK_T lock = 0;
#define __LOCK_INIT_RECURSIVE(class,lock) class _LOCK_T lock = { 0, 0, 0 };
#define __lock_init(lock) __newlib_lock_init(&(lock))
#define __lock_init_recursive(lock) __newlib_lock_init_recursive(&(lock))
#define __lock_close(lock) __newlib_lock_close(&(lock))
#define __lock_close_recursive(lock) __newlib_lock_close_recursive(&(lock))
#define __lock_acquire(lock) __newlib_lock_acquire(&(lock))
#define __lock_acquire_recursive(lock) __newlib_lock_acquire_recursive(&(lock))
#define __lock_try_acquire(lock) __newlib_lock_try_acquire(&(lock))
#define __lock_try_acquire_recursive(lock) __newlib_lock_try_acquire_recursive(&(lock))
#define __lock_release(lock) __newlib_lock_release(&(lock))
#define __lock_release_recursive(lock) __newlib_lock_release_recursive(&(lock))

/* These are defined in KOS */
void __newlib_lock_init(_LOCK_T *);
void __newlib_lock_close(_LOCK_T *);
void __newlib_lock_acquire(_LOCK_T *);
void __newlib_lock_try_acquire(_LOCK_T *);
void __newlib_lock_release(_LOCK_T *);

void __newlib_lock_init_recursive(_LOCK_RECURSIVE_T *);
void __newlib_lock_close_recursive(_LOCK_RECURSIVE_T *);
void __newlib_lock_acquire_recursive(_LOCK_RECURSIVE_T *);
void __newlib_lock_try_acquire_recursive(_LOCK_RECURSIVE_T *);
void __newlib_lock_release_recursive(_LOCK_RECURSIVE_T *);

#endif /* __SYS_LOCK_H__ */
