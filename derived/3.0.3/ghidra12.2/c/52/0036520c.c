
void FUN_0036520c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  param_2[1] = *(undefined8 *)(param_1 + 0x18);
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  return;
}

