
void FUN_01f572fc(long param_1,int param_2)

{
  undefined *local_30;
  char *pcStack_28;
  
  FUN_01e6648c();
  if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "ApproachUpdateStop";
    FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_30,1);
  }
  if ((param_2 - 3U < 5) && (*(int *)(param_1 + 0x77b8) == 0x1e)) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 1;
  }
  if ((param_2 - 0xcU < 0xfffffffe) && (*(char *)(param_1 + 0x13716) != '\0')) {
    *(undefined1 *)(param_1 + 0x13716) = 0;
  }
  if (4 < param_2 - 3U) {
    if ((0x1a < param_2 - 0x4fU) || ((1 << (ulong)(param_2 - 0x4fU & 0x1f) & 0x7000001U) == 0)) {
      param_2 = -1;
    }
    *(int *)(param_1 + 0x1367c) = param_2;
  }
  return;
}

