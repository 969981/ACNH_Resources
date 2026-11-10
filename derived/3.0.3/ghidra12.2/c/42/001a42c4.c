
void FUN_001a42c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined **)(param_1 + 0x128) = puVar1;
  FUN_0018b1a0(param_1 + 0x128);
  *(undefined **)(param_1 + 0x100) = puVar1;
  FUN_0018b1a0(param_1 + 0x100);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0xb0) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0x80) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0x58) = puVar1;
  FUN_0018b1a0();
  *(undefined **)(param_1 + 0x30) = puVar1;
  FUN_0018b1a0();
  *(long *)(param_1 + 8) = (long)puVar1;
  FUN_0018b1a0((long *)(param_1 + 8));
  return;
}

