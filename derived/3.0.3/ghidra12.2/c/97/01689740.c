
uint FUN_01689740(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_40;
  ulong local_38;
  
  FUN_01684bcc();
  uVar2 = DAT_04da7238;
  lVar9 = 0;
  iVar7 = 0;
  do {
    uVar4 = *(uint *)(param_1 + 0x19058 + lVar9);
    lVar9 = lVar9 + 4;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    iVar7 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + iVar7;
  } while (lVar9 != 0x1000);
  if (iVar7 == 0) {
    uVar4 = 0;
  }
  else {
    local_40 = FUN_00a8c31c(DAT_04da7238);
    if ((char)(local_40 >> 0x20) < '\x05') {
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_38 = lVar9 - 0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar5 = local_40 >> 0x10;
    uVar1 = local_40 >> 0x30;
    uVar6 = local_40 >> 0x18;
    local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
    local_40 = CONCAT26((short)uVar1,(undefined6)local_40) & 0xff00ffffffffffff;
    cVar3 = FUN_00a8ae20(uVar2,uVar5,uVar6);
    if (cVar3 == '\x01') {
      FUN_01689570(&local_38);
    }
    else {
      uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      uVar8 = (uint)((ulong)uVar4 * 100 >> 0x20);
      if (uVar8 < 6) {
        lVar9 = 0;
      }
      else if (uVar8 < 0x11) {
        lVar9 = 1;
      }
      else if (uVar8 < 0x1c) {
        lVar9 = 2;
      }
      else if (uVar8 < 0x27) {
        lVar9 = 3;
      }
      else if (uVar8 < 0x32) {
        lVar9 = 4;
      }
      else {
        lVar9 = 5;
        if (0x45 < uVar8) {
          lVar9 = 6;
        }
      }
      local_38 = (ulong)(ushort)(&DAT_0417695c)[lVar9];
      DAT_05582b7c = uVar4;
      FUN_0277d4ac(&local_38);
    }
    if ((param_3 & 1) == 0) {
      uVar4 = FUN_01687f00(param_1,&local_38,5,param_2);
    }
    else {
      uVar4 = FUN_01687c60();
    }
  }
  return uVar4 & 1;
}

