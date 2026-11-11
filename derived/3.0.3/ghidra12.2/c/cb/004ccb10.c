
void FUN_004ccb10(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 local_3c;
  undefined8 local_38;
  
  FUN_004866c0();
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  *param_1 = &PTR_FUN_04867bd8;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  FUN_0043dcf0(param_1 + 9);
  param_1[9] = &PTR_FUN_04867c30;
  FUN_0043dcf0(param_1 + 0xc);
  param_1[0xc] = &PTR_FUN_04867cc8;
  FUN_0043dcf0(param_1 + 0xf);
  param_1[0xb] = param_1;
  param_1[0x11] = param_1;
  param_1[0xe] = param_1;
  param_1[0xf] = &PTR_FUN_04867d68;
  *param_1 = &PTR_LAB_04868a88;
  puVar1 = PTR_DAT_048607b8;
  FUN_004547b0(param_1 + 0x12,PTR_DAT_048607b8,0x4000);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x1f);
  local_38 = 0;
  local_3c = 0;
  FUN_004bc7e0(param_1 + 0x1d,&local_38,&local_3c);
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 == (*(uint *)((long)param_1 + 0x14) & 0x3fffffff)) {
    FUN_00426990(puVar1,param_1 + 1,8);
    uVar2 = *(uint *)(param_1 + 2);
  }
  *(undefined8 *)(param_1[1] + (long)(int)uVar2 * 8) = 0;
  *(uint *)(param_1 + 2) = uVar2 + 1;
  return;
}

