#pragma once
/* PS4 11.50 — kexec offsets: BestPig */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x111FA18
#define kern_off_rootvnode                 0x2136E90

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0x2E01A0
#define kern_off_snprintf                  0x2E04A0
#define kern_off_copyin                    0x2BD590
#define kern_off_copyout                   0x2BD4A0
#define kern_off_copyinstr                 0x2BDA40

#define kern_off_kmem_alloc                0x4657A0
#define kern_off_kmem_alloc_contig         0x24D2F0
#define kern_off_kmem_free                 0x465970

#define kern_off_kernel_map                0x22D1D50
#define kern_off_kernel_pmap_store         0x1B2C3A0
#define kern_off_sysent                    0x1102B70

#define kern_off_pmap_extract              0x573D0
#define kern_off_pmap_protect              0x58570

#define kern_off_pml4pml4i                 0x1B2C390
#define kern_off_dmpml4i                   0x1B2C394
#define kern_off_dmpdpi                    0x1B2C398

#define kern_off_sched_pin                 0x231520
#define kern_off_sched_unpin               0x231540
#define kern_off_smp_rendezvous            0x1AD4E0
#define kern_off_smp_no_rendevous_barrier  0x1AD2F0
#define kern_off_icc_query_nowait          0x447890

#define kern_off_gpu_devid_is_9924         0x4AC300
#define kern_off_gc_get_fw_info            0x4BACB0
#define kern_off_set_gpu_freq              0x4B97F0
#define kern_off_set_pstate                0x4BBBC0
#define kern_off_update_vddnp              0x4B9D90
#define kern_off_set_cu_power_gate         0x4BA1A0
#define kern_off_set_nclk_mem_spd          0x0
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x3A2120
#define kern_off_kern_reboot               0x3A1B30

#define kern_off_eap_hdd_key               0x26C4CF0
#define kern_off_edid                      0x274A148
#define kern_off_wlanbt                    0x4787B0

#define kern_off_disable_aslr              0x477A14
#define kern_off_mmap_self_1               0x3B2B00
#define kern_off_mmap_self_2               0x3B2B20
#define kern_off_mmap_self_3               0x1FC361
#define kern_off_reg_mgr_set_int           0x4E81D0
#define kern_off_set_time                  0x634710
#define kern_off_clear_time_diff           0x633BF0
#define kern_off_target_id                 0x21CC60D
#define kern_off_icc_nvs_write             0xA5A10
#define kern_off_npdrm_open                0x64D390
#define kern_off_npdrm_close               0x64D3B0
#define kern_off_npdrm_ioctl               0x64D407
#define kern_off_no_bd_patch               0x1D5D83
