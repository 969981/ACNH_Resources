
void FUN_001d7ae8(long param_1,long *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = *param_3;
  local_18 = *(ulong *)(param_1 + 0x28);
  if (*(ulong *)(param_1 + 0x28) < uVar2) {
    *(ulong *)(param_1 + 0x28) = uVar2;
    local_18 = uVar2;
  }
  FUN_001dcec0(param_1,param_2,&local_18);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
  if (uVar1 != 0xffffffff) {
    uVar2 = 0;
    if ((ulong)uVar1 != 0) {
      uVar2 = (ulong)(*(long *)(*param_2 + 0x18) * 8000) / (ulong)uVar1;
    }
    *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar2;
  }
  return;
}

