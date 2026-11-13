
uint FUN_01250cb0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_0277d6c4(lVar1);
  if (((((iVar2 == 0xec9a) || (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xec97)) ||
       (uVar3 = FUN_012509c0(param_1,0), (uVar3 & 1) != 0)) &&
      (uVar4 = *(uint *)(param_1 + 0xc), (uVar4 >> 0x10 & 1) != 0)) ||
     (((iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xec9a ||
       (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xec97)) &&
      (uVar4 = *(uint *)(param_1 + 0xc), (uVar4 >> 0x10 & 1) != 0)))) {
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar4 = 0xfffe;
  }
  return uVar4;
}

