
undefined2 FUN_002b28b4(long *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x48))();
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    uVar1 = *(undefined2 *)(lVar2 + 0x1a);
  }
  return uVar1;
}

