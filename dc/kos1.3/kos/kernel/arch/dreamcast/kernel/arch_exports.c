/* This is a generated file, do not edit!! */
#define __EXPORTS_FILE
#include <kos/exports.h>
extern unsigned int arch_menu;
extern unsigned int arch_reboot;
extern unsigned int asic_evt_disable;
extern unsigned int asic_evt_disable_all;
extern unsigned int asic_evt_enable;
extern unsigned int asic_evt_set_handler;
extern unsigned int bfont_draw;
extern unsigned int bfont_draw_str;
extern unsigned int bfont_draw_thin;
extern unsigned int bfont_draw_wide;
extern unsigned int bfont_set_encoding;
extern unsigned int cdrom_cdda_pause;
extern unsigned int cdrom_cdda_play;
extern unsigned int cdrom_cdda_resume;
extern unsigned int cdrom_locate_data_track;
extern unsigned int cdrom_read_sectors;
extern unsigned int cdrom_read_toc;
extern unsigned int cdrom_reinit;
extern unsigned int cdrom_spin_down;
extern unsigned int cont_btn_callback;
extern unsigned int flashrom_delete;
extern unsigned int flashrom_get_region;
extern unsigned int flashrom_get_syscfg;
extern unsigned int flashrom_info;
extern unsigned int flashrom_read;
extern unsigned int flashrom_write;
extern unsigned int g2_fifo_wait;
extern unsigned int g2_read_16;
extern unsigned int g2_read_32;
extern unsigned int g2_read_8;
extern unsigned int g2_read_block_16;
extern unsigned int g2_read_block_32;
extern unsigned int g2_read_block_8;
extern unsigned int g2_write_16;
extern unsigned int g2_write_32;
extern unsigned int g2_write_8;
extern unsigned int g2_write_block_16;
extern unsigned int g2_write_block_32;
extern unsigned int g2_write_block_8;
extern unsigned int kbd_get_key;
extern unsigned int kbd_set_queue;
extern unsigned int maple_addr;
extern unsigned int maple_dev_status;
extern unsigned int maple_dev_valid;
extern unsigned int maple_driver_attach;
extern unsigned int maple_driver_detach;
extern unsigned int maple_driver_foreach;
extern unsigned int maple_driver_reg;
extern unsigned int maple_driver_unreg;
extern unsigned int maple_enum_count;
extern unsigned int maple_enum_dev;
extern unsigned int maple_enum_type;
extern unsigned int maple_frame_init;
extern unsigned int maple_frame_lock;
extern unsigned int maple_frame_unlock;
extern unsigned int maple_pcaps;
extern unsigned int maple_perror;
extern unsigned int maple_queue_frame;
extern unsigned int maple_raddr;
extern unsigned int mat_apply;
extern unsigned int mat_identity;
extern unsigned int mat_load;
extern unsigned int mat_lookat;
extern unsigned int mat_perspective;
extern unsigned int mat_rotate;
extern unsigned int mat_rotate_x;
extern unsigned int mat_rotate_y;
extern unsigned int mat_rotate_z;
extern unsigned int mat_scale;
extern unsigned int mat_store;
extern unsigned int mat_transform;
extern unsigned int mat_translate;
extern unsigned int pvr_check_ready;
extern unsigned int pvr_dma_load_ta;
extern unsigned int pvr_dma_ready;
extern unsigned int pvr_fog_far_depth;
extern unsigned int pvr_fog_table_color;
extern unsigned int pvr_fog_table_custom;
extern unsigned int pvr_fog_table_exp;
extern unsigned int pvr_fog_table_exp2;
extern unsigned int pvr_fog_table_linear;
extern unsigned int pvr_fog_vertex_color;
extern unsigned int pvr_get_stats;
extern unsigned int pvr_get_vbl_count;
extern unsigned int pvr_init;
extern unsigned int pvr_list_begin;
extern unsigned int pvr_list_finish;
extern unsigned int pvr_list_flush;
extern unsigned int pvr_list_prim;
extern unsigned int pvr_mem_available;
extern unsigned int pvr_mem_free;
extern unsigned int pvr_mem_malloc;
extern unsigned int pvr_mem_print_list;
extern unsigned int pvr_mem_reset;
extern unsigned int pvr_mem_stats;
extern unsigned int pvr_poly_compile;
extern unsigned int pvr_poly_cxt_col;
extern unsigned int pvr_poly_cxt_txr;
extern unsigned int pvr_prim;
extern unsigned int pvr_scene_begin;
extern unsigned int pvr_scene_begin_txr;
extern unsigned int pvr_scene_finish;
extern unsigned int pvr_set_bg_color;
extern unsigned int pvr_set_pal_format;
extern unsigned int pvr_set_vertbuf;
extern unsigned int pvr_shutdown;
extern unsigned int pvr_txr_load;
extern unsigned int pvr_txr_load_dma;
extern unsigned int pvr_txr_load_ex;
extern unsigned int pvr_txr_load_kimg;
extern unsigned int pvr_wait_ready;
extern unsigned int scif_detected;
extern unsigned int scif_flush;
extern unsigned int scif_init;
extern unsigned int scif_read;
extern unsigned int scif_read_buffer;
extern unsigned int scif_set_irq_usage;
extern unsigned int scif_set_parameters;
extern unsigned int scif_shutdown;
extern unsigned int scif_write;
extern unsigned int scif_write_buffer;
extern unsigned int snd_mem_available;
extern unsigned int snd_mem_free;
extern unsigned int snd_mem_malloc;
extern unsigned int snd_sfx_load;
extern unsigned int snd_sfx_play;
extern unsigned int snd_sfx_stop_all;
extern unsigned int snd_sfx_unload;
extern unsigned int snd_sfx_unload_all;
extern unsigned int snd_stream_filter_add;
extern unsigned int snd_stream_filter_remove;
extern unsigned int snd_stream_init;
extern unsigned int snd_stream_poll;
extern unsigned int snd_stream_queue_disable;
extern unsigned int snd_stream_queue_enable;
extern unsigned int snd_stream_queue_go;
extern unsigned int snd_stream_set_callback;
extern unsigned int snd_stream_shutdown;
extern unsigned int snd_stream_start;
extern unsigned int snd_stream_stop;
extern unsigned int snd_stream_volume;
extern unsigned int spu_cdda_pan;
extern unsigned int spu_cdda_volume;
extern unsigned int spu_disable;
extern unsigned int spu_dma_transfer;
extern unsigned int spu_enable;
extern unsigned int spu_master_mixer;
extern unsigned int spu_memload;
extern unsigned int spu_memread;
extern unsigned int spu_memset;
extern unsigned int spu_reset_chans;
extern unsigned int sq_clr;
extern unsigned int sq_cpy;
extern unsigned int sq_set;
extern unsigned int sq_set16;
extern unsigned int sq_set32;
extern unsigned int timer_clear;
extern unsigned int timer_count;
extern unsigned int timer_disable_ints;
extern unsigned int timer_enable_ints;
extern unsigned int timer_ints_enabled;
extern unsigned int timer_prime;
extern unsigned int timer_start;
extern unsigned int timer_stop;
extern unsigned int trapa_set_handler;
extern unsigned int vblank_handler_add;
extern unsigned int vblank_handler_remove;
extern unsigned int vid_border_color;
extern unsigned int vid_check_cable;
extern unsigned int vid_clear;
extern unsigned int vid_empty;
extern unsigned int vid_flip;
extern unsigned int vid_init;
extern unsigned int vid_mode;
extern unsigned int vid_screen_shot;
extern unsigned int vid_set_mode;
extern unsigned int vid_set_mode_ex;
extern unsigned int vid_set_start;
extern unsigned int vid_waitvbl;
extern unsigned int vmu_block_read;
extern unsigned int vmu_block_write;
extern unsigned int vmu_draw_lcd;
extern unsigned int vmu_pkg_build;
extern unsigned int vmu_pkg_parse;
extern unsigned int vmu_set_icon;
extern unsigned int vmufs_delete;
extern unsigned int vmufs_dir_add;
extern unsigned int vmufs_dir_blocks;
extern unsigned int vmufs_dir_fill_time;
extern unsigned int vmufs_dir_find;
extern unsigned int vmufs_dir_free;
extern unsigned int vmufs_dir_read;
extern unsigned int vmufs_dir_write;
extern unsigned int vmufs_fat_blocks;
extern unsigned int vmufs_fat_free;
extern unsigned int vmufs_fat_read;
extern unsigned int vmufs_fat_write;
extern unsigned int vmufs_file_delete;
extern unsigned int vmufs_file_read;
extern unsigned int vmufs_file_write;
extern unsigned int vmufs_free_blocks;
extern unsigned int vmufs_mutex_lock;
extern unsigned int vmufs_mutex_unlock;
extern unsigned int vmufs_read;
extern unsigned int vmufs_read_dirent;
extern unsigned int vmufs_readdir;
extern unsigned int vmufs_root_read;
extern unsigned int vmufs_root_write;
extern unsigned int vmufs_write;
extern unsigned int vram_l;
extern unsigned int vram_s;
export_sym_t arch_symtab[] = {
	{ "arch_menu", (unsigned long)(&arch_menu) },
	{ "arch_reboot", (unsigned long)(&arch_reboot) },
	{ "asic_evt_disable", (unsigned long)(&asic_evt_disable) },
	{ "asic_evt_disable_all", (unsigned long)(&asic_evt_disable_all) },
	{ "asic_evt_enable", (unsigned long)(&asic_evt_enable) },
	{ "asic_evt_set_handler", (unsigned long)(&asic_evt_set_handler) },
	{ "bfont_draw", (unsigned long)(&bfont_draw) },
	{ "bfont_draw_str", (unsigned long)(&bfont_draw_str) },
	{ "bfont_draw_thin", (unsigned long)(&bfont_draw_thin) },
	{ "bfont_draw_wide", (unsigned long)(&bfont_draw_wide) },
	{ "bfont_set_encoding", (unsigned long)(&bfont_set_encoding) },
	{ "cdrom_cdda_pause", (unsigned long)(&cdrom_cdda_pause) },
	{ "cdrom_cdda_play", (unsigned long)(&cdrom_cdda_play) },
	{ "cdrom_cdda_resume", (unsigned long)(&cdrom_cdda_resume) },
	{ "cdrom_locate_data_track", (unsigned long)(&cdrom_locate_data_track) },
	{ "cdrom_read_sectors", (unsigned long)(&cdrom_read_sectors) },
	{ "cdrom_read_toc", (unsigned long)(&cdrom_read_toc) },
	{ "cdrom_reinit", (unsigned long)(&cdrom_reinit) },
	{ "cdrom_spin_down", (unsigned long)(&cdrom_spin_down) },
	{ "cont_btn_callback", (unsigned long)(&cont_btn_callback) },
	{ "flashrom_delete", (unsigned long)(&flashrom_delete) },
	{ "flashrom_get_region", (unsigned long)(&flashrom_get_region) },
	{ "flashrom_get_syscfg", (unsigned long)(&flashrom_get_syscfg) },
	{ "flashrom_info", (unsigned long)(&flashrom_info) },
	{ "flashrom_read", (unsigned long)(&flashrom_read) },
	{ "flashrom_write", (unsigned long)(&flashrom_write) },
	{ "g2_fifo_wait", (unsigned long)(&g2_fifo_wait) },
	{ "g2_read_16", (unsigned long)(&g2_read_16) },
	{ "g2_read_32", (unsigned long)(&g2_read_32) },
	{ "g2_read_8", (unsigned long)(&g2_read_8) },
	{ "g2_read_block_16", (unsigned long)(&g2_read_block_16) },
	{ "g2_read_block_32", (unsigned long)(&g2_read_block_32) },
	{ "g2_read_block_8", (unsigned long)(&g2_read_block_8) },
	{ "g2_write_16", (unsigned long)(&g2_write_16) },
	{ "g2_write_32", (unsigned long)(&g2_write_32) },
	{ "g2_write_8", (unsigned long)(&g2_write_8) },
	{ "g2_write_block_16", (unsigned long)(&g2_write_block_16) },
	{ "g2_write_block_32", (unsigned long)(&g2_write_block_32) },
	{ "g2_write_block_8", (unsigned long)(&g2_write_block_8) },
	{ "kbd_get_key", (unsigned long)(&kbd_get_key) },
	{ "kbd_set_queue", (unsigned long)(&kbd_set_queue) },
	{ "maple_addr", (unsigned long)(&maple_addr) },
	{ "maple_dev_status", (unsigned long)(&maple_dev_status) },
	{ "maple_dev_valid", (unsigned long)(&maple_dev_valid) },
	{ "maple_driver_attach", (unsigned long)(&maple_driver_attach) },
	{ "maple_driver_detach", (unsigned long)(&maple_driver_detach) },
	{ "maple_driver_foreach", (unsigned long)(&maple_driver_foreach) },
	{ "maple_driver_reg", (unsigned long)(&maple_driver_reg) },
	{ "maple_driver_unreg", (unsigned long)(&maple_driver_unreg) },
	{ "maple_enum_count", (unsigned long)(&maple_enum_count) },
	{ "maple_enum_dev", (unsigned long)(&maple_enum_dev) },
	{ "maple_enum_type", (unsigned long)(&maple_enum_type) },
	{ "maple_frame_init", (unsigned long)(&maple_frame_init) },
	{ "maple_frame_lock", (unsigned long)(&maple_frame_lock) },
	{ "maple_frame_unlock", (unsigned long)(&maple_frame_unlock) },
	{ "maple_pcaps", (unsigned long)(&maple_pcaps) },
	{ "maple_perror", (unsigned long)(&maple_perror) },
	{ "maple_queue_frame", (unsigned long)(&maple_queue_frame) },
	{ "maple_raddr", (unsigned long)(&maple_raddr) },
	{ "mat_apply", (unsigned long)(&mat_apply) },
	{ "mat_identity", (unsigned long)(&mat_identity) },
	{ "mat_load", (unsigned long)(&mat_load) },
	{ "mat_lookat", (unsigned long)(&mat_lookat) },
	{ "mat_perspective", (unsigned long)(&mat_perspective) },
	{ "mat_rotate", (unsigned long)(&mat_rotate) },
	{ "mat_rotate_x", (unsigned long)(&mat_rotate_x) },
	{ "mat_rotate_y", (unsigned long)(&mat_rotate_y) },
	{ "mat_rotate_z", (unsigned long)(&mat_rotate_z) },
	{ "mat_scale", (unsigned long)(&mat_scale) },
	{ "mat_store", (unsigned long)(&mat_store) },
	{ "mat_transform", (unsigned long)(&mat_transform) },
	{ "mat_translate", (unsigned long)(&mat_translate) },
	{ "pvr_check_ready", (unsigned long)(&pvr_check_ready) },
	{ "pvr_dma_load_ta", (unsigned long)(&pvr_dma_load_ta) },
	{ "pvr_dma_ready", (unsigned long)(&pvr_dma_ready) },
	{ "pvr_fog_far_depth", (unsigned long)(&pvr_fog_far_depth) },
	{ "pvr_fog_table_color", (unsigned long)(&pvr_fog_table_color) },
	{ "pvr_fog_table_custom", (unsigned long)(&pvr_fog_table_custom) },
	{ "pvr_fog_table_exp", (unsigned long)(&pvr_fog_table_exp) },
	{ "pvr_fog_table_exp2", (unsigned long)(&pvr_fog_table_exp2) },
	{ "pvr_fog_table_linear", (unsigned long)(&pvr_fog_table_linear) },
	{ "pvr_fog_vertex_color", (unsigned long)(&pvr_fog_vertex_color) },
	{ "pvr_get_stats", (unsigned long)(&pvr_get_stats) },
	{ "pvr_get_vbl_count", (unsigned long)(&pvr_get_vbl_count) },
	{ "pvr_init", (unsigned long)(&pvr_init) },
	{ "pvr_list_begin", (unsigned long)(&pvr_list_begin) },
	{ "pvr_list_finish", (unsigned long)(&pvr_list_finish) },
	{ "pvr_list_flush", (unsigned long)(&pvr_list_flush) },
	{ "pvr_list_prim", (unsigned long)(&pvr_list_prim) },
	{ "pvr_mem_available", (unsigned long)(&pvr_mem_available) },
	{ "pvr_mem_free", (unsigned long)(&pvr_mem_free) },
	{ "pvr_mem_malloc", (unsigned long)(&pvr_mem_malloc) },
	{ "pvr_mem_print_list", (unsigned long)(&pvr_mem_print_list) },
	{ "pvr_mem_reset", (unsigned long)(&pvr_mem_reset) },
	{ "pvr_mem_stats", (unsigned long)(&pvr_mem_stats) },
	{ "pvr_poly_compile", (unsigned long)(&pvr_poly_compile) },
	{ "pvr_poly_cxt_col", (unsigned long)(&pvr_poly_cxt_col) },
	{ "pvr_poly_cxt_txr", (unsigned long)(&pvr_poly_cxt_txr) },
	{ "pvr_prim", (unsigned long)(&pvr_prim) },
	{ "pvr_scene_begin", (unsigned long)(&pvr_scene_begin) },
	{ "pvr_scene_begin_txr", (unsigned long)(&pvr_scene_begin_txr) },
	{ "pvr_scene_finish", (unsigned long)(&pvr_scene_finish) },
	{ "pvr_set_bg_color", (unsigned long)(&pvr_set_bg_color) },
	{ "pvr_set_pal_format", (unsigned long)(&pvr_set_pal_format) },
	{ "pvr_set_vertbuf", (unsigned long)(&pvr_set_vertbuf) },
	{ "pvr_shutdown", (unsigned long)(&pvr_shutdown) },
	{ "pvr_txr_load", (unsigned long)(&pvr_txr_load) },
	{ "pvr_txr_load_dma", (unsigned long)(&pvr_txr_load_dma) },
	{ "pvr_txr_load_ex", (unsigned long)(&pvr_txr_load_ex) },
	{ "pvr_txr_load_kimg", (unsigned long)(&pvr_txr_load_kimg) },
	{ "pvr_wait_ready", (unsigned long)(&pvr_wait_ready) },
	{ "scif_detected", (unsigned long)(&scif_detected) },
	{ "scif_flush", (unsigned long)(&scif_flush) },
	{ "scif_init", (unsigned long)(&scif_init) },
	{ "scif_read", (unsigned long)(&scif_read) },
	{ "scif_read_buffer", (unsigned long)(&scif_read_buffer) },
	{ "scif_set_irq_usage", (unsigned long)(&scif_set_irq_usage) },
	{ "scif_set_parameters", (unsigned long)(&scif_set_parameters) },
	{ "scif_shutdown", (unsigned long)(&scif_shutdown) },
	{ "scif_write", (unsigned long)(&scif_write) },
	{ "scif_write_buffer", (unsigned long)(&scif_write_buffer) },
	{ "snd_mem_available", (unsigned long)(&snd_mem_available) },
	{ "snd_mem_free", (unsigned long)(&snd_mem_free) },
	{ "snd_mem_malloc", (unsigned long)(&snd_mem_malloc) },
	{ "snd_sfx_load", (unsigned long)(&snd_sfx_load) },
	{ "snd_sfx_play", (unsigned long)(&snd_sfx_play) },
	{ "snd_sfx_stop_all", (unsigned long)(&snd_sfx_stop_all) },
	{ "snd_sfx_unload", (unsigned long)(&snd_sfx_unload) },
	{ "snd_sfx_unload_all", (unsigned long)(&snd_sfx_unload_all) },
	{ "snd_stream_filter_add", (unsigned long)(&snd_stream_filter_add) },
	{ "snd_stream_filter_remove", (unsigned long)(&snd_stream_filter_remove) },
	{ "snd_stream_init", (unsigned long)(&snd_stream_init) },
	{ "snd_stream_poll", (unsigned long)(&snd_stream_poll) },
	{ "snd_stream_queue_disable", (unsigned long)(&snd_stream_queue_disable) },
	{ "snd_stream_queue_enable", (unsigned long)(&snd_stream_queue_enable) },
	{ "snd_stream_queue_go", (unsigned long)(&snd_stream_queue_go) },
	{ "snd_stream_set_callback", (unsigned long)(&snd_stream_set_callback) },
	{ "snd_stream_shutdown", (unsigned long)(&snd_stream_shutdown) },
	{ "snd_stream_start", (unsigned long)(&snd_stream_start) },
	{ "snd_stream_stop", (unsigned long)(&snd_stream_stop) },
	{ "snd_stream_volume", (unsigned long)(&snd_stream_volume) },
	{ "spu_cdda_pan", (unsigned long)(&spu_cdda_pan) },
	{ "spu_cdda_volume", (unsigned long)(&spu_cdda_volume) },
	{ "spu_disable", (unsigned long)(&spu_disable) },
	{ "spu_dma_transfer", (unsigned long)(&spu_dma_transfer) },
	{ "spu_enable", (unsigned long)(&spu_enable) },
	{ "spu_master_mixer", (unsigned long)(&spu_master_mixer) },
	{ "spu_memload", (unsigned long)(&spu_memload) },
	{ "spu_memread", (unsigned long)(&spu_memread) },
	{ "spu_memset", (unsigned long)(&spu_memset) },
	{ "spu_reset_chans", (unsigned long)(&spu_reset_chans) },
	{ "sq_clr", (unsigned long)(&sq_clr) },
	{ "sq_cpy", (unsigned long)(&sq_cpy) },
	{ "sq_set", (unsigned long)(&sq_set) },
	{ "sq_set16", (unsigned long)(&sq_set16) },
	{ "sq_set32", (unsigned long)(&sq_set32) },
	{ "timer_clear", (unsigned long)(&timer_clear) },
	{ "timer_count", (unsigned long)(&timer_count) },
	{ "timer_disable_ints", (unsigned long)(&timer_disable_ints) },
	{ "timer_enable_ints", (unsigned long)(&timer_enable_ints) },
	{ "timer_ints_enabled", (unsigned long)(&timer_ints_enabled) },
	{ "timer_prime", (unsigned long)(&timer_prime) },
	{ "timer_start", (unsigned long)(&timer_start) },
	{ "timer_stop", (unsigned long)(&timer_stop) },
	{ "trapa_set_handler", (unsigned long)(&trapa_set_handler) },
	{ "vblank_handler_add", (unsigned long)(&vblank_handler_add) },
	{ "vblank_handler_remove", (unsigned long)(&vblank_handler_remove) },
	{ "vid_border_color", (unsigned long)(&vid_border_color) },
	{ "vid_check_cable", (unsigned long)(&vid_check_cable) },
	{ "vid_clear", (unsigned long)(&vid_clear) },
	{ "vid_empty", (unsigned long)(&vid_empty) },
	{ "vid_flip", (unsigned long)(&vid_flip) },
	{ "vid_init", (unsigned long)(&vid_init) },
	{ "vid_mode", (unsigned long)(&vid_mode) },
	{ "vid_screen_shot", (unsigned long)(&vid_screen_shot) },
	{ "vid_set_mode", (unsigned long)(&vid_set_mode) },
	{ "vid_set_mode_ex", (unsigned long)(&vid_set_mode_ex) },
	{ "vid_set_start", (unsigned long)(&vid_set_start) },
	{ "vid_waitvbl", (unsigned long)(&vid_waitvbl) },
	{ "vmu_block_read", (unsigned long)(&vmu_block_read) },
	{ "vmu_block_write", (unsigned long)(&vmu_block_write) },
	{ "vmu_draw_lcd", (unsigned long)(&vmu_draw_lcd) },
	{ "vmu_pkg_build", (unsigned long)(&vmu_pkg_build) },
	{ "vmu_pkg_parse", (unsigned long)(&vmu_pkg_parse) },
	{ "vmu_set_icon", (unsigned long)(&vmu_set_icon) },
	{ "vmufs_delete", (unsigned long)(&vmufs_delete) },
	{ "vmufs_dir_add", (unsigned long)(&vmufs_dir_add) },
	{ "vmufs_dir_blocks", (unsigned long)(&vmufs_dir_blocks) },
	{ "vmufs_dir_fill_time", (unsigned long)(&vmufs_dir_fill_time) },
	{ "vmufs_dir_find", (unsigned long)(&vmufs_dir_find) },
	{ "vmufs_dir_free", (unsigned long)(&vmufs_dir_free) },
	{ "vmufs_dir_read", (unsigned long)(&vmufs_dir_read) },
	{ "vmufs_dir_write", (unsigned long)(&vmufs_dir_write) },
	{ "vmufs_fat_blocks", (unsigned long)(&vmufs_fat_blocks) },
	{ "vmufs_fat_free", (unsigned long)(&vmufs_fat_free) },
	{ "vmufs_fat_read", (unsigned long)(&vmufs_fat_read) },
	{ "vmufs_fat_write", (unsigned long)(&vmufs_fat_write) },
	{ "vmufs_file_delete", (unsigned long)(&vmufs_file_delete) },
	{ "vmufs_file_read", (unsigned long)(&vmufs_file_read) },
	{ "vmufs_file_write", (unsigned long)(&vmufs_file_write) },
	{ "vmufs_free_blocks", (unsigned long)(&vmufs_free_blocks) },
	{ "vmufs_mutex_lock", (unsigned long)(&vmufs_mutex_lock) },
	{ "vmufs_mutex_unlock", (unsigned long)(&vmufs_mutex_unlock) },
	{ "vmufs_read", (unsigned long)(&vmufs_read) },
	{ "vmufs_read_dirent", (unsigned long)(&vmufs_read_dirent) },
	{ "vmufs_readdir", (unsigned long)(&vmufs_readdir) },
	{ "vmufs_root_read", (unsigned long)(&vmufs_root_read) },
	{ "vmufs_root_write", (unsigned long)(&vmufs_root_write) },
	{ "vmufs_write", (unsigned long)(&vmufs_write) },
	{ "vram_l", (unsigned long)(&vram_l) },
	{ "vram_s", (unsigned long)(&vram_s) },
	{ 0, 0 }
};
