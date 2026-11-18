
uint FUN_0344cb20(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_16c0 [5792];
  undefined1 auStack_2 [2];
  
  FUN_007ef010(auStack_2,param_1);
  FUN_007e4920(auStack_16c0,auStack_2);
  uVar1 = FUN_007e68d0(auStack_16c0);
  return (uint)(uVar1 < 0x1a) & 0x3038000U >> (ulong)(uVar1 & 0x1f);
}

