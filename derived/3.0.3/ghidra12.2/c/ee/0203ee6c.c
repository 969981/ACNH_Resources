
void FUN_0203ee6c(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 local_7c [4];
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_18;
  
  local_40 = 0x43db8000;
  local_38 = 0x43d70000;
  local_48 = 0x43d70000;
  local_50 = 0x43de8000;
  local_58 = 0x43d70000;
  uVar9 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  local_60 = 0x43e18000;
  cVar2 = (char)((ulong)uVar9 >> 0x20);
  local_68 = uVar9;
  if (cVar2 < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_78 = lVar4 + -0x15180;
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  }
  uVar3 = local_68 >> 0x30;
  uVar7 = (uint)((ulong)uVar9 >> 0x20);
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68 = CONCAT26((short)uVar3,(undefined6)local_68) & 0xff00ffffffffffff;
  uVar1 = uVar7 + 0x18;
  if ('\x04' < cVar2) {
    uVar1 = uVar7;
  }
  if ((char)uVar1 < '\r') {
    local_18 = 0;
  }
  else if ((uVar1 & 0xff) < 0x12) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  switch(param_2) {
  case 0:
    local_58 = 0x43d60000;
    local_78._0_4_ = 1;
    FUN_0229fe00(&local_78,&local_40);
    if (local_18 == 2) {
      local_78._0_4_ = local_18;
      FUN_0229fe00(&local_78,&local_50);
      uVar8 = 4;
      goto LAB_0203f08c;
    }
    if (local_18 == 1) {
      uVar8 = 6;
      goto LAB_0203f08c;
    }
    if (local_18 != 0) {
      return;
    }
    local_78 = CONCAT44(local_78._4_4_,5);
    break;
  case 1:
    local_58 = 0x43d60000;
    local_78._0_4_ = 1;
    FUN_0229fe00(&local_78,&local_40);
    if (local_18 == 2) {
      local_78._0_4_ = local_18;
      FUN_0229fe00(&local_78,&local_50);
    }
    uVar8 = 3;
LAB_0203f08c:
    local_78 = CONCAT44(local_78._4_4_,uVar8);
    break;
  case 2:
    local_58 = 0x43d40000;
    local_70 = 0x43d88000;
    local_7c = (undefined1  [4])0x1;
    local_78 = 0x43e18000;
    FUN_0229fe00(local_7c,&local_40);
    if (local_18 == 2) {
      local_7c = (undefined1  [4])local_18;
      FUN_0229fe00(local_7c,&local_50);
      local_7c = (undefined1  [4])0x4;
LAB_0203f0b8:
      FUN_0229fe00(local_7c,&local_78);
    }
    else {
      if (local_18 == 1) {
        local_7c = (undefined1  [4])0x6;
        goto LAB_0203f0b8;
      }
      if (local_18 == 0) {
        local_7c = (undefined1  [4])0x5;
        goto LAB_0203f0b8;
      }
    }
    plVar5 = (long *)local_7c;
    local_7c = (undefined1  [4])0x3;
    goto LAB_0203f0d0;
  case 3:
    local_78._0_4_ = 1;
    FUN_0229fe00(&local_78,&local_40);
    if (local_18 != 2) {
      return;
    }
    plVar5 = &local_78;
    puVar6 = &local_50;
    local_78 = CONCAT44(local_78._4_4_,2);
    goto LAB_0203f0d4;
  default:
    goto switchD_0203ef70_default;
  }
  plVar5 = &local_78;
LAB_0203f0d0:
  puVar6 = &local_60;
LAB_0203f0d4:
  FUN_0229fe00(plVar5,puVar6);
switchD_0203ef70_default:
  return;
}

