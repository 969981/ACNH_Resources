
void FUN_01bc3e70(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_1[0x41];
  lVar5 = *(long *)PTR_DAT_04bb28f8;
  nn::os::LockMutex((MutexType *)(lVar5 + 0x29b0));
  iVar1 = *(int *)(lVar5 + 0x29ec);
  lVar6 = lVar5 + 0x29d8;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == lVar5 + 0x29d8) {
      lVar6 = 0;
      break;
    }
  } while (*(int *)(lVar6 + -(long)iVar1 + 0x10) != *(int *)(lVar4 + 8));
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x29b0));
  if (((lVar6 == 0) || (lVar6 = lVar6 + -(long)iVar1, lVar6 == 0)) ||
     (plVar2 = (long *)FUN_01bc06e0(lVar6,param_2,1), plVar2 == (long *)0x0)) {
    return;
  }
  uVar3 = (**(code **)(*plVar2 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x01bc3f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,uVar3,param_1[0x41],param_1 + 0x43);
  return;
}

