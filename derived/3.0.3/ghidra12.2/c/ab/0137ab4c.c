
/* WARNING: Removing unreachable block (ram,0x0137ad5c) */
/* WARNING: Removing unreachable block (ram,0x0137ac88) */
/* WARNING: Removing unreachable block (ram,0x0137abbc) */
/* WARNING: Removing unreachable block (ram,0x0137abcc) */
/* WARNING: Removing unreachable block (ram,0x0137ac98) */
/* WARNING: Removing unreachable block (ram,0x0137aca4) */
/* WARNING: Removing unreachable block (ram,0x0137ad6c) */
/* WARNING: Removing unreachable block (ram,0x0137ad78) */

undefined8 FUN_0137ab4c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  lVar5 = *(long *)PTR_DAT_04bb27a8;
  fVar11 = (float)(param_3 + param_1) * 0.5;
  fVar12 = (float)(param_2 + 1) * 0.5;
  uVar7 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar7 = (uint)(fVar11 < 0.0);
  }
  uVar10 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar10 = (uint)(fVar12 < 0.0);
  }
  iVar1 = (int)fVar11 - uVar7;
  iVar2 = (int)fVar12 - uVar10;
  cVar6 = '\0';
  if (*(long *)(lVar5 + 0x1f8) != 0) {
    lVar8 = *(long *)(*(long *)(lVar5 + 0x1f8) + 0xb0);
    cVar6 = '\0';
    if (lVar8 != 0) {
      uVar7 = iVar1 - *(int *)(lVar8 + 0x28);
      uVar10 = *(uint *)(lVar8 + 0x18);
      uVar3 = iVar2 - *(int *)(lVar8 + 0x2c);
      if ((uVar7 < uVar10 && uVar3 <= *(uint *)(lVar8 + 0x1c)) &&
          (uVar10 <= uVar7 || *(uint *)(lVar8 + 0x1c) != uVar3)) {
        uVar7 = uVar7 + uVar10 * uVar3;
LAB_0137ac50:
        if (*(uint *)(lVar8 + 0x30) <= uVar7) {
          uVar7 = 0;
        }
        puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar7 * 0x68);
      }
      else {
        if (*(char *)(lVar8 + 0x88) != '\0') {
          uVar10 = iVar1 - *(int *)(lVar8 + 0x98);
          uVar7 = *(uint *)(lVar8 + 0xa0);
          uVar3 = iVar2 - *(int *)(lVar8 + 0x9c);
          if ((uVar10 < uVar7 && uVar3 <= *(uint *)(lVar8 + 0xa4)) &&
              (uVar7 <= uVar10 || *(uint *)(lVar8 + 0xa4) != uVar3)) {
            uVar7 = uVar10 + uVar7 * uVar3 + *(int *)(lVar8 + 0x8c);
            goto LAB_0137ac50;
          }
        }
        puVar9 = &DAT_051a50f0;
      }
      cVar6 = '\0';
      if (*(char *)(puVar9 + 2) != '\x04') {
        cVar6 = *(char *)(puVar9 + 2);
      }
    }
  }
  cVar4 = '\0';
  if (*(long *)(lVar5 + 0x1f8) != 0) {
    lVar8 = *(long *)(*(long *)(lVar5 + 0x1f8) + 0xb0);
    cVar4 = '\0';
    if (lVar8 != 0) {
      uVar10 = *(uint *)(lVar8 + 0x18);
      uVar7 = iVar1 - *(int *)(lVar8 + 0x28);
      uVar3 = (iVar2 + 1) - *(int *)(lVar8 + 0x2c);
      if ((uVar7 < uVar10 && uVar3 <= *(uint *)(lVar8 + 0x1c)) &&
          (uVar10 <= uVar7 || *(uint *)(lVar8 + 0x1c) != uVar3)) {
        uVar7 = uVar7 + uVar10 * uVar3;
LAB_0137ad20:
        if (*(uint *)(lVar8 + 0x30) <= uVar7) {
          uVar7 = 0;
        }
        puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar7 * 0x68);
      }
      else {
        if (*(char *)(lVar8 + 0x88) != '\0') {
          uVar10 = (iVar2 + 1) - *(int *)(lVar8 + 0x9c);
          uVar7 = *(uint *)(lVar8 + 0xa0);
          uVar3 = iVar1 - *(int *)(lVar8 + 0x98);
          if ((uVar3 < uVar7 && uVar10 <= *(uint *)(lVar8 + 0xa4)) &&
              (uVar7 <= uVar3 || *(uint *)(lVar8 + 0xa4) != uVar10)) {
            uVar7 = uVar3 + uVar7 * uVar10 + *(int *)(lVar8 + 0x8c);
            goto LAB_0137ad20;
          }
        }
        puVar9 = &DAT_051a50f0;
      }
      cVar4 = *(char *)(puVar9 + 2);
    }
  }
  if (cVar6 < cVar4) {
    return 1;
  }
  if ((*(long *)(lVar5 + 0x1f8) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar5 + 0x1f8) + 0xb0), lVar5 == 0)) {
    cVar4 = '\0';
    goto LAB_0137ae18;
  }
  uVar10 = *(uint *)(lVar5 + 0x18);
  uVar7 = iVar1 - *(int *)(lVar5 + 0x28);
  uVar3 = (iVar2 + 2) - *(int *)(lVar5 + 0x2c);
  if ((uVar7 < uVar10 && uVar3 <= *(uint *)(lVar5 + 0x1c)) &&
      (uVar10 <= uVar7 || *(uint *)(lVar5 + 0x1c) != uVar3)) {
    uVar7 = uVar7 + uVar10 * uVar3;
LAB_0137adfc:
    if (*(uint *)(lVar5 + 0x30) <= uVar7) {
      uVar7 = 0;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar7 * 0x68);
  }
  else {
    if (*(char *)(lVar5 + 0x88) != '\0') {
      uVar10 = iVar1 - *(int *)(lVar5 + 0x98);
      uVar3 = (iVar2 + 2) - *(int *)(lVar5 + 0x9c);
      uVar7 = *(uint *)(lVar5 + 0xa0);
      if ((uVar10 < uVar7 && uVar3 <= *(uint *)(lVar5 + 0xa4)) &&
          (uVar7 <= uVar10 || *(uint *)(lVar5 + 0xa4) != uVar3)) {
        uVar7 = uVar10 + uVar7 * uVar3 + *(int *)(lVar5 + 0x8c);
        goto LAB_0137adfc;
      }
    }
    puVar9 = &DAT_051a50f0;
  }
  cVar4 = *(char *)(puVar9 + 2);
LAB_0137ae18:
  if (cVar6 < cVar4) {
    return 1;
  }
  return 0;
}

