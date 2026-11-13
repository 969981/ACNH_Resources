
void FUN_01477430(undefined8 param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_1c;
  float fStack_18;
  float local_14;
  
  uVar1 = (ulong)((float)(*param_3 + 0xa0000000U >> 0x1e) * 90.0 * 11930465.0);
  uVar2 = uVar1 >> 0x19 & 0x7f;
  fVar3 = (float)((uint)uVar1 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar4 = (float)(&DAT_04199798)[uVar2 * 4] + fVar3 * (float)(&DAT_0419979c)[uVar2 * 4];
  fVar6 = fVar4 * 0.0;
  fVar3 = (float)(&DAT_041997a0)[uVar2 * 4] + fVar3 * (float)(&DAT_041997a4)[uVar2 * 4];
  fVar3 = fVar3 + fVar3;
  fVar8 = fVar4 * (fVar4 + fVar4);
  fVar5 = (fVar4 + fVar4) * fVar6;
  fVar9 = fVar6 * (fVar6 + fVar6);
  fVar7 = fVar3 * fVar6;
  fVar3 = fVar4 * fVar3;
  fVar4 = fVar4 * (fVar6 + fVar6);
  local_1c = (fVar4 - fVar7) * 0.0 + ((1.0 - fVar8) - fVar9) * 0.0 + (fVar3 + fVar9) * 15.0;
  fStack_18 = ((1.0 - fVar9) - fVar9) * 0.0 + (fVar7 + fVar4) * 0.0 + (fVar5 - fVar7) * 15.0;
  local_14 = (fVar7 + fVar5) * 0.0 + (fVar9 - fVar3) * 0.0 + ((1.0 - fVar9) - fVar8) * 15.0;
  FUN_0147722c(param_1,param_2,&local_1c);
  return;
}

