
void FUN_006e0c28(long param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x58);
  uStack_18 = *(undefined8 *)(param_1 + 0x60);
  FUN_00698570(param_2,param_1 + 0x50,&local_20,*(long *)(param_1 + 0x30) + 8,
               *(long *)(param_1 + 0x28) + 0x20);
  return;
}

