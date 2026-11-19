
undefined8 * FUN_03b156b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00367b14(0x170,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_03b0f0c8(puVar1,param_1,param_2);
    *(undefined1 *)((long)puVar1 + 0x15c) = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    puVar1[0x2d] = 0;
    *puVar1 = &DAT_04b73308;
  }
  return puVar1;
}

