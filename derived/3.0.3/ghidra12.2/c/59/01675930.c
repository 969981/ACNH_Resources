
/* WARNING: Removing unreachable block (ram,0x016762e4) */
/* WARNING: Removing unreachable block (ram,0x016760f4) */
/* WARNING: Removing unreachable block (ram,0x01675f04) */
/* WARNING: Removing unreachable block (ram,0x01675d08) */
/* WARNING: Removing unreachable block (ram,0x016759f4) */
/* WARNING: Removing unreachable block (ram,0x01675b1c) */
/* WARNING: Removing unreachable block (ram,0x01675d10) */
/* WARNING: Removing unreachable block (ram,0x01675f0c) */
/* WARNING: Removing unreachable block (ram,0x016760fc) */
/* WARNING: Removing unreachable block (ram,0x016762ec) */

undefined8 FUN_01675930(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined *local_b8;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined *local_80;
  int local_78;
  int local_74;
  
  uVar10 = FUN_0097d8e0();
  puVar9 = PTR_DAT_04bb5c90;
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar18 = *(int *)(param_1 + 0x14);
  iVar6 = iVar3;
  puVar7 = PTR_DAT_04bb2010;
  puVar8 = PTR_DAT_04bbc1a0;
  if (iVar1 != iVar18) {
    puVar16 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    iVar19 = iVar3;
    do {
      local_90 = puVar16;
      local_88._0_4_ = iVar19;
      local_88._4_4_ = iVar18;
      uVar10 = FUN_0097d530(&local_90);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      fVar20 = (float)(int)local_88 * 0.5;
      uVar12 = 0;
      if (fVar20 != (float)(int)fVar20) {
        uVar12 = (uint)(fVar20 < 0.0);
      }
      fVar21 = (float)local_88._4_4_ * 0.5;
      uVar17 = 0;
      if (fVar21 != (float)(int)fVar21) {
        uVar17 = (uint)(fVar21 < 0.0);
      }
      local_b0 = (undefined *)CONCAT44((int)fVar21 - uVar17,(int)fVar20 - uVar12);
      local_b8 = puVar2;
      uVar10 = FUN_0097d9e0(&local_b8);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      uVar10 = FUN_01384ee0(&local_90);
      if ((uVar10 & 1) != 0) {
        return 0;
      }
      lVar15 = *(long *)puVar9;
      if ((((*(int *)(lVar15 + 0x28) <= (int)local_88) && ((int)local_88 <= *(int *)(lVar15 + 0x38))
           ) && (*(int *)(lVar15 + 0x2c) <= local_88._4_4_)) &&
         (local_88._4_4_ <= *(int *)(lVar15 + 0x3c))) {
        return 0;
      }
      if (iVar19 < *(int *)(param_1 + 0x20)) {
        iVar19 = iVar19 + 1;
      }
      else {
        iVar18 = iVar18 + 1;
        iVar19 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar3 != iVar19) ||
            (iVar6 = *(int *)(param_1 + 0x10), puVar7 = PTR_DAT_04bb2010, puVar8 = PTR_DAT_04bbc1a0,
            iVar1 != iVar18));
  }
  if ((param_2 & 1) == 0) {
    PTR_DAT_04bb2010 = puVar7;
    PTR_DAT_04bbc1a0 = puVar8;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  fVar21 = (float)iVar6 * 0.5;
  fVar20 = (float)iVar1 * 0.5;
  uVar12 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar12 = (uint)(fVar21 < 0.0);
  }
  uVar17 = 0;
  if (fVar20 != (float)(int)fVar20) {
    uVar17 = (uint)(fVar20 < 0.0);
  }
  iVar18 = (int)fVar21 - uVar12;
  cVar13 = '\0';
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
    cVar13 = '\0';
    if (lVar15 != 0) {
      uVar12 = iVar18 - *(int *)(lVar15 + 0x28);
      uVar14 = *(uint *)(lVar15 + 0x18);
      uVar4 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x2c);
      if ((uVar12 < uVar14 && uVar4 <= *(uint *)(lVar15 + 0x1c)) &&
          (uVar14 <= uVar12 || *(uint *)(lVar15 + 0x1c) != uVar4)) {
        uVar12 = uVar12 + uVar14 * uVar4;
LAB_01675ba0:
        if (*(uint *)(lVar15 + 0x30) <= uVar12) {
          uVar12 = 0;
        }
        puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar12 * 0x68);
      }
      else {
        if (*(char *)(lVar15 + 0x88) != '\0') {
          uVar17 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x9c);
          uVar12 = *(uint *)(lVar15 + 0xa0);
          uVar14 = iVar18 - *(int *)(lVar15 + 0x98);
          if ((uVar14 < uVar12 && uVar17 <= *(uint *)(lVar15 + 0xa4)) &&
              (uVar12 <= uVar14 || *(uint *)(lVar15 + 0xa4) != uVar17)) {
            uVar12 = uVar14 + uVar12 * uVar17 + *(int *)(lVar15 + 0x8c);
            goto LAB_01675ba0;
          }
        }
        puVar16 = &DAT_051a50f0;
      }
      cVar13 = *(char *)(puVar16 + 2);
    }
  }
  iVar3 = iVar1 + 2;
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  PTR_DAT_04bb2010 = puVar7;
  PTR_DAT_04bbc1a0 = puVar8;
  local_a8 = iVar6;
  iStack_a4 = iVar3;
  local_a0 = local_b0;
  local_98 = iVar6 + 1;
  iStack_94 = iVar1 + 3;
  local_90 = &local_b0;
  local_88 = &local_a0;
  local_80 = local_b0;
  local_78 = iVar6;
  local_74 = iVar3;
  do {
    uVar10 = FUN_0097d6c0(&local_80,1);
    if ((uVar10 & 1) != 0) goto LAB_01675dd8;
    if (local_78 < *(int *)(local_88 + 1)) {
      local_78 = local_78 + 1;
    }
    else {
      local_74 = local_74 + 1;
      local_78 = *(int *)(local_90 + 1);
    }
  } while (iVar6 != local_78 || iVar1 + 4 != local_74);
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  local_a8 = iVar6;
  iStack_a4 = iVar3;
  local_a0 = local_b0;
  local_98 = iVar6 + 1;
  iStack_94 = iVar1 + 3;
  uVar10 = FUN_0097d8e0(&local_b8);
  if ((uVar10 & 1) != 0) {
    fVar20 = (float)iVar3 * 0.5;
    uVar12 = 0;
    if (fVar20 != (float)(int)fVar20) {
      uVar12 = (uint)(fVar20 < 0.0);
    }
    cVar11 = '\0';
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
      cVar11 = '\0';
      if (lVar15 != 0) {
        uVar17 = iVar18 - *(int *)(lVar15 + 0x28);
        uVar14 = *(uint *)(lVar15 + 0x18);
        uVar4 = ((int)fVar20 - uVar12) - *(int *)(lVar15 + 0x2c);
        if ((uVar17 < uVar14 && uVar4 <= *(uint *)(lVar15 + 0x1c)) &&
            (uVar14 <= uVar17 || *(uint *)(lVar15 + 0x1c) != uVar4)) {
          uVar17 = uVar17 + uVar14 * uVar4;
LAB_01675d9c:
          if (*(uint *)(lVar15 + 0x30) <= uVar17) {
            uVar17 = 0;
          }
          puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar17 * 0x68);
        }
        else if (*(char *)(lVar15 + 0x88) == '\0') {
          puVar16 = &DAT_051a50f0;
        }
        else {
          uVar17 = iVar18 - *(int *)(lVar15 + 0x98);
          puVar16 = &DAT_051a50f0;
          if ((uVar17 < *(uint *)(lVar15 + 0xa0)) &&
             (uVar12 = ((int)fVar20 - uVar12) - *(int *)(lVar15 + 0x9c),
             uVar12 < *(uint *)(lVar15 + 0xa4))) {
            uVar17 = uVar17 + *(uint *)(lVar15 + 0xa0) * uVar12 + *(int *)(lVar15 + 0x8c);
            goto LAB_01675d9c;
          }
        }
        cVar11 = *(char *)(puVar16 + 2);
      }
    }
    if (cVar13 == cVar11) {
      return 1;
    }
  }
