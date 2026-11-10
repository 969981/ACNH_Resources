
void FUN_001a8230(long param_1)

{
  undefined *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  undefined8 *puStack_18;
  
  *(undefined1 *)(param_1 + 0x278) = 0;
  *(long *)(param_1 + 0x318) = *(long *)(param_1 + 0x268);
  if (*(long *)(param_1 + 0x268) == param_1 + 0x260) {
    puStack_28 = PTR_LAB_04bcc380;
  }
  else {
    puStack_28 = PTR_LAB_04bcc378;
  }
  local_30 = PTR_DAT_04bcc0c0 + 0x10;
  local_20 = 0;
  puStack_18 = &DAT_0407ebb1;
  FUN_0019a704(param_1,&local_30);
  return;
}

