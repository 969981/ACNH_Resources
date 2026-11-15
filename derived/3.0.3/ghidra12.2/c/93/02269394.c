
bool FUN_02269394(uint *param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  uVar8 = 0;
  if (lVar9 != 0) {
    lVar2 = *(long *)PTR_DAT_04bb4128 + 0x344 + (ulong)*param_1 * 8;
    if (6 < *param_1) {
      lVar2 = *(long *)PTR_DAT_04bb4128 + 0x344;
    }
    uVar8 = *(uint *)(lVar2 + 4);
    if ((((uVar8 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar8)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar11 = 1;
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar8) goto LAB_02269480;
        uVar11 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
        uVar8 = (uint)(0x101000100 >> (((ulong)uVar8 & 7) << 3)) & 1;
      }
    }
    else {
LAB_02269480:
      uVar11 = 0;
      uVar8 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      bVar4 = (int)lVar9 == 1;
      if (((*PTR_DAT_04bb4160 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4160);
      }
      uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb4158);
      if ((uVar7 & 1) != 0) {
        uVar11 = uVar11 ^ 1;
        if ((int)lVar9 != 1) {
          uVar11 = 1;
        }
        if (uVar11 == 0) {
          *(uint *)(plVar10 + 0x83) = *(uint *)(plVar10 + 0x83) | 0x80;
          return true;
        }
        return false;
      }
      uVar8 = 0;
      goto LAB_02269504;
    }
  }
  bVar4 = false;
LAB_02269504:
  bVar1 = false;
  if (uVar8 != 0) {
    bVar1 = bVar4;
  }
  return bVar1;
}

