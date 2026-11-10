
void FUN_001fd178(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 param_8,long param_9)

{
  *param_1 = (long)(PTR_DAT_04bcca38 + 0x10);
  FUN_00196bb8(param_1 + 2);
  param_1[9] = param_3;
  param_1[10] = param_4;
  FUN_0019cb40(param_1 + 0xb,param_5);
  FUN_0018652c(param_1 + 0x10,param_6);
  param_1[0x12] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  *(undefined4 *)(param_1 + 0x11) = param_7;
  *(undefined4 *)((long)param_1 + 0x8c) = param_8;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x15] = (long)(param_1 + 0x13);
  param_1[0x16] = 0x10;
  FUN_0018b070(param_1 + 0x12,*(undefined8 *)(param_9 + 0x18),0xffffffffffffffff);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

