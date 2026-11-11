
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063df90(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar5 = _DAT_0413f528;
  uVar4 = _DAT_0413f520;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 1) {
    param_3[1] = _DAT_0413f528;
    *param_3 = uVar4;
    param_3[3] = uVar5;
    param_3[2] = uVar4;
    param_3[5] = uVar5;
    param_3[4] = uVar4;
    return;
  }
  puVar3 = (ushort *)(*(long *)(param_1 + 0x28) + 0x10);
  uVar6 = _DAT_0413f520;
  uVar7 = _DAT_0413f528;
  uVar8 = _DAT_0413f520;
  uVar9 = _DAT_0413f528;
  do {
    puVar1 = (undefined8 *)(param_4 + (ulong)*puVar3 * 0x10);
    uVar14 = puVar1[1];
    uVar11 = *puVar1;
    fVar10 = (float)uVar11 - (float)*(undefined8 *)(param_2 + 0x30);
    fVar12 = (float)((ulong)uVar11 >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    fVar13 = (float)uVar14 - (float)*(undefined8 *)(param_2 + 0x38);
    fVar15 = (float)((ulong)uVar14 >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
    fVar16 = (float)*(undefined8 *)(puVar3 + -8);
    iVar2 = iVar2 + -1;
    fVar18 = (float)((ulong)*(undefined8 *)(puVar3 + -8) >> 0x20);
    fVar19 = (float)*(undefined8 *)(puVar3 + -4);
    fVar17 = *(float *)(puVar3 + 2);
    puVar3 = puVar3 + 0x10;
    uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar12 * fVar16 * fVar17,
                     (float)uVar4 + fVar10 * fVar16 * fVar17);
    uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar15 * fVar16 * fVar17,
                     (float)uVar5 + fVar13 * fVar16 * fVar17);
    uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar12 * fVar18 * fVar17,
                     (float)uVar8 + fVar10 * fVar18 * fVar17);
    uVar9 = CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar15 * fVar18 * fVar17,
                     (float)uVar9 + fVar13 * fVar18 * fVar17);
    uVar6 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar12 * fVar19 * fVar17,
                     (float)uVar6 + fVar10 * fVar19 * fVar17);
    uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) + fVar15 * fVar19 * fVar17,
                     (float)uVar7 + fVar13 * fVar19 * fVar17);
  } while (iVar2 != 0);
  param_3[1] = uVar5;
  *param_3 = uVar4;
  param_3[3] = uVar9;
  param_3[2] = uVar8;
  param_3[5] = uVar7;
  param_3[4] = uVar6;
  return;
}

