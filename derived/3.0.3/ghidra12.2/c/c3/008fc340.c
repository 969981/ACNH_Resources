
long * FUN_008fc340(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x430) != '\0') {
    return (long *)&DAT_041675a0;
  }
  if ((*(long *)PTR_DAT_04bb27c0 == 0) || (uVar2 = *(uint *)(param_1 + 0x274), uVar2 == 0)) {
LAB_008fc3d0:
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                       ((ulong)(uVar2 >> 0x11) & 0x7ff8));
    if (plVar5 != (long *)0x0) {
      if (((*(uint *)(plVar5 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar5 + 0x46) == uVar2)) {
        if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32c0);
        }
        bVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb32b8);
        goto LAB_008fc3d8;
      }
      goto LAB_008fc3d0;
    }
  }
  bVar3 = 1;
LAB_008fc3d8:
  plVar1 = plVar5 + 0x6fcc;
  if ((bVar3 & plVar5 != (long *)0x0) == 0) {
    plVar1 = (long *)&DAT_041675a0;
  }
  return plVar1;
}

