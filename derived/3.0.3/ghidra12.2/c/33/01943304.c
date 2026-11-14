
bool FUN_01943304(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined8 *)0x0) {
    return false;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  uVar7 = 0;
  if (lVar8 != 0) {
    uVar7 = *(uint *)PTR_DAT_04bbea10;
    if ((((uVar7 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar7)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar11 = 1;
        uVar7 = 1;
      }
      else {
        uVar7 = *(uint *)(lVar8 + 0x5e8);
        if (4 < uVar7) goto LAB_019433ec;
        uVar11 = 0x1aU >> (ulong)(uVar7 & 0x1f) & 1;
        uVar7 = (uint)(0x101000100 >> (((ulong)uVar7 & 7) << 3)) & 1;
      }
    }
    else {
LAB_019433ec:
      uVar11 = 0;
      uVar7 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[0x2a];
      bVar3 = (int)lVar8 == 1;
      if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe9f0);
      }
      uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe9e8);
      if ((uVar6 & 1) != 0) {
        uVar11 = uVar11 ^ 1;
        if ((int)lVar8 != 1) {
          uVar11 = 1;
        }
        if (uVar11 != 0) {
          return false;
        }
        lVar8 = plVar10[0x4f];
        if (lVar8 != 0) {
          uVar9 = *(undefined8 *)(lVar8 + 0x2b0);
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar8 + 0x2b8);
          *param_2 = uVar9;
        }
        return true;
      }
      uVar7 = 0;
      goto LAB_0194347c;
    }
  }
  bVar3 = false;
LAB_0194347c:
  bVar1 = false;
  if (uVar7 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

