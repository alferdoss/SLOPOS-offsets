#pragma once
/* PS4 8.50 — kexec offsets: ArabPixel */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x111A8F0
#define kern_off_rootvnode                 0x1C66150
#define kern_off_allproc                   0x1BD72D8

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0x15D570
#define kern_off_snprintf                  0x15D870
#define kern_off_copyin                    0x3A42E0
#define kern_off_copyout                   0x3A41F0
#define kern_off_copyinstr                 0x3A4790

#define kern_off_kmem_alloc                0x2199A0
#define kern_off_kmem_alloc_contig         0x425F0
#define kern_off_kmem_free                 0x219B70

#define kern_off_kernel_map                0x1C64228
#define kern_off_kernel_pmap_store         0x1BF69B0
#define kern_off_sysent                    0x10FC5C0

#define kern_off_pmap_extract              0x116A20
#define kern_off_pmap_protect              0x117BC0

#define kern_off_pml4pml4i                 0x1BF69A0
#define kern_off_dmpml4i                   0x1BF69A4
#define kern_off_dmpdpi                    0x1BF69A8

#define kern_off_sched_pin                 0xEFD30
#define kern_off_sched_unpin               0xEFD50
#define kern_off_smp_rendezvous            0xFC10
#define kern_off_smp_no_rendevous_barrier  0xFA20
#define kern_off_icc_query_nowait          0x12F150

#define kern_off_gpu_devid_is_9924         0x4C5430
#define kern_off_gc_get_fw_info            0x4B5F00
#define kern_off_set_gpu_freq              0x4B4A40
#define kern_off_set_pstate                0x4D1AD0
#define kern_off_update_vddnp              0x4B4FE0
#define kern_off_set_cu_power_gate         0x4B53F0
#define kern_off_set_nclk_mem_spd          0xBA750
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x40BA10
#define kern_off_kern_reboot               0x40B420

#define kern_off_eap_hdd_key               0x26BCCF0
#define kern_off_edid                      0x2740C50
#define kern_off_wlanbt                    0x1AB000

#define kern_off_disable_aslr              0x215154
#define kern_off_mmap_self_1               0x293650
#define kern_off_mmap_self_2               0x293670
#define kern_off_mmap_self_3               0x84411
#define kern_off_reg_mgr_set_int           0x4E9DC0
#define kern_off_set_time                  0x6320C0
#define kern_off_clear_time_diff           0x6315A0
#define kern_off_target_id                 0x1C8338D
#define kern_off_icc_nvs_write             0x393B20
#define kern_off_npdrm_open                0x64D3E0
#define kern_off_npdrm_close               0x64D400
#define kern_off_npdrm_ioctl               0x64D457
#define kern_off_no_bd_patch               0x387863
