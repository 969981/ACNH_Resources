
bool FUN_01cad3b4(long param_1,long param_2)

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
    FUN_01c6e580(param_1 + 0x20,param_2);
    *(undefined **)(param_1 + 0x20) = PTR_DAT_04bc0fa0 + 0x10;
    puVar1 = PTR_DAT_04bc0f90;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x78);
    *(undefined **)(param_1 + 0xa0) = puVar1 + 0x10;
    (**(code **)(*(long *)(param_2 + 0x80) + 0x10))((long *)(param_2 + 0x80));
    local_48 = FUN_01cad6b0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 400) = 8;
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

