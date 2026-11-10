
undefined8 FUN_0025c780(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x485) == '\0' || *(int *)(param_1 + 0x420) != 0) {
    return 0;
  }
  lVar1 = param_1 + 0x2c8;
  uVar2 = FUN_0021fea0(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0021fea0(param_1 + 0x2a8);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x2a8,lVar1), (uVar2 & 1) != 0)) {
      return 0;
    }
  }
  uVar2 = FUN_0021fea0(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0021fea0(param_1 + 0x2a8);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_002200e4(param_1 + 0x2a8,lVar1);
      return uVar3;
    }
  }
  return 1;
}

