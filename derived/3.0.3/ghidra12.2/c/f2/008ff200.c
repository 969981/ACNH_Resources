
void FUN_008ff200(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 0x274), uVar1 == 0)) {
    return;
  }
  plVar4 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                     ((ulong)(uVar1 >> 0x11) & 0x7ff8));
  if (((plVar4 != (long *)0x0) && ((*(uint *)(plVar4 + 0x49) >> 1 & 1) == 0)) &&
     (*(uint *)(plVar4 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb32b8);
    if ((uVar3 & 1) != 0) {
      FUN_008c3440(plVar4,(int)plVar4[0x82]);
      FUN_03ebb160(plVar4 + 0x81,0x19);
      plVar4[0x6fe5] = (long)PTR_LAB_04bb5880;
      plVar4[0x6fe6] = 0;
      plVar4[0x6fe3] = (long)(PTR_DAT_04bb5990 + 0x10);
      plVar4[0x6fe4] = (long)plVar4;
    }
  }
  return;
}

