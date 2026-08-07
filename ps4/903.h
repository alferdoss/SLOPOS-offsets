#pragma once
/* PS4 9.03 — kexec offsets: mircoho */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x111B840
#define kern_off_rootvnode                 0x21EBF20
#define kern_off_allproc                   0x1B906E0

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0xB79E0
#define kern_off_snprintf                  0xB7CE0
#define kern_off_copyin                    0x271320
#define kern_off_copyout                   0x271230
#define kern_off_copyinstr                 0x2717D0

#define kern_off_kmem_alloc                0x37A070
#define kern_off_kmem_alloc_contig         0x270500
#define kern_off_kmem_free                 0x37A240

#define kern_off_kernel_map                0x2264D48
#define kern_off_kernel_pmap_store         0x1B8C4B0
#define kern_off_sysent                    0x10FC310

#define kern_off_pmap_extract              0x12D000
#define kern_off_pmap_protect              0x12E1A0

#define kern_off_pml4pml4i                 0x1B8C4A0
#define kern_off_dmpml4i                   0x1B8C4A4
#define kern_off_dmpdpi                    0x1B8C4A8

#define kern_off_sched_pin                 0x1CD080
#define kern_off_sched_unpin               0x1CD0A0
#define kern_off_smp_rendezvous            0x430B60
#define kern_off_smp_no_rendevous_barrier  0x430970
#define kern_off_icc_query_nowait          0x2E13E0

#define kern_off_gpu_devid_is_9924         0x4AA160
#define kern_off_gc_get_fw_info            0x4DD180
#define kern_off_set_gpu_freq              0x4DBCC0
#define kern_off_set_pstate                0x4D4EC0
#define kern_off_update_vddnp              0x4DC260
#define kern_off_set_cu_power_gate         0x4DC670
#define kern_off_set_nclk_mem_spd          0x0
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x29A5F0
#define kern_off_kern_reboot               0x29A000

#define kern_off_eap_hdd_key               0x26C0C90
#define kern_off_edid                      0x2748058
#define kern_off_wlanbt                    0x180810

#define kern_off_disable_aslr              0x5F824
#define kern_off_mmap_self_1               0x8BC90
#define kern_off_mmap_self_2               0x8BCB0
#define kern_off_mmap_self_3               0x168001
#define kern_off_reg_mgr_set_int           0x4E6A10
#define kern_off_set_time                  0x632410
#define kern_off_clear_time_diff           0x6318F0
#define kern_off_target_id                 0x221288D
#define kern_off_icc_nvs_write             0x10B100
#define kern_off_npdrm_open                0x64D120
#define kern_off_npdrm_close               0x64D140
#define kern_off_npdrm_ioctl               0x64D197
#define kern_off_no_bd_patch               0x53683
