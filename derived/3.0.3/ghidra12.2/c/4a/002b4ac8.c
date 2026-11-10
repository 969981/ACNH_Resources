
long FUN_002b4ac8(long *param_1)

{
  long lVar1;
  
  if (param_1[0x13] == 0) {
    lVar1 = (**(code **)(*param_1 + 0x20))();
    param_1[0x13] = lVar1;
    return lVar1;
  }
  return 0;
}

