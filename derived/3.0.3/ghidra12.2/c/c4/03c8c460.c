
void FUN_03c8c460(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)**(undefined8 **)(param_1 + 0x10))();
  *(undefined4 *)(param_1 + 0x18) = *puVar1;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(puVar1 + 1);
  return;
}

