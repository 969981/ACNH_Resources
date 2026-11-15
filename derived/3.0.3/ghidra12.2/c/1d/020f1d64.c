
void FUN_020f1d64(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_18;
  
  lVar2 = FUN_021c9770((long)*param_1,1);
  if (lVar2 == 0) {
    return;
  }
  if (param_1[1] == 0) {
    *(undefined4 *)(lVar2 + 700) = 0;
    *(undefined2 *)(lVar2 + 0x2c0) = 0;
    *(undefined4 *)(lVar2 + 0x2c2) = 0x101;
    *(undefined1 *)(lVar2 + 0x2c6) = 0;
    *(undefined1 *)(lVar2 + 0x2c8) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(lVar2 + 700) = (int)param_1[1];
    uVar4 = *(ulong *)(DAT_04da6480 + 0x4060);
    *(ulong *)(lVar2 + 0x2c0) = uVar4;
    if ((uVar4 & 0xffff) != 0) {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar2 + 0x2c0));
      local_18 = local_18 + iVar1;
      uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      *(undefined8 *)(lVar2 + 0x2c0) = uVar3;
    }
    *(byte *)(lVar2 + 0x2c8) = (byte)((ulong)(long)iVar1 >> 0x1f) & 1;
  }
  *(undefined1 *)(lVar2 + 0x2c9) = 0xff;
  FUN_021cad10(lVar2);
  return;
}

