
void FUN_003c3cb0(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a));
  plVar1 = (long *)param_1[0xc];
  *(undefined1 *)((long)param_1 + 0xf2) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,0xffffffff);
  }
  param_1[0xc] = (long)param_2;
  (**(code **)(*param_2 + 0x18))(param_2,1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a));
  uVar2 = FUN_003c5b84();
  lVar3 = FUN_003cbb70(uVar2,0x20,1);
  *(long **)(lVar3 + 0x18) = param_1;
  *(undefined4 *)(lVar3 + 8) = 0x4a;
  FUN_003cc15c(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x003c3d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,1);
  return;
}

