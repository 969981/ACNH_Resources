
long * FUN_008fc8e8(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  
  puVar3 = PTR_PTR_04bb2238;
  if (*(char *)(param_1 + 0x430) != '\0') {
    return (long *)PTR_PTR_04bb2238;
  }
  if ((*(long *)PTR_DAT_04bb27c0 == 0) || (uVar2 = *(uint *)(param_1 + 0x274), uVar2 == 0)) {
LAB_008fc978:
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                       ((ulong)(uVar2 >> 0x11) & 0x7ff8));
    if (plVar6 != (long *)0x0) {
      if (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar6 + 0x46) == uVar2)) {
        if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32c0);
        }
        bVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
        goto LAB_008fc980;
      }
      goto LAB_008fc978;
    }
  }
  bVar4 = 1;
LAB_008fc980:
  plVar1 = plVar6 + 0x60e1;
  if ((bVar4 & plVar6 != (long *)0x0) == 0) {
    plVar1 = (long *)puVar3;
  }
  return plVar1;
}

