
void FUN_00153374(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_001533c4();
  while (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    FUN_001532b0(lVar1);
    FUN_00143300(lVar1);
  }
  FUN_00143300(param_1);
  return;
}

