
void FUN_008fe5f0(long param_1,int param_2)

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
      *(undefined4 *)(plVar4 + 0x62bb) = 0;
      *(uint *)((long)plVar4 + 0x315d4) =
           *(int *)((long)plVar4 + 0x315d4) + 0x20000000U & 0xc0000000;
      FUN_03ebb160(plVar4 + 0x81,0x16);
      if (-1 < param_2) {
        *(int *)((long)plVar4 + 0x30954) = param_2;
      }
    }
  }
  return;
}

