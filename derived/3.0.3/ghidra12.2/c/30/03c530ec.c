
void FUN_03c530ec(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  void *__s;
  undefined8 uVar6;
  ulong local_38;
  
  uVar3 = (**(code **)(*DAT_05aed938 + 0x18))();
  lVar1 = DAT_05ae7600;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xf8) == 0 && *(long *)(param_1 + 0x100) == 0) {
    return;
  }
  if (DAT_05ae7600 == 0) {
    __s = malloc(0x20000);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar1 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      __s = (void *)0x0;
    }
    else {
      __s = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x20000,8);
    }
  }
  memset(__s,0,0x20000);
  local_38 = 0;
  iVar2 = nn::account::LoadProfileImage(&local_38,__s,0x20000,(Uid *)(param_1 + 0xf8));
  if (iVar2 == 0) {
    uVar6 = FUN_03eb3fd0(__s,local_38,0,0,0,0x21);
    *(undefined8 *)(param_1 + 0x1b0) = uVar6;
  }
  if (DAT_05ae7600 == 0) {
    free(__s);
  }
  else {
    plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__s);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,__s);
    }
  }
  return;
}

