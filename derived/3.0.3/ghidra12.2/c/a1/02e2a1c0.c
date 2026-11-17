
void FUN_02e2a1c0(long param_1,undefined4 *param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x338) = *param_2;
  *(undefined4 *)(param_1 + 0x33c) = param_2[1];
  *(undefined4 *)(param_1 + 0x340) = param_2[2];
  *(undefined4 *)(param_1 + 0x344) = param_2[3];
  *(undefined4 *)(param_1 + 0x348) = param_2[4];
  *(undefined1 *)(param_1 + 0x34c) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x34d) = *(undefined1 *)((long)param_2 + 0x15);
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 800) = *param_2;
    *(undefined4 *)(param_1 + 0x324) = param_2[1];
    *(undefined4 *)(param_1 + 0x328) = param_2[2];
    *(undefined4 *)(param_1 + 0x32c) = param_2[3];
    *(undefined4 *)(param_1 + 0x330) = param_2[4];
    *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(param_1 + 0x335) = *(undefined1 *)((long)param_2 + 0x15);
  }
  return;
}

