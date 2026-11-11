
void FUN_00453c40(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_04bd5178;
  *(undefined **)(param_1 + 0xa8) = PTR_LAB_04bd5188;
  *(undefined **)(param_1 + 0xb0) = puVar1;
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x2c0;
  *(undefined **)(param_1 + 0xc0) = PTR_LAB_04bd5180;
  return;
}

