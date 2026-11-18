
void FUN_03349d64(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  short sVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  short sVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  
  puVar5 = PTR_DAT_04bc1118;
  if (*(int *)(param_1 + 0x20f4) != 1) {
    return;
  }
  lVar16 = param_1 + 0x17f8;
  if (param_2 == 0) {
    iVar7 = 1;
  }
  else {
    uVar8 = (ulong)(param_2 - 1);
    if (0x1f6 < param_2) {
      uVar8 = 0;
    }
    iVar7 = -*(int *)(lVar16 + uVar8 * 4);
  }
  uVar8 = (ulong)param_2;
  if (0x1f5 < param_2) {
    uVar8 = 0;
  }
  iVar13 = *(int *)(lVar16 + uVar8 * 4);
  uVar15 = iVar7 + iVar13;
  if ((int)param_3 <= iVar7 + iVar13) {
    uVar15 = param_3;
  }
  lVar9 = *(long *)PTR_DAT_04bc1118;
  if (uVar15 == 0 && param_2 == 0) {
    if (lVar9 == 0) goto LAB_03349f3c;
    uVar10 = 0;
  }
  else {
    lVar12 = *(long *)(lVar9 + 0x468);
    uVar10 = uVar15;
    if (param_2 != 0) {
      uVar8 = (ulong)(param_2 - 1);
      if ((int)param_2 < *(int *)(param_1 + 0x1fd0) + -1) {
LAB_03349e3c:
        if (0x1f6 < param_2) {
          uVar8 = 0;
        }
        iVar13 = *(int *)(lVar16 + uVar8 * 4) + 1;
      }
      else {
        uVar3 = uVar8;
        if (0x1f6 < param_2) {
          uVar3 = 0;
        }
        if (*(int *)(lVar16 + uVar3 * 4) + 1 != iVar13) goto LAB_03349e3c;
        uVar10 = *(uint *)(lVar9 + 0x474);
        if (*(short *)(lVar12 + (long)(int)(uVar10 - 1) * 2) == 10) goto joined_r0x03349e68;
      }
      uVar10 = iVar13 + uVar15;
    }
joined_r0x03349e68:
    if (0 < (int)uVar10) {
      sVar11 = *(short *)(lVar12 + (ulong)(uVar10 - 1) * 2);
      sVar4 = sVar11;
      if ((sVar11 != 0 && sVar11 != 10) &&
         (sVar4 = 0x25cf, *(int *)(*(long *)(lVar9 + 0x20) + 0x156c) != 1)) {
        sVar4 = sVar11;
      }
      if (uVar15 == 0) {
        uVar15 = (uint)(sVar4 != 10);
        if (sVar4 != 10) {
          uVar10 = uVar10 + 1;
        }
      }
      else {
        sVar11 = *(short *)(lVar12 + (ulong)uVar10 * 2);
        if ((sVar11 != 0) && (sVar11 != 10)) {
          sVar6 = 0x25cf;
          if (*(int *)(*(long *)(lVar9 + 0x20) + 0x156c) != 1) {
            sVar6 = sVar11;
          }
          sVar11 = sVar6;
        }
        uVar1 = (uint)(sVar4 == 10 && sVar11 != 0);
        uVar2 = uVar10 - 1;
        if (uVar1 == 0) {
          uVar2 = uVar10;
        }
        uVar15 = uVar15 - uVar1;
        uVar10 = uVar2;
      }
    }
  }
  lVar16 = *(long *)(lVar9 + 0x20);
  *(uint *)(lVar16 + 0x6e8) = uVar10;
  *(uint *)(lVar16 + 0x6ec) = uVar10;
  if ((*(long *)(lVar16 + 0x6e0) != 0) &&
     (plVar14 = *(long **)(*(long *)(lVar16 + 0x6e0) + 8), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x188))(plVar14);
    FUN_03322410(plVar14);
    if ((*(long *)(lVar16 + 0x6e0) != 0) &&
       (lVar16 = *(long *)(*(long *)(lVar16 + 0x6e0) + 8), lVar16 != 0)) {
      *(undefined4 *)(lVar16 + 0x15ec) = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0x20) + 0x6e8);
    }
  }
LAB_03349f3c:
  if (*(uint *)(param_1 + 0x2060) != param_2) {
    *(undefined1 *)(param_1 + 0x17f0) = 1;
  }
  if (*(uint *)(param_1 + 0x2064) != uVar15) {
    *(undefined1 *)(param_1 + 0x17f0) = 1;
  }
  *(uint *)(param_1 + 0x2060) = param_2;
  *(uint *)(param_1 + 0x2064) = uVar15;
  if (*(int *)(param_1 + 0x20f4) == 1) {
    *(uint *)(param_1 + 0x2594) = uVar15;
  }
  *(undefined4 *)(param_1 + 0x20a0) = 0;
  return;
}

