
bool FUN_00197454(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x28);
  if (param_2 <= uVar2) {
    *(ulong *)(lVar1 + 0x18) = param_2;
  }
  return param_2 <= uVar2;
}

