
void FUN_004823e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[1] = param_2[1] & 0xffffffff;
  *param_1 = uVar1;
  param_1[3] = uVar3 & 0xffffffff;
  param_1[2] = uVar2;
  uVar1 = CONCAT44(DAT_0413f320,(int)uVar7);
  param_1[5] = uVar5 & 0xffffffff;
  param_1[4] = uVar4;
  param_1[7] = uVar1;
  param_1[6] = uVar6;
  return;
}

