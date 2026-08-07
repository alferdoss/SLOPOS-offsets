#pragma once
/* PS4 9.60 — kexec offsets: EinTim23 */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x11137D0
#define kern_off_rootvnode                 0x21A6C30
#define kern_off_allproc                   0x221D2A0

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0x205470
#define kern_off_snprintf                  0x205770
#define kern_off_copyin                    0x201EB0
#define kern_off_copyout                   0x201DC0
#define kern_off_copyinstr                 0x202360

#define kern_off_kmem_alloc                0x1889D0
#define kern_off_kmem_alloc_contig         0x3CAF80
#define kern_off_kmem_free                 0x188BA0

#define kern_off_kernel_map                0x2147830
#define kern_off_kernel_pmap_store         0x2228E88
#define kern_off_sysent                    0x10F92F0

#define kern_off_pmap_extract              0x42F4B0
#define kern_off_pmap_protect              0x430650

#define kern_off_pml4pml4i                 0x2228E78
#define kern_off_dmpml4i                   0x2228E7C
#define kern_off_dmpdpi                    0x2228E80

#define kern_off_sched_pin                 0x457C50
#define kern_off_sched_unpin               0x457C70
#define kern_off_smp_rendezvous            0x52530
#define kern_off_smp_no_rendevous_barrier  0x52340
#define kern_off_icc_query_nowait          0x72780

#define kern_off_gpu_devid_is_9924         0x4D6AA0
#define kern_off_gc_get_fw_info            0x4C3C00
#define kern_off_set_gpu_freq              0x4C2740
#define kern_off_set_pstate                0x4C4B10
#define kern_off_update_vddnp              0x4C2CE0
#define kern_off_set_cu_power_gate         0x4C30F0
#define kern_off_set_nclk_mem_spd          0x3791A0
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x3323E0
#define kern_off_kern_reboot               0x331DF0

#define kern_off_eap_hdd_key               0x26B4C60
#define kern_off_edid                      0x2738FE8
#define kern_off_wlanbt                    0x26CA70

#define kern_off_disable_aslr              0x29AE74
#define kern_off_mmap_self_1               0x32600
#define kern_off_mmap_self_2               0x32620
#define kern_off_mmap_self_3               0x124AA1
#define kern_off_reg_mgr_set_int           0x4E8D70
#define kern_off_set_time                  0x62B1B0
#define kern_off_clear_time_diff           0x62A690
#define kern_off_target_id                 0x221A40D
#define kern_off_icc_nvs_write             0x405F0
#define kern_off_npdrm_open                0x646EC0
#define kern_off_npdrm_close               0x646EE0
#define kern_off_npdrm_ioctl               0x646F37
#define kern_off_no_bd_patch               0xA1033
