
byte FUN_01250b88(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_0277d6c4(param_1 + 8);
  if (((iVar1 == 0xec9a) || (iVar1 = FUN_0277d6c4(param_1 + 8), iVar1 == 0xec97)) ||
     (uVar2 = FUN_012509c0(param_1,0), (uVar2 & 1) != 0)) {
    return *(byte *)(param_1 + 0xe) & 1;
  }
  return 0;
}

