
undefined8 FUN_01e34dac(long param_1,int *param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong local_58;
  ulong local_50;
  long local_48;
  
  puVar2 = PTR_DAT_04bb32e8;
  uVar10 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar9 = (uint)(uVar10 >> 0x20) & 0xff;
  uVar3 = uVar9;
  local_50 = uVar10;
  if ((param_3 & 1) == 0) {
    if ((uVar10 & 0xffff) != 0) {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = lVar6 + 0xe10;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      uVar3 = (uint)(local_50 >> 0x20) & 0xff;
    }
  }
  else if ((uVar10 & 0xffff) != 0) {
    iVar8 = *(int *)(param_1 + 0x420);
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
    lVar6 = 0x3c;
    if (iVar8 != 0x1e) {
      lVar6 = 0x708;
    }
    local_48 = lVar4 + lVar6;
    local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    uVar3 = (uint)(local_50 >> 0x20) & 0xff;
  }
  iVar8 = 3;
  if (0x12 < uVar3) {
    iVar8 = 4;
  }
  iVar7 = 2;
  if (0xf < uVar3) {
    iVar7 = iVar8;
  }
  iVar8 = 1;
  if (0xb < uVar3) {
    iVar8 = iVar7;
  }
  iVar7 = 0;
  if (7 < uVar3) {
    iVar7 = iVar8;
  }
  iVar8 = 5;
  if (4 < uVar3) {
    iVar8 = iVar7;
  }
  local_48 = CONCAT44(local_48._4_4_,iVar8);
  bVar1 = *(byte *)(*(long *)puVar2 + 0x4064);
  if (bVar1 < 5) {
    iVar7 = 5;
  }
  else if (bVar1 < 8) {
    iVar7 = 0;
  }
  else if (bVar1 < 0xc) {
    iVar7 = 1;
  }
  else if (bVar1 < 0x10) {
    iVar7 = 2;
  }
  else {
    iVar7 = 3;
    if (0x12 < bVar1) {
      iVar7 = 4;
    }
  }
  local_58 = CONCAT44(local_58._4_4_,iVar7);
  if (iVar8 == iVar7) {
    if ((*param_2 != 0x1e) && (*param_2 != 0x31)) {
      uVar3 = FUN_00a86724(DAT_04da7238);
      if (3 < uVar3) goto LAB_01e34f6c;
      if ((uVar10 & 0xffff) != 0) {
        local_58 = uVar10;
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_48 = lVar6 + 0x708;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
        if ((uVar9 != ((uint)(local_58 >> 0x20) & 0xff)) &&
           (uVar3 = FUN_00a867c8(DAT_04da7238), 3 < uVar3)) goto LAB_01e34f6c;
      }
    }
    uVar5 = 1;
  }
  else {
LAB_01e34f6c:
    uVar5 = 0;
  }
  return uVar5;
}

