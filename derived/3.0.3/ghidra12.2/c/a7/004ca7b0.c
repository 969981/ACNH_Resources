
void FUN_004ca7b0(long param_1)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 0x1c) < 6 &&
       (1 << (ulong)(*(uint *)(param_1 + 0x1c) & 0x1f) & 0x32U) != 0) &&
     (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    FUN_004ca7b0(lVar1);
    FUN_00438870(lVar1,0x28);
  }
  FUN_0043be10(param_1 + 8);
  FUN_0043be10(param_1);
  return;
}

