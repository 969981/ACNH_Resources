
/* WARNING: Removing unreachable block (ram,0x0126a38c) */
/* WARNING: Removing unreachable block (ram,0x0126a39c) */

undefined8 FUN_0126a370(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  puVar4 = &DAT_05636dd8;
  if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
    puVar4 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
  }
  if (puVar4[1] == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x2c) + -4;
  iVar1 = *(int *)(param_1 + 0x3c) + 4;
  iVar2 = iVar5;
  if (iVar6 <= iVar5) {
    iVar2 = iVar6;
  }
  if (iVar5 <= iVar6) {
    iVar5 = iVar6;
  }
  iVar6 = iVar7;
  if (iVar7 <= iVar1) {
    iVar6 = iVar1;
  }
  if (iVar1 <= iVar7) {
    iVar7 = iVar1;
  }
  fVar13 = (float)iVar2 * 10.0 + 2.5;
  fVar12 = (float)iVar7 * 10.0 + 2.5;
  uVar8 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  uVar9 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  fVar12 = (float)iVar5 * 10.0 + 10.0 + -2.5;
  fVar13 = (float)iVar6 * 10.0 + 10.0 + -2.5;
  uVar10 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  uVar11 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  uVar3 = uVar8;
  if ((int)uVar10 <= (int)uVar8) {
    uVar3 = uVar10;
  }
  if ((int)uVar8 <= (int)uVar10) {
    uVar8 = uVar10;
  }
  uVar10 = uVar9;
  if ((int)uVar11 <= (int)uVar9) {
    uVar10 = uVar11;
  }
  if ((int)uVar9 <= (int)uVar11) {
    uVar9 = uVar11;
  }
  if (uVar9 + 1 != uVar10) {
    uVar11 = uVar3;
    do {
      if (((((*(int *)(puVar4 + 4) <= (int)uVar11) && ((int)uVar11 <= *(int *)(puVar4 + 6))) &&
           (*(int *)((long)puVar4 + 0x24) <= (int)uVar10)) &&
          (((int)uVar10 <= *(int *)((long)puVar4 + 0x34) && (uVar11 < 0x120)))) &&
         ((uVar10 < 0x100 &&
          (*(int *)(puVar4[1] + 0x30 + (ulong)uVar11 * 0x400 + (ulong)uVar10 * 4) != -1)))) {
        return 0;
      }
      if ((int)uVar11 < (int)uVar8) {
        uVar11 = uVar11 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
        uVar11 = uVar3;
      }
    } while ((uVar3 != uVar11) || (uVar9 + 1 != uVar10));
  }
  return 1;
}

