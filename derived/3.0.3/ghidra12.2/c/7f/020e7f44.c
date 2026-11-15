
void FUN_020e7f44(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x3fc) < 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 != 0) {
    uVar8 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar8 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_020e800c;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_020e800c:
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
      iVar3 = -1;
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar8;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        uVar5 = FUN_00902674(plVar7);
        if ((uVar5 & 1) == 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x3fc) + -1;
      }
      goto LAB_020e807c;
    }
  }
  iVar3 = -1;
LAB_020e807c:
  *(int *)(param_1 + 0x3fc) = iVar3;
  return;
}

