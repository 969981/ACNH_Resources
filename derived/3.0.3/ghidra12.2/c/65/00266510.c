
undefined8 FUN_00266510(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bc1510;
  lVar2 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar2 = *(long *)(lVar2 + 0x20);
  while( true ) {
    lVar3 = FUN_002ba790(*(undefined8 *)puVar1);
    if (lVar2 == lVar3 + 0x18) {
      return 1;
    }
    lVar3 = *(long *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x4c) == 5) &&
       (lVar4 = FUN_002ba790(*(undefined8 *)puVar1), lVar3 != *(long *)(lVar4 + 0x98))) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  if (*(ulong *)(DAT_04c5fbb0 + 0x30) < *(ulong *)(param_1 + 0xc0)) {
    return 5;
  }
  return 1;
}

