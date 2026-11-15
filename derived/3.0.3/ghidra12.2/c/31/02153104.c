
bool FUN_02153104(uint param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  byte bVar15;
  ulong *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte *pbVar20;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long local_38;
  
  uVar12 = FUN_00a8117c(param_2);
  if ((uVar12 & 1) != 0) {
    return true;
  }
  cVar6 = *(char *)(param_2 + 4);
  bVar3 = *(byte *)(param_2 + 5);
  uVar10 = (int)cVar6 + 0x18;
  if (4 < cVar6) {
    uVar10 = (int)cVar6;
  }
  uVar2 = uVar10 + 0x18;
  if (4 < (uVar10 & 0xff)) {
    uVar2 = uVar10;
  }
  lVar13 = FUN_0265c2a0(param_1);
  if (lVar13 == 0) {
    uVar10 = 0;
  }
  else {
    if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 ^ 1;
    }
    uVar10 = FUN_020fd7d8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
    if ((((uVar9 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  puVar7 = PTR_DAT_04bb2020;
  if ((param_3 & 1) == 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "RegulationType2";
    local_68 = puVar1;
    iVar11 = FUN_0273ea30(&local_68);
    if (iVar11 == 0) {
      pcStack_60 = "RegulationType3";
      local_68 = puVar1;
      iVar11 = FUN_0273ea30(&local_68);
      if (iVar11 != 0) {
        puVar14 = &DAT_053f575c;
        goto LAB_02153280;
      }
      pbVar20 = &DAT_053f5714 + (long)(int)(uVar10 & 0xff) * 4;
    }
    else {
      puVar14 = &DAT_053f573c;
LAB_02153280:
      pbVar20 = (byte *)((long)puVar14 + (long)(int)(uVar10 & 0xff) * 4);
    }
    bVar4 = *pbVar20;
    local_68 = puVar7 + 0x10;
    bVar5 = pbVar20[1];
    uVar19 = *(undefined8 *)PTR_DAT_04bb32f0;
    pcStack_60 = "Countdown";
    puVar16 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar16 == 0) {
      local_58 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_58 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar12 = local_58 >> 0x30;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58 = CONCAT26((short)uVar12,(undefined6)local_58) & 0xff00ffffffffffff;
      puVar16 = &local_58;
    }
    uVar12 = *puVar16;
    uVar12 = FUN_00879dd0(uVar19,&local_68,uVar12,uVar12 >> 0x10,uVar12 >> 0x18,0);
    pbVar17 = pbVar20 + 3;
    pbVar18 = &DAT_053f5734;
    if ((uVar12 & 1) == 0) {
      pbVar18 = pbVar20 + 2;
    }
    else {
      pbVar17 = &DAT_053f5735;
    }
    if ((uVar2 & 0xff) < (uint)bVar4) {
      return true;
    }
LAB_0215334c:
    uVar10 = (uint)*pbVar18;
    bVar15 = *pbVar17;
    if (((uint)bVar4 == (uVar2 & 0xff)) && (bVar3 < bVar5)) {
      return true;
    }
  }
  else {
    if (param_1 < 10) {
      if ((&DAT_053fee41)[(ulong)param_1 * 0xba0] == '\0') {
        bVar15 = 0;
        bVar8 = (uVar2 & 0xff) == 0;
        if ((uVar2 & 0xff) != 0) {
          return true;
        }
        goto LAB_02153398;
      }
      lVar13 = (ulong)param_1 * 0xba0;
      bVar4 = (&DAT_053fee28)[lVar13];
      bVar5 = (&DAT_053fee29)[lVar13];
      pbVar18 = &DAT_053fee2a + lVar13;
      pbVar17 = &DAT_053fee2b + lVar13;
      if ((uVar2 & 0xff) < (uint)bVar4) {
        return true;
      }
      goto LAB_0215334c;
    }
    bVar15 = 0;
    uVar10 = 0;
  }
  bVar8 = uVar10 == (uVar2 & 0xff);
  if (uVar10 < (uVar2 & 0xff)) {
    return true;
  }
LAB_02153398:
  return bVar8 && bVar15 <= bVar3;
}

