
void FUN_038c69f0(undefined8 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b64428;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = DAT_05ae7600;
  if (param_2 == 0) {
    if (param_3 < 2) {
      if (DAT_05ae7600 == 0) {
        return;
      }
      param_2 = FUN_038cb610(DAT_05ae7600,param_1);
      param_1[1] = param_2;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      if (DAT_05ae7600 == 0) {
        return;
      }
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar1 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xa8);
      }
      param_2 = *plVar1;
      param_1[1] = param_2;
    }
    if (param_2 == 0) {
      return;
    }
  }
  if ((*(uint *)(param_2 + 0xd0) & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_2 + 0x90;
    nn::os::LockMutex((MutexType *)(param_2 + 0xb0));
  }
  plVar3 = (long *)(param_2 + 0x70);
  lVar2 = *plVar3;
  plVar1 = (long *)((long)*(int *)(param_2 + 0x84) + (long)param_1);
  *plVar3 = (long)plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)plVar3;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 8) = plVar1;
  }
  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  if (lVar4 == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
  return;
}

