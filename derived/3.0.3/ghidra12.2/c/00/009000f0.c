
void FUN_009000f0(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *__s;
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar2 = *(uint *)(param_1 + 0x274), uVar2 == 0)) {
    return;
  }
  plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                     ((ulong)(uVar2 >> 0x11) & 0x7ff8));
  if (((plVar6 != (long *)0x0) && ((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0)) &&
     (*(uint *)(plVar6 + 0x46) == uVar2)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
    if ((uVar4 & 1) != 0) {
      plVar1 = plVar6 + 0x6210;
      iVar3 = (int)*plVar1;
      if (0 < iVar3) {
        do {
          if ((int)plVar6[0x82] == 0x21) {
            return;
          }
          __s = (undefined8 *)plVar6[0x60f0];
          *(undefined2 *)((long)plVar6 + 0x37fac) = 0x101;
          *(undefined4 *)((long)plVar6 + 0x307f4) = 0;
          if (__s == &DAT_0407ebb1) {
LAB_009001c8:
            plVar5 = *(long **)(plVar6[0x6211] + (ulong)(iVar3 - 1) * 8);
          }
          else {
            iVar3 = 0;
            if ((int)plVar6[0x60f1] < 1) {
              iVar3 = (int)plVar6[0x60f1] + -1;
            }
            memset(__s,0,(long)iVar3);
            *(undefined1 *)((long)__s + (long)iVar3) = 0;
            iVar3 = (int)*plVar1;
            plVar5 = plVar6 + 0x82;
            if (0 < iVar3) goto LAB_009001c8;
          }
          FUN_03ebb160(plVar6 + 0x81,(int)*plVar5);
          iVar3 = (int)*plVar1;
          *(undefined1 *)((long)plVar6 + 0x37fac) = 0;
        } while (0 < iVar3);
      }
    }
  }
  return;
}

