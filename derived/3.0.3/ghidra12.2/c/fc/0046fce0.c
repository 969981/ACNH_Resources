
void FUN_0046fce0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  FUN_00442640();
  param_1[3] = 0;
  param_1[4] = 0xffffffff00000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar1 = &LAB_00442b00;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  *param_1 = &PTR_LAB_04864c80;
  param_1[7] = puVar1;
  param_1[8] = param_3;
  FUN_0043cbe0(param_1 + 10);
  return;
}

