
void FUN_00473530(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,undefined *param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[6] = param_3;
  puVar1 = PTR_DAT_048607b8;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_5 != (undefined *)0x0) {
    puVar1 = param_5;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = puVar1;
  param_1[0xb] = param_6;
  if (param_3 <= param_2) {
    param_3 = (param_2 + param_3) - 1 & -param_3;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_4 / param_3;
  }
  param_1[1] = param_3;
  param_1[7] = uVar2;
  return;
}

