
void FUN_0360a064(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x520) = 2;
  *(undefined4 *)(param_1 + 0x950) = 0xffffffff;
  *(undefined **)(param_1 + 0xe00) = PTR_DAT_04bdf380 + 0x10;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x960) = 0;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined8 *)(param_1 + 0x1030) = 0;
  *(undefined4 *)(param_1 + 0x1038) = 0;
  uVar1 = DAT_05b059a0;
  *(undefined8 *)(param_1 + 0x1040) = 0;
  *(undefined8 *)(param_1 + 0x1048) = 0;
  *(undefined8 *)(param_1 + 0x1050) = 0;
  *(undefined8 *)(param_1 + 0x1058) = 0;
  *(undefined4 *)(param_1 + 0x1060) = 0;
  *(undefined8 *)(param_1 + 0x518) = uVar1;
  *(undefined4 *)(param_1 + 0x1070) = 0;
  *(undefined8 *)(param_1 + 0x1478) = 0;
  *(undefined8 *)(param_1 + 0x1480) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1488,0,1);
  nn::os::InitializeLightEvent(param_1 + 0x1494,0,1);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x14b4));
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x14c0),true,0);
  *(undefined2 *)(param_1 + 0x106e) = 0;
  if (param_1 + -0x1100 == param_2) {
    return;
  }
  FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  return;
}

