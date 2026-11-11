
undefined8 FUN_003e5344(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  FUN_003b8218(param_2,param_3);
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  uVar2 = param_2 + 0xfffU & 0xfffffffffffff000;
  if (uVar2 - param_2 <= param_3) {
    uVar4 = param_3 - (uVar2 - param_2) & 0xfffffffffffff000;
    uVar1 = FUN_003e55c0(param_1 + 0x28,uVar2,uVar4);
    if ((uVar1 & 1) != 0) {
      FUN_003cd608(param_1 + 0x40,uVar2,uVar4);
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x48) = 1;
      goto LAB_003e53c8;
    }
  }
  uVar3 = 0;
LAB_003e53c8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return uVar3;
}

