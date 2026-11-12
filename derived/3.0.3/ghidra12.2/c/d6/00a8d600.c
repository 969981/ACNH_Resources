
bool FUN_00a8d600(undefined8 param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  bool bVar12;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar11 = (ulong)(short)uVar4;
  if (uVar11 == 0xffffffffffffffff) {
LAB_00a8d6f4:
    puVar10 = (ulong *)(DAT_04da7238 + 0x651c8);
    if (*(short *)puVar10 == 0) {
      puVar10 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
  }
  else {
    local_38 = CONCAT44(local_38._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      local_38 = CONCAT44(local_38._4_4_,0x1f);
      piVar2 = (int *)(PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8);
      if (0xff < uVar4) {
        piVar2 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar2) {
        local_38 = CONCAT44(local_38._4_4_,0x20);
        puVar3 = PTR_DAT_04bc39f8 + (uVar11 & 0xffffffff) * 8;
        if (0xff < uVar4) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8d6f4;
      }
    }
    puVar10 = (ulong *)(DAT_04da7238 + 0x651e0);
  }
  local_48 = *puVar10;
  local_40 = local_48;
  if ((char)(local_48 >> 0x20) < '\x05') {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = lVar7 + -0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar8 = local_40 >> 0x10;
  uVar11 = local_40 >> 0x30;
  uVar9 = local_40 >> 0x18;
  local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
  local_40 = CONCAT26((short)uVar11,(uint6)local_40) & 0xff00ffffffffffff;
  cVar5 = FUN_00a8ae20(param_1,uVar8,uVar9,4);
  if ('\0' < cVar5) {
    uVar11 = FUN_00a80d84(&local_48,1);
    bVar12 = false;
    if ((uVar11 & 1) == 0) {
      return false;
    }
    do {
      uVar6 = FUN_00a8d8a8(param_1,&local_48);
      if ((short)local_48 != 0) {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_38 = lVar7 + -0xe10;
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      bVar12 = (bool)((uVar6 & 0xfffffffe) == 6 | bVar12);
      uVar11 = FUN_00a80d84(&local_48,1);
    } while ((uVar11 & 1) != 0);
    if (bVar12) {
      while( true ) {
        local_40 = local_48;
        if ((char)(local_48 >> 0x20) < '\x05') {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = lVar7 + -0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        uVar11 = local_40;
        uVar8 = local_40 >> 0x10;
        uVar9 = local_40 >> 0x18;
        local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
        local_40._7_1_ = SUB81(uVar11,7);
        local_40._0_7_ = (uint7)(uint6)local_40;
        cVar5 = FUN_00a8ae20(param_1,uVar8,uVar9,4);
        if (cVar5 < '\x01') break;
        uVar6 = FUN_00a8d8a8(param_1,&local_48);
        if ((uVar6 & 0xfffffffe) == 6) {
          return cVar5 < '\x01';
        }
        if ((short)local_48 != 0) {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          local_38 = lVar7 + -0xe10;
          local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
      }
      return cVar5 < '\x01';
    }
  }
  return false;
}

