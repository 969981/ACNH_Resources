
void FUN_036399b0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_1 = (long)(PTR_DAT_04bcaa20 + 0x10);
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x76));
  uVar3 = param_1[0x73];
  uVar2 = param_1[0x75];
  uVar1 = 0;
  if (uVar2 < param_1[0x74] + uVar3) {
    uVar1 = ~uVar2;
  }
  if (uVar1 + param_1[0x74] + uVar3 < uVar3) {
    uVar3 = uVar3 - 1;
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar2);
  }
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  (**(code **)(*(long *)param_1[0x71] + 0x18))((long *)param_1[0x71],param_1[0x72]);
  uVar3 = param_1[0x6e];
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  uVar2 = param_1[0x70];
  uVar1 = 0;
  if (uVar2 < param_1[0x6f] + uVar3) {
    uVar1 = ~uVar2;
  }
  if (uVar1 + param_1[0x6f] + uVar3 < uVar3) {
    uVar3 = uVar3 - 1;
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 <= uVar2);
  }
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  (**(code **)(*(long *)param_1[0x6c] + 0x18))((long *)param_1[0x6c],param_1[0x6d]);
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x68));
  param_1[0x1b] = (long)(PTR_DAT_04bdf380 + 0x10);
  FUN_04002c24(param_1 + 0x1b);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_1[0xe] != 0) {
    param_1[0xf] = 0;
    (**(code **)(*(long *)param_1[0xc] + 0x18))();
    param_1[0xe] = 0;
    param_1[0x10] = 0;
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[6] != 0) {
    param_1[7] = 0;
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[6] = 0;
    param_1[8] = 0;
  }
  return;
}

