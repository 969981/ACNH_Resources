
void FUN_0029102c(long *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = (long)(PTR_DAT_04bcdde8 + 0x10);
  param_1[5] = (long)(param_1 + 5);
  param_1[6] = (long)(param_1 + 5);
  FUN_00290394(param_1 + 8);
  param_1[0x10] = 0;
  nn::os::SdkAllocateTlsSlot((TlsSlot *)(param_1 + 0x11),(_func_void_ulong *)0x0);
  return;
}

