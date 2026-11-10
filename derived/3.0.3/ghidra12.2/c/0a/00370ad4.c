
void FUN_00370ad4(long *param_1,long param_2)

{
  undefined1 uVar1;
  
  FUN_0037bc10();
  *param_1 = (long)(PTR_DAT_04bd06e0 + 0x10);
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x58);
  uVar1 = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)((long)param_1 + 0xdd) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = uVar1;
  *(byte *)((long)param_1 + 0xdd) = (*(byte *)(param_2 + 0x5d) & 1) << 1 | 1;
  return;
}

