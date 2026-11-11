
bool FUN_003d2ec8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_003b8218(param_2,param_3);
  uVar1 = param_2 + param_3;
  uVar2 = param_2 + 0xfffU & 0xfffffffffffff000;
  if (uVar2 <= uVar1) {
    *(ulong *)(param_1 + 0x10) = uVar2;
    *(ulong *)(param_1 + 0x18) = uVar1;
    *(ulong *)(param_1 + 0x20) = uVar2;
  }
  return uVar2 <= uVar1;
}

