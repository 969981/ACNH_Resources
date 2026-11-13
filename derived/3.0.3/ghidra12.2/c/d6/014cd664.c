
void FUN_014cd664(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  uVar6 = 0;
  if (lVar7 == 0) goto LAB_014cd800;
  uVar9 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      uVar9 = *(uint *)(lVar7 + 0x5e8);
      if (4 < uVar9) goto LAB_014cd728;
      uVar9 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
    }
  }
  else {
LAB_014cd728:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    uVar6 = 0;
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) == 0) || (uVar1 == 0)) goto LAB_014cd800;
    lVar7 = *(long *)puVar2;
    if (lVar7 != 0) {
      uVar9 = *(uint *)((long)plVar8 + 0x274);
      uVar6 = 0;
      if (uVar9 == 0) goto LAB_014cd800;
      plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                         ((ulong)(uVar9 >> 0x11) & 0x7ff8));
      if (((plVar8 != (long *)0x0) && ((*(uint *)(plVar8 + 0x49) >> 1 & 1) == 0)) &&
         (*(uint *)(plVar8 + 0x46) == uVar9)) {
        if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32c0);
        }
        uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb32b8);
        if ((uVar5 & 1) != 0) {
          uVar6 = *(undefined4 *)((long)plVar8 + 0x315d4);
          goto LAB_014cd800;
        }
      }
    }
  }
  uVar6 = 0;
LAB_014cd800:
  *param_1 = uVar6;
  return;
}

