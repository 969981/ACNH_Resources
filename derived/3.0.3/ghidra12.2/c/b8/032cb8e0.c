
long FUN_032cb8e0(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *local_50;
  long lStack_48;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar1 = FUN_0036ab80(param_3,param_2[1]);
  if (lVar1 == 0) {
    for (lVar1 = *(long *)(param_3 + 0x50); lVar1 != param_3 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
      lStack_48 = param_2[1];
      local_50 = &DAT_04b177a8;
      lVar2 = FUN_032cb8e0(param_1,&local_50,*(undefined8 *)(lVar1 + 0x10));
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}

