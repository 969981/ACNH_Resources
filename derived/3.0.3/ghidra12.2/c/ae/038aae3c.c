
void FUN_038aae3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined **local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04b628c0;
  param_1[4] = param_2;
  param_1[5] = 8;
  local_58 = &PTR_LAB_048f9770;
  pcStack_50 = "VibrationThread";
  FUN_038e1f88(param_1 + 0x1076,&local_58,param_3,0xf,0,0x7fffffff,0x1000,0x20);
  *(undefined4 *)(param_1 + 0x1099) = 0;
  param_1[0x1076] = &PTR_FUN_04b628f8;
  param_1[0x1097] = (long)param_1 + 0x84cc;
  param_1[0x1098] = 0x10;
  FUN_038e18e4(param_1 + 0x10c2);
  *(undefined4 *)(param_1 + 3) = 0xd;
  nn::hid::InitializeNpad();
  local_38 = 0x20;
  local_48 = 0x500000004;
  uStack_40 = 0x700000006;
  local_58 = (undefined **)0x100000000;
  pcStack_50 = (char *)0x300000002;
  nn::hid::SetSupportedNpadIdType((uint *)&local_58,9);
  *(undefined4 *)(param_1 + 6) = 5;
  memset(param_1 + 0xb,0,0xe98);
  *(undefined4 *)((long)param_1 + 0x34) = 5;
  memset(param_1 + 0x1de,0,0xe98);
  *(undefined4 *)(param_1 + 7) = 5;
  memset(param_1 + 0x3b1,0,0xe98);
  *(undefined4 *)((long)param_1 + 0x3c) = 5;
  memset(param_1 + 0x584,0,0xe98);
  *(undefined4 *)(param_1 + 8) = 5;
  memset(param_1 + 0x757,0,0xe98);
  *(undefined4 *)((long)param_1 + 0x44) = 5;
  memset(param_1 + 0x92a,0,0xe98);
  *(undefined4 *)(param_1 + 9) = 5;
  memset(param_1 + 0xafd,0,0xe98);
  *(undefined4 *)((long)param_1 + 0x4c) = 5;
  memset(param_1 + 0xcd0,0,0xe98);
  *(undefined4 *)(param_1 + 10) = 5;
  memset(param_1 + 0xea3,0,0xe98);
  nn::hid::SetSupportedNpadStyleSet(0x1f);
  local_58 = (undefined **)CONCAT44(local_58._4_4_,1);
  *(undefined4 *)(param_1 + 0x1090) = 2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x1093],-1,2);
  if (*(int *)((long)param_1 + 0x847c) == 0) {
    nn::os::StartThread((ThreadType *)param_1[0x1093]);
    uVar1 = nn::os::GetThreadId((ThreadType *)param_1[0x1093]);
    *(undefined4 *)(param_1 + 0x108f) = uVar1;
    if (*(int *)((long)param_1 + 0x847c) == 0) {
      *(undefined4 *)((long)param_1 + 0x847c) = 1;
    }
  }
  return;
}

