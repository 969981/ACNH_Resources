
undefined8 FUN_003e5fe8(long *param_1,long *param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x110) != param_3)) {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,1,param_4,param_5);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    FUN_003ceb10(*param_2);
    FUN_003ced20(*param_2,1);
  }
  else {
    FUN_003ced20(lVar2,1);
  }
  if ((param_5 != 0) && ((*(byte *)(param_5 + 1) & 1) != 0)) {
    if (*param_2 == 0) {
      return 0;
    }
    FUN_003ceb1c(*param_2,*(undefined4 *)(param_5 + 0x13c));
  }
  return 0;
}

