
void FUN_03d598b4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *local_38;
  char *local_30;
  undefined8 local_28;
  
  local_38 = PTR_DAT_04bb2020;
  *param_1 = &PTR_LAB_04b8f648;
  param_1[1] = 0;
  local_30 = "RootPage";
  local_28 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_38 = local_38 + 0x10;
  param_1[5] = local_38;
  param_1[4] = 0;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[6] = &DAT_0419b684;
  FUN_03c5a110(param_1 + 5,&local_38,0xffffffff,0);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = local_28;
  uVar1 = *(undefined4 *)(*(long *)(DAT_05af83f0 + 0x418) + 0xc);
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0x1800000000;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xc;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1 + 0x12;
  param_1[0x13] = param_1 + 0x12;
  param_1[0x14] = 0x800000000;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x17] = 0;
  param_1[0x18] = param_1 + 0x18;
  param_1[0x19] = param_1 + 0x18;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar1;
  puVar2 = PTR_DAT_04bd40a0;
  param_1[0x1b] = param_1 + 0x1b;
  param_1[0x1c] = param_1 + 0x1b;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  param_1[0xf] = puVar2 + 0x10;
  param_1[0x1f] = param_1;
  param_1[0x20] = FUN_03d57284;
  param_1[0x1d] = 0;
  param_1[0x1e] = &PTR_LAB_04b8f890;
  FUN_038e2df8(param_1 + 0x22);
  FUN_03d5a550(param_1 + 0xf,&DAT_05af7e10);
  *param_1 = &PTR_LAB_04b8f7d0;
  return;
}

