
void FUN_002aba30(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bce0d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[4] = puVar1 + 0x10;
  FUN_00227258(param_1 + 8);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  memset(param_1 + 0xe,0,4);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  return;
}

