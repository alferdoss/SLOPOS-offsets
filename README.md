# SLOPOS-offsets

Per-firmware kernel offset database for PS4 (and, soon, PS5) payloads.
One header per firmware: `ps4/<version>.h` (e.g. `ps4/1050.h` for 10.50).

## Layout

```
ps4/
  includes.h    dispatch: -D__10_50__ -> ps4/1050.h
  schema.h      canonical symbol list, grouped + documented
  <fw>.h        one header per firmware
ps5/            placeholder (see ps5/README.md)
```

Usage: define the version macro and include the dispatcher.

```c
#define __10_50__
#include "ps4/includes.h"
// kern_off_kmem_alloc, kern_off_printf, ... now defined
```

## Symbol groups (see `ps4/schema.h`)

- **jailbreak** — `prison0`, `rootvnode`, `allproc`, `disable_aslr`, `mmap_self_*`,
  `npdrm_*`, `target_id`, ... : userland exploit + escape.
- **kexec** — `printf`, `copyin/out`, `kmem_alloc*`, `kernel_map`, `sysent`,
  `pmap_*`, `smp_*`, ... : everything the Linux kexec RWX-patch path needs.
- **gpu** — `set_gpu_freq`, `gc_get_fw_info`, ... : Liverpool/Gladius bring-up.

A header is **kexec-complete** when `kmem_alloc`, `kernel_map`, `printf`,
`kmem_free`, `sysent` are all present and nonzero.

## Coverage (68 firmwares)

**kexec-complete (21):**
5.05 6.72 7.00 7.50 7.55 8.00 8.50 9.00 9.03 9.60 10.00 10.50 11.00 11.02 11.50
12.00 12.50 13.00 13.02 13.50 13.52

**jailbreak-only — help wanted (47):**
3.15 3.50 3.55 3.70 4.00 4.01 4.05 4.06 4.07 4.50 4.55 4.70 4.71 4.72 4.73 4.74
5.00 5.01 5.03 5.07 5.50 5.53 5.55 5.56 6.00 6.02 6.20 6.50 6.51 6.70 6.71 7.01
7.02 7.51 8.01 8.03 8.52 9.04 9.50 9.51 10.01 10.70 10.71 11.52 12.02 12.52 13.04

Many "help wanted" versions are aliases of a complete one (7.01/7.02 -> 7.00,
13.04 -> 13.02, ...) and only need the kexec block copied across.

## Contributing offsets

1. Pick a firmware from **help wanted**.
2. Fill the missing group in `ps4/<fw>.h` following `ps4/schema.h` order.
3. Source of truth for the kexec block is `ps4-linux/ps4-linux-loader`
   (`magic.h` + `fw_offsets.h`); `kern_off_kmem_alloc` is the `kmem_alloc`
   column of `fw_offsets.h`, **not** `magic.h`'s `kmem_free`.
4. Keep the `/* kexec offsets: <contributor> */` tag.
5. Do not commit anything derived from a private key region (eap/hdd_key/nvs/
   sflash dumps). `kern_off_eap_hdd_key` is just a code offset — that is fine.

## License

Repository: MIT (see `LICENSE`). kexec offsets copied with attribution — see
`CREDITS.md`.
