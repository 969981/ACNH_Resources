
void FUN_00460560(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00438810(8);
  *puVar1 = &PTR_LAB_04863228;
  FUN_004619b0(param_1,puVar1);
  puVar1 = (undefined8 *)FUN_00438810(0x10);
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_LAB_04863258;
  FUN_004619b0(param_1,puVar1);
  puVar1 = (undefined8 *)FUN_00438810(8);
  *puVar1 = &PTR_LAB_048631f8;
  FUN_004619b0(param_1,puVar1);
  return;
}

