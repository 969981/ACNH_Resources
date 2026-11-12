
/* WARNING: Removing unreachable block (ram,0x008cbcf0) */
/* WARNING: Removing unreachable block (ram,0x008cbcfc) */
/* WARNING: Removing unreachable block (ram,0x008cbb50) */
/* WARNING: Removing unreachable block (ram,0x008cbb60) */
/* WARNING: Removing unreachable block (ram,0x008cbdfc) */
/* WARNING: Removing unreachable block (ram,0x008cbe0c) */
/* WARNING: Removing unreachable block (ram,0x008cbe18) */

undefined8
FUN_008cbab0(float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
            float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  float fVar18;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  int local_94;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  puVar8 = PTR_DAT_04bb27a8;
  puVar7 = PTR_DAT_04bb2018;
  local_78 = (int)((float)(int)param_1 / 10.0) - (uint)(param_1 < 0.0);
  iStack_74 = (int)((float)(int)param_3 / 10.0) - (uint)(param_3 < 0.0);
  local_90 = 0;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) goto LAB_008cbc1c;
  lVar13 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
  local_90 = 0;
  if (lVar13 == 0) goto LAB_008cbc1c;
  uVar14 = local_78 - *(int *)(lVar13 + 0x28);
  if ((uVar14 < *(uint *)(lVar13 + 0x18)) &&
     (uVar4 = iStack_74 - *(int *)(lVar13 + 0x2c), uVar4 < *(uint *)(lVar13 + 0x1c))) {
    uVar14 = uVar14 + *(uint *)(lVar13 + 0x18) * uVar4;
LAB_008cbbf4:
    if (*(uint *)(lVar13 + 0x30) <= uVar14) {
      uVar14 = 0;
    }
    puVar16 = (undefined8 *)(*(long *)(lVar13 + 0x38) + (long)(int)uVar14 * 0x68);
  }
  else if (*(char *)(lVar13 + 0x88) == '\0') {
    puVar16 = &DAT_051a50f0;
  }
  else {
    uVar14 = local_78 - *(int *)(lVar13 + 0x98);
    puVar16 = &DAT_051a50f0;
    if ((uVar14 < *(uint *)(lVar13 + 0xa0)) &&
       (uVar4 = iStack_74 - *(int *)(lVar13 + 0x9c), uVar4 < *(uint *)(lVar13 + 0xa4))) {
      uVar14 = uVar14 + *(uint *)(lVar13 + 0xa0) * uVar4 + *(int *)(lVar13 + 0x8c);
      goto LAB_008cbbf4;
    }
  }
  local_90 = (int)*(char *)(puVar16 + 2);
