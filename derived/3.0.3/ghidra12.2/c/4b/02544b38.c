
/* WARNING: Removing unreachable block (ram,0x02544c10) */

undefined8 FUN_02544b38(byte *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 local_2c [2];
  undefined2 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (7 < *param_1) {
    return 0;
  }
  uVar1 = FUN_02582d8c(param_1,1);
  if (((uVar1 < 8) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) {
    uVar3 = (ulong)*param_1;
    if ((DAT_054f5738 != 0) && (*param_1 < 8)) {
      *(undefined2 *)(DAT_054f5738 + uVar3 * 2 + 0xe80) = *param_2;
      uVar3 = (ulong)*param_1;
    }
    local_2c[0] = (undefined1)uVar3;
    if (7 < (uint)uVar3) {
      local_2c[0] = 0xff;
    }
    local_2a = *param_2;
    local_28 = 0;
    local_22 = 0;
    local_24 = 0xff00;
    if (-1 < *(int *)(PTR_DAT_04bc31c8 + 0x1c8)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc31c8 + 0x1c8),&local_28,
                   local_2c,4,0);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

