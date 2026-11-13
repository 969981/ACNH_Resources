
undefined8 * FUN_01381c54(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x18);
  fVar10 = (float)iVar1 * 0.5;
  uVar8 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar8 = (uint)(fVar10 < 0.0);
  }
  fVar11 = (float)iVar3 * 0.5;
  uVar9 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar9 = (uint)(fVar11 < 0.0);
  }
  uVar6 = ((int)fVar10 - uVar8) - *(int *)(param_1 + 0x28);
  uVar4 = ((int)fVar11 - uVar9) - *(int *)(param_1 + 0x2c);
  if ((uVar6 < uVar2 && uVar4 <= *(uint *)(param_1 + 0x1c)) &&
      (uVar2 <= uVar6 || *(uint *)(param_1 + 0x1c) != uVar4)) {
    uVar6 = uVar6 + uVar4 * uVar2;
LAB_01381d0c:
    if (*(uint *)(param_1 + 0x30) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6 * 0x68);
  }
  else {
    if (*(char *)(param_1 + 0x88) != '\0') {
      uVar2 = ((int)fVar10 - uVar8) - *(int *)(param_1 + 0x98);
      uVar9 = ((int)fVar11 - uVar9) - *(int *)(param_1 + 0x9c);
      uVar8 = *(uint *)(param_1 + 0xa0);
      if ((uVar2 < uVar8 && uVar9 <= *(uint *)(param_1 + 0xa4)) &&
          (uVar8 <= uVar2 || *(uint *)(param_1 + 0xa4) != uVar9)) {
        uVar6 = uVar2 + uVar8 * uVar9 + *(int *)(param_1 + 0x8c);
        goto LAB_01381d0c;
      }
    }
    puVar7 = &DAT_051a50f0;
  }
  if ((iVar1 == *(short *)((long)puVar7 + 0x34)) && (iVar3 == *(short *)((long)puVar7 + 0x36))) {
    lVar5 = 0;
  }
  else if ((iVar1 == *(short *)((long)puVar7 + 0x44)) && (iVar3 == *(short *)((long)puVar7 + 0x46)))
  {
    lVar5 = 1;
  }
  else if ((iVar1 == *(short *)((long)puVar7 + 0x54)) && (iVar3 == *(short *)((long)puVar7 + 0x56)))
  {
    lVar5 = 2;
  }
  else {
    if (iVar1 != *(short *)((long)puVar7 + 100)) {
      return (undefined8 *)0x0;
    }
    if (iVar3 != *(short *)((long)puVar7 + 0x66)) {
      return (undefined8 *)0x0;
    }
    lVar5 = 3;
  }
  return puVar7 + lVar5 * 2 + 5;
}

