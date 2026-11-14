
/* WARNING: Removing unreachable block (ram,0x01677d4c) */
/* WARNING: Removing unreachable block (ram,0x01677d3c) */
/* WARNING: Removing unreachable block (ram,0x01677d10) */
/* WARNING: Removing unreachable block (ram,0x01677db4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01677ac0(long param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined **local_70;
  int local_68;
  int iStack_64;
  
  local_80 = 0;
  local_70 = &PTR_FUN_048f9730;
  fVar12 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar6 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar6 = (uint)(fVar12 < 0.0);
  }
  local_68 = (int)fVar12 - uVar6;
  fVar12 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar6 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar6 = (uint)(fVar12 < 0.0);
  }
  iStack_64 = (int)fVar12 - uVar6;
  local_78 = 0;
  local_74 = 1;
  local_80 = 2;
  local_70 = &PTR_FUN_048f9730;
  local_74 = 1;
  local_78 = 0;
  uVar5 = FUN_0097dd50(&local_70,&local_80);
  if ((uVar5 & 1) != 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  iVar7 = iVar10 + 2;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  iVar11 = iVar2;
  do {
    local_70 = ppuVar1;
    local_68 = iVar11;
    iStack_64 = iVar10;
    uVar5 = FUN_01675460(&local_70,0);
    if ((uVar5 & 1) != 0) {
      return false;
    }
    if (iVar11 < iVar2 + 1) {
      iVar11 = iVar11 + 1;
    }
    else {
      iVar10 = iVar10 + 1;
      iVar11 = iVar2;
    }
  } while ((iVar2 != iVar11) || (iVar7 != iVar10));
  local_70 = &PTR_FUN_048f9730;
  fVar12 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar6 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar6 = (uint)(fVar12 < 0.0);
  }
  local_68 = (int)fVar12 - uVar6;
  fVar12 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar6 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar6 = (uint)(fVar12 < 0.0);
  }
  iStack_64 = (int)fVar12 - uVar6;
  uVar5 = FUN_0097e070(&local_70);
  fVar13 = (float)*(int *)(param_1 + 0xc) * 0.5;
  fVar12 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar6 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar6 = (uint)(fVar12 < 0.0);
  }
  iVar7 = (int)fVar12 - uVar6;
  uVar6 = 0;
  if (fVar13 != (float)(int)fVar13) {
    uVar6 = (uint)(fVar13 < 0.0);
  }
  iVar10 = (int)fVar13 - uVar6;
  if ((uVar5 & 1) == 0) {
    if ((*(long *)(DAT_0519d040 + 0x38) == 0) ||
       (lVar9 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0), lVar9 == 0)) {
      iVar7 = 0;
      goto LAB_01677e88;
    }
    uVar6 = iVar7 - *(int *)(lVar9 + 0x28);
    uVar3 = *(uint *)(lVar9 + 0x18);
    uVar4 = iVar10 - *(int *)(lVar9 + 0x2c);
    if ((uVar6 < uVar3 && uVar4 <= *(uint *)(lVar9 + 0x1c)) &&
        (uVar3 <= uVar6 || *(uint *)(lVar9 + 0x1c) != uVar4)) {
      uVar6 = uVar6 + uVar3 * uVar4;
LAB_01677e6c:
      if (*(uint *)(lVar9 + 0x30) <= uVar6) {
        uVar6 = 0;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar6 * 0x68);
    }
    else {
      if (*(char *)(lVar9 + 0x88) != '\0') {
        uVar3 = iVar7 - *(int *)(lVar9 + 0x98);
        uVar4 = iVar10 - *(int *)(lVar9 + 0x9c);
        uVar6 = *(uint *)(lVar9 + 0xa0);
        if ((uVar3 < uVar6 && uVar4 <= *(uint *)(lVar9 + 0xa4)) &&
            (uVar6 <= uVar3 || *(uint *)(lVar9 + 0xa4) != uVar4)) {
          uVar6 = uVar3 + uVar6 * uVar4 + *(int *)(lVar9 + 0x8c);
          goto LAB_01677e6c;
        }
      }
      puVar8 = &DAT_051a50f0;
    }
    iVar7 = (int)*(char *)(puVar8 + 2);
LAB_01677e88:
    return iVar7 == param_2;
  }
  if ((*(long *)(DAT_0519d040 + 0x38) == 0) ||
     (lVar9 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0), lVar9 == 0)) {
    iVar7 = 0;
    goto LAB_01677e54;
  }
  uVar6 = iVar7 - *(int *)(lVar9 + 0x28);
  uVar3 = *(uint *)(lVar9 + 0x18);
  uVar4 = iVar10 - *(int *)(lVar9 + 0x2c);
  if ((uVar6 < uVar3 && uVar4 <= *(uint *)(lVar9 + 0x1c)) &&
      (uVar3 <= uVar6 || *(uint *)(lVar9 + 0x1c) != uVar4)) {
    uVar6 = uVar6 + uVar3 * uVar4;
LAB_01677e38:
    if (*(uint *)(lVar9 + 0x30) <= uVar6) {
      uVar6 = 0;
    }
    puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)(int)uVar6 * 0x68);
  }
  else {
    if (*(char *)(lVar9 + 0x88) != '\0') {
      uVar3 = iVar7 - *(int *)(lVar9 + 0x98);
      uVar4 = iVar10 - *(int *)(lVar9 + 0x9c);
      uVar6 = *(uint *)(lVar9 + 0xa0);
      if ((uVar3 < uVar6 && uVar4 <= *(uint *)(lVar9 + 0xa4)) &&
          (uVar6 <= uVar3 || *(uint *)(lVar9 + 0xa4) != uVar4)) {
        uVar6 = uVar3 + uVar6 * uVar4 + *(int *)(lVar9 + 0x8c);
        goto LAB_01677e38;
      }
    }
    puVar8 = &DAT_051a50f0;
  }
  iVar7 = (int)*(char *)(puVar8 + 2);
LAB_01677e54:
  return iVar7 < param_2;
}

