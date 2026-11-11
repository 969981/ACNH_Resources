
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006543c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_048e4da0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_0043bce0(param_1 + 3);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar4 = DAT_0413f4f8;
  uVar3 = DAT_0413f4f0;
  uVar2 = _DAT_0413f328;
  uVar1 = _DAT_0413f320;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}

