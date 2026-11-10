
void FUN_003859f8(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = 0;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_003860ac(puVar1,2);
  FUN_00386098(puVar1,0);
  *(undefined1 *)(param_1 + 0x58) = param_2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

