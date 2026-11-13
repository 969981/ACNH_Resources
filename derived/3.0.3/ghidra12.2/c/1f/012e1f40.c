
void FUN_012e1f40(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = (float)NEON_ucvtf(*param_2);
  fVar9 = fVar8 * 1.4629181e-09 * 0.15915494;
  uVar7 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar7 = (uint)(fVar9 < 0.0);
  }
  fVar8 = fVar8 * 1.4629181e-09 + (float)(int)((int)fVar9 - uVar7) * -6.2831855;
  bVar5 = false;
  bVar6 = false;
  if (0.0 < fVar8) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar8)) {
      bVar5 = fVar8 < 6.2831855;
      bVar6 = false;
    }
  }
  if ((bVar5 != bVar6) && (((long)(fVar8 * 6.8356525e+08) & 0x7fffffffU) == 0x40000000)) {
    iVar1 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x14)) + 1;
    iVar2 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10)) + 1;
    fVar8 = ((float)*(int *)(param_1 + 0x10) * 5.0 + (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0) *
            0.5 - ((float)iVar1 * 0.5 * 5.0 + -2.5);
    fVar9 = ((float)*(int *)(param_1 + 0x14) * 5.0 + (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0) *
            0.5 - ((float)iVar2 * 0.5 * 5.0 + -2.5);
    iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar4 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x14) = iVar4;
    *(int *)(param_1 + 0x20) = iVar1 + iVar3 + -1;
    *(int *)(param_1 + 0x24) = iVar2 + iVar4 + -1;
  }
  return;
}

