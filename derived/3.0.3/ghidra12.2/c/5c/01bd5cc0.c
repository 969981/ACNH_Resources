
void FUN_01bd5cc0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 local_28;
  
  FUN_01bd3dc0();
  local_28 = 0;
  local_48 = 0;
  lVar4 = *(long *)(param_1 + 0x208);
  lVar3 = *(long *)PTR_DAT_04bb28f8;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x29b0));
  lVar2 = lVar3 + 0x29d8;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    if (lVar2 == lVar3 + 0x29d8) {
      lVar2 = 0;
      break;
    }
  } while (*(int *)(lVar2 + -(long)*(int *)(lVar3 + 0x29ec) + 0x10) != *(int *)(lVar4 + 8));
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = lVar2 + -(long)*(int *)(lVar3 + 0x29ec);
  }
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x29b0));
  uVar1 = FUN_01bb55a0(&local_28,&local_48,param_2,lVar4);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01bd574c(param_1,local_28,local_48);
  return;
}

