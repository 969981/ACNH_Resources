
bool FUN_009a5fb4(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (7 < *param_3) {
    return false;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return false;
  }
  uVar12 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_009a6094;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_009a6094:
    uVar12 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return false;
  }
  lVar9 = plVar10[0x2a];
  if (((*PTR_DAT_04bb6038 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6038);
  }
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb6030);
  uVar8 = 0;
  if ((int)lVar9 == 1) {
    uVar8 = uVar12;
  }
  if ((uVar6 & 1) == 0) {
    return false;
  }
  if (uVar8 == 0) {
    return false;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar6 = (ulong)*param_3;
  if (7 < uVar6) {
    return false;
  }
  plVar5 = plVar10 + uVar6 * 0x34 + 0x4f;
  plVar11 = plVar5 + 0x1d;
  if ((short)*plVar5 == -2) {
    return false;
  }
  lVar9 = uVar6 * 0x1a0 + 0x374;
  uVar7 = (**(code **)(*plVar11 + 0x28))
                    (plVar11,(long)plVar10 +
                             (ulong)(*(uint *)(plVar10 + uVar6 * 0x34 + 0x6e) & 1) * 0x18 + lVar9,
                     plVar5);
  if ((uVar7 & 1) == 0) {
    (**(code **)(*plVar11 + 0x28))
              (plVar11,(long)plVar10 +
                       (ulong)(*(uint *)(plVar10 + uVar6 * 0x34 + 0x6e) & 1 ^ 1) * 0x18 + lVar9,
               plVar5);
    return false;
  }
  uVar12 = *(uint *)((long)plVar10 +
                    (ulong)(*(uint *)(plVar10 + uVar6 * 0x34 + 0x6e) & 1) * 0x18 + lVar9 + 0xc);
  if (uVar12 == 0) {
    return false;
  }
  lVar9 = *(long *)puVar2;
  uVar8 = 0;
  if (lVar9 != 0) {
    plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                        ((ulong)(uVar12 >> 0x11) & 0x7ff8));
    if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar10 + 0x46) != uVar12)) {
      plVar10 = (long *)0x0;
    }
    if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar12 = 1;
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar8) goto LAB_009a6254;
        uVar12 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
        uVar8 = (uint)(0x101000100 >> (((ulong)uVar8 & 7) << 3)) & 1;
      }
    }
    else {
LAB_009a6254:
      uVar12 = 0;
      uVar8 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      bVar3 = (int)lVar9 == 1;
      if (((*PTR_DAT_04bb4000 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4000);
      }
      uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3ff8);
      if ((uVar6 & 1) != 0) {
        uVar12 = uVar12 ^ 1;
        if ((int)lVar9 != 1) {
          uVar12 = 1;
        }
        if (uVar12 == 0) {
          lVar9 = plVar10[0xd];
          *(undefined4 *)param_2 = *(undefined4 *)(lVar9 + 0x278);
          *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(lVar9 + 0x27c);
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar9 + 0x280);
          return true;
        }
        return false;
      }
      uVar8 = 0;
      goto LAB_009a62e8;
    }
  }
  bVar3 = false;
LAB_009a62e8:
  bVar1 = false;
  if (uVar8 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

