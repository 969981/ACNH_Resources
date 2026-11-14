
void FUN_01674298(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 *local_70;
  long lStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 local_58;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  puVar1 = PTR_DAT_04bd2f30;
  *param_1 = &PTR_FUN_049baf28;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  param_1[7] = puVar1 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0x40;
  *(undefined1 *)((long)param_1 + 0x103) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x40;
  *(undefined4 *)(param_1 + 0x33) = 0x40;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  local_78 = 1;
  *(undefined1 *)((long)param_1 + 0x183) = 0;
  *(undefined1 *)((long)param_1 + 0x1db) = 0;
  local_80 = 0;
  local_60 = 0x1030305;
  local_5a = 0;
  local_58 = 0;
  param_1[0xb] = puVar1;
  param_1[0xc] = (undefined1 *)((long)param_1 + 0x6c);
  param_1[0x16] = puVar1;
  param_1[0x17] = (long)param_1 + 0xc4;
  *(undefined2 *)(param_1 + 10) = 0x101;
  local_5c = 0x101;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x31] = puVar1;
  param_1[0x32] = (undefined1 *)((long)param_1 + 0x19c);
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  param_1[0x26] = puVar1;
  param_1[0x27] = (undefined1 *)((long)param_1 + 0x144);
  local_90 = param_1;
  uStack_88 = param_2;
  FUN_038d1270(param_1 + 0x26,"CmnUser");
  FUN_038d1270(param_1 + 0x31,"CmnUser");
  local_70 = param_1 + 0x23;
  lStack_68 = (long)param_1 + 0x124;
  FUN_03c55a80(param_1 + 7,&local_90);
  if (param_1[8] != 0) {
    FUN_03bf3e20(param_1[8],param_2);
  }
  if (param_1[9] != 0) {
    FUN_03bf3e20(param_1[9],param_2);
  }
  return;
}

