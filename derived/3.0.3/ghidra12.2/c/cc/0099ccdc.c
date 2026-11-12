
void FUN_0099ccdc(long *param_1,long *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(**(code **)(*param_2 + 0xf0))(param_2);
  uVar1 = *puVar2;
  puVar2 = (undefined2 *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar2 = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  return;
}