LAB_01675dd8:
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar18 = *(int *)(param_1 + 0x14);
  iVar3 = iVar18 + -2;
  local_a8 = iVar1;
  iStack_a4 = iVar3;
  local_a0 = local_b0;
  local_98 = iVar1 + 1;
  iStack_94 = iVar18 + -1;
  local_90 = &local_b0;
  local_88 = &local_a0;
  local_80 = local_b0;
  local_78 = iVar1;
  local_74 = iVar3;
  do {
    uVar10 = FUN_0097d6c0(&local_80,1);
    if ((uVar10 & 1) != 0) goto LAB_01675fc0;
    if (local_78 < *(int *)(local_88 + 1)) {
      local_78 = local_78 + 1;
    }
    else {
      local_74 = local_74 + 1;
      local_78 = *(int *)(local_90 + 1);
    }
  } while (iVar1 != local_78 || iVar18 != local_74);
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  local_a8 = iVar1;
  iStack_a4 = iVar3;
  local_a0 = local_b0;
  local_98 = iVar1 + 1;
  iStack_94 = iVar18 + -1;
  uVar10 = FUN_0097d8e0(&local_b8);
  if ((uVar10 & 1) != 0) {
    fVar21 = (float)iVar1 * 0.5;
    fVar20 = (float)iVar3 * 0.5;
    uVar12 = 0;
    if (fVar21 != (float)(int)fVar21) {
      uVar12 = (uint)(fVar21 < 0.0);
    }
    uVar17 = 0;
    if (fVar20 != (float)(int)fVar20) {
      uVar17 = (uint)(fVar20 < 0.0);
    }
    cVar11 = '\0';
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
      cVar11 = '\0';
      if (lVar15 != 0) {
        uVar14 = ((int)fVar21 - uVar12) - *(int *)(lVar15 + 0x28);
        uVar4 = *(uint *)(lVar15 + 0x18);
        uVar5 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x2c);
        if ((uVar14 < uVar4 && uVar5 <= *(uint *)(lVar15 + 0x1c)) &&
            (uVar4 <= uVar14 || *(uint *)(lVar15 + 0x1c) != uVar5)) {
          uVar14 = uVar14 + uVar4 * uVar5;
LAB_01675f90:
          if (*(uint *)(lVar15 + 0x30) <= uVar14) {
            uVar14 = 0;
          }
          puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar14 * 0x68);
        }
        else {
          if (*(char *)(lVar15 + 0x88) != '\0') {
            uVar14 = ((int)fVar21 - uVar12) - *(int *)(lVar15 + 0x98);
            uVar17 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x9c);
            uVar12 = *(uint *)(lVar15 + 0xa0);
            if ((uVar14 < uVar12 && uVar17 <= *(uint *)(lVar15 + 0xa4)) &&
                (uVar12 <= uVar14 || *(uint *)(lVar15 + 0xa4) != uVar17)) {
              uVar14 = uVar14 + uVar12 * uVar17 + *(int *)(lVar15 + 0x8c);
              goto LAB_01675f90;
            }
          }
          puVar16 = &DAT_051a50f0;
        }
        cVar11 = *(char *)(puVar16 + 2);
      }
    }
    if (cVar13 == cVar11) {
      return 1;
    }
  }
