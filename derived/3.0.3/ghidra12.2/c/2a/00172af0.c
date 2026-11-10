
undefined8 FUN_00172af0(long param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xe4) & (param_2 ^ 0xff);
  *(byte *)(param_1 + 0xe4) = bVar1;
  if ((bVar1 & 0xc) == 0) {
    uVar2 = FUN_00172cdc(*(undefined8 *)(param_1 + 0x70),param_1);
    return uVar2;
  }
  return 0;
}

