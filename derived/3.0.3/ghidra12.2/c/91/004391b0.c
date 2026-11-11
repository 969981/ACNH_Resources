
void FUN_004391b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00422030(param_4,0x28,1);
  *puVar1 = 0;
  puVar1[1] = 0x8000000000000000;
  puVar1[2] = 0;
  puVar1[3] = 0x8000000000000000;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  return;
}

