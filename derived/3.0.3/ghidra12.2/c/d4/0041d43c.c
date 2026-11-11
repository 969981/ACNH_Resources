
void FUN_0041d43c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  FUN_0019a224(param_1,2,"SmartDeviceVoiceChatActivateCompleteCallback",param_2);
  *param_1 = &PTR_thunk_FUN_0019a324_04852be0;
  param_1[0x17] = param_3;
  param_1[0x18] = &PTR_FUN_04b7c168;
  uVar1 = *(undefined8 *)(param_4 + 8);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_4 + 0x10);
  param_1[0x19] = uVar1;
  return;
}

