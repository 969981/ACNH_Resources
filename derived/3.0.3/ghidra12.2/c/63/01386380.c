
byte FUN_01386380(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == 0) {
    lVar4 = *(long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar1 = (long *)(DAT_0519d040 + 0x30) + param_2;
    if (0x38 < param_2) {
      plVar1 = (long *)(DAT_0519d040 + 0x30);
    }
    lVar4 = *plVar1;
  }
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0xb0), lVar4 == 0)) {
    return 0;
  }
  uVar2 = *(uint *)(lVar4 + 0x18);
  fVar9 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  fVar10 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar8 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar8 = (uint)(fVar10 < 0.0);
  }
  uVar6 = ((int)fVar9 - uVar7) - *(int *)(lVar4 + 0x28);
  uVar3 = ((int)fVar10 - uVar8) - *(int *)(lVar4 + 0x2c);
  if ((uVar6 < uVar2 && uVar3 <= *(uint *)(lVar4 + 0x1c)) &&
      (uVar2 <= uVar6 || *(uint *)(lVar4 + 0x1c) != uVar3)) {
    uVar6 = uVar6 + uVar3 * uVar2;
LAB_01386494:
    if (*(uint *)(lVar4 + 0x30) <= uVar6) {
      uVar6 = 0;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)(int)uVar6 * 0x68);
  }
  else {
    if (*(char *)(lVar4 + 0x88) != '\0') {
      uVar2 = ((int)fVar9 - uVar7) - *(int *)(lVar4 + 0x98);
      uVar8 = ((int)fVar10 - uVar8) - *(int *)(lVar4 + 0x9c);
      uVar7 = *(uint *)(lVar4 + 0xa0);
      if ((uVar2 < uVar7 && uVar8 <= *(uint *)(lVar4 + 0xa4)) &&
          (uVar7 <= uVar2 || *(uint *)(lVar4 + 0xa4) != uVar8)) {
        uVar6 = uVar2 + uVar7 * uVar8 + *(int *)(lVar4 + 0x8c);
        goto LAB_01386494;
      }
    }
    puVar5 = &DAT_051a50f0;
  }
  return *(byte *)((long)puVar5 + 0xd) >> 7;
}

