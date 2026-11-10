
long FUN_002ca260(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar2 == param_1 + 8) {
      return 0;
    }
    uVar1 = FUN_002c98cc(lVar2 + 0x18,param_2);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2 + 0x10;
}

