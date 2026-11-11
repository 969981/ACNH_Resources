
void FUN_004767f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  param_2[4] = *(undefined8 *)(param_1 + 0x50);
  param_2[5] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}

