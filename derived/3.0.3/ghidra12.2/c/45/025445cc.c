
/* WARNING: Removing unreachable block (ram,0x0254466c) */

uint FUN_025445cc(byte *param_1)

{
  uint uVar1;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((((*param_1 < 8) && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) {
    uVar1 = FUN_0254410c(param_1);
    local_28 = 0;
    local_22 = 0;
    local_24 = 0xff00;
    if (-1 < *(int *)(PTR_DAT_04bc31c8 + 0x78)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc31c8 + 0x78),&local_28,
                   param_1,0x18,0);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

