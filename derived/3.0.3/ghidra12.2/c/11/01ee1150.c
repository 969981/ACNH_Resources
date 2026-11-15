
/* WARNING: Removing unreachable block (ram,0x01ee1174) */
/* WARNING: Removing unreachable block (ram,0x01ee1184) */

void FUN_01ee1150(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar16 = *(float *)(lVar15 + 0x278);
  fVar17 = *(float *)(lVar15 + 0x280);
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  uVar8 = *(uint *)(lVar15 + 0x30);
  uVar10 = *(uint *)(lVar15 + 0x34);
  iVar1 = (*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x10)) + 1;
  iVar2 = (*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x14)) + 1;
  uVar9 = *(uint *)(lVar15 + 0x20);
  uVar11 = *(uint *)(lVar15 + 0x24);
  iVar12 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  uVar13 = iVar12 - (iVar1 >> 1);
  uVar3 = iVar12 + iVar1;
  iVar1 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  uVar4 = uVar13;
  if ((int)uVar8 <= (int)uVar13) {
    uVar4 = uVar8;
  }
  uVar6 = uVar9;
  if ((int)uVar9 <= (int)uVar13) {
    uVar6 = uVar4;
  }
  uVar14 = iVar1 - (iVar2 >> 1);
  uVar4 = iVar1 + iVar2;
  uVar13 = uVar14;
  if ((int)uVar10 <= (int)uVar14) {
    uVar13 = uVar10;
  }
  uVar7 = uVar11;
  if ((int)uVar11 <= (int)uVar14) {
    uVar7 = uVar13;
  }
  uVar13 = uVar3;
  if ((int)uVar8 <= (int)uVar3) {
    uVar13 = uVar8;
  }
  if ((int)uVar9 <= (int)uVar3) {
    uVar9 = uVar13;
  }
  uVar3 = uVar4;
  if ((int)uVar10 <= (int)uVar4) {
    uVar3 = uVar10;
  }
  if ((int)uVar11 <= (int)uVar4) {
    uVar11 = uVar3;
  }
  uVar3 = uVar6;
  if ((int)uVar9 <= (int)uVar6) {
    uVar3 = uVar9;
  }
  if ((int)uVar6 <= (int)uVar9) {
    uVar6 = uVar9;
  }
  *(short *)(param_1 + 0x18c) = (short)uVar3;
  uVar4 = uVar7;
  if ((int)uVar11 <= (int)uVar7) {
    uVar4 = uVar11;
  }
  if ((int)uVar7 <= (int)uVar11) {
    uVar7 = uVar11;
  }
  *(short *)(param_1 + 400) = (short)uVar6;
  *(short *)(param_1 + 0x192) = (short)uVar7;
  *(short *)(param_1 + 0x18e) = (short)uVar4;
  uVar5 = (short)uVar3;
  if ((uVar6 & 0xffff) <= (uVar3 & 0xffff)) {
    uVar5 = (short)uVar6;
  }
  *(undefined2 *)(param_1 + 0x188) = uVar5;
  uVar5 = (short)uVar4;
  if ((uVar7 & 0xffff) <= (uVar4 & 0xffff)) {
    uVar5 = (short)uVar7;
  }
  *(undefined2 *)(param_1 + 0x18a) = uVar5;
  return;
}

