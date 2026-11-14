
bool FUN_01cacf98(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined **local_58;
  long lStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1b8));
  if (*(int *)(param_1 + 400) == 0) {
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    FUN_01cb0af0(param_1 + 0x20,param_2);
    *(undefined **)(param_1 + 0x20) = PTR_DAT_04bc0f30 + 0x10;
    puVar2 = PTR_DAT_04bc0f40;
    uVar1 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    *(undefined **)(param_1 + 0x90) = puVar2 + 0x10;
    (**(code **)(*(long *)(param_2 + 0x70) + 0x10))((long *)(param_2 + 0x70));
    local_48 = FUN_01cad6b0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 400) = 4;
    local_58 = &PTR_LAB_04a45668;
    lStack_50 = param_1;
    iVar4 = FUN_01cafcc0(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_58,param_1 + 0x1d8
                         ,0,1,0);
    bVar3 = iVar4 != 0;
    if (iVar4 == 0) {
      if (*(uint *)(param_1 + 400) != 0xffffffff) {
        (*(code *)(&PTR_LAB_04a454c8)[*(uint *)(param_1 + 400)])(&uStack_31,param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 400) = 0;
    }
  }
  else {
    bVar3 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b8));
  return bVar3;
}

