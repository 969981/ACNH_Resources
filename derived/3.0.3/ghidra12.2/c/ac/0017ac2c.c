
undefined8 FUN_0017ac2c(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[2] = param_3 + 1;
    lVar2 = FUN_001432f0();
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 5;
    }
  }
  else {
    uVar1 = param_3 + param_1[2] + 1;
    if ((ulong)param_1[2] < uVar1) {
      param_1[2] = uVar1;
      lVar2 = FUN_00143310();
      if (lVar2 == 0) {
        FUN_00143300(param_1[1]);
        return 5;
      }
      param_1[1] = lVar2;
    }
  }
  memcpy((void *)(lVar2 + *param_1),param_2,param_3);
  lVar2 = *param_1;
  *param_1 = lVar2 + param_3;
  *(undefined1 *)(param_1[1] + lVar2 + param_3) = 0;
  return 0;
}

