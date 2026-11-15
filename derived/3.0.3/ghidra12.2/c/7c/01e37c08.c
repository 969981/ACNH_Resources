
void FUN_01e37c08(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint *puVar8;
  long lVar9;
  byte bVar10;
  undefined4 *puVar11;
  CalendarTime *pCVar12;
  ulong uVar13;
  undefined8 local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  if ((param_2 & 1) == 0) {
    local_24 = 0;
    iVar4 = DAT_0538ea6c;
    if (0 < *(int *)(param_1 + 0x48)) {
      iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44) + -1;
      iVar4 = 0;
      if (*(int *)(param_1 + 0x40) <= iVar2) {
        iVar4 = *(int *)(param_1 + 0x40);
      }
      iVar4 = *(int *)(*(long *)(param_1 + 0x38) + (long)(iVar2 - iVar4) * 0x14 + 8);
    }
    if ((((iVar4 == 0) && (uVar5 = FUN_0220f914(&local_24), (uVar5 & 1) != 0)) &&
        (*(int *)(param_1 + 0x1dc) == 0)) &&
       (*(undefined4 *)(param_1 + 0x1dc) = local_24, (*(byte *)(param_1 + 0x1e0) & 1) == 0)) {
      if (*(int *)(param_1 + 0x48) < 1) {
        local_50._0_4_ = 0;
      }
      else {
        local_50._0_4_ = 0;
        iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44) + -1;
        iVar4 = 0;
        if (*(int *)(param_1 + 0x40) <= iVar2) {
          iVar4 = *(int *)(param_1 + 0x40);
        }
        puVar11 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)(iVar2 - iVar4) * 0x14);
        if (*(char *)(puVar11 + 4) == '\0') {
          local_50._0_4_ = *puVar11;
        }
      }
      uVar6 = FUN_0209ef04(&local_50);
      pbVar7 = (byte *)FUN_01e27050(uVar6,0x14,0x67850558,*(undefined8 *)PTR_DAT_04bc1588);
      if (pbVar7 == (byte *)0x0) {
        bVar10 = 2;
      }
      else {
        bVar10 = *pbVar7;
      }
      if (1 < bVar10) {
        bVar10 = 2;
      }
      uVar3 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
      if ((uVar3 & 0xfffffffe) != 6) {
        uVar5 = FUN_021ded20();
        if ((uVar5 & 1) == 0) goto LAB_01e37df8;
        iVar4 = FUN_0220fcc4(param_1 + 8,0);
        local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar4);
        if (iVar4 == 3) goto LAB_01e37df8;
        if (bVar10 == 0) {
          iVar4 = FUN_01e2caa0(100);
          uVar3 = FUN_0220fcc4(param_1 + 8,0);
          uVar5 = (ulong)uVar3;
          if (3 < uVar3) {
            uVar5 = 0;
          }
          if (iVar4 < (int)(&DAT_04101d10)[uVar5]) goto LAB_01e37df8;
        }
        else if (bVar10 != 1) goto LAB_01e37df8;
      }
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "EquipChristmasWear";
      iVar4 = FUN_0265c700(*(undefined4 *)(param_1 + 0xc),&local_50);
      if (iVar4 == 0) {
        *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) | 1;
      }
    }
  }
LAB_01e37df8:
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0x10;
  *(undefined8 *)(param_1 + 0x198) = 0;
  local_50 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_50);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = (undefined4)local_50;
  *(undefined4 *)(param_1 + 0x1a4) = local_50._4_4_;
  *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) & 0xfd;
  puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = *puVar8 ^ *puVar8 << 0xb;
  uVar1 = puVar8[3];
  *puVar8 = puVar8[1];
  puVar8[1] = puVar8[2];
  uVar3 = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
  uVar5 = (ulong)uVar3 * 0x33;
  puVar8[2] = uVar1;
  puVar8[3] = uVar3;
  iVar4 = (int)(uVar5 >> 0x20);
  *(int *)(param_1 + 0x20) = (int)((float)((0x32 - iVar4) * 100) / 60.0);
  uVar13 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  *(ulong *)(param_1 + 0x24) = uVar13;
  if ((uVar13 & 0xffff) == 0) {
    *(ulong *)(param_1 + 0x2c) = uVar13;
  }
  else {
    iVar4 = iVar4 + -0x32;
    local_50 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x24));
    if (iVar4 != 0) {
      local_50 = (undefined *)((long)local_50 - (ulong)((long)iVar4 * -60000000000) / 1000000000);
    }
    uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    pCVar12 = (CalendarTime *)(param_1 + 0x2c);
    *(ulong *)pCVar12 = uVar13;
    lVar9 = nn::time::ToPosixTimeFromUtc(pCVar12);
    local_50 = (undefined *)(lVar9 + ((uVar5 >> 0x20) * 60000000000 + 600000000000) / 1000000000);
    uVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
    *(undefined8 *)pCVar12 = uVar6;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  return;
}

