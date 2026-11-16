
void FUN_02851b88(long param_1)

{
  bool bVar1;
  
  bVar1 = '\x01' < *(char *)(param_1 + 0x37);
  DAT_054542d0._4_4_ = (uint)bVar1;
  if ('\x01' < *(char *)(param_1 + 0x73)) {
    DAT_054542d0._4_4_ = bVar1 | 2;
  }
  if ('\x01' < *(char *)(param_1 + 0xaf)) {
    DAT_054542d0._4_4_ = DAT_054542d0._4_4_ | 4;
  }
  if ('\x01' < *(char *)(param_1 + 0xef)) {
    DAT_054542d0._4_4_ = DAT_054542d0._4_4_ | 8;
  }
  if ('\x01' < *(char *)(param_1 + 299)) {
    DAT_054542d0._4_4_ = DAT_054542d0._4_4_ | 0x10;
  }
  if ('\x01' < *(char *)(param_1 + 0x163)) {
    DAT_054542d0._4_4_ = DAT_054542d0._4_4_ | 0x20;
  }
  if ('\x01' < *(char *)(param_1 + 0x19b)) {
    DAT_054542d0._4_4_ = DAT_054542d0._4_4_ | 0x40;
  }
  return;
}

