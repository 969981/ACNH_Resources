
bool FUN_03967280(long param_1,uint *param_2,uint *param_3,uint *param_4,ulong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  ulong *puVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  
  uVar25 = *(ulong *)(param_2 + 6);
  uVar5 = (ulong)param_3[8];
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    uVar5 = (ulong)param_3[8] + 0xffff & 0x1ffff0000;
  }
  if (uVar25 < uVar5) goto LAB_039676ac;
  if (uVar5 < uVar25) {
    if (*(int *)(param_1 + 0x80) < 1) {
      plVar13 = (long *)0x0;
      uVar15 = uVar25;
    }
    else {
      plVar13 = *(long **)(param_1 + 0x70);
      if (*plVar13 != 0) {
        *(long *)(*plVar13 + 8) = plVar13[1];
      }
      if ((long *)plVar13[1] != (long *)0x0) {
        *(long *)plVar13[1] = *plVar13;
      }
      *plVar13 = 0;
      plVar13[1] = 0;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      uVar15 = *(ulong *)(param_2 + 6);
    }
    puVar20 = (uint *)0x0;
    if (plVar13 != (long *)0x0) {
      puVar20 = (uint *)((long)plVar13 - (long)*(int *)(param_1 + 0x84));
    }
    *(ulong *)(puVar20 + 6) = uVar15 - uVar5;
    if ((param_5 & 1) == 0) {
      *puVar20 = *param_2;
      puVar20[1] = param_2[1];
      *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(param_2 + 4);
      *param_2 = *param_2 + (int)(uVar15 - uVar5);
      plVar13 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)param_2);
      plVar12 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)puVar20);
      lVar14 = *plVar13;
      *plVar13 = (long)plVar12;
      *plVar12 = lVar14;
      plVar12[1] = (long)plVar13;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar12;
      }
    }
    else {
      uVar18 = param_2[1];
      uVar6 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)(param_2 + 4);
      *puVar20 = *param_2 + (int)uVar5;
      puVar20[1] = uVar18;
      *(undefined8 *)(puVar20 + 2) = uVar6;
      *(undefined8 *)(puVar20 + 4) = uVar7;
      lVar14 = (long)*(int *)(param_1 + 0x6c) + (long)param_2;
      plVar13 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)puVar20);
      puVar17 = *(undefined8 **)(lVar14 + 8);
      *(long **)(lVar14 + 8) = plVar13;
      *plVar13 = lVar14;
      plVar13[1] = (long)puVar17;
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = plVar13;
      }
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  *(ulong *)(param_2 + 6) = uVar5;
  plVar13 = *(long **)(param_1 + 0x88);
  if (plVar13 == (long *)0x0) {
    param_2[0x14] = 0;
    uVar18 = *param_2;
    uVar16 = param_2[1];
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    puVar20 = *(uint **)(param_1 + 0x90);
    lVar14 = *(long *)(param_2 + 2);
    plVar12 = *(long **)(param_2 + 4);
    if (puVar20 != (uint *)0x0) {
      if (*puVar20 == 0) {
        uVar19 = 0xffffffff;
      }
      else {
        uVar23 = 0;
        uVar19 = param_3[1];
        do {
          if (*(uint *)(*(long *)(puVar20 + 2) + ((long)((ulong)uVar23 << 0x20) >> 0x1a) + 0x38) ==
              uVar19) {
            plVar13 = (long *)(*(long *)(puVar20 + 2) + (long)(int)uVar23 * 0x40);
            if (plVar13[2] != 0) {
              lVar14 = plVar13[3];
              if (plVar13[4] == 0) {
                iVar21 = 0;
              }
              else {
                iVar21 = (int)plVar13[1] - *(int *)(plVar13[4] + 0x10);
              }
              if (lVar14 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(uint *)(lVar14 + 0x104);
              }
              uVar18 = iVar21 + uVar18;
              plVar12 = plVar13;
            }
            goto LAB_03967588;
          }
          uVar23 = uVar23 + 1;
        } while (*puVar20 != uVar23);
        uVar19 = 0xffffffff;
      }
LAB_03967588:
      param_2[0x1e] = uVar19;
      param_2[0x1f] = param_3[2];
    }
  }
  else {
    uVar18 = -param_3[3];
    if ((param_5 & 1) != 0) {
      uVar18 = param_3[3];
    }
    if (DAT_05ae7600 == 0) {
      plVar12 = malloc(0x38);
    }
    else {
      plVar12 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x38,8);
    }
    puVar11 = PTR_DAT_04bb2cc8;
    plVar12[6] = 0;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(undefined1 *)(plVar12 + 5) = 0;
    *plVar12 = (long)(puVar11 + 0x10);
    if (uVar5 == 0) {
      uVar18 = 0;
      *(undefined2 *)((long)plVar12 + 0x2a) = 4;
      lVar14 = 0;
LAB_03967514:
      uVar16 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar12,plVar13,uVar5,uVar18,4);
      *(undefined2 *)((long)plVar12 + 0x2a) = 4;
      lVar14 = plVar12[3];
      if (plVar12[4] == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (int)plVar12[1] - *(int *)(plVar12[4] + 0x10);
      }
      if (lVar14 == 0) goto LAB_03967514;
      uVar16 = *(uint *)(lVar14 + 0x104);
    }
    param_2[0x14] = uVar18;
    param_2[0x15] = uVar16;
    *(long *)(param_2 + 0x16) = lVar14;
    *(long **)(param_2 + 0x18) = plVar12;
  }
  uVar19 = param_3[3];
  *(long *)(param_2 + 10) = lVar14;
  *(long **)(param_2 + 0xc) = plVar12;
  uVar18 = (uVar18 + uVar19) - 1 & -uVar19;
  param_2[8] = uVar18;
  param_2[9] = uVar16;
  uVar18 = param_3[4] + uVar18;
  if (param_3[5] == 0) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0xe] = 0;
  }
  else {
    uVar19 = param_3[3];
    param_2[0xf] = uVar16;
    *(long *)(param_2 + 0x10) = lVar14;
    *(long **)(param_2 + 0x12) = plVar12;
    uVar18 = (uVar18 + uVar19) - 1 & -uVar19;
    param_2[0xe] = uVar18;
  }
  if ((param_4 != (uint *)0x0) && (param_3[6] != 0)) {
    uVar19 = param_3[7];
    *(long *)(param_4 + 2) = lVar14;
    *(long **)(param_4 + 4) = plVar12;
    *param_4 = (uVar18 + uVar19) - 1 & -uVar19;
    param_4[1] = uVar16;
  }
  param_2[0x20] = *param_3;
  plVar13 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)param_2);
  if (*plVar13 != 0) {
    *(long *)(*plVar13 + 8) = plVar13[1];
  }
  if ((long *)plVar13[1] != (long *)0x0) {
    *(long *)plVar13[1] = *plVar13;
  }
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar12 = (long *)(param_1 + 0x40);
  lVar14 = *plVar12;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  plVar13 = (long *)((long)*(int *)(param_1 + 0x54) + (long)param_2);
  *plVar12 = (long)plVar13;
  *plVar13 = lVar14;
  plVar13[1] = (long)plVar12;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar13;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + *(long *)(param_2 + 6);
  if (*(long *)(param_2 + 0x16) == 0) {
    *(undefined2 *)(param_2 + 0x21) = 0;
    uVar15 = (ulong)*param_2;
    if (*(long *)(param_1 + 0xb8) != param_1 + 0xb0) {
      lVar14 = (long)*(int *)(param_1 + 0xc4);
      bVar9 = false;
      bVar8 = false;
      uVar4 = *(long *)(param_2 + 6) + uVar15;
      puVar22 = (ulong *)(*(long *)(param_1 + 0xb8) - lVar14);
      do {
        uVar24 = *puVar22;
        if (uVar15 < uVar24) {
          bVar1 = false;
          if (uVar4 <= uVar24) goto LAB_0396774c;
LAB_03967784:
          bVar3 = uVar4 <= puVar22[1];
          bVar10 = bVar3;
          if (uVar24 < uVar15) goto LAB_03967798;
LAB_03967758:
          bVar2 = puVar22[1] <= uVar4;
          if ((bool)(bVar1 | bVar3)) goto LAB_039677a8;
LAB_039677a4:
          if (bVar2) goto LAB_039677a8;
          goto LAB_03967720;
        }
        bVar1 = uVar15 < puVar22[1];
        if (uVar24 < uVar4) goto LAB_03967784;
LAB_0396774c:
        bVar3 = false;
        bVar10 = false;
        if (uVar15 <= uVar24) goto LAB_03967758;
LAB_03967798:
        bVar2 = false;
        if (!(bVar1 || bVar10)) goto LAB_039677a4;
LAB_039677a8:
        if ((uint)puVar22[2] == param_2[0x1e]) {
          uVar18 = param_2[0x1f];
          if ((uint)puVar22[3] != param_2[0x20]) goto LAB_039677e4;
          if (*(uint *)((long)puVar22 + 0x14) == uVar18) {
            if (!bVar8) goto LAB_03967720;
            goto LAB_039677f4;
          }
          bVar9 = true;
          *(undefined1 *)((long)param_2 + 0x85) = 1;
          if (bVar8) break;
        }
        else {
          uVar18 = param_2[0x1f];
LAB_039677e4:
          *(undefined1 *)(param_2 + 0x21) = 1;
          if (*(uint *)((long)puVar22 + 0x14) != uVar18) {
            *(undefined1 *)((long)param_2 + 0x85) = 1;
            break;
          }
LAB_039677f4:
          if (bVar9) break;
          bVar8 = true;
        }
LAB_03967720:
        puVar22 = (ulong *)(*(long *)((long)puVar22 + lVar14 + 8) - lVar14);
      } while (puVar22 != (ulong *)((param_1 + 0xb0) - lVar14));
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x21) = 1;
  }
LAB_039676ac:
  return uVar5 <= uVar25;
}

