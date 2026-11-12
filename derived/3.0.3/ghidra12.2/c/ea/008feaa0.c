
void FUN_008feaa0(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  long *plVar5;
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 0x274), uVar1 == 0)) {
    return;
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
      *(undefined4 *)(plVar5 + 0x62bb) = 0;
      *(undefined4 *)(plVar5 + 0x62e3) = 0x3e3851ec;
      uVar4 = 0x20000000;
      if (*(int *)((long)plVar5 + 0x315d4) + -1 < 0) {
        uVar4 = 0xe0000000;
      }
      *(undefined4 *)((long)plVar5 + 0x315d4) = uVar4;
      FUN_008c4aa0(plVar5,(int)plVar5[0x60fd],0);
      if ((param_2 & 1) != 0) {
        *(undefined4 *)(plVar5 + 0x612a) = *(undefined4 *)((long)plVar5 + 0x30954);
        *(undefined4 *)((long)plVar5 + 0x3089c) = *(undefined4 *)((long)plVar5 + 0x3091c);
        *(int *)(plVar5 + 0x6114) = (int)plVar5[0x6124];
        plVar5[0x6112] = plVar5[0x6122];
        *(undefined4 *)((long)plVar5 + 0x308b4) = *(undefined4 *)((long)plVar5 + 0x30934);
        *(int *)(plVar5 + 0x6117) = (int)plVar5[0x6127];
        *(int *)(plVar5 + 0x6113) = (int)plVar5[0x6123];
        *(undefined4 *)((long)plVar5 + 0x308bc) = *(undefined4 *)((long)plVar5 + 0x3093c);
        *(int *)(plVar5 + 0x6118) = (int)plVar5[0x6128];
        *(undefined8 *)((long)plVar5 + 0x308a4) = *(undefined8 *)((long)plVar5 + 0x30924);
        *(undefined8 *)((long)plVar5 + 0x308ac) = *(undefined8 *)((long)plVar5 + 0x3092c);
        *(undefined4 *)((long)plVar5 + 0x308cc) = *(undefined4 *)((long)plVar5 + 0x3094c);
        *(undefined8 *)((long)plVar5 + 0x308c4) = *(undefined8 *)((long)plVar5 + 0x30944);
      }
    }
  }
  return;
}

