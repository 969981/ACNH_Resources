
void FUN_001f3e98(long param_1,long param_2)

{
  *(long *)(param_1 + 8) = (long)(PTR_DAT_04bc0ec8 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 **)(param_1 + 0x20) = (undefined1 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0x10;
  FUN_0018b070((long *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0x30) = 0;
  memset((void *)(param_1 + 0x34),0,0x400);
  return;
}

