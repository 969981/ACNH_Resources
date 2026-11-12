
bool FUN_008745a0(CalendarTime *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  if (0xb < *param_2 - 1) {
    return false;
  }
  if ((byte)(&DAT_0417b531)[*param_2 - 1] <= (byte)(param_2[1] - 1)) {
    return false;
  }
  local_70 = *(ulong *)param_1;
  local_88 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
  local_88 = local_88 + -0x1baf80;
  local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  local_78 = *(undefined8 *)param_1;
  local_88 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_88 = local_88 + 0x1baf80;
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  bVar6 = false;
  do {
    bVar3 = *param_2;
    if ((bVar3 - 1 < 0xc) &&
       (bVar4 = param_2[1], (byte)(bVar4 - 1) < (byte)(&DAT_0417b531)[bVar3 - 1])) {
      if ((bVar3 == 2) && (bVar4 == 0x1d)) {
        if (((local_70 & 3) == 0) &&
           ((0x28f5c28 <
             ((uint)(ushort)local_70 * -0x3d70a3d7 >> 2 | (uint)(ushort)local_70 * 0x40000000) ||
            ((local_70 & 0xf) == 0)))) goto LAB_00874730;
        bVar7 = local_70._2_1_ == 2 && local_70._3_1_ == 0x1c;
      }
      else {
LAB_00874730:
        bVar7 = false;
        if (bVar3 == local_70._2_1_) {
          bVar7 = bVar4 == local_70._3_1_;
        }
      }
      bVar6 = (bool)(bVar6 | bVar7);
      if (bVar6) {
LAB_00874744:
        uVar8 = FUN_00873540(DAT_04cea100,&local_70,1,0);
        if ((uVar8 & 1) == 0) {
LAB_00874844:
          lVar10 = nn::time::ToPosixTimeFromUtc(param_1);
          lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          if (lVar11 < lVar10) {
            return false;
          }
          lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          return lVar11 == lVar10;
        }
        FUN_00873ad0(&local_88,DAT_04cea100,&local_70,1);
        lVar10 = DAT_04cea100 + 8;
        (**(code **)(local_88 + 0x18))(&local_88);
        local_64 = FUN_006bd550(local_80,0);
        puVar9 = (uint *)FUN_0088c0d0(lVar10,&local_64);
        if (puVar9 == (uint *)0x0) goto LAB_00874844;
        uVar2 = *puVar9;
        if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
          puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
          if ((*puVar12 != 0) &&
             ((uVar2 = puVar12[1], uVar2 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar2 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar10) / (ulong)uVar2);
              }
              if (*puVar12 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_04ce9818) &&
                 (uVar5 = *(ushort *)(DAT_04ce9820 + (long)(int)uVar1 * 2), uVar5 < 4)) {
                if (uVar5 == 2) goto LAB_00874844;
                if (uVar5 == 1) {
                  return false;
                }
              }
            }
          }
        }
      }
    }
    else if (bVar6) goto LAB_00874744;
    local_88 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_88 = local_88 + 0x15180;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
    uVar8 = FUN_00a82800(&local_78,&local_70);
    if ((uVar8 & 1) == 0) {
      return false;
    }
  } while( true );
}

