
void FUN_00169b84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0xb8);
  bVar1 = uVar3 <= (ulong)(param_4 - param_3);
  lVar2 = param_3 + uVar3;
  if (!bVar1) {
    lVar2 = param_4;
  }
  lVar2 = FUN_0016bb10(param_1 + 0x40,param_2,param_3,lVar2 - param_3,bVar1);
  if (-1 < lVar2) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) - lVar2;
  }
  return;
}

