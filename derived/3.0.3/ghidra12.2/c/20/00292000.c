
void FUN_00292000(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != param_1 + 8; lVar1 = *(long *)(lVar1 + 8)) {
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  return;
}

