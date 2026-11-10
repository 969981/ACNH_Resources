
uint FUN_002c2074(void)

{
  uint uVar1;
  ulong uVar2;
  
  if (DAT_04c603c8 == 0) {
    return 1;
  }
  uVar2 = FUN_0026c550();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_0026b3b4(DAT_04c603c8);
    return (uVar1 ^ 1) & 1;
  }
  return 0;
}

