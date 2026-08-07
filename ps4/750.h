#pragma once
/* PS4 7.50 — kexec offsets: ArabPixel */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x113B728
#define kern_off_rootvnode                 0x1B463E0
#define kern_off_allproc                   0x213C828

/* kern_off_vmspace_acquire_ref TODO — help wanted */
/* kern_off_vmspace_free TODO — help wanted */
/* kern_off_proc_rwmem TODO — help wanted */

#define kern_off_printf                    0x26F740
#define kern_off_snprintf                  0x26FA40
#define kern_off_copyin                    0x28F9F0
#define kern_off_copyout                   0x28F900
#define kern_off_copyinstr                 0x28FEA0

#define kern_off_kmem_alloc                0x1753E0
#define kern_off_kmem_alloc_contig         0x49DF40
#define kern_off_kmem_free                 0x1755B0

#define kern_off_kernel_map                0x21405B8
#define kern_off_kernel_pmap_store         0x215EA40
#define kern_off_sysent                    0x1122340

#define kern_off_pmap_extract              0x1A6D70
#define kern_off_pmap_protect              0x1A7F20

#define kern_off_pml4pml4i                 0x215EA30
#define kern_off_dmpml4i                   0x215EA34
#define kern_off_dmpdpi                    0x215EA38

#define kern_off_sched_pin                 0x191410
#define kern_off_sched_unpin               0x191430
#define kern_off_smp_rendezvous            0x26CEC0
#define kern_off_smp_no_rendevous_barrier  0x26CC90
#define kern_off_icc_query_nowait          0x1629D0

#define kern_off_gpu_devid_is_9924         0x4E4560
#define kern_off_gc_get_fw_info            0x4F8FE0
#define kern_off_set_gpu_freq              0x4F7AF0
#define kern_off_set_pstate                0x4D2720
#define kern_off_update_vddnp              0x4F80C0
#define kern_off_set_cu_power_gate         0x4F84D0
#define kern_off_set_nclk_mem_spd          0x29E8C0
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0xD2ED0
#define kern_off_kern_reboot               0xD28E0

#define kern_off_eap_hdd_key               0x26D4C90
#define kern_off_edid                      0x275C0D0
#define kern_off_wlanbt                    0xE3B70

#define kern_off_disable_aslr              0x218AF4
#define kern_off_mmap_self_1               0x364D40
#define kern_off_mmap_self_2               0x364D60
#define kern_off_mmap_self_3               0xDCED1
#define kern_off_reg_mgr_set_int           0x4FEFC0
#define kern_off_set_time                  0x64CE20
#define kern_off_clear_time_diff           0x64C300
#define kern_off_target_id                 0x22287CD
#define kern_off_icc_nvs_write             0x2F770
#define kern_off_npdrm_open                0x6678C0
#define kern_off_npdrm_close               0x6678E0
#define kern_off_npdrm_ioctl               0x667937
#define kern_off_no_bd_patch               0x435403
