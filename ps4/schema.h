#pragma once
/*
 * Canonical symbol schema for a per-firmware header (ps4/<fw>.h).
 * Every FW header defines a subset of these. A header is "kexec-complete"
 * when the kexec + kmem_alloc groups below are all present and nonzero.
 * This file is documentation, not included by consumers.
 */

/* --- boot --- */
kern_off_xfast_syscall          /* syscall table entry hijacked for the payload */

/* --- jailbreak: process/vm roots --- */
kern_off_prison0                /* prison0 (jail escape) */
kern_off_rootvnode              /* rootvnode (chroot escape) */
kern_off_allproc                /* allproc list head */

/* --- support (payload-only, not needed by kexec) --- */
kern_off_vmspace_acquire_ref
kern_off_vmspace_free
kern_off_proc_rwmem

/* --- kexec: libc-ish --- */
kern_off_printf
kern_off_snprintf
kern_off_copyin
kern_off_copyout
kern_off_copyinstr

/* --- kexec: allocator (RWX patch path) --- */
kern_off_kmem_alloc             /* alloc entry; source of the .233-class drift bug */
kern_off_kmem_alloc_contig
kern_off_kmem_free

/* --- kexec: address space --- */
kern_off_kernel_map
kern_off_kernel_pmap_store
kern_off_sysent
kern_off_pmap_extract
kern_off_pmap_protect
kern_off_pml4pml4i
kern_off_dmpml4i
kern_off_dmpdpi

/* --- kexec: SMP/sched --- */
kern_off_sched_pin
kern_off_sched_unpin
kern_off_smp_rendezvous
kern_off_smp_no_rendevous_barrier   /* misspelling matches FreeBSD symbol */
kern_off_icc_query_nowait

/* --- gpu (Liverpool/Gladius bring-up) --- */
kern_off_gpu_devid_is_9924
kern_off_gc_get_fw_info
kern_off_set_gpu_freq
kern_off_set_pstate
kern_off_update_vddnp
kern_off_set_cu_power_gate
kern_off_set_nclk_mem_spd
kern_off_Starsha_UcodeInfo

/* --- shutdown --- */
kern_off_pstate_before_shutdown
kern_off_kern_reboot

/* --- hw constants --- */
kern_off_eap_hdd_key
kern_off_edid
kern_off_wlanbt

/* --- jailbreak: exploit primitives --- */
kern_off_disable_aslr
kern_off_mmap_self_1
kern_off_mmap_self_2
kern_off_mmap_self_3
kern_off_reg_mgr_set_int
kern_off_set_time
kern_off_clear_time_diff
kern_off_target_id
kern_off_icc_nvs_write
kern_off_npdrm_open
kern_off_npdrm_close
kern_off_npdrm_ioctl
kern_off_no_bd_patch
