
bool FUN_0087d754(undefined8 param_1,undefined4 *param_2,ulong *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_48;
  long local_28;
  
  local_48 = *param_3;
  uVar10 = (uint)local_48 & 0xffff;
  uVar9 = (uint)local_48 >> 0x10 & 0xff;
  uVar11 = (uint)(local_48 >> 0x18);
  if ((param_4 & 1) != 0) {
    if ((char)(local_48 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = local_28 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      uVar10 = (uint)local_48 & 0xffff;
      uVar9 = (uint)local_48 >> 0x10 & 0xff;
    }
    uVar11 = (uint)(local_48 >> 0x18);
    uVar4 = local_48 >> 0x30;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar4,(undefined6)local_48) & 0xff00ffffffffffff;
  }
  if ((DAT_05574040 == 0) || (lVar7 = FUN_026eec4c(DAT_05574040,*param_2), lVar7 == 0)) {
    bVar5 = false;
  }
  else {
    if ((*(long **)(lVar7 + 0x18390) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18390), puVar8 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      uVar6 = uVar6 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar7 + 0x18378) + *(long *)(lVar7 + 0x18370));
    bVar2 = *pbVar1;
    if ((bVar2 - 1 < 0xc) &&
       (bVar3 = pbVar1[1], (byte)(bVar3 - 1) < (byte)(&DAT_0417b531)[bVar2 - 1])) {
      if ((bVar2 == 2 && bVar3 == 0x1d) &&
         (((uVar10 & 3) != 0 ||
          (((uVar10 * -0x3d70a3d7 >> 2 | uVar10 * 0x40000000) < 0x28f5c29 && ((uVar10 & 0xf) != 0)))
          ))) {
        bVar5 = (uVar11 & 0xff) == 0x1c && uVar9 == 2;
      }
      else {
        bVar5 = bVar2 == uVar9 && (uint)bVar3 == (uVar11 & 0xff);
      }
    }
    else {
      bVar5 = false;
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x18390) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18390) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return bVar5;
}

