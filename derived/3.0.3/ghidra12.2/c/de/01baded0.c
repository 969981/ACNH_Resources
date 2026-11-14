
void FUN_01baded0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  lVar4 = *(long *)PTR_DAT_04bb28f8;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x29b0));
  iVar2 = *(int *)(lVar4 + 0x29ec);
  lVar5 = lVar4 + 0x29d8;
  do {
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 == lVar4 + 0x29d8) {
      lVar5 = 0;
      break;
    }
  } while (*(int *)(lVar5 + -(long)iVar2 + 0x10) != *(int *)(param_1 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x29b0));
  if ((lVar5 != 0) && (lVar5 = lVar5 + -(long)iVar2, lVar5 != 0)) {
    local_4c = param_2;
    uStack_48 = param_3;
    local_44 = param_4;
    while (plVar3 = (long *)FUN_01bc0860(lVar5,&local_4c,1), plVar3 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar5 + 0x2c) + (long)plVar3);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + -1;
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  return;
}

