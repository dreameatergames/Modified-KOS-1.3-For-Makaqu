/* This is a generated file, do not edit!! */
#define __EXPORTS_FILE
#include <kos/exports.h>
extern unsigned int __assert;
extern unsigned int abort;
extern unsigned int abs;
extern unsigned int arch_abort;
extern unsigned int arch_exec;
extern unsigned int arch_exec_at;
extern unsigned int arch_exit;
extern unsigned int arch_stk_trace;
extern unsigned int arch_stk_trace_at;
extern unsigned int calloc;
extern unsigned int cond_broadcast;
extern unsigned int cond_create;
extern unsigned int cond_destroy;
extern unsigned int cond_signal;
extern unsigned int cond_wait;
extern unsigned int cond_wait_timed;
extern unsigned int dbgio_dev_get;
extern unsigned int dbgio_dev_select;
extern unsigned int dbgio_disable;
extern unsigned int dbgio_enable;
extern unsigned int dbgio_flush;
extern unsigned int dbgio_printf;
extern unsigned int dbgio_read;
extern unsigned int dbgio_read_buffer;
extern unsigned int dbgio_set_irq_usage;
extern unsigned int dbgio_write;
extern unsigned int dbgio_write_buffer;
extern unsigned int dbgio_write_buffer_xlat;
extern unsigned int dbgio_write_str;
extern unsigned int dbglog;
extern unsigned int dcache_flush_range;
extern unsigned int dcache_inval_range;
extern unsigned int elf_free;
extern unsigned int elf_load;
extern unsigned int exit;
extern unsigned int fclose;
extern unsigned int fdopen;
extern unsigned int fflush;
extern unsigned int fopen;
extern unsigned int fputc;
extern unsigned int fread;
extern unsigned int free;
extern unsigned int fs_chdir;
extern unsigned int fs_close;
extern unsigned int fs_complete;
extern unsigned int fs_copy;
extern unsigned int fs_dup;
extern unsigned int fs_dup2;
extern unsigned int fs_get_handle;
extern unsigned int fs_get_handler;
extern unsigned int fs_getwd;
extern unsigned int fs_ioctl;
extern unsigned int fs_load;
extern unsigned int fs_mkdir;
extern unsigned int fs_mmap;
extern unsigned int fs_open;
extern unsigned int fs_open_handle;
extern unsigned int fs_pty_create;
extern unsigned int fs_read;
extern unsigned int fs_readdir;
extern unsigned int fs_rename;
extern unsigned int fs_rmdir;
extern unsigned int fs_romdisk_mount;
extern unsigned int fs_romdisk_unmount;
extern unsigned int fs_seek;
extern unsigned int fs_stat;
extern unsigned int fs_tell;
extern unsigned int fs_total;
extern unsigned int fs_unlink;
extern unsigned int fs_write;
extern unsigned int fseek;
extern unsigned int ftell;
extern unsigned int fwrite;
extern unsigned int genwait_wait;
extern unsigned int genwait_wake_all;
extern unsigned int genwait_wake_cnt;
extern unsigned int genwait_wake_one;
extern unsigned int icache_flush_range;
extern unsigned int irq_disable;
extern unsigned int irq_enable;
extern unsigned int irq_force_return;
extern unsigned int irq_get_context;
extern unsigned int irq_get_global_handler;
extern unsigned int irq_get_handler;
extern unsigned int irq_inside_int;
extern unsigned int irq_restore;
extern unsigned int irq_set_context;
extern unsigned int irq_set_global_handler;
extern unsigned int irq_set_handler;
extern unsigned int mallinfo;
extern unsigned int malloc;
extern unsigned int malloc_irq_safe;
extern unsigned int malloc_stats;
extern unsigned int mem_check_all;
extern unsigned int mem_check_block;
extern unsigned int memalign;
extern unsigned int memcmp;
extern unsigned int memcpy;
extern unsigned int memset;
extern unsigned int mmu_context_create;
extern unsigned int mmu_context_destroy;
extern unsigned int mmu_copyin;
extern unsigned int mmu_copyv;
extern unsigned int mmu_init;
extern unsigned int mmu_map_get_callback;
extern unsigned int mmu_map_set_callback;
extern unsigned int mmu_page_map;
extern unsigned int mmu_reset_itlb;
extern unsigned int mmu_shutdown;
extern unsigned int mmu_switch_context;
extern unsigned int mmu_use_table;
extern unsigned int mmu_virt_to_phys;
extern unsigned int mutex_create;
extern unsigned int mutex_destroy;
extern unsigned int mutex_is_locked;
extern unsigned int mutex_lock;
extern unsigned int mutex_lock_timed;
extern unsigned int mutex_trylock;
extern unsigned int mutex_unlock;
extern unsigned int net_get_if_list;
extern unsigned int net_input;
extern unsigned int net_input_set_target;
extern unsigned int net_reg_device;
extern unsigned int net_unreg_device;
extern unsigned int nmmgr_get_list;
extern unsigned int nmmgr_handler_add;
extern unsigned int nmmgr_handler_remove;
extern unsigned int nmmgr_lookup;
extern unsigned int panic;
extern unsigned int printf;
extern unsigned int realloc;
extern unsigned int rewind;
extern unsigned int rtc_boot_time;
extern unsigned int rtc_unix_secs;
extern unsigned int sem_count;
extern unsigned int sem_create;
extern unsigned int sem_destroy;
extern unsigned int sem_signal;
extern unsigned int sem_trywait;
extern unsigned int sem_wait;
extern unsigned int sem_wait_timed;
extern unsigned int sprintf;
extern unsigned int strcasecmp;
extern unsigned int strcat;
extern unsigned int strcpy;
extern unsigned int strlen;
extern unsigned int strncasecmp;
extern unsigned int strncat;
extern unsigned int thd_block_now;
extern unsigned int thd_by_tid;
extern unsigned int thd_create;
extern unsigned int thd_destroy;
extern unsigned int thd_exit;
extern unsigned int thd_get_current;
extern unsigned int thd_get_errno;
extern unsigned int thd_get_label;
extern unsigned int thd_get_pwd;
extern unsigned int thd_pass;
extern unsigned int thd_pslist;
extern unsigned int thd_pslist_queue;
extern unsigned int thd_schedule;
extern unsigned int thd_schedule_next;
extern unsigned int thd_set_label;
extern unsigned int thd_set_mode;
extern unsigned int thd_set_prio;
extern unsigned int thd_set_pwd;
extern unsigned int thd_sleep;
extern unsigned int thd_wait;
extern unsigned int timer_ms_gettime;
extern unsigned int timer_ms_gettime64;
extern unsigned int timer_primary_set_callback;
extern unsigned int timer_primary_wakeup;
extern unsigned int timer_spin_sleep;
extern unsigned int valloc;
extern unsigned int vsprintf;
export_sym_t kernel_symtab[] = {
	{ "__assert", (unsigned long)(&__assert) },
	{ "abort", (unsigned long)(&abort) },
	{ "abs", (unsigned long)(&abs) },
	{ "arch_abort", (unsigned long)(&arch_abort) },
	{ "arch_exec", (unsigned long)(&arch_exec) },
	{ "arch_exec_at", (unsigned long)(&arch_exec_at) },
	{ "arch_exit", (unsigned long)(&arch_exit) },
	{ "arch_stk_trace", (unsigned long)(&arch_stk_trace) },
	{ "arch_stk_trace_at", (unsigned long)(&arch_stk_trace_at) },
	{ "calloc", (unsigned long)(&calloc) },
	{ "cond_broadcast", (unsigned long)(&cond_broadcast) },
	{ "cond_create", (unsigned long)(&cond_create) },
	{ "cond_destroy", (unsigned long)(&cond_destroy) },
	{ "cond_signal", (unsigned long)(&cond_signal) },
	{ "cond_wait", (unsigned long)(&cond_wait) },
	{ "cond_wait_timed", (unsigned long)(&cond_wait_timed) },
	{ "dbgio_dev_get", (unsigned long)(&dbgio_dev_get) },
	{ "dbgio_dev_select", (unsigned long)(&dbgio_dev_select) },
	{ "dbgio_disable", (unsigned long)(&dbgio_disable) },
	{ "dbgio_enable", (unsigned long)(&dbgio_enable) },
	{ "dbgio_flush", (unsigned long)(&dbgio_flush) },
	{ "dbgio_printf", (unsigned long)(&dbgio_printf) },
	{ "dbgio_read", (unsigned long)(&dbgio_read) },
	{ "dbgio_read_buffer", (unsigned long)(&dbgio_read_buffer) },
	{ "dbgio_set_irq_usage", (unsigned long)(&dbgio_set_irq_usage) },
	{ "dbgio_write", (unsigned long)(&dbgio_write) },
	{ "dbgio_write_buffer", (unsigned long)(&dbgio_write_buffer) },
	{ "dbgio_write_buffer_xlat", (unsigned long)(&dbgio_write_buffer_xlat) },
	{ "dbgio_write_str", (unsigned long)(&dbgio_write_str) },
	{ "dbglog", (unsigned long)(&dbglog) },
	{ "dcache_flush_range", (unsigned long)(&dcache_flush_range) },
	{ "dcache_inval_range", (unsigned long)(&dcache_inval_range) },
	{ "elf_free", (unsigned long)(&elf_free) },
	{ "elf_load", (unsigned long)(&elf_load) },
	{ "exit", (unsigned long)(&exit) },
	{ "fclose", (unsigned long)(&fclose) },
	{ "fdopen", (unsigned long)(&fdopen) },
	{ "fflush", (unsigned long)(&fflush) },
	{ "fopen", (unsigned long)(&fopen) },
	{ "fputc", (unsigned long)(&fputc) },
	{ "fread", (unsigned long)(&fread) },
	{ "free", (unsigned long)(&free) },
	{ "fs_chdir", (unsigned long)(&fs_chdir) },
	{ "fs_close", (unsigned long)(&fs_close) },
	{ "fs_complete", (unsigned long)(&fs_complete) },
	{ "fs_copy", (unsigned long)(&fs_copy) },
	{ "fs_dup", (unsigned long)(&fs_dup) },
	{ "fs_dup2", (unsigned long)(&fs_dup2) },
	{ "fs_get_handle", (unsigned long)(&fs_get_handle) },
	{ "fs_get_handler", (unsigned long)(&fs_get_handler) },
	{ "fs_getwd", (unsigned long)(&fs_getwd) },
	{ "fs_ioctl", (unsigned long)(&fs_ioctl) },
	{ "fs_load", (unsigned long)(&fs_load) },
	{ "fs_mkdir", (unsigned long)(&fs_mkdir) },
	{ "fs_mmap", (unsigned long)(&fs_mmap) },
	{ "fs_open", (unsigned long)(&fs_open) },
	{ "fs_open_handle", (unsigned long)(&fs_open_handle) },
	{ "fs_pty_create", (unsigned long)(&fs_pty_create) },
	{ "fs_read", (unsigned long)(&fs_read) },
	{ "fs_readdir", (unsigned long)(&fs_readdir) },
	{ "fs_rename", (unsigned long)(&fs_rename) },
	{ "fs_rmdir", (unsigned long)(&fs_rmdir) },
	{ "fs_romdisk_mount", (unsigned long)(&fs_romdisk_mount) },
	{ "fs_romdisk_unmount", (unsigned long)(&fs_romdisk_unmount) },
	{ "fs_seek", (unsigned long)(&fs_seek) },
	{ "fs_stat", (unsigned long)(&fs_stat) },
	{ "fs_tell", (unsigned long)(&fs_tell) },
	{ "fs_total", (unsigned long)(&fs_total) },
	{ "fs_unlink", (unsigned long)(&fs_unlink) },
	{ "fs_write", (unsigned long)(&fs_write) },
	{ "fseek", (unsigned long)(&fseek) },
	{ "ftell", (unsigned long)(&ftell) },
	{ "fwrite", (unsigned long)(&fwrite) },
	{ "genwait_wait", (unsigned long)(&genwait_wait) },
	{ "genwait_wake_all", (unsigned long)(&genwait_wake_all) },
	{ "genwait_wake_cnt", (unsigned long)(&genwait_wake_cnt) },
	{ "genwait_wake_one", (unsigned long)(&genwait_wake_one) },
	{ "icache_flush_range", (unsigned long)(&icache_flush_range) },
	{ "irq_disable", (unsigned long)(&irq_disable) },
	{ "irq_enable", (unsigned long)(&irq_enable) },
	{ "irq_force_return", (unsigned long)(&irq_force_return) },
	{ "irq_get_context", (unsigned long)(&irq_get_context) },
	{ "irq_get_global_handler", (unsigned long)(&irq_get_global_handler) },
	{ "irq_get_handler", (unsigned long)(&irq_get_handler) },
	{ "irq_inside_int", (unsigned long)(&irq_inside_int) },
	{ "irq_restore", (unsigned long)(&irq_restore) },
	{ "irq_set_context", (unsigned long)(&irq_set_context) },
	{ "irq_set_global_handler", (unsigned long)(&irq_set_global_handler) },
	{ "irq_set_handler", (unsigned long)(&irq_set_handler) },
	{ "mallinfo", (unsigned long)(&mallinfo) },
	{ "malloc", (unsigned long)(&malloc) },
	{ "malloc_irq_safe", (unsigned long)(&malloc_irq_safe) },
	{ "malloc_stats", (unsigned long)(&malloc_stats) },
	{ "mem_check_all", (unsigned long)(&mem_check_all) },
	{ "mem_check_block", (unsigned long)(&mem_check_block) },
	{ "memalign", (unsigned long)(&memalign) },
	{ "memcmp", (unsigned long)(&memcmp) },
	{ "memcpy", (unsigned long)(&memcpy) },
	{ "memset", (unsigned long)(&memset) },
	{ "mmu_context_create", (unsigned long)(&mmu_context_create) },
	{ "mmu_context_destroy", (unsigned long)(&mmu_context_destroy) },
	{ "mmu_copyin", (unsigned long)(&mmu_copyin) },
	{ "mmu_copyv", (unsigned long)(&mmu_copyv) },
	{ "mmu_init", (unsigned long)(&mmu_init) },
	{ "mmu_map_get_callback", (unsigned long)(&mmu_map_get_callback) },
	{ "mmu_map_set_callback", (unsigned long)(&mmu_map_set_callback) },
	{ "mmu_page_map", (unsigned long)(&mmu_page_map) },
	{ "mmu_reset_itlb", (unsigned long)(&mmu_reset_itlb) },
	{ "mmu_shutdown", (unsigned long)(&mmu_shutdown) },
	{ "mmu_switch_context", (unsigned long)(&mmu_switch_context) },
	{ "mmu_use_table", (unsigned long)(&mmu_use_table) },
	{ "mmu_virt_to_phys", (unsigned long)(&mmu_virt_to_phys) },
	{ "mutex_create", (unsigned long)(&mutex_create) },
	{ "mutex_destroy", (unsigned long)(&mutex_destroy) },
	{ "mutex_is_locked", (unsigned long)(&mutex_is_locked) },
	{ "mutex_lock", (unsigned long)(&mutex_lock) },
	{ "mutex_lock_timed", (unsigned long)(&mutex_lock_timed) },
	{ "mutex_trylock", (unsigned long)(&mutex_trylock) },
	{ "mutex_unlock", (unsigned long)(&mutex_unlock) },
	{ "net_get_if_list", (unsigned long)(&net_get_if_list) },
	{ "net_input", (unsigned long)(&net_input) },
	{ "net_input_set_target", (unsigned long)(&net_input_set_target) },
	{ "net_reg_device", (unsigned long)(&net_reg_device) },
	{ "net_unreg_device", (unsigned long)(&net_unreg_device) },
	{ "nmmgr_get_list", (unsigned long)(&nmmgr_get_list) },
	{ "nmmgr_handler_add", (unsigned long)(&nmmgr_handler_add) },
	{ "nmmgr_handler_remove", (unsigned long)(&nmmgr_handler_remove) },
	{ "nmmgr_lookup", (unsigned long)(&nmmgr_lookup) },
	{ "panic", (unsigned long)(&panic) },
	{ "printf", (unsigned long)(&printf) },
	{ "realloc", (unsigned long)(&realloc) },
	{ "rewind", (unsigned long)(&rewind) },
	{ "rtc_boot_time", (unsigned long)(&rtc_boot_time) },
	{ "rtc_unix_secs", (unsigned long)(&rtc_unix_secs) },
	{ "sem_count", (unsigned long)(&sem_count) },
	{ "sem_create", (unsigned long)(&sem_create) },
	{ "sem_destroy", (unsigned long)(&sem_destroy) },
	{ "sem_signal", (unsigned long)(&sem_signal) },
	{ "sem_trywait", (unsigned long)(&sem_trywait) },
	{ "sem_wait", (unsigned long)(&sem_wait) },
	{ "sem_wait_timed", (unsigned long)(&sem_wait_timed) },
	{ "sprintf", (unsigned long)(&sprintf) },
	{ "strcasecmp", (unsigned long)(&strcasecmp) },
	{ "strcat", (unsigned long)(&strcat) },
	{ "strcpy", (unsigned long)(&strcpy) },
	{ "strlen", (unsigned long)(&strlen) },
	{ "strncasecmp", (unsigned long)(&strncasecmp) },
	{ "strncat", (unsigned long)(&strncat) },
	{ "thd_block_now", (unsigned long)(&thd_block_now) },
	{ "thd_by_tid", (unsigned long)(&thd_by_tid) },
	{ "thd_create", (unsigned long)(&thd_create) },
	{ "thd_destroy", (unsigned long)(&thd_destroy) },
	{ "thd_exit", (unsigned long)(&thd_exit) },
	{ "thd_get_current", (unsigned long)(&thd_get_current) },
	{ "thd_get_errno", (unsigned long)(&thd_get_errno) },
	{ "thd_get_label", (unsigned long)(&thd_get_label) },
	{ "thd_get_pwd", (unsigned long)(&thd_get_pwd) },
	{ "thd_pass", (unsigned long)(&thd_pass) },
	{ "thd_pslist", (unsigned long)(&thd_pslist) },
	{ "thd_pslist_queue", (unsigned long)(&thd_pslist_queue) },
	{ "thd_schedule", (unsigned long)(&thd_schedule) },
	{ "thd_schedule_next", (unsigned long)(&thd_schedule_next) },
	{ "thd_set_label", (unsigned long)(&thd_set_label) },
	{ "thd_set_mode", (unsigned long)(&thd_set_mode) },
	{ "thd_set_prio", (unsigned long)(&thd_set_prio) },
	{ "thd_set_pwd", (unsigned long)(&thd_set_pwd) },
	{ "thd_sleep", (unsigned long)(&thd_sleep) },
	{ "thd_wait", (unsigned long)(&thd_wait) },
	{ "timer_ms_gettime", (unsigned long)(&timer_ms_gettime) },
	{ "timer_ms_gettime64", (unsigned long)(&timer_ms_gettime64) },
	{ "timer_primary_set_callback", (unsigned long)(&timer_primary_set_callback) },
	{ "timer_primary_wakeup", (unsigned long)(&timer_primary_wakeup) },
	{ "timer_spin_sleep", (unsigned long)(&timer_spin_sleep) },
	{ "valloc", (unsigned long)(&valloc) },
	{ "vsprintf", (unsigned long)(&vsprintf) },
	{ 0, 0 }
};
