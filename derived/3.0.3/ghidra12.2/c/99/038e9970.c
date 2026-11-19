
void FUN_038e9970(long *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short local_30;
  char local_2e;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  PosixTime aPStack_28 [8];
  
  if (DAT_05ae7884 == '\0') {
    uVar4 = nn::time::IsInitialized();
    if ((uVar4 & 1) == 0) {
      nn::time::Initialize();
    }
    DAT_05ae7884 = '\x01';
  }
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_28);
  nn::time::ToCalendarTime((CalendarTime *)&local_30,(CalendarAdditionalInfo *)0x0,aPStack_28);
  uVar7 = (uint)local_30;
  iVar6 = local_2d + -1;
  iVar5 = (int)local_2d;
  if (((uVar7 * -0x3d70a3d7 >> 2 | uVar7 * 0x40000000) < 0x28f5c29 || (uVar7 & 3) != 0) &&
      0xa3d70a < (uVar7 * -0x3d70a3d7 >> 4 | uVar7 * -0x70000000)) {
    iVar5 = iVar6;
  }
  if (2 < (uint)(int)local_2e) {
    iVar6 = iVar5;
  }
  uVar7 = (uint)local_30;
  iVar5 = *(int *)(&DAT_041b2420 + (ulong)((int)local_2e - 1) * 4) + uVar7 * 0x16d +
          iVar6 + -0xaf8ca;
  if (0x7b2 < uVar7) {
    iVar6 = 0;
    uVar4 = 0x7b2;
    do {
      uVar1 = iVar6 + 0x7b2;
      bVar2 = (int)(uVar4 / 100) * 100 + -0x7b2 != iVar6;
      bVar3 = (int)(uVar4 / 400) * 400 + -0x7b2 == iVar6;
      iVar6 = iVar6 + 1;
      if ((uVar1 & 3) == 0 && bVar2 || bVar3) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar7 - 0x7b2 != iVar6);
  }
  *param_1 = (ulong)(uint)((int)local_2a + ((int)local_2b + local_2c * 0x3c) * 0x3c) +
             (long)iVar5 * 0x15180;
  return;
}

