
bool FUN_006960f4(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18);
  if (param_3 <= uVar1) {
    memcpy((void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18)),param_2,param_3);
    *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_3;
  }
  return param_3 <= uVar1;
}

