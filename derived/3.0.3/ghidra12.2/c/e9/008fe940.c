
void FUN_008fe940(long param_1,int param_2,int param_3)

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
      if ((int)plVar4[0x82] == 0x13) {
        *(undefined4 *)(plVar4 + 0x62e3) = 0x3f000000;
      }
      else if ((int)plVar4[0x82] == 0xc) {
        *(undefined4 *)((long)plVar4 + 0x316d4) = 0x3f000000;
      }
      *(undefined4 *)(plVar4 + 0x62bb) = 0;
      *(uint *)((long)plVar4 + 0x315d4) =
           (int)(long)((float)param_2 * 90.0 * 11930465.0) + 0xa0000000U & 0xc0000000;
      FUN_008c4aa0(plVar4,(int)plVar4[0x60fd],0);
      if (-1 < param_3) {
        *(int *)((long)plVar4 + 0x30954) = param_3;
      }
    }
  }
  return;
}

