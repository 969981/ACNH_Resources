
void FUN_0090172c(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar2 = *(uint *)(param_1 + 0x274), uVar2 != 0)) &&
      (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar6 + 0x46) == uVar2)))) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
    if ((uVar5 & 1) != 0) {
      iVar4 = (int)plVar6[0x62b7];
      iVar3 = (int)plVar6[0x62b6];
      if (iVar4 < iVar3) {
        *(int *)(plVar6 + 0x62b7) = iVar4 + 1;
        iVar4 = *(int *)((long)plVar6 + 0x315b4) + iVar4;
        iVar1 = 0;
        if (iVar3 <= iVar4) {
          iVar1 = iVar3;
        }
        *(undefined4 *)(plVar6[0x62b5] + (long)(iVar4 - iVar1) * 4) = 1;
      }
    }
  }
  return;
}

