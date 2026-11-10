
void FUN_00143b8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    while (lVar1 != 0) {
      FUN_00143b00(param_1,*(undefined8 *)(param_1 + 8),param_2);
      lVar1 = *(long *)(param_1 + 0x18);
    }
  }
  return;
}

