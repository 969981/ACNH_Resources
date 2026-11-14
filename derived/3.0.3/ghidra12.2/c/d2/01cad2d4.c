
bool FUN_01cad2d4(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined **local_58;
  long lStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b8));
  if (*(int *)(param_1 + 400) == 0) {
    lVar1 = param_1 + 0x20;
    FUN_01cb1070(lVar1,lVar1,param_2);
    local_48 = FUN_01cad6b0;
    uStack_40 = 0;
    local_58 = &PTR_LAB_04a45668;
    lStack_50 = param_1;
    iVar3 = FUN_01cafcc0(*(undefined8 *)(DAT_05ae6a60 + 0x88),&local_58,param_1 + 0x1d8,0,1,0);
    bVar2 = iVar3 != 0;
    if (iVar3 == 0) {
      if (*(uint *)(param_1 + 400) != 0xffffffff) {
        (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(param_1 + 400)])(&uStack_31,lVar1);
      }
      *(undefined4 *)(param_1 + 400) = 0;
    }
  }
  else {
    bVar2 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b8));
  return bVar2;
}

