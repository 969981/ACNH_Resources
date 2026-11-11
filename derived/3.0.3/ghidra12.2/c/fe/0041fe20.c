
void FUN_0041fe20(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  FUN_0019a224(param_1,2,"SmartDeviceVoiceChatJoinRoomCompleteCallback",param_2);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *param_1 = (long)(PTR_DAT_04bd2cb8 + 0x10);
  param_1[0x1a] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bd2a60;
  param_1[0x19] = 0;
  param_1[0x17] = param_3;
  param_1[0x18] = (long)(puVar1 + 0x10);
  param_1[0x1d] = (long)(param_1 + 0x1b);
  param_1[0x1e] = 0x10;
  FUN_0018a58c(param_1 + 0x1a,&DAT_0407ebb1);
  puVar1 = PTR_DAT_04bd2cc0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_4;
  param_1[0x18] = (long)(puVar1 + 0x10);
  return;
}

