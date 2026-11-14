
void FUN_018ab480(long param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)(param_1 + 8);
  if (*(uint *)(lVar10 + 0x780) <= **(uint **)(param_1 + 0x10)) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar13 = *param_2;
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto joined_r0x018ab554;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x018ab554;
    }
  }
  uVar13 = 0;
joined_r0x018ab554:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar13;
    }
    if ((((uVar8 & 1) != 0) && (uVar2 != 0)) && (lVar9 = plVar12[0xd], lVar9 != 0)) {
      uVar13 = **(uint **)(param_1 + 0x10);
      if (*(uint *)(lVar10 + 0x780) <= uVar13) {
        uVar13 = 0;
      }
      lVar10 = *(long *)(lVar10 + 0x788);
      if (lVar10 != 0) {
        lVar11 = lVar10 + (long)(int)uVar13 * 0x38;
        uVar2 = (int)((float)(int)*(float *)(lVar9 + 0x280) / 5.0) -
                (uint)(*(float *)(lVar9 + 0x280) < 0.0);
        uVar3 = (int)((float)(int)*(float *)(lVar9 + 0x278) / 5.0) -
                (uint)(*(float *)(lVar9 + 0x278) < 0.0);
        iVar6 = uVar3 - ((uVar3 & 0x80000001) == 1);
        iVar4 = uVar2 - ((uVar2 & 0x80000001) == 1);
        *(int *)(lVar11 + 0x10) = iVar6;
        *(int *)(lVar11 + 0x14) = iVar4;
        *(int *)(lVar11 + 0x20) = iVar6 + 1;
        *(int *)(lVar11 + 0x24) = iVar4 + 1;
      }
      lVar10 = lVar10 + (long)(int)uVar13 * 0x38;
      uVar1 = *(undefined4 *)(lVar9 + 0x280);
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar9 + 0x278);
      *(undefined4 *)(lVar10 + 0x30) = uVar1;
      *(undefined1 *)(lVar10 + 0x34) = 1;
      **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
    }
  }
  return;
}

