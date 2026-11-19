
void FUN_038b91b4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)((long)param_1 + 0x243) == '\0') {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04bbd7c0;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x118));
  plVar1 = param_1 + 0x49;
  *(undefined1 *)((long)param_1 + 0x241) = 1;
  uVar2 = (**(code **)(param_1[0x49] + 0x10))(plVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)PTR_DAT_04bcf4f8)(param_1[0x39],1,param_1 + 0x41);
  }
  else {
    (**(code **)*plVar1)(plVar1);
  }
  (**(code **)PTR_DAT_04bcff38)(param_1[0x39],param_1[0x3e],0,0);
  (**(code **)PTR_DAT_04bcf500)(param_1[0x39]);
  uVar2 = param_1[0x37];
  uVar3 = (**(code **)PTR_DAT_04bcfcd0)(param_1[0x31]);
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = param_1[0x38];
  param_1[0x37] = uVar2;
  uVar2 = (*DAT_04c62808)(param_1[0x31]);
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  param_1[0x38] = uVar3;
  (**(code **)(*param_1 + 0x100))(param_1);
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x118));
  return;
}

