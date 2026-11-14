
/* WARNING: Removing unreachable block (ram,0x01677400) */
/* WARNING: Removing unreachable block (ram,0x0167729c) */
/* WARNING: Removing unreachable block (ram,0x01677388) */
/* WARNING: Removing unreachable block (ram,0x01677378) */

uint FUN_016771a0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined *local_50;
  char *pcStack_48;
  
  puVar5 = PTR_DAT_04bb27a8;
  if ((*(long *)PTR_DAT_04bb27a8 == 0) ||
     (uVar7 = FUN_0097ce60(), puVar4 = PTR_DAT_04bb2020, (uVar7 & 1) != 0)) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "VillageExtensionLevel2";
  local_50 = puVar1;
  iVar6 = FUN_0273ea30(&local_50);
  if (iVar6 != 1) {
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0x200) == 1) {
      return 0;
    }
    local_50 = puVar4 + 0x10;
    pcStack_48 = "SandBankDisable";
    uVar7 = FUN_0273f0a0(&local_50);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    uVar10 = *(uint *)(param_1 + 8);
    if (0x11f < uVar10) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xc) < 0x100) {
      return *(uint *)(lVar8 + ((ulong)uVar10 + (ulong)*(uint *)(param_1 + 0xc) * 0x120 >> 3 &
                               0x7ffffffffc) + 0x1650) >> (ulong)(uVar10 & 0x1f) & 1;
    }
    return 0;
  }
  pcStack_48 = "VillageExtensionLevel2";
  local_50 = puVar1;
  iVar6 = FUN_0273ea30(&local_50);
  if (iVar6 == 1) {
    local_50 = puVar4 + 0x10;
    pcStack_48 = "VillageExtensionLevel3";
    iVar6 = FUN_0273ea30(&local_50);
    if (iVar6 == 1) {
      fVar14 = (float)*(int *)(param_1 + 8) * 0.5;
      fVar13 = (float)*(int *)(param_1 + 0xc) * 0.5;
      uVar10 = 0;
      if (fVar14 != (float)(int)fVar14) {
        uVar10 = (uint)(fVar14 < 0.0);
      }
      uVar12 = 0;
      if (fVar13 != (float)(int)fVar13) {
        uVar12 = (uint)(fVar13 < 0.0);
      }
      if (*(long *)(*(long *)puVar5 + 0x38) == 0) {
        return 1;
      }
      lVar8 = *(long *)(*(long *)(*(long *)puVar5 + 0x38) + 0xb0);
      if (lVar8 == 0) {
        return 1;
      }
      uVar11 = ((int)fVar14 - uVar10) - *(int *)(lVar8 + 0x28);
      uVar2 = *(uint *)(lVar8 + 0x18);
      uVar3 = ((int)fVar13 - uVar12) - *(int *)(lVar8 + 0x2c);
      if ((uVar11 < uVar2 && uVar3 <= *(uint *)(lVar8 + 0x1c)) &&
          (uVar2 <= uVar11 || *(uint *)(lVar8 + 0x1c) != uVar3)) {
        uVar11 = uVar11 + uVar2 * uVar3;
LAB_016774e4:
        if (*(uint *)(lVar8 + 0x30) <= uVar11) {
          uVar11 = 0;
        }
        puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar11 * 0x68);
      }
      else {
        if (*(char *)(lVar8 + 0x88) != '\0') {
          uVar11 = ((int)fVar14 - uVar10) - *(int *)(lVar8 + 0x98);
          uVar12 = ((int)fVar13 - uVar12) - *(int *)(lVar8 + 0x9c);
          uVar10 = *(uint *)(lVar8 + 0xa0);
          if ((uVar11 < uVar10 && uVar12 <= *(uint *)(lVar8 + 0xa4)) &&
              (uVar10 <= uVar11 || *(uint *)(lVar8 + 0xa4) != uVar12)) {
            uVar11 = uVar11 + uVar10 * uVar12 + *(int *)(lVar8 + 0x8c);
            goto LAB_016774e4;
          }
        }
        puVar9 = &DAT_051a50f0;
      }
      return (uint)(*(char *)(puVar9 + 2) != '\x03');
    }
  }
  fVar14 = (float)*(int *)(param_1 + 8) * 0.5;
  fVar13 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar10 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar10 = (uint)(fVar14 < 0.0);
  }
  uVar12 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar12 = (uint)(fVar13 < 0.0);
  }
  if ((*(long *)(*(long *)puVar5 + 0x38) == 0) ||
     (lVar8 = *(long *)(*(long *)(*(long *)puVar5 + 0x38) + 0xb0), lVar8 == 0)) {
    return 1;
  }
  uVar11 = ((int)fVar14 - uVar10) - *(int *)(lVar8 + 0x28);
  uVar2 = *(uint *)(lVar8 + 0x18);
  uVar3 = ((int)fVar13 - uVar12) - *(int *)(lVar8 + 0x2c);
  if ((uVar11 < uVar2 && uVar3 <= *(uint *)(lVar8 + 0x1c)) &&
      (uVar2 <= uVar11 || *(uint *)(lVar8 + 0x1c) != uVar3)) {
    uVar11 = uVar11 + uVar2 * uVar3;
LAB_016774b0:
    if (*(uint *)(lVar8 + 0x30) <= uVar11) {
      uVar11 = 0;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar11 * 0x68);
  }
  else {
    if (*(char *)(lVar8 + 0x88) != '\0') {
      uVar11 = ((int)fVar14 - uVar10) - *(int *)(lVar8 + 0x98);
      uVar12 = ((int)fVar13 - uVar12) - *(int *)(lVar8 + 0x9c);
      uVar10 = *(uint *)(lVar8 + 0xa0);
      if ((uVar11 < uVar10 && uVar12 <= *(uint *)(lVar8 + 0xa4)) &&
          (uVar10 <= uVar11 || *(uint *)(lVar8 + 0xa4) != uVar12)) {
        uVar11 = uVar11 + uVar10 * uVar12 + *(int *)(lVar8 + 0x8c);
        goto LAB_016774b0;
      }
    }
    puVar9 = &DAT_051a50f0;
  }
  return (uint)(*(char *)(puVar9 + 2) == '\0');
}

