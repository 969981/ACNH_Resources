
void FUN_003f0448(long *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,long param_7,long param_8,long param_9,long param_10,
                 long param_11,long param_12)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[4] = param_5;
  param_1[2] = param_3;
  param_1[3] = param_4;
  puVar1 = PTR_DAT_04bd25f0 + 0x10;
  *(undefined4 *)(param_1 + 5) = param_6;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *param_1 = (long)puVar1;
  param_1[6] = param_7;
  param_1[7] = param_8;
  param_1[8] = param_9;
  param_1[9] = param_10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = param_11;
  param_1[0xb] = param_12;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

