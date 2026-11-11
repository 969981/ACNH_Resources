
undefined8 FUN_003dd874(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_003dbc20(*(undefined8 *)(param_1 + 0x10));
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  uVar2 = puVar4[5];
  uVar1 = puVar4[2];
  uVar3 = puVar4[3];
  param_2[4] = puVar4[4];
  param_2[5] = uVar2;
  param_2[2] = uVar1;
  param_2[3] = uVar3;
  uVar2 = puVar4[9];
  uVar1 = puVar4[6];
  uVar3 = puVar4[7];
  param_2[8] = puVar4[8];
  param_2[9] = uVar2;
  param_2[6] = uVar1;
  param_2[7] = uVar3;
  return 1;
}

