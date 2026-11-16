
void FUN_028883e4(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((char)param_2[5] != '\0') {
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = *puVar7 ^ *puVar7 << 0xb;
    uVar4 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar3 = uVar2 ^ uVar4;
    puVar7[2] = uVar4;
    puVar7[3] = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
    uVar3 = uVar3 >> 0x1e;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar3);
    *(uint *)(param_1 + 0x3c) = uVar3;
    FUN_02886e10(param_1);
    return;
  }
  local_48 = param_2[2];
  lVar5 = param_2[3];
  local_50 = lVar5;
  iVar6 = nn::time::GetDayOfWeek
                    ((int)(short)local_48,((int)local_48 << 8) >> 0x18,(int)local_48 >> 0x18);
  local_70._0_4_ = iVar6;
  local_60 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
  if (iVar6 != 0) {
    local_60 = local_60 + ((long)iVar6 * -86400000000000) / 1000000000;
  }
  local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  iVar6 = nn::time::GetDayOfWeek((int)(short)lVar5,((int)lVar5 << 8) >> 0x18,(int)lVar5 >> 0x18);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar6);
  local_60 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
  if (iVar6 != 0) {
    local_60 = local_60 + ((long)iVar6 * -86400000000000) / 1000000000;
  }
  local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  if (*param_2 != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "FirstKabuBuy";
    local_60 = puVar1;
    uVar8 = FUN_0273f0a0(&local_60);
    if ((uVar8 & 1) != 0) {
      pcStack_68 = "FirstKabuPattern";
      local_70 = puVar1;
      uVar8 = FUN_0273f0a0(&local_70);
      if ((uVar8 & 1) == 0) goto LAB_02888584;
    }
  }
  if ((short)local_48 == (short)local_50) {
    if (local_48._2_1_ == local_50._2_1_) {
      if ((local_48._3_1_ == local_50._3_1_) && (*(char *)((long)param_2 + 0x2c) == '\0')) {
        return;
      }
    }
  }
LAB_02888584:
  FUN_02886e10(param_1);
  return;
}

