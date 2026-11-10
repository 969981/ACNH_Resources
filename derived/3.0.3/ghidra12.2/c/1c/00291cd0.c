
void FUN_00291cd0(long param_1,long param_2,byte param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != param_1 + 8) {
    do {
      if (*(long *)(lVar1 + 0x20) == param_2) {
        *(byte *)(lVar1 + 0x18) = param_3 & 1;
      }
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1 + 8);
  }
  return;
}

