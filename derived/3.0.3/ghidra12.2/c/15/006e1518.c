
void FUN_006e1518(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58);
  local_28 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10);
  uStack_20 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18);
  FUN_00697110(param_2,param_1 + 0x58,&local_18,&local_28,*(long *)(param_1 + 0x30) + 8,
               *(long *)(param_1 + 0x28) + 0x20);
  return;
}

