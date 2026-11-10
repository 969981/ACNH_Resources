
void FUN_0022cd88(long param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_002931e4();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  memcpy((void *)(param_1 + 0x18),(void *)(param_2 + 0x18),0x18);
  memcpy((void *)(param_1 + 0x30),(void *)(param_2 + 0x30),0x180);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1b4) = *(undefined1 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  return;
}

