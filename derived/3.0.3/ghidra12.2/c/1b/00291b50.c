
void FUN_00291b50(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar1 == param_1 + 8) {
      return;
    }
    if (*(long *)(lVar1 + 0x20) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  uVar2 = 1;
  if ((param_3 & 1) != 0) {
    uVar2 = 2;
  }
  *(undefined4 *)(lVar1 + 0x10) = uVar2;
  return;
}

