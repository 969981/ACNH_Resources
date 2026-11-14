
bool FUN_0194da30(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined4 *)0x0) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    if ((((DAT_052cadb8 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              ((ulong)(DAT_052cadb8 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != DAT_052cadb8))
    {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar12 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_0194db00;
        uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0194db00:
      uVar12 = 0;
    }
    if (plVar11 != (long *)0x0) {
      lVar8 = plVar11[0x2a];
      if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4b78);
      }
      uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb4b70);
      bVar4 = false;
      uVar1 = 0;
      if ((int)lVar8 == 1) {
        uVar1 = uVar12;
      }
      uVar9 = 0xffffffff;
      if (((uVar7 & 1) == 0) || (uVar1 == 0)) goto LAB_0194db98;
      if (plVar11[0x54] != 0) {
        lVar8 = *(long *)(plVar11[0x54] + 0x290);
        iVar5 = *(int *)(lVar8 + 0x10);
        if (iVar5 != 0) {
          piVar10 = *(int **)(lVar8 + 0x18);
          if (*piVar10 == param_1) {
            uVar9 = 0;
            bVar4 = true;
          }
          else {
            uVar7 = 0;
            do {
              uVar9 = uVar7 + 1;
              bVar3 = iVar5 == (int)uVar9;
              bVar4 = !bVar3;
              if (bVar3) {
                uVar9 = 0xffffffff;
                break;
              }
              uVar7 = uVar9 & 0xffffffff;
            } while (*(int *)((long)piVar10 +
                             (-(uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | uVar9 * 4 & 0x3fffffffc))
                     != param_1);
          }
          goto LAB_0194db98;
        }
      }
    }
  }
  bVar4 = false;
  uVar9 = 0xffffffff;
LAB_0194db98:
  *param_2 = (int)uVar9;
  return bVar4;
}

