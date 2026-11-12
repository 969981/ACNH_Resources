
void FUN_008fc6e4(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *__src;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *__dest;
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 0x274), uVar1 == 0)) {
    return;
  }
  plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                     ((ulong)(uVar1 >> 0x11) & 0x7ff8));
  if (((plVar6 != (long *)0x0) && ((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0)) &&
     (*(uint *)(plVar6 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
    if ((((uVar3 & 1) != 0) && ((int)plVar6[0x82] != 0x21)) && (0 < (int)plVar6[0x6210])) {
      *(undefined2 *)((long)plVar6 + 0x37fac) = 0x101;
      *(int *)((long)plVar6 + 0x307f4) = param_2;
      if (param_2 == 0x2a) {
        (**(code **)(plVar6[0x60e8] + 0x18))(plVar6 + 0x60e8);
        __src = (undefined8 *)plVar6[0x60e9];
      }
      else {
        __src = &DAT_0407ebb1;
      }
      __dest = (undefined8 *)plVar6[0x60f0];
      if (__dest != __src) {
        lVar4 = 0;
        do {
          if (*(char *)((long)__src + lVar4) == '\0') goto LAB_008fc840;
          if (*(char *)((long)__src + lVar4 + 1) == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_008fc840;
          }
          if (*(char *)((long)__src + lVar4 + 2) == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_008fc840;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_008fc840:
        iVar2 = (int)lVar4;
        if ((int)plVar6[0x60f1] <= (int)lVar4) {
          iVar2 = (int)plVar6[0x60f1] + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        *(undefined1 *)((long)__dest + (long)iVar2) = 0;
      }
      iVar2 = (int)plVar6[0x6210];
      if (iVar2 < 1) {
        plVar5 = plVar6 + 0x82;
      }
      else {
        plVar5 = *(long **)(plVar6[0x6211] + (ulong)(iVar2 - 1) * 8);
      }
      FUN_03ebb160(plVar6 + 0x81,(int)*plVar5);
      *(undefined1 *)((long)plVar6 + 0x37fac) = 0;
      if (-1 < param_3) {
        *(int *)((long)plVar6 + 0x30954) = param_3;
      }
    }
  }
  return;
}

