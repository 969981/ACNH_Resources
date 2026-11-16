
void FUN_027c5d6c(ushort *param_1,long *param_2)

{
  CalendarTime *pCVar1;
  ushort uVar2;
  uint uVar3;
  undefined3 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  if (*param_2 == 0) {
    return;
  }
  ppuVar9 = &local_40;
  uVar6 = FUN_027c5f10();
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar6 = FUN_027c5f10();
  if ((uVar6 & 1) == 0) {
    local_40 = (undefined *)CONCAT53(local_40._3_5_,0x80023);
    uVar2 = *param_1;
    if ((byte)(uVar2 >> 8) < 0x23) {
      FUN_020fd218(&local_40,uVar2 >> 8,uVar2 & 0xff);
    }
  }
  else {
    local_40 = (undefined *)CONCAT53(local_40._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
  }
  if (((ushort)local_40 & 0xff) < 0x23) {
    uVar3 = (uint)(byte)((ulong)local_40 >> 8);
    if ((uVar3 <= (byte)PTR_DAT_04bc27f0[(ulong)local_40 & 0xff]) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_40 & 0xff) * 4) >> (ulong)(uVar3 & 0x1f) & 1) !=
        0)) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "CampFirstCamperVisit";
      uVar6 = FUN_0273f0a0(&local_40);
      if ((uVar6 & 1) != 0) {
        return;
      }
      ppuVar9 = (undefined **)PTR_DAT_04bb9cf0;
      goto LAB_027c5ee8;
    }
  }
  if (param_1[0x86] != 0) {
    pCVar1 = (CalendarTime *)(param_1 + 0x86);
    local_18 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_40 = *(undefined **)pCVar1;
    iVar5 = FUN_00a82474(&local_18,&local_40);
    if (iVar5 < 0) {
      *(undefined8 *)pCVar1 = local_18;
      lVar7 = nn::time::ToPosixTimeFromUtc(pCVar1);
      local_40 = (undefined *)(lVar7 - 0x15180);
      uVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
      *(undefined8 *)pCVar1 = uVar8;
    }
  }
  uVar6 = FUN_027c6254(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar4 = FUN_021f7830();
  local_40 = (undefined *)CONCAT53(local_40._3_5_,uVar4);
LAB_027c5ee8:
  FUN_027c64dc(param_1,ppuVar9);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