LAB_008cbc1c:
  iVar5 = (int)((float)(int)param_6 / 10.0) - (uint)(param_6 < 0.0);
  local_80 = PTR_DAT_04bb2018 + 0x10;
  local_8c = param_1;
  local_88 = param_2;
  local_84 = param_3;
  uVar9 = FUN_01318310(&local_80);
  if ((((uVar9 & 1) != 0) && (fVar18 = (float)FUN_01317db0(&local_8c), 5.0 < fVar18 - local_88)) &&
     (local_90 != 0)) {
    local_90 = local_90 + -1;
  }
  iVar2 = iVar5 + -9;
  iVar5 = iVar5 + -2;
  iVar17 = iVar2;
  if (iVar5 <= iVar2) {
    iVar17 = iVar5;
  }
  if (iVar2 <= iVar5) {
    iVar2 = iVar5;
  }
  iVar2 = iVar2 + 1;
  if (iVar2 != iVar17) {
    iVar5 = (int)((float)(int)param_4 / 10.0) - (uint)(param_4 < 0.0);
    iVar3 = iVar5 + -2;
    iVar5 = iVar5 + 2;
    iVar12 = iVar17;
    iVar11 = iVar3;
    do {
      local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
      iVar15 = 0;
      if (*(long *)(*(long *)puVar8 + 0x1f8) != 0) {
        lVar13 = *(long *)(*(long *)(*(long *)puVar8 + 0x1f8) + 0xb0);
        iVar15 = 0;
        if (lVar13 != 0) {
          uVar14 = iVar11 - *(int *)(lVar13 + 0x28);
          uVar4 = *(uint *)(lVar13 + 0x18);
          uVar6 = iVar12 - *(int *)(lVar13 + 0x2c);
          if ((uVar14 < uVar4 && uVar6 <= *(uint *)(lVar13 + 0x1c)) &&
              (uVar4 <= uVar14 || *(uint *)(lVar13 + 0x1c) != uVar6)) {
            uVar14 = uVar14 + uVar4 * uVar6;
LAB_008cbd68:
            if (*(uint *)(lVar13 + 0x30) <= uVar14) {
              uVar14 = 0;
            }
            puVar16 = (undefined8 *)(*(long *)(lVar13 + 0x38) + (long)(int)uVar14 * 0x68);
          }
          else if (*(char *)(lVar13 + 0x88) == '\0') {
            puVar16 = &DAT_051a50f0;
          }
          else {
            uVar14 = iVar11 - *(int *)(lVar13 + 0x98);
            uVar4 = iVar12 - *(int *)(lVar13 + 0x9c);
            puVar16 = &DAT_051a50f0;
            if (uVar14 < *(uint *)(lVar13 + 0xa0) && uVar4 < *(uint *)(lVar13 + 0xa4)) {
              uVar14 = uVar14 + *(uint *)(lVar13 + 0xa0) * uVar4 + *(int *)(lVar13 + 0x8c);
              goto LAB_008cbd68;
            }
          }
          iVar15 = (int)*(char *)(puVar16 + 2);
        }
      }
      iVar1 = 0;
      if (iVar15 != 4) {
        iVar1 = iVar15;
      }
      if (2 < iVar1 - local_90) {
        return 1;
      }
      if (iVar11 < iVar5) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar11 = iVar3;
      }
    } while ((iVar3 != iVar11) || (iVar2 != iVar12));
    if (local_90 == 4) {
      return 0;
    }
    if (iVar2 == iVar17) {
      return 0;
    }
    lVar13 = *(long *)puVar8;
    iVar12 = iVar3;
    do {
      local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
      local_94 = 0;
      if (*(long *)(lVar13 + 0x1f8) != 0) {
        lVar10 = *(long *)(*(long *)(lVar13 + 0x1f8) + 0xb0);
        local_94 = 0;
        if (lVar10 != 0) {
          uVar14 = iVar12 - *(int *)(lVar10 + 0x28);
          uVar4 = *(uint *)(lVar10 + 0x18);
          uVar6 = iVar17 - *(int *)(lVar10 + 0x2c);
          if ((uVar14 < uVar4 && uVar6 <= *(uint *)(lVar10 + 0x1c)) &&
              (uVar4 <= uVar14 || *(uint *)(lVar10 + 0x1c) != uVar6)) {
            uVar14 = uVar14 + uVar4 * uVar6;
LAB_008cbe8c:
            if (*(uint *)(lVar10 + 0x30) <= uVar14) {
              uVar14 = 0;
            }
            puVar16 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar14 * 0x68);
          }
          else if (*(char *)(lVar10 + 0x88) == '\0') {
            puVar16 = &DAT_051a50f0;
          }
          else {
            uVar14 = iVar12 - *(int *)(lVar10 + 0x98);
            uVar4 = iVar17 - *(int *)(lVar10 + 0x9c);
            puVar16 = &DAT_051a50f0;
            if (uVar14 < *(uint *)(lVar10 + 0xa0) && uVar4 < *(uint *)(lVar10 + 0xa4)) {
              uVar14 = uVar14 + *(uint *)(lVar10 + 0xa0) * uVar4 + *(int *)(lVar10 + 0x8c);
              goto LAB_008cbe8c;
            }
          }
          local_94 = (int)*(char *)(puVar16 + 2);
        }
      }
      iVar11 = 0;
      if (local_94 != 4) {
        iVar11 = local_94;
      }
      if (1 < iVar11 - local_90) {
        local_a8 = puVar7 + 0x10;
        local_a0 = iVar12;
        iStack_9c = iVar17;
        uVar9 = FUN_01317ff0(&local_a8,1);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
        uVar9 = FUN_01318220(&local_a8);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
        lVar13 = *(long *)puVar8;
      }
      if (iVar12 < iVar5) {
        iVar12 = iVar12 + 1;
      }
      else {
        iVar17 = iVar17 + 1;
        iVar12 = iVar3;
      }
    } while ((iVar3 != iVar12) || (iVar2 != iVar17));
  }
  return 0;
}

