
long FUN_032d31f0(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *local_50;
  long lStack_48;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  iVar1 = strcmp((char *)(param_2 + 0xb0),(char *)param_3[1]);
  if (iVar1 != 0) {
    for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != param_2 + 0x20; lVar3 = *(long *)(lVar3 + 8)) {
      lStack_48 = param_3[1];
      local_50 = &DAT_04b177a8;
      lVar2 = FUN_032d31f0(param_1,lVar3 + -8,&local_50);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    param_2 = 0;
  }
  return param_2;
}

