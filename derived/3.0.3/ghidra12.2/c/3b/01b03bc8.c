
undefined8 FUN_01b03bc8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  uVar1 = FUN_01b032d0();
  if ((((uVar1 & 1) == 0) || (uVar1 = FUN_01b032d0(param_1), (uVar1 & 1) == 0)) ||
     ((*(byte *)(param_1 + 0xb) & 3) != 3)) {
    return 0;
  }
  uVar1 = FUN_01b032d0(param_1);
  bVar3 = *(byte *)(param_1 + 0xb) >> 2 & 0xf;
  if ((uVar1 & 1) == 0) {
    bVar3 = 1;
  }
  uVar2 = FUN_01b03610(bVar3);
  return uVar2;
}

