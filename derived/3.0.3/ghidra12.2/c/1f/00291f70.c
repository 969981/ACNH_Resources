
undefined8 FUN_00291f70(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar2 == param_1 + 8) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x20) == param_2) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  uVar1 = 1;
  if ((param_3 & 1) == 0) {
    uVar1 = 2;
  }
  *(undefined4 *)(lVar2 + 0x14) = uVar1;
  return 1;
}

