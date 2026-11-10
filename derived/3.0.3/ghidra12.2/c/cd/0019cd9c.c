
long FUN_0019cd9c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x10);
  lVar1 = *plVar3;
  uVar2 = *(long *)(param_1 + 0x18) - lVar1;
  if (param_2 >= uVar2 && param_2 - uVar2 != 0) {
    FUN_001a3250(plVar3,param_2 - uVar2);
    return *plVar3;
  }
  if (param_2 < uVar2) {
    *(ulong *)(param_1 + 0x18) = lVar1 + param_2;
  }
  return lVar1;
}

