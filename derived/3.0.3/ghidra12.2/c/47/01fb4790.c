
void FUN_01fb4790(long param_1,int param_2)

{
  FUN_01ea5580();
  if ((param_2 - 3U < 5) && ((*(byte *)(param_1 + 0xafb2) >> 6 & 1) == 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x568) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x570) = 0;
  }
  return;
}

