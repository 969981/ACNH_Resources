
long FUN_0024403c(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  memcpy((void *)(param_1 + 0x2c),(void *)(param_2 + 0x2c),0x180);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  memcpy((void *)(param_1 + 0x14),(void *)(param_2 + 0x14),0x18);
  return param_1;
}

