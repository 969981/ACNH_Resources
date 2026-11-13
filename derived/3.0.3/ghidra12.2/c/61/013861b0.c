
byte FUN_013861b0(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (param_2 == 0) {
    lVar6 = *(long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar1 = (long *)(DAT_0519d040 + 0x30) + param_2;
    if (0x38 < param_2) {
      plVar1 = (long *)(DAT_0519d040 + 0x30);
    }
    lVar6 = *plVar1;
  }
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0xb0), lVar6 == 0)) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(lVar6 + 0x18);
  fVar11 = (float)iVar2 * 0.5;
  uVar9 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar9 = (uint)(fVar11 < 0.0);
  }
  fVar12 = (float)iVar4 * 0.5;
  uVar10 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar10 = (uint)(fVar12 < 0.0);
  }
  uVar8 = ((int)fVar11 - uVar9) - *(int *)(lVar6 + 0x28);
  uVar5 = ((int)fVar12 - uVar10) - *(int *)(lVar6 + 0x2c);
  if ((uVar8 < uVar3 && uVar5 <= *(uint *)(lVar6 + 0x1c)) &&
      (uVar3 <= uVar8 || *(uint *)(lVar6 + 0x1c) != uVar5)) {
    uVar8 = uVar8 + uVar5 * uVar3;
LAB_013862c4:
    if (*(uint *)(lVar6 + 0x30) <= uVar8) {
      uVar8 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)(int)uVar8 * 0x68);
  }
  else {
    if (*(char *)(lVar6 + 0x88) != '\0') {
      uVar3 = ((int)fVar11 - uVar9) - *(int *)(lVar6 + 0x98);
      uVar10 = ((int)fVar12 - uVar10) - *(int *)(lVar6 + 0x9c);
      uVar9 = *(uint *)(lVar6 + 0xa0);
      if ((uVar3 < uVar9 && uVar10 <= *(uint *)(lVar6 + 0xa4)) &&
          (uVar9 <= uVar3 || *(uint *)(lVar6 + 0xa4) != uVar10)) {
        uVar8 = uVar3 + uVar9 * uVar10 + *(int *)(lVar6 + 0x8c);
        goto LAB_013862c4;
      }
    }
    puVar7 = &DAT_051a50f0;
  }
  if ((iVar2 == *(short *)((long)puVar7 + 0x34)) && (iVar4 == *(short *)((long)puVar7 + 0x36))) {
    lVar6 = 0;
  }
  else if ((iVar2 == *(short *)((long)puVar7 + 0x44)) && (iVar4 == *(short *)((long)puVar7 + 0x46)))
  {
    lVar6 = 1;
  }
  else if ((iVar2 == *(short *)((long)puVar7 + 0x54)) && (iVar4 == *(short *)((long)puVar7 + 0x56)))
  {
    lVar6 = 2;
  }
  else {
    if (iVar2 != *(short *)((long)puVar7 + 100)) {
      return 0;
    }
    if (iVar4 != *(short *)((long)puVar7 + 0x66)) {
      return 0;
    }
    lVar6 = 3;
  }
  return *(byte *)(puVar7 + lVar6 * 2 + 6) >> 1 & 1;
}

