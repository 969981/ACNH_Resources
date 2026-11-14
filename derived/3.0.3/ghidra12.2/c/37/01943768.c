
void FUN_01943768(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  uVar10 = *(uint *)(param_1 + 8);
  if (uVar10 == 0) {
    uVar7 = *(undefined4 *)PTR_DAT_04bb3238;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb27c0;
    if (lVar8 == 0) {
      bVar4 = false;
      uVar11 = 0;
    }
    else {
      plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                         ((ulong)(uVar10 >> 0x11) & 0x7ff8));
      if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar9 + 0x46) != uVar10)) {
        plVar9 = (long *)0x0;
      }
      if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
        plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar8 = *(long *)puVar2;
        iVar5 = (**(code **)(*plVar6 + 0x60))();
        if (iVar5 < 0x11) {
          uVar11 = 1;
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01943854;
          uVar11 = 0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3);
          uVar10 = (uint)uVar11;
        }
      }
      else {
LAB_01943854:
        uVar11 = 0;
        uVar10 = 0;
      }
      if (plVar9 == (long *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = (int)plVar9[0x2a] == 1;
        if (((*PTR_DAT_04bb3fc8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fc8);
        }
        uVar11 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fc0);
        if ((uVar11 & 1) == 0) {
          uVar10 = 0;
        }
        uVar11 = (ulong)uVar10;
      }
    }
    puVar1 = (undefined4 *)(param_1 + 8);
    if (!(bool)(bVar4 & (uVar11 & 0xff) != 0)) {
      puVar1 = (undefined4 *)puVar3;
    }
    uVar7 = *puVar1;
  }
  *param_2 = uVar7;
  uVar10 = *(uint *)(param_1 + 0x10);
  if (uVar10 == 0) {
    uVar7 = *(undefined4 *)puVar3;
    goto LAB_019439f4;
  }
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    bVar4 = false;
    uVar11 = 0;
  }
  else {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8)
                       );
    if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar9 + 0x46) != uVar10)) {
      plVar9 = (long *)0x0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar11 = 1;
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01943984;
        uVar11 = 0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3);
        uVar10 = (uint)uVar11;
      }
    }
    else {
LAB_01943984:
      uVar11 = 0;
      uVar10 = 0;
    }
    if (plVar9 == (long *)0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = (int)plVar9[0x2a] == 1;
      if (((*PTR_DAT_04bb3fc8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fc8);
      }
      uVar11 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fc0);
      if ((uVar11 & 1) == 0) {
        uVar10 = 0;
      }
      uVar11 = (ulong)uVar10;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  if (!(bool)(bVar4 & (uVar11 & 0xff) != 0)) {
    puVar1 = (undefined4 *)puVar3;
  }
  uVar7 = *puVar1;
LAB_019439f4:
  param_2[1] = uVar7;
  return;
}

