
bool FUN_009a5d7c(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint *puVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (7 < *param_2) {
    return false;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return false;
  }
  uVar10 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_009a5e54;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_009a5e54:
    uVar10 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return false;
  }
  lVar6 = plVar8[0x2a];
  if (((*PTR_DAT_04bb6038 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6038);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb6030);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar5 & 1) == 0) {
    return false;
  }
  if (uVar1 == 0) {
    return false;
  }
  uVar5 = (ulong)*param_2;
  if (uVar5 < 8) {
    plVar4 = plVar8 + uVar5 * 0x34 + 0x4f;
    plVar9 = plVar4 + 0x1d;
    if ((short)*plVar4 != -2) {
      puVar11 = (uint *)(plVar8 + uVar5 * 0x34 + 0x6e);
      lVar6 = uVar5 * 0x1a0 + 0x374;
      uVar5 = (**(code **)(*plVar9 + 0x28))
                        (plVar9,(long)plVar8 + (ulong)(*puVar11 & 1) * 0x18 + lVar6,plVar4);
      uVar10 = *puVar11 & 1;
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*plVar9 + 0x28))
                          (plVar9,(long)plVar8 + (ulong)(uVar10 ^ 1) * 0x18 + lVar6,plVar4);
        if ((uVar5 & 1) == 0) goto LAB_009a5ecc;
        uVar10 = ~*puVar11 & 1;
      }
      piVar7 = (int *)((long)plVar8 + (ulong)uVar10 * 0x18 + lVar6 + 0xc);
      goto LAB_009a5ed4;
    }
  }
LAB_009a5ecc:
  piVar7 = (int *)PTR_DAT_04bb3238;
LAB_009a5ed4:
  return *piVar7 != 0;
}

