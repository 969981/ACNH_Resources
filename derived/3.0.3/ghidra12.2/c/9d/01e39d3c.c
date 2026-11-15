
long * FUN_01e39d3c(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  
  if (((DAT_0538f7b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0538f7b8), iVar1 != 0)) {
    DAT_0538f778 = PTR_DAT_04bb2020 + 0x10;
    DAT_0538f780 = "CommonStandWait";
    DAT_0538f7b0 = "CommonBedWait";
    DAT_0538f790 = "CommonSitWait";
    DAT_0538f7a0 = "NpcSitOnGround";
    DAT_0538f788 = DAT_0538f778;
    DAT_0538f798 = DAT_0538f778;
    DAT_0538f7a8 = DAT_0538f778;
    __cxa_guard_release(&DAT_0538f7b8);
  }
  if ((*(int *)(param_1 + 0x750) != 0) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x3b0) + 0x56c), iVar1 != 1)) {
    if (*(int *)(param_1 + 0x750) == 2) {
      if ((*(byte *)(param_1 + 0x69e) >> 4 & 1) != 0) {
        if ((DAT_0538f7d0 & 1) != 0) {
          return &DAT_0538f7c0;
        }
        iVar1 = __cxa_guard_acquire(&DAT_0538f7d0);
        plVar3 = &DAT_0538f7c0;
        if (iVar1 == 0) {
          return plVar3;
        }
        pcVar4 = "NpcSpCheersDemoSitOnGround";
        plVar5 = &DAT_0538f7c0;
        puVar2 = &DAT_0538f7d0;
LAB_01e39ee4:
        *plVar3 = (long)(PTR_DAT_04bb2020 + 0x10);
        plVar3[1] = (long)pcVar4;
        __cxa_guard_release(puVar2);
        return plVar5;
      }
      if (iVar1 == 0x32) {
        if ((DAT_0538f7e8 & 1) != 0) {
          return &DAT_0538f7d8;
        }
        iVar1 = __cxa_guard_acquire(&DAT_0538f7e8);
        plVar3 = &DAT_0538f7d8;
        if (iVar1 == 0) {
          return plVar3;
        }
        pcVar4 = "KppWait";
        plVar5 = &DAT_0538f7d8;
        puVar2 = &DAT_0538f7e8;
        goto LAB_01e39ee4;
      }
    }
    if (iVar1 != 0x33) {
      plVar3 = (long *)(&DAT_0538f778 + (ulong)*(uint *)(param_1 + 0x750) * 2);
      if (3 < *(uint *)(param_1 + 0x750)) {
        plVar3 = (long *)&DAT_0538f778;
      }
      return plVar3;
    }
  }
  return (long *)(PTR_DAT_04bc15e0 + (long)*(int *)(*(long *)(param_1 + 0x3b0) + 0x56c) * 0x10);
}

