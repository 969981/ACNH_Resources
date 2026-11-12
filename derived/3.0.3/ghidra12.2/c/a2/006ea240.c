
void FUN_006ea240(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10);
  uStack_18 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18);
  FUN_00699b20(param_2,&DAT_0414d7b4 + *(int *)(&DAT_0414d7b4 + (long)*(int *)(param_1 + 0x50) * 4),
               &local_20,*(long *)(param_1 + 0x30) + 8,*(long *)(param_1 + 0x28) + 0x20);
  return;
}

