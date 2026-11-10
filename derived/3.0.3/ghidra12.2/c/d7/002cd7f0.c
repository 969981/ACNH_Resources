
undefined * FUN_002cd7f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 == param_1 + 0x98) {
    return &DAT_04c61308;
  }
  do {
    uVar1 = FUN_002200e4(lVar2 + 0x20,param_2);
    if ((uVar1 & 1) != 0) {
      return (undefined *)(lVar2 + 0x40);
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while (lVar2 != param_1 + 0x98);
  return &DAT_04c61308;
}

