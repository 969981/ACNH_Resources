
void FUN_008a64e0(long param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  byte local_1c;
  byte local_1b;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  bVar1 = (byte)(1 << (ulong)(*param_2 & 0x1f));
  if ((param_3 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x88) & (bVar1 ^ 0xff);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x88) | bVar1;
  }
  *(byte *)(param_1 + 0x88) = bVar1;
  local_1b = param_3 & 1;
  local_1c = *param_2;
  local_18 = 0;
  local_12 = 0;
  if (7 < local_1c) {
    local_1c = 0xff;
  }
  local_14 = 0xff00;
  if (-1 < DAT_053fbc90) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053fbc90,&local_18,&local_1c,2,0);
  }
  return;
}

