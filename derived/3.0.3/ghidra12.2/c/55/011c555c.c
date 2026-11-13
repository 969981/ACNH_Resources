
undefined4 FUN_011c555c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar3 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar5 = FUN_0277d6c4(param_1 + 0x284);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      FUN_0124c030(auStack_48,param_1 + 0x284);
      uVar6 = FUN_0123db50(auStack_40,local_38);
      uVar2 = DAT_04da7238;
      switch(uVar6) {
      case 1:
      case 10:
      case 0x20:
        local_30 = FUN_00a8c31c(DAT_04da7238);
        if ((char)(local_30 >> 0x20) < '\x05') {
          local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
          local_28 = local_28 + -0x15180;
          local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
        }
        break;
      default:
        iVar7 = FUN_0123db50(auStack_40,local_38);
        uVar6 = 4;
        if (6 < iVar7 - 0xbU) {
          uVar6 = 6;
        }
        return uVar6;
      case 3:
        return 1;
      case 5:
        return 2;
      case 7:
        return 3;
      case 9:
        return 0;
      }
      uVar8 = local_30 >> 0x10;
      uVar1 = local_30 >> 0x30;
      uVar9 = local_30 >> 0x18;
      local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
      local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
      cVar4 = FUN_00a8ae20(uVar2,uVar8,uVar9,8);
      uVar6 = 5;
      if (2 < (byte)(cVar4 - 1U)) {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
  return 6;
}

