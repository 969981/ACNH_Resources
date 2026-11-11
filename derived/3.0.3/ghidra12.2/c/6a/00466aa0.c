
void FUN_00466aa0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0043a810(param_1,0,0x288);
  puVar2 = PTR_LAB_04bd5b00;
  puVar1 = PTR_LAB_04bd5ad8;
  *(undefined **)(param_1 + 0x140) = PTR_LAB_04bd5ac0;
  *(undefined **)(param_1 + 0xa0) = puVar1;
  *(undefined **)(param_1 + 400) = puVar2;
  *(undefined **)(param_1 + 0xf0) = PTR_LAB_04bd5b08;
  return;
}

