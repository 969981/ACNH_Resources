
void FUN_002a4cd4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_002aaa28();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  FUN_002aa9e8(param_1);
  return;
}

