
bool FUN_01cad4e4(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined **local_58;
  long lStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b8));
  if (*(int *)(param_1 + 400) == 0) {
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    FUN_01cb11c0(param_1 + 0x20,param_2);
    *(undefined4 *)(param_1 + 400) = 9;
    local_48 = FUN_01cad6b0;
    uStack_40 = 0;
    local_58 = &PTR_LAB_04a45668;
    lStack_50 = param_1;
    iVar2 = FUN_01cafcc0(*(undefined8 *)(DAT_05ae6a60 + 0x88),&local_58,param_1 + 0x1d8,0,1,0);
    bVar1 = iVar2 != 0;
    if (iVar2 == 0) {
      if (*(uint *)(param_1 + 400) != 0xffffffff) {
        (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(param_1 + 400)])(&uStack_31,param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 400) = 0;
    }
  }
  else {
    bVar1 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b8));
  return bVar1;
}

