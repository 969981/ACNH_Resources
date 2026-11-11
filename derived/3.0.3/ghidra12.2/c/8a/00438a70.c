
undefined8 * FUN_00438a70(long *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,(long)(param_2 + 0x10),0);
  *puVar1 = param_1;
  *(int *)(puVar1 + 1) = param_2;
  return puVar1 + 2;
}

