
void FUN_006e1a28(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10);
  uStack_28 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18);
  FUN_0069bf30(&local_30);
  FUN_00697070(param_2,param_1 + 0x58,&local_30,*(long *)(param_1 + 0x30) + 8,
               *(long *)(param_1 + 0x28) + 0x20);
  return;
}

