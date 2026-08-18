#pragma once
/* PS4 10.50 — kexec offsets: EchoStretch */

#define kern_off_xfast_syscall             0x1C0

#define kern_off_prison0                   0x111B910
#define kern_off_rootvnode                 0x1BF81F0
#define kern_off_allproc                   0x2269F30

#define kern_off_vmspace_acquire_ref       0x476140
#define kern_off_vmspace_free              0x475F70
#define kern_off_proc_rwmem                0x4244A0

#define kern_off_printf                    0x450E80
#define kern_off_snprintf                  0x451180
#define kern_off_copyin                    0xD7560
#define kern_off_copyout                   0xD7470
#define kern_off_copyinstr                 0xD7A10

#define kern_off_kmem_alloc                0x428960
#define kern_off_kmem_alloc_contig         0x42BB80
#define kern_off_kmem_free                 0x428B30

#define kern_off_kernel_map                0x22A9250
#define kern_off_kernel_pmap_store         0x1B2CEE0
#define kern_off_sysent                    0x11029C0

#define kern_off_pmap_extract              0x444D0
#define kern_off_pmap_protect              0x45670

#define kern_off_pml4pml4i                 0x1B2CED0
#define kern_off_dmpml4i                   0x1B2CED4
#define kern_off_dmpdpi                    0x1B2CED8

#define kern_off_sched_pin                 0x4447E0
#define kern_off_sched_unpin               0x444800
#define kern_off_smp_rendezvous            0x91190
#define kern_off_smp_no_rendevous_barrier  0x90FA0
#define kern_off_icc_query_nowait          0x695F0

#define kern_off_gpu_devid_is_9924         0x4B7DE0
#define kern_off_gc_get_fw_info            0x4D9960
#define kern_off_set_gpu_freq              0x4D84A0
#define kern_off_set_pstate                0x4DC040
#define kern_off_update_vddnp              0x4D8A40
#define kern_off_set_cu_power_gate         0x4D8E50
#define kern_off_set_nclk_mem_spd          0x18170
#define kern_off_Starsha_UcodeInfo         0x0

#define kern_off_pstate_before_shutdown    0x45DCC0
#define kern_off_kern_reboot               0x45D6D0

#define kern_off_eap_hdd_key               0x26C4D00
#define kern_off_edid                      0x2748F90
#define kern_off_wlanbt                    0x34D640

#define kern_off_disable_aslr              0x345E04
#define kern_off_mmap_self_1               0x1F44E0
#define kern_off_mmap_self_2               0x1F4500
#define kern_off_mmap_self_3               0x19E151
#define kern_off_reg_mgr_set_int           0x4E6A70
#define kern_off_set_time                  0x633CF0
#define kern_off_clear_time_diff           0x6331D0
#define kern_off_target_id                 0x1BE460D
#define kern_off_icc_nvs_write             0x11A770
#define kern_off_npdrm_open                0x64C970
#define kern_off_npdrm_close               0x64C990
#define kern_off_npdrm_ioctl               0x64C9E7
#define kern_off_no_bd_patch               0x3E11F3
