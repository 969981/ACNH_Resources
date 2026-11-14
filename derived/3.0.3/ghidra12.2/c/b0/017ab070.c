
void FUN_017ab070(undefined4 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    if ((((*(char *)(param_2 + lVar9) != '\0') &&
         (lVar8 = param_2 + lVar9, *(int *)(lVar8 + 0x14) != 0)) && (*(int *)(lVar8 + 0x10) != -1))
       && ((uVar10 = *(uint *)(lVar8 + (ulong)(*(uint *)(lVar8 + 0x18) & 1) * 0x1c + 0x2c),
           uVar10 != 0 && (lVar8 = *(long *)puVar3, lVar8 != 0)))) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                          ((ulong)(uVar10 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar10)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
        plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar8 = *(long *)puVar3;
        iVar5 = (**(code **)(*plVar6 + 0x60))();
        if (iVar5 < 0x11) {
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_017ab1b0;
          uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_017ab1b0:
        uVar10 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar8 = plVar11[0x2a];
        if (((*PTR_DAT_04bbe300 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe300), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bbe2f8 = puVar1;
          __cxa_guard_release(PTR_DAT_04bbe300);
        }
        uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe2f8);
        uVar2 = 0;
        if ((int)lVar8 == 1) {
          uVar2 = uVar10;
        }
        if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
          if ((param_5 & 1) == 0) {
            FUN_01781e50(plVar11);
          }
          else {
            FUN_01780bd0();
          }
        }
      }
    }
    lVar9 = lVar9 + 0x1a0;
  } while (lVar9 != 0xd00);
  if (*(int *)(param_3 + 0x14) == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x10) == -1) {
    return;
  }
  uVar10 = *(uint *)(param_3 + (ulong)(*(uint *)(param_3 + 0x18) & 1) * 0x1c + 0x2c);
  if (uVar10 == 0) {
    return;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar10)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x017ab310;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x017ab310;
    }
  }
  uVar10 = 0;
joined_r0x017ab310:
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0x2a];
    if (((*PTR_DAT_04bbe300 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe300), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbe2f8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe300);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe2f8);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar10;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      if ((param_4 & 1) == 0) {
        FUN_017814e0(param_1,plVar11);
        return;
      }
      FUN_017802c0(plVar11);
      return;
    }
  }
  return;
}

