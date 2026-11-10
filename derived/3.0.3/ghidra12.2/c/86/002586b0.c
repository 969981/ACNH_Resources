
uint FUN_002586b0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x2c8;
  uVar3 = FUN_0021fea0(lVar1);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_0021fea0(param_1 + 0x2a8);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN_002200e4(param_1 + 0x2a8,lVar1), (uVar3 & 1) != 0)) {
      return 1;
    }
  }
  uVar3 = FUN_0021fea0(lVar1);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_0021fea0(param_1 + 0x2a8);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_002200e4(param_1 + 0x2a8,lVar1);
      return (uVar2 ^ 1) & 1;
    }
  }
  return 0;
}

