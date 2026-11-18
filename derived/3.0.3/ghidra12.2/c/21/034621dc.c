
void FUN_034621dc(undefined1 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (*(long *)PTR_DAT_04bb7ff8 == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x034622bc;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x034622bc;
    }
  }
  uVar10 = 0;
joined_r0x034622bc:
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3278);
    puVar3 = PTR_DAT_04bb32c0;
    if ((((uVar10 & uVar5) == 1) && (*(long *)puVar1 != 0)) &&
       ((uVar10 = *(uint *)((long)plVar9 + 0x274), uVar10 != 0 &&
        (((plVar6 = *(long **)(*(long *)(*(long *)(*(long *)puVar1 + 0x1c0) + 8) +
                              ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0 &&
          ((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar6 + 0x46) == uVar10)))))) {
      if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32c0);
      }
      puVar2 = PTR_DAT_04bb32b8;
      uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
      if (((uVar7 & 1) != 0) && (*(char *)((long)plVar6 + 0x31764) != '\0')) {
        *param_1 = 1;
        if ((*(long *)puVar1 != 0) &&
           ((((uVar10 = *(uint *)((long)plVar9 + 0x274), uVar10 != 0 &&
              (plVar9 = *(long **)(*(long *)(*(long *)(*(long *)puVar1 + 0x1c0) + 8) +
                                  ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 != (long *)0x0)) &&
             ((*(uint *)(plVar9 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar9 + 0x46) == uVar10))))
        {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
            *(undefined **)puVar2 = PTR_DAT_04bb32c8 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32c0);
          }
          uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb32b8);
          if ((uVar7 & 1) != 0) {
            *(undefined1 *)((long)plVar9 + 0x31764) = 0;
          }
        }
      }
    }
  }
  return;
}

