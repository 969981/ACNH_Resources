
bool FUN_028d3430(undefined4 *param_1,undefined4 param_2,ulong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong local_78;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  
  puVar5 = PTR_DAT_04bb32f0;
  local_78 = *param_3;
  if (param_1[1] == 0) {
    uVar7 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_78,1,1);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar7 & 1) != 0) goto LAB_028d3500;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "NormalLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar6 = local_60;
    uVar7 = local_60 >> 0x30;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60 = CONCAT26((short)uVar7,(uint6)local_60) & 0xff00ffffffffffff;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d3500;
    local_70 = puVar4 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "BirthdayLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar7 = local_60;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60._7_1_ = SUB81(uVar7,7);
    local_60._0_7_ = (uint7)(uint6)local_60;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    uVar10 = 0x3c;
    if (((uVar7 & 1) == 0) && (uVar10 = 0x3c, param_1[0x1d] != 1)) {
      uVar10 = 0x3e;
    }
  }
  else {
LAB_028d3500:
    uVar10 = 0x3c;
  }
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_70 = (undefined *)(lVar8 + 0x15180);
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  puVar5 = PTR_DAT_04bb32f0;
  if (param_1[2] == 0) {
    uVar7 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_78,1,1);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar7 & 1) != 0) goto LAB_028d363c;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "NormalLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar6 = local_60;
    uVar7 = local_60 >> 0x30;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60 = CONCAT26((short)uVar7,(uint6)local_60) & 0xff00ffffffffffff;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d363c;
    local_70 = puVar4 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "BirthdayLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar7 = local_60;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60._7_1_ = SUB81(uVar7,7);
    local_60._0_7_ = (uint7)(uint6)local_60;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d363c;
    uVar13 = uVar10 & 0x3a;
    if (param_1[0x1d] != 2) {
      uVar13 = uVar10;
    }
  }
  else {
LAB_028d363c:
    uVar13 = uVar10 & 0x3a;
  }
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_70 = (undefined *)(lVar8 + 0x15180);
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  puVar5 = PTR_DAT_04bb32f0;
  if (param_1[3] == 0) {
    uVar7 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_78,1,1);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar7 & 1) != 0) goto LAB_028d3774;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "NormalLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar6 = local_60;
    uVar7 = local_60 >> 0x30;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60 = CONCAT26((short)uVar7,(uint6)local_60) & 0xff00ffffffffffff;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d3774;
    local_70 = puVar4 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "BirthdayLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar7 = local_60;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60._7_1_ = SUB81(uVar7,7);
    local_60._0_7_ = (uint7)(uint6)local_60;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d3774;
    uVar10 = uVar13 & 0xfffffff7;
    if (param_1[0x1d] != 3) {
      uVar10 = uVar13;
    }
  }
  else {
LAB_028d3774:
    uVar10 = uVar13 & 0xfffffff7;
  }
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_70 = (undefined *)(lVar8 + 0x15180);
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  puVar5 = PTR_DAT_04bb32f0;
  if (param_1[4] == 0) {
    uVar7 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_78,1,1);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar7 & 1) != 0) goto LAB_028d38a8;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "NormalLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar6 = local_60;
    uVar7 = local_60 >> 0x30;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60 = CONCAT26((short)uVar7,(uint6)local_60) & 0xff00ffffffffffff;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d38a8;
    local_70 = puVar4 + 0x10;
    uVar12 = *(undefined8 *)puVar5;
    local_60 = local_78;
    pcStack_68 = "BirthdayLive";
    if ((char)(local_78 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar7 = local_60;
    local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
    local_60._7_1_ = SUB81(uVar7,7);
    local_60._0_7_ = (uint7)(uint6)local_60;
    uVar7 = FUN_00879dd0(uVar12,&local_70,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    if ((uVar7 & 1) != 0) goto LAB_028d38a8;
    uVar13 = uVar10 & 0xffffffef;
    if (param_1[0x1d] != 4) {
      uVar13 = uVar10;
    }
  }
  else {
LAB_028d38a8:
    uVar13 = uVar10 & 0xffffffef;
  }
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_70 = (undefined *)(lVar8 + 0x15180);
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  puVar5 = PTR_DAT_04bb32f0;
  if (param_1[5] == 0) {
    uVar7 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_78,1,1);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar7 & 1) == 0) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      uVar12 = *(undefined8 *)puVar5;
      local_60 = local_78;
      pcStack_68 = "NormalLive";
      if ((char)(local_78 >> 0x20) < '\x05') {
        local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        local_58 = local_58 + -0x15180;
        local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar6 = local_60;
      uVar7 = local_60 >> 0x30;
      local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
      local_60 = CONCAT26((short)uVar7,(uint6)local_60) & 0xff00ffffffffffff;
      uVar7 = FUN_00879dd0(uVar12,&local_70,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
      if ((uVar7 & 1) == 0) {
        local_70 = puVar4 + 0x10;
        uVar12 = *(undefined8 *)puVar5;
        local_60 = local_78;
        pcStack_68 = "BirthdayLive";
        if ((char)(local_78 >> 0x20) < '\x05') {
          local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
          local_58 = local_58 + -0x15180;
          local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
        }
        uVar7 = local_60;
        local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
        local_60._7_1_ = SUB81(uVar7,7);
        local_60._0_7_ = (uint7)(uint6)local_60;
        uVar7 = FUN_00879dd0(uVar12,&local_70,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
        if ((uVar7 & 1) == 0) {
          uVar10 = uVar13 & 0xffffffdf;
          if (param_1[0x1d] != 5) {
            uVar10 = uVar13;
          }
          goto LAB_028d39e0;
        }
      }
    }
  }
  uVar10 = uVar13 & 0xffffffdf;
LAB_028d39e0:
  lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
  local_70 = (undefined *)(lVar8 + 0x15180);
  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  uVar13 = uVar10 - (uVar10 >> 1 & 0x55555555);
  uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
  uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
  uVar13 = uVar13 + (uVar13 >> 8);
  uVar13 = uVar13 + (uVar13 >> 0x10) & 0x3f;
  if (uVar13 != 0) {
    puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = *puVar9 ^ *puVar9 << 0xb;
    uVar3 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar9[2] = uVar3;
    puVar9[3] = uVar2;
    if (uVar10 != 0) {
      iVar11 = (int)((ulong)uVar2 * (ulong)uVar13 >> 0x20) + 2;
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 < 2) {
          uVar10 = uVar10 - 1 & (uVar10 ^ 0xffffffff);
          uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
          uVar10 = uVar10 + (uVar10 >> 8);
          uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
          puVar1 = param_1 + uVar10;
          if (6 < uVar10) {
            puVar1 = param_1;
          }
          param_1 = puVar1;
          break;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    *param_1 = param_2;
  }
  return uVar13 != 0;
}

