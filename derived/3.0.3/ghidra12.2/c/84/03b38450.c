
undefined4 FUN_03b38450(long param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  
  if (((*PTR_DAT_04bcb018 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bcb018), iVar4 != 0))
  {
    FUN_037d8910(PTR_DAT_04bcb010);
    __cxa_guard_release(PTR_DAT_04bcb018);
  }
  uVar2 = *param_2;
  if (*(uint *)PTR_DAT_04bcb010 <= uVar2) {
    uVar2 = 0;
  }
  if (*(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar2 * 4) < 7) {
    if (((*PTR_DAT_04bcb018 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bcb018), iVar4 != 0)) {
      FUN_037d8910(PTR_DAT_04bcb010);
      __cxa_guard_release(PTR_DAT_04bcb018);
    }
    uVar2 = *param_2;
    if (*(uint *)PTR_DAT_04bcb010 <= uVar2) {
      uVar2 = 0;
    }
    uVar2 = *(uint *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar2 * 4);
    uVar5 = (ulong)uVar2;
    if (6 < uVar2) {
      uVar5 = 0;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x108 + uVar5 * 4);
  }
  else {
    if (((*PTR_DAT_04bcb018 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bcb018), iVar4 != 0)) {
      FUN_037d8910(PTR_DAT_04bcb010);
      __cxa_guard_release(PTR_DAT_04bcb018);
    }
    uVar2 = *param_2;
    if (*(uint *)PTR_DAT_04bcb010 <= uVar2) {
      uVar2 = 0;
    }
    if (0x3f < *(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar2 * 4)) {
      if (((*PTR_DAT_04bcb018 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bcb018), iVar4 != 0)) {
        FUN_037d8910(PTR_DAT_04bcb010);
        __cxa_guard_release(PTR_DAT_04bcb018);
      }
      uVar2 = *param_2;
      if (*(uint *)PTR_DAT_04bcb010 <= uVar2) {
        uVar2 = 0;
      }
      uVar2 = *(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar2 * 4) - 0x40;
      plVar1 = (long *)(param_1 + 8) + uVar2;
      if (0x1f < uVar2) {
        plVar1 = (long *)(param_1 + 8);
      }
      if (*plVar1 != 0) {
        return *(undefined4 *)(*plVar1 + 0x10);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

