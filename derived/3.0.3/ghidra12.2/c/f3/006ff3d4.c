
void FUN_006ff3d4(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0xf0))(param_2);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  return;
}

