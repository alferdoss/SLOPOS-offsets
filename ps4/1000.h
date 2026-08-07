#pragma once
/* PS4 10.00 — kexec offsets: EinTim23 */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x111B8B0
#define kern_off_rootvnode                 0x1B25BD0
#define kern_off_allproc                   0x22D9B40

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0xC50F0
#define kern_off_snprintf                  0xC53F0
#define kern_off_copyin                    0x472F10
#define kern_off_copyout                   0x472E20
#define kern_off_copyinstr                 0x4733C0

#define kern_off_kmem_alloc                0x33B040
#define kern_off_kmem_alloc_contig         0x1D8B30
#define kern_off_kmem_free                 0x33B210

#define kern_off_kernel_map                0x227BEF8
#define kern_off_kernel_pmap_store         0x2182D60
#define kern_off_sysent                    0x1102D90

#define kern_off_pmap_extract              0xDFA00
#define kern_off_pmap_protect              0xE0BA0

#define kern_off_pml4pml4i                 0x2182D50
#define kern_off_dmpml4i                   0x2182D54
#define kern_off_dmpdpi                    0x2182D58

#define kern_off_sched_pin                 0x1D7290
#define kern_off_sched_unpin               0x1D72B0
#define kern_off_smp_rendezvous            0x16BC40
#define kern_off_smp_no_rendevous_barrier  0x16BA50
#define kern_off_icc_query_nowait          0x24E230

#define kern_off_gpu_devid_is_9924         0x4B3300
#define kern_off_gc_get_fw_info            0x4CF590
#define kern_off_set_gpu_freq              0x4CE0D0
#define kern_off_set_pstate                0x4B1500
#define kern_off_update_vddnp              0x4CE670
#define kern_off_set_cu_power_gate         0x4CEA80
#define kern_off_set_nclk_mem_spd          0x0
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x4812D0
#define kern_off_kern_reboot               0x480CE0

#define kern_off_eap_hdd_key               0x26C4D00
#define kern_off_edid                      0x274F370
#define kern_off_wlanbt                    0x2C7E20

#define kern_off_disable_aslr              0x3BF3A4
#define kern_off_mmap_self_1               0xA5CD0
#define kern_off_mmap_self_2               0xA5CF0
#define kern_off_mmap_self_3               0xEF2C1
#define kern_off_reg_mgr_set_int           0x4EC5D0
#define kern_off_set_time                  0x630530
#define kern_off_clear_time_diff           0x62FA10
#define kern_off_target_id                 0x1B9E08D
#define kern_off_icc_nvs_write             0x2E0690
#define kern_off_npdrm_open                0x64BE00
#define kern_off_npdrm_close               0x64BE20
#define kern_off_npdrm_ioctl               0x64BE77
#define kern_off_no_bd_patch               0x46AFE3
