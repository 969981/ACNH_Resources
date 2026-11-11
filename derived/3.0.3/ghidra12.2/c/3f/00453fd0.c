
void FUN_00453fd0(undefined8 *param_1,uint param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,ulong param_7)

{
  undefined8 uVar1;
  
  *param_1 = 0x30000d;
  param_1[1] = 0;
  param_1[4] = param_5;
  param_1[5] = (ulong)(param_2 & 0xffff | (param_3 & 0xfff) << 0x10);
  uVar1 = 0x83;
  if ((param_6 & 1) == 0) {
    uVar1 = 3;
  }
  param_1[2] = uVar1;
  param_1[3] = param_4;
  param_1[6] = param_7 & 0xffffffff;
  return;
}

