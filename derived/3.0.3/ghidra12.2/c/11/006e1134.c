
void FUN_006e1134(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_40 [16];
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  puVar1 = PTR_DAT_04bb2028;
  param_1[8] = (long)param_1 + 0x4c;
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)param_1 + 0x14;
  param_1[7] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 2) = 0x20;
  *(undefined4 *)(param_1 + 9) = 0x20;
  FUN_00699eb4(auStack_40,param_2 + 0x28,*(undefined8 *)(param_2 + 0x828));
  uVar2 = FUN_0069aa28(auStack_40);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_0069a7c0(auStack_40,param_1[1],0x20,"$.type");
    (**(code **)(param_1[7] + 0x18))(param_1 + 7);
    FUN_0069a7c0(auStack_40,param_1[8],0x20,"$.action");
    FUN_0069a6a0(auStack_40,param_1 + 0xe,"$.receiver_user_id");
    FUN_0069a6a0(auStack_40,param_1 + 0xf,"$.target_user_id");
  }
  return;
}

