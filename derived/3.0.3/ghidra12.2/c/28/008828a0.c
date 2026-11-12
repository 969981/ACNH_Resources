
undefined8 FUN_008828a0(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte local_34 [4];
  undefined8 local_30;
  long local_28;
  
  local_30 = *param_2;
  if ((char)(local_30 >> 0x20) < '\x05') {
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + -0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar4 = local_30 >> 0x30;
  local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
  local_30 = CONCAT26((short)uVar4,(undefined6)local_30) & 0xff00ffffffffffff;
  local_34[0] = *param_3;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar6 == 0) {
    return 0;
  }
  if ((*(long **)(lVar6 + 0x18390) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x18390), puVar7 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar7)();
    uVar5 = uVar5 ^ 1;
  }
  pbVar1 = (byte *)(*(long *)(lVar6 + 0x18378) + *(long *)(lVar6 + 0x18370));
  bVar2 = *pbVar1;
  if ((bVar2 - 1 < 0xc) && (bVar3 = pbVar1[1], (byte)(bVar3 - 1) < (byte)(&DAT_0417b531)[bVar2 - 1])
     ) {
    if (bVar2 == 2 && bVar3 == 0x1d) {
      if (((local_30 & 3) == 0) &&
         ((0x28f5c28 <
           ((uint)(ushort)local_30 * -0x3d70a3d7 >> 2 | (uint)(ushort)local_30 * 0x40000000) ||
          ((local_30 & 0xf) == 0)))) goto LAB_008829a4;
      if ((local_30._2_1_ != 2) || (local_30._3_1_ != 0x1c)) goto LAB_00882a0c;
    }
    else {
LAB_008829a4:
      if (bVar2 != local_30._2_1_ || bVar3 != local_30._3_1_) goto LAB_00882a0c;
    }
    uVar8 = 1;
  }
  else {
LAB_00882a0c:
    uVar8 = 0;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x18390) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x18390) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return uVar8;
}

