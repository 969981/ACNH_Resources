
void thunk_FUN_002a4a20(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_00285dc0(puVar1);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

