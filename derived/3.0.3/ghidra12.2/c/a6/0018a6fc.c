
void FUN_0018a6fc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(long *)(param_1 + 0x28) + (long)(int)param_2;
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  *(ulong *)(param_1 + 0x28) = uVar1 - uVar2 * uVar3;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - param_2;
  return;
}

