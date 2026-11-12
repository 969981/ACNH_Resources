
void FUN_006f6a70(long param_1,undefined4 *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  *(undefined4 *)(param_1 + 8) = DAT_04c896f8;
  *(undefined4 *)(param_1 + 0xc) = DAT_04c896fc;
  if (param_4 != 0) {
    fVar9 = SQRT((float)(param_4 + 1U));
    uVar7 = (uint)fVar9;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = uVar7 + 1;
    }
    uVar8 = uVar7 & 0xfffffffe;
    uVar6 = uVar7 >> 1;
    iVar2 = (uVar7 | 1) * (uVar7 | 1) - (param_4 + 1U);
    if (uVar7 < 2) {
      uVar8 = 1;
    }
    iVar3 = 0;
    if (uVar8 != 0) {
      iVar3 = iVar2 / (int)uVar8;
    }
    uVar7 = uVar6;
    if ((int)(uVar8 * 4) <= iVar2) {
      uVar7 = 0;
    }
    iVar3 = iVar2 - iVar3 * uVar8;
    uVar4 = iVar3 - uVar6;
    uVar5 = uVar6 - iVar3;
    uVar1 = uVar4;
    if ((int)(uVar8 * 4) <= iVar2) {
      uVar1 = 0;
    }
    if (iVar2 < (int)(uVar8 * 3)) {
      uVar1 = -uVar6;
      uVar7 = uVar4;
    }
    if (iVar2 < (int)(uVar8 * 2)) {
      uVar7 = -uVar6;
      uVar1 = uVar5;
    }
    if (iVar2 < (int)uVar8) {
      uVar7 = uVar5;
    }
    if (iVar2 < (int)uVar8) {
      uVar1 = uVar6;
    }
    uVar8 = -uVar1;
    if ((param_3 & 1) != 0) {
      uVar8 = uVar1;
    }
    uVar6 = uVar7;
    switch(*param_2) {
    case 0:
      break;
    case 1:
      uVar6 = -uVar8;
      uVar8 = uVar7;
      break;
    case 2:
      uVar6 = -uVar7;
      uVar8 = -uVar8;
      break;
    case 3:
      uVar6 = uVar8;
      uVar8 = -uVar7;
      break;
    default:
      goto switchD_006f6b38_default;
    }
    *(uint *)(param_1 + 8) = uVar8;
    *(uint *)(param_1 + 0xc) = uVar6;
  }
switchD_006f6b38_default:
  return;
}

