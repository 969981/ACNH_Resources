
void FUN_01c714fc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x118);
  uVar2 = (**(code **)(*(long *)(param_1 + 0x118) + 0x10))(puVar1);
  if ((uVar2 & 1) != 0) {
    (**(code **)*puVar1)(puVar1);
    *puVar1 = &PTR_FUN_048fc6e0;
  }
  return;
}