LAB_01675fc0:
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10) + 2;
  iVar18 = *(int *)(param_1 + 0x10) + 3;
  local_a8 = iVar1;
  iStack_a4 = iVar3;
  local_a0 = local_b0;
  local_98 = iVar18;
  iStack_94 = iVar3 + 1;
  local_90 = &local_b0;
  local_88 = &local_a0;
  local_80 = local_b0;
  local_78 = iVar1;
  local_74 = iVar3;
  do {
    uVar10 = FUN_0097d6c0(&local_80,1);
    if ((uVar10 & 1) != 0) goto LAB_016761b0;
    if (local_78 < *(int *)(local_88 + 1)) {
      local_78 = local_78 + 1;
    }
    else {
      local_74 = local_74 + 1;
      local_78 = *(int *)(local_90 + 1);
    }
  } while (iVar1 != local_78 || iVar3 + 2 != local_74);
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  local_a8 = iVar1;
  iStack_a4 = iVar3;
  local_a0 = local_b0;
  local_98 = iVar18;
  iStack_94 = iVar3 + 1;
  uVar10 = FUN_0097d8e0(&local_b8);
  if ((uVar10 & 1) != 0) {
    fVar21 = (float)iVar1 * 0.5;
    fVar20 = (float)iVar3 * 0.5;
    uVar12 = 0;
    if (fVar21 != (float)(int)fVar21) {
      uVar12 = (uint)(fVar21 < 0.0);
    }
    uVar17 = 0;
    if (fVar20 != (float)(int)fVar20) {
      uVar17 = (uint)(fVar20 < 0.0);
    }
    cVar11 = '\0';
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
      cVar11 = '\0';
      if (lVar15 != 0) {
        uVar14 = ((int)fVar21 - uVar12) - *(int *)(lVar15 + 0x28);
        uVar4 = *(uint *)(lVar15 + 0x18);
        uVar5 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x2c);
        if ((uVar14 < uVar4 && uVar5 <= *(uint *)(lVar15 + 0x1c)) &&
            (uVar4 <= uVar14 || *(uint *)(lVar15 + 0x1c) != uVar5)) {
          uVar14 = uVar14 + uVar4 * uVar5;
LAB_01676180:
          if (*(uint *)(lVar15 + 0x30) <= uVar14) {
            uVar14 = 0;
          }
          puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar14 * 0x68);
        }
        else {
          if (*(char *)(lVar15 + 0x88) != '\0') {
            uVar14 = ((int)fVar21 - uVar12) - *(int *)(lVar15 + 0x98);
            uVar17 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x9c);
            uVar12 = *(uint *)(lVar15 + 0xa0);
            if ((uVar14 < uVar12 && uVar17 <= *(uint *)(lVar15 + 0xa4)) &&
                (uVar12 <= uVar14 || *(uint *)(lVar15 + 0xa4) != uVar17)) {
              uVar14 = uVar14 + uVar12 * uVar17 + *(int *)(lVar15 + 0x8c);
              goto LAB_01676180;
            }
          }
          puVar16 = &DAT_051a50f0;
        }
        cVar11 = *(char *)(puVar16 + 2);
      }
    }
    if (cVar13 == cVar11) {
      return 1;
    }
  }
