
void FUN_001a6d5c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_04bcc310 + 0x10);
  plVar1 = (long *)param_1[1];
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    if ((int)param_1[0x12] == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
      lVar2 = param_1[0x13];
    }
    else {
      (**(code **)(*plVar1 + 0xf8))(plVar1,(int)param_1[0x12],param_1);
      plVar1 = (long *)param_1[1];
      *(undefined4 *)(param_1 + 0x12) = 0;
      if (plVar1 == (long *)0x0) goto LAB_001a6dd0;
      lVar2 = param_1[0x13];
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar1 + 0xe8))(plVar1,lVar2,param_1);
    }
  }
LAB_001a6dd0:
  param_1[0x13] = 0;
  (**(code **)(**(long **)PTR_DAT_04bcc2e0 + 0x20))(*(long **)PTR_DAT_04bcc2e0,param_1 + 2);
  FUN_001b8504(param_1 + 2);
  return;
}

