
void FUN_002257c0(undefined2 *param_1)

{
  undefined2 uVar1;
  
  memset(param_1,0xff,0x388);
  *param_1 = 0x118;
  uVar1 = FUN_00226734();
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 4) = 0xcb56c4f;
  *(undefined4 *)(param_1 + 0x1c2) = 0x5069614d;
  return;
}

