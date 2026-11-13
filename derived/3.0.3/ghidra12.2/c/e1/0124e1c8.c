
undefined8 FUN_0124e1c8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),4);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),0), (uVar2 & 1) == 0)) &&
     (uVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), uVar1 < 0x21)) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x10000048aU) != 0) {
      return 1;
    }
    if (((1L << ((ulong)uVar1 & 0x3f) & 0x220U) != 0) && ((*(byte *)(param_1 + 0xe) & 0x18) == 0)) {
      uVar3 = FUN_0123b5b0(*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    }
  }
  return 0;
}

