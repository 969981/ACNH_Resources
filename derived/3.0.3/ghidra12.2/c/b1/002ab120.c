
void FUN_002ab120(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_50 = 0x10c07;
  }
  else if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(long *)(param_2 + 0x18) != param_2 + 0x10) {
      iVar1 = *(int *)(param_2 + 0x24);
      lVar2 = *(long *)(param_2 + 0x18) - (long)iVar1;
      do {
        FUN_002aaa5c(lVar2,param_3);
        FUN_002aaa6c(lVar2,param_4);
        lVar2 = *(long *)(lVar2 + *(int *)(param_2 + 0x24) + 8) - (long)*(int *)(param_2 + 0x24);
      } while (lVar2 != (param_2 + 0x10) - (long)iVar1);
    }
    local_50 = 0;
    *(undefined1 *)(param_2 + 0x28) = 1;
  }
  else {
    local_50 = 0x10c08;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

