
ulong FUN_003e5ad0(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 < 2) {
    param_2 = 1;
  }
  uVar3 = param_2 + 3 & 0xfffffffffffffffc;
  FUN_003e5d88();
  if (param_3 < 0) {
    uVar2 = *(long *)(param_1 + 0x48) + (long)-(int)uVar3 & (long)param_3;
    if (*(ulong *)(param_1 + 0x40) <= uVar2) {
      FUN_003e5db0(param_1,uVar2,(int)*(long *)(param_1 + 0x48) - (int)uVar2);
      *(ulong *)(param_1 + 0x48) = uVar2;
      goto LAB_003e5b70;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    uVar2 = lVar1 + (param_3 + -1) & (long)-param_3;
    uVar3 = uVar2 + uVar3;
    if (uVar3 <= *(ulong *)(param_1 + 0x48)) {
      FUN_003e5db0(param_1,lVar1,(int)uVar3 - (int)lVar1);
      *(ulong *)(param_1 + 0x40) = uVar3;
      goto LAB_003e5b70;
    }
  }
  uVar2 = 0;
LAB_003e5b70:
  FUN_003e5d8c(param_1);
  return uVar2;
}

