
void FUN_00405eb8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ef8;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)&PTR_LAB_04a426b8;
  param_1[8] = (long)(param_1 + 6);
  param_1[9] = 0x10;
  FUN_0019d7fc(param_1 + 0xb,0,0);
  *(undefined2 *)(param_1 + 0x13) = 0x300;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = (long)&PTR_LAB_04a42918;
  FUN_01c68940(param_1 + 0x14,0,0,0);
  *(undefined2 *)(param_1 + 0x18) = 0x300;
  param_1[0x19] = 0;
  param_1[0x17] = (long)&PTR_LAB_04a42918;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_01c68940(param_1 + 0x19,0,0,0);
  FUN_00186524(param_1 + 0x1c);
  FUN_00186524(param_1 + 0x1d);
  FUN_00186524(param_1 + 0x20);
  FUN_00186524(param_1 + 0x21);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar1 = PTR_DAT_04bc0ef0 + 0x10;
  param_1[2] = 0;
  *param_1 = (long)puVar1;
  return;
}

