
void FUN_008fcfcc(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *__s;
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 0x274), uVar1 == 0)) {
    return;
  }
  plVar5 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                     ((ulong)(uVar1 >> 0x11) & 0x7ff8));
  if (plVar5 == (long *)0x0) {
    return;
  }
  if ((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0) {
    return;
  }
  if (*(uint *)(plVar5 + 0x46) != uVar1) {
    return;
  }
  if (((*PTR_DAT_04bb32c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb32c0);
  }
  uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb32b8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((int)plVar5[0x82] == 0x21) {
    return;
  }
  iVar2 = (int)plVar5[0x6210];
  if (iVar2 < 1) {
    return;
  }
  *(undefined2 *)((long)plVar5 + 0x37fac) = 0x101;
  __s = (undefined8 *)plVar5[0x60f0];
  *(undefined4 *)((long)plVar5 + 0x307f4) = 0;
  if (__s != &DAT_0407ebb1) {
    iVar2 = 0;
    if ((int)plVar5[0x60f1] < 1) {
      iVar2 = (int)plVar5[0x60f1] + -1;
    }
    memset(__s,0,(long)iVar2);
    *(undefined1 *)((long)__s + (long)iVar2) = 0;
    iVar2 = (int)plVar5[0x6210];
    if (iVar2 < 1) {
      plVar4 = plVar5 + 0x82;
      goto LAB_008fd0fc;
    }
  }
  plVar4 = *(long **)(plVar5[0x6211] + (ulong)(iVar2 - 1) * 8);
LAB_008fd0fc:
  FUN_03ebb160(plVar5 + 0x81,(int)*plVar4);
  *(undefined1 *)((long)plVar5 + 0x37fac) = 0;
  return;
}

