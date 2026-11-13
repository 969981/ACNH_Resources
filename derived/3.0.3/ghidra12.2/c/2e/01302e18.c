
undefined4 FUN_01302e18(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = (float)*(int *)(param_1 + 0x18) * 10.0 + 2.5;
  fVar13 = (float)*(int *)(param_1 + 0x1c) * 10.0 + 2.5;
  fVar15 = (float)*(int *)(param_3 + 8) * 10.0 + 2.5;
  fVar11 = (float)*(int *)(param_3 + 0xc) * 10.0 + 2.5;
  iVar5 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  fVar14 = (float)*(int *)(param_1 + 0x28) * 10.0 + 10.0 + -2.5;
  fVar15 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 10.0 + -2.5;
  iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar8 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar3 = iVar6;
  if (iVar8 <= iVar6) {
    iVar3 = iVar8;
  }
  iVar9 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  if (iVar6 <= iVar8) {
    iVar6 = iVar8;
  }
  uVar10 = 5;
  iVar8 = iVar7;
  if (iVar9 <= iVar7) {
    iVar8 = iVar9;
  }
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  if ((iVar3 <= iVar5) && (iVar5 <= iVar6)) {
    iVar6 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    if ((iVar8 <= iVar6) && (iVar6 <= iVar7)) {
      uVar1 = (iVar5 - iVar3) * 2 + 2;
      uVar10 = 5;
      if ((uVar1 < 0xc) && (uVar2 = (iVar6 - iVar8) * 2 + 2, uVar2 < 0xc)) {
        lVar4 = param_1 + 0x30 + (ulong)param_2 * 0x240;
        if (3 < param_2) {
          lVar4 = param_1 + 0x30;
        }
        uVar10 = *(undefined4 *)(lVar4 + (ulong)(uVar1 + uVar2 * 0xc) * 4);
      }
    }
  }
  return uVar10;
}