LAB_016761b0:
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar18 = *(int *)(param_1 + 0x10) + -2;
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  local_a8 = iVar18;
  iStack_a4 = iVar1;
  local_a0 = local_b0;
  local_98 = iVar3;
  iStack_94 = iVar1 + 1;
  local_90 = &local_b0;
  local_88 = &local_a0;
  local_80 = local_b0;
  local_78 = iVar18;
  local_74 = iVar1;
  do {
    uVar10 = FUN_0097d6c0(&local_80,1);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    if (local_78 < *(int *)(local_88 + 1)) {
      local_78 = local_78 + 1;
    }
    else {
      local_74 = local_74 + 1;
      local_78 = *(int *)(local_90 + 1);
    }
  } while (iVar18 != local_78 || iVar1 + 2 != local_74);
  local_b8 = puVar8 + 0x10;
  local_b0 = puVar7 + 0x10;
  local_a8 = iVar18;
  iStack_a4 = iVar1;
  local_a0 = local_b0;
  local_98 = iVar3;
  iStack_94 = iVar1 + 1;
  uVar10 = FUN_0097d8e0(&local_b8);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  fVar21 = (float)iVar18 * 0.5;
  fVar20 = (float)iVar1 * 0.5;
  uVar12 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar12 = (uint)(fVar21 < 0.0);
  }
  uVar17 = 0;
  if (fVar20 != (float)(int)fVar20) {
    uVar17 = (uint)(fVar20 < 0.0);
  }
  cVar11 = '\0';
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) goto LAB_0167638c;
  lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
  cVar11 = '\0';
  if (lVar15 == 0) goto LAB_0167638c;
  uVar14 = ((int)fVar21 - uVar12) - *(int *)(lVar15 + 0x28);
  uVar4 = *(uint *)(lVar15 + 0x18);
  uVar5 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x2c);
  if ((uVar14 < uVar4 && uVar5 <= *(uint *)(lVar15 + 0x1c)) &&
      (uVar4 <= uVar14 || *(uint *)(lVar15 + 0x1c) != uVar5)) {
    uVar14 = uVar14 + uVar4 * uVar5;
LAB_01676370:
    if (*(uint *)(lVar15 + 0x30) <= uVar14) {
      uVar14 = 0;
    }
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar14 * 0x68);
  }
  else {
    if (*(char *)(lVar15 + 0x88) != '\0') {
      uVar14 = ((int)fVar21 - uVar12) - *(int *)(lVar15 + 0x98);
      uVar17 = ((int)fVar20 - uVar17) - *(int *)(lVar15 + 0x9c);
      uVar12 = *(uint *)(lVar15 + 0xa0);
      if ((uVar14 < uVar12 && uVar17 <= *(uint *)(lVar15 + 0xa4)) &&
          (uVar12 <= uVar14 || *(uint *)(lVar15 + 0xa4) != uVar17)) {
        uVar14 = uVar14 + uVar12 * uVar17 + *(int *)(lVar15 + 0x8c);
        goto LAB_01676370;
      }
    }
    puVar16 = &DAT_051a50f0;
  }
  cVar11 = *(char *)(puVar16 + 2);
LAB_0167638c:
  if (cVar13 == cVar11) {
    return 1;
  }
  return 0;
}

