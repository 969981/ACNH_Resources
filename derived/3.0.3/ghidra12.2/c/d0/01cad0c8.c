
bool FUN_01cad0c8(long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined **local_58;
  long lStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b8));
  if (*(int *)(param_1 + 400) == 0) {
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    FUN_01cb0c40(param_1 + 0x20,param_2);
    *(undefined **)(param_1 + 0x20) = PTR_DAT_04bc0fe0 + 0x10;
    puVar1 = PTR_DAT_04bc0f90 + 0x10;
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined **)(param_1 + 0x100) = puVar1;
    (**(code **)(*(long *)(param_2 + 0xe0) + 0x10))((long *)(param_2 + 0xe0),param_1 + 0x100);
    local_48 = FUN_01cad6b0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 400) = 5;
    local_58 = &PTR_LAB_04a45668;
    lStack_50 = param_1;
    iVar3 = FUN_01cafcc0(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_58,param_1 + 0x1d8
                         ,0,1,0);
    bVar2 = iVar3 != 0;
    if (iVar3 == 0) {
      if (*(uint *)(param_1 + 400) != 0xffffffff) {
        (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(param_1 + 400)])(&uStack_31,param_1 + 0x20);
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

