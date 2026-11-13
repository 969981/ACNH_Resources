
bool FUN_01495214(long param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  
  if ((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar2 = *(uint *)(param_1 + 4), uVar2 != 0)) {
    plVar4 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                       ((ulong)(uVar2 >> 0x11) & 0x7ff8));
    if (plVar4 == (long *)0x0) {
      bVar1 = false;
      uVar5 = 0;
      uVar2 = 1;
      goto joined_r0x014952c4;
    }
    if (((*(uint *)(plVar4 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar4 + 0x46) == uVar2)) {
      bVar1 = (int)plVar4[0x2a] == 1;
      uVar5 = *(uint *)(plVar4 + 0x49) >> 4 & 1;
      if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e60);
      }
      uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb2e58);
      uVar2 = uVar2 & 1;
      goto joined_r0x014952c4;
    }
  }
  bVar1 = false;
  uVar5 = 0;
  plVar4 = (long *)0x0;
  uVar2 = 1;
joined_r0x014952c4:
  if ((param_2 & 1) == 0) {
    if ((((plVar4 != (long *)0x0) && (bVar1)) && (uVar2 != 0)) && (uVar5 != 0)) {
      return true;
    }
  }
  else if ((plVar4 != (long *)0x0) && (uVar2 != 0)) {
    return (int)plVar4[0x2a] == 1;
  }
  return false;
}

