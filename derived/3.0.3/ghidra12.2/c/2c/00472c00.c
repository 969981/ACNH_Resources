
int FUN_00472c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *local_1c8;
  long local_1c0;
  int local_1b8;
  long alStack_1a0 [42];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    iVar2 = -0x7ffbfe00;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x10));
    FUN_0043a3b0(alStack_1a0,param_1 + 0x210,*(int *)(param_1 + 0x358) << 3);
    iVar2 = *(int *)(param_1 + 0x358);
    alStack_1a0[iVar2] = param_1 + 0x58;
    FUN_00472d50(&local_1c8,*(undefined8 *)PTR_PTR_04bd4cb8,alStack_1a0,iVar2 + 1,param_2,param_3);
    iVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x38))
                      (*(long **)(param_1 + 0x48),DAT_04bd4ca0,&local_1c8);
    if (local_1c0 != 0) {
      (**(code **)(*local_1c8 + 0x18))(local_1c8,local_1c0,(long)local_1b8 << 3);
    }
    if (-1 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x358);
      if (0 < iVar2) {
        uVar3 = 0;
        do {
          lVar1 = uVar3 * 8;
          uVar3 = uVar3 + 1;
          FUN_00474000(*(undefined8 *)(param_1 + 0x210 + lVar1),param_2,uVar3 & 0xffffffff,param_3);
          iVar2 = *(int *)(param_1 + 0x358);
        } while ((long)uVar3 < (long)iVar2);
      }
      FUN_00474000(param_1 + 0x58,param_2,iVar2 + 1,param_3);
      iVar2 = 0;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
  }
  return iVar2;
}

