
void FUN_002b5994(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (((*(long *)(param_1 + 0x70) == 0) || (lVar1 = FUN_002aaa28(), lVar1 == 0)) ||
     (uVar2 = FUN_002aed20(*(undefined8 *)(param_1 + 0x70)), (uVar2 & 1) == 0)) {
    return;
  }
  FUN_002b59e4(param_1);
  FUN_002b6a20(param_1);
  FUN_002b6d6c(param_1);
  FUN_002ace50(param_1);
  return;
}

