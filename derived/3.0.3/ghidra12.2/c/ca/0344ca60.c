
uint FUN_0344ca60(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_16c2 [2];
  undefined1 auStack_16c0 [5792];
  
  FUN_007ef010(auStack_16c2,param_1);
  FUN_007e4920(auStack_16c0,auStack_16c2);
  uVar1 = FUN_007e68d0(auStack_16c0);
  if ((uVar1 < 0x18) && ((1 << (ulong)(uVar1 & 0x1f) & 0xe001fcU) != 0)) {
    uVar1 = 1;
  }
  else {
    FUN_007ef010(auStack_16c2,param_1);
    FUN_007e4920(auStack_16c0,auStack_16c2);
    uVar1 = FUN_007e68d0(auStack_16c0);
    uVar1 = (uint)(uVar1 < 0x15) & 0x1c7e00U >> (ulong)(uVar1 & 0x1f);
  }
  return uVar1;
}

