
undefined4 FUN_0025b278(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x420) != 0) {
LAB_0025b28c:
    return *(undefined4 *)(param_1 + 0x474);
  }
  lVar1 = param_1 + 0x2c8;
  uVar2 = FUN_0021fea0(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0021fea0(param_1 + 0x2a8);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x2a8,lVar1), (uVar2 & 1) != 0))
    goto LAB_0025b28c;
  }
  uVar2 = FUN_0021fea0(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0021fea0(param_1 + 0x2a8);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_1 + 0x2a8,lVar1), (uVar2 & 1) == 0))
    goto LAB_0025b28c;
  }
  return 0;
}

