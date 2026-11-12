
bool FUN_008732d0(long param_1,short param_2,char param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ushort uVar7;
  uint *puVar8;
  undefined1 local_80 [3];
  char cStack_7d;
  undefined2 uStack_7c;
  undefined1 uStack_79;
  undefined *local_78;
  char *local_70;
  undefined4 local_64;
  
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "TkkFirstLive";
  uVar4 = FUN_0273f0a0(&local_78);
  if ((uVar4 & 1) != 0) {
    _local_80 = (uint7)CONCAT24(5,CONCAT13(param_4,CONCAT12(param_3,param_2)));
    iVar3 = nn::time::GetDayOfWeek((int)param_2,(int)param_3,(int)param_4);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar3);
    while (iVar3 != 6) {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
      local_78 = (undefined *)(lVar5 + -0x15180);
      _local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
      iVar3 = nn::time::GetDayOfWeek
                        ((int)(short)_local_80,((int)_local_80 << 8) >> 0x18,(int)_local_80 >> 0x18)
      ;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar3);
    }
    iVar3 = 7;
    do {
      uVar4 = FUN_00873540(DAT_04cea100,local_80,1,0);
      if ((uVar4 & 1) == 0) goto LAB_00873514;
      FUN_00873ad0(&local_78,param_1,local_80,1);
      (**(code **)(local_78 + 0x18))(&local_78);
      local_64 = FUN_006bd550(local_70,0);
      puVar6 = (uint *)FUN_0088c0d0(param_1 + 8,&local_64);
      if (puVar6 == (uint *)0x0) {
        uVar7 = 2;
LAB_008734d4:
        if ((uVar7 != 0) && (uVar7 != 3)) {
LAB_00873514:
          if (local_80._0_2_ != param_2) {
            return false;
          }
          if (local_80[2] == param_3) {
            return cStack_7d == param_4;
          }
          return false;
        }
      }
      else {
        uVar2 = *puVar6;
        if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
          puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
          if ((*puVar8 != 0) && ((uVar2 = puVar8[1], uVar2 != 0 && ((ulong)(ushort)puVar8[2] != 0)))
             ) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar8 + lVar5 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar5 != 0) {
              uVar1 = 0;
              if ((ulong)uVar2 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar2);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_04ce9828) &&
                 (uVar7 = *(ushort *)(DAT_04ce9830 + (long)(int)uVar1 * 2), uVar7 < 4)) {
                if (uVar7 == 1) {
                  return false;
                }
                goto LAB_008734d4;
              }
            }
          }
        }
      }
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
      local_78 = (undefined *)(lVar5 + 0x15180);
      _local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return false;
}

