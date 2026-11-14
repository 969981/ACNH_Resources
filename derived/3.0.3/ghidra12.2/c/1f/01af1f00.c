
undefined8 FUN_01af1f00(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  uVar2 = FUN_01ad7260();
  if ((int)uVar2 != 0) {
    if ((param_2 == 0) || (iVar1 = FUN_01ad7260(param_1), param_2 < iVar1)) {
      puVar3 = (ushort *)FUN_01afd600(param_1);
      uVar2 = 0;
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 & 0xfff8 | (ushort)param_2 & 7;
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

