
void FUN_003a8a80(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0xc) & 2;
  if ((uint)uVar1 != (param_2 & 2)) {
    (**(code **)(PTR_PTR_04bd0aa8 + uVar1 * 8))(param_1);
  }
  *(uint *)(param_1 + 0xc) = param_2 & 3 | 8;
  return;
}

