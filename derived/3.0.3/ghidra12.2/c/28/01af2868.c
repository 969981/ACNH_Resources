
byte FUN_01af2868(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01b032d0();
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_01b032d0(param_1);
    bVar1 = bVar1 & (*(byte *)(param_1 + 0xb) & 3) != 0;
  }
  return bVar1;
}

