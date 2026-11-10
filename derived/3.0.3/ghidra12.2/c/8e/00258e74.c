
uint FUN_00258e74(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0021fea0(param_1 + 0x2c8);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0021fea0(param_1 + 0x2a8);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_002200e4(param_1 + 0x2a8,param_1 + 0x2c8);
      return (uVar1 ^ 1) & 1;
    }
  }
  return 0;
}

