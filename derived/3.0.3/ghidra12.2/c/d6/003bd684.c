
long FUN_003bd684(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_003bd940(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_003bd968(lVar1);
    *(undefined8 *)(lVar1 + 0x1d8) = param_2;
    *(undefined8 *)(lVar1 + 0x1e8) = *(undefined8 *)(param_1 + 8);
  }
  return lVar1;
}

