
void FUN_006922d4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_006925f4();
  if (lVar1 == 0) {
    FUN_006923c0(param_1);
    lVar1 = FUN_006925f4(param_1);
    *(bool *)(param_1 + 0x10) = lVar1 != 0;
    return;
  }
  FUN_0069242c(param_1);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

