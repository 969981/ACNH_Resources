
void FUN_0072720c(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xf0))(param_2);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar2 = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  return;
}

