
void FUN_004774c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_04865308;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_0047db20(param_1 + 3);
  param_1[0x16] = 0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  param_1[0x15] = 0;
  FUN_0043d3a0(param_1 + 0x17);
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x1b);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x1f);
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x23);
  param_1[0x25] = 0;
  param_1[0x26] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x27);
  param_1[0x29] = 0;
  param_1[0x2a] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x2b);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x2f);
  FUN_0043cbe0(param_1 + 0x31);
  param_1[0x35] = 0;
  param_1[0x36] = 0x8000000000000000;
  *(undefined2 *)(param_1 + 0x37) = 0;
  puVar1 = (undefined8 *)FUN_00438810(0x70);
  puVar1[2] = 0;
  puVar1[0xb] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[6] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0x80000000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_0043d3a0();
  puVar1[4] = 0;
  puVar1[5] = 0x8000000000000000;
  FUN_0043d3a0(puVar1 + 6);
  puVar1[8] = 0;
  puVar1[9] = 0x8000000000000000;
  FUN_0043cbe0(puVar1 + 10);
  param_1[0x12] = puVar1;
  return;
}

