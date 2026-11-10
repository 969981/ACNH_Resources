
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037e958(long param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar5 = _UNK_04102628;
  uVar4 = _DAT_04102620;
  bVar1 = *(byte *)(param_1 + 0x5b);
  fVar7 = *(float *)(param_1 + 0x50);
  if ((bVar1 & 3) == 2) {
    fVar6 = -fVar7;
    fVar9 = *(float *)(param_1 + 0x54);
  }
  else {
    fVar6 = 0.0;
    if ((bVar1 & 3) == 0) {
      fVar6 = fVar7 * -0.5;
    }
    fVar9 = *(float *)(param_1 + 0x54);
  }
  bVar1 = bVar1 >> 2 & 3;
  if (bVar1 == 2) {
    fVar8 = fVar9;
  }
  else {
    fVar8 = 0.0;
    if (bVar1 == 0) {
      fVar8 = fVar9 * 0.5;
    }
  }
  fVar10 = 1.0 / ((fVar7 + fVar6) - fVar6);
  fVar11 = 1.0 / ((fVar8 - fVar9) - fVar8);
  param_2[1] = (ulong)(uint)-((fVar6 + fVar7 + fVar6) * fVar10) << 0x20;
  *param_2 = (ulong)(uint)(fVar10 + fVar10);
  param_2[3] = (ulong)(uint)-((fVar8 + (fVar8 - fVar9)) * fVar11) << 0x20;
  param_2[2] = (ulong)(uint)(fVar11 + fVar11) << 0x20;
  uVar3 = DAT_04102218;
  uVar2 = DAT_04102210;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[7] = uVar3;
  param_2[6] = uVar2;
  return;
}

