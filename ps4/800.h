#pragma once
/* PS4 8.00 — kexec offsets: ArabPixel */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x111A7D0
#define kern_off_rootvnode                 0x1B8C730
#define kern_off_allproc                   0x1B244E0

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0x430AE0
#define kern_off_snprintf                  0x430DE0
#define kern_off_copyin                    0x25E3B0
#define kern_off_copyout                   0x25E2C0
#define kern_off_copyinstr                 0x25E860

#define kern_off_kmem_alloc                0x1B3F0
#define kern_off_kmem_alloc_contig         0x3BBFF0
#define kern_off_kmem_free                 0x1172C0

#define kern_off_kernel_map                0x1B243E0
#define kern_off_kernel_pmap_store         0x2245C40
#define kern_off_sysent                    0x10FC4D0

#define kern_off_pmap_extract              0x1B5C0
#define kern_off_pmap_protect              0x381D60

#define kern_off_pml4pml4i                 0x2245C30
#define kern_off_dmpml4i                   0x2245C34
#define kern_off_dmpdpi                    0x2245C38

#define kern_off_sched_pin                 0x107D10
#define kern_off_sched_unpin               0x107D30
#define kern_off_smp_rendezvous            0x12EA00
#define kern_off_smp_no_rendevous_barrier  0x12E810
#define kern_off_icc_query_nowait          0x4480C0

#define kern_off_gpu_devid_is_9924         0x4ACD90
#define kern_off_gc_get_fw_info            0x4C9BC0
#define kern_off_set_gpu_freq              0x4C8700
#define kern_off_set_pstate                0x4D2900
#define kern_off_update_vddnp              0x4C8CA0
#define kern_off_set_cu_power_gate         0x4C90B0
#define kern_off_set_nclk_mem_spd          0x1FF570
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x155B50
#define kern_off_kern_reboot               0x155560

#define kern_off_eap_hdd_key               0x26BCC60
#define kern_off_edid                      0x2741C68
#define kern_off_wlanbt                    0x257250

#define kern_off_disable_aslr              0x2856F4
#define kern_off_mmap_self_1               0x1D5780
#define kern_off_mmap_self_2               0x1D57A0
#define kern_off_mmap_self_3               0xFED61
#define kern_off_reg_mgr_set_int           0x4E42A0
#define kern_off_set_time                  0x630C20
#define kern_off_clear_time_diff           0x630100
#define kern_off_target_id                 0x1B5158D
#define kern_off_icc_nvs_write             0x41EC60
#define kern_off_npdrm_open                0x64D680
#define kern_off_npdrm_close               0x64D6A0
#define kern_off_npdrm_ioctl               0x64D6F7
#define kern_off_no_bd_patch               0x27DEB3
