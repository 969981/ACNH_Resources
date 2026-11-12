
undefined8 FUN_008fdd3c(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  byte local_24 [4];
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 0x274), uVar1 == 0)) {
    return 0;
  }
  plVar5 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                     ((ulong)(uVar1 >> 0x11) & 0x7ff8));
  if (((plVar5 != (long *)0x0) && ((*(uint *)(plVar5 + 0x49) >> 1 & 1) == 0)) &&
     (*(uint *)(plVar5 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb32b8);
    if ((uVar3 & 1) != 0) {
      local_24[0] = *param_2;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      uVar4 = FUN_008d8f7c(plVar5,local_24);
      return uVar4;
    }
  }
  return 0;
}

