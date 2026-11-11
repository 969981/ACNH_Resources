
void FUN_0039865c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((long)puVar1 + 0x49) & 1) == 0)) {
    (**(code **)*puVar1)(puVar1);
    FUN_00367b50(puVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

