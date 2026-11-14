
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dadb10(void)

{
  undefined *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  CalendarTime *pCVar10;
  long lVar9;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  byte *pbVar14;
  byte bVar15;
  ulong uVar16;
  undefined8 local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_68;
  undefined8 uStack_60;
  int local_4c;
  undefined8 local_48;
  
  FUN_0081686c(*(undefined8 *)PTR_DAT_04bb3448);
  puVar4 = PTR_DAT_04bb46b0;
  puVar1 = PTR_DAT_04bb30a0;
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    lVar11 = *(long *)PTR_DAT_04bb30a0;
LAB_01dadd64:
    lVar13 = 0;
    plVar8 = _DAT_00000028;
joined_r0x01dadd34:
    if (plVar8 == (long *)0x0) goto LAB_01daddc8;
LAB_01dadd70:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_01daddc8;
    uVar7 = (*(code *)**(undefined8 **)*plVar8)();
    FUN_00930750(lVar11 + 0x651f0,*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x1e35f0);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  else {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 != 0) {
        lVar11 = lVar11 + 0x70;
        goto LAB_01dadb9c;
      }
    }
    else if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
            (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 != 0)) {
LAB_01dadb9c:
      lVar13 = *(long *)(FUN_002051f0 + lVar11);
      if (lVar13 == 0) {
        uVar7 = 0;
      }
      else {
        if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar8 = *(long **)(lVar13 + 0x20);
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          uVar7 = uVar7 & 0xffffffff;
          if (*(long *)(FUN_002051f0 + lVar11) == 0) goto LAB_01dadc10;
          plVar8 = *(long **)(*(long *)(FUN_002051f0 + lVar11) + 0x20);
        }
        if (plVar8 != (long *)0x0) {
          local_70 = *(undefined **)(lVar11 + 0x2051d0);
          local_68 = *(char **)(FUN_002051d8 + lVar11);
          uStack_60 = 0x58;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
        }
      }
LAB_01dadc10:
      uVar16 = *(ulong *)(*(long *)(FUN_002051d8 + lVar11) + *(long *)(lVar11 + 0x2051d0) + 0x40);
      local_90 = (undefined *)uVar16;
      if ((char)(uVar16 >> 0x20) < '\x05') {
        lVar13 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
        local_70 = (undefined *)(lVar13 + -0x15180);
        local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
      }
      uVar3 = (ulong)local_90 >> 0x30;
      local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
      local_90 = (undefined *)(CONCAT26((short)uVar3,(undefined6)local_90) & 0xff00ffffffffffff);
      lVar13 = *(long *)PTR_DAT_04bb32e8;
      *(ulong *)(lVar13 + 0x4060) = uVar16;
      if (((uVar16 & 0xffff) == 0) ||
         (uVar16 = nn::time::IsValidDate
                             ((int)(short)uVar16,((int)uVar16 << 8) >> 0x18,(int)uVar16 >> 0x18),
         (uVar16 & 1) == 0)) {
        uVar16 = (ulong)local_70 >> 0x30;
        pCVar10 = (CalendarTime *)&local_70;
        local_70 = (undefined *)CONCAT26((ushort)uVar16 & 0xff00,0x10107d0);
      }
      else {
        pCVar10 = (CalendarTime *)(lVar13 + 0x4060);
      }
      lVar9 = nn::time::ToPosixTimeFromUtc(pCVar10);
      *(long *)(lVar13 + 0x18) = lVar9;
      *(long *)(lVar13 + 0x30) =
           (lVar9 - *(long *)(lVar13 + 8)) * 1000000000 -
           (*(long *)(lVar13 + 0x20) + *(long *)(lVar13 + 0x28));
      *(undefined **)(lVar13 + 0x4068) = local_90;
      if ((((uVar7 & 1) != 0) && (*(long *)(FUN_002051f0 + lVar11) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar11) + 0x18),
         puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
    }
    lVar13 = *(long *)puVar4;
    lVar11 = *(long *)puVar1;
    if (lVar13 == 0) goto LAB_01dadd64;
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar13 = 0;
      if (lVar9 != 0) {
        lVar13 = lVar9 + 0x70;
      }
      plVar8 = *(long **)(lVar13 + 0x28);
      goto joined_r0x01dadd34;
    }
    if ((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) goto LAB_01dadd64;
    lVar13 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    plVar8 = *(long **)(lVar13 + 0x28);
    if (plVar8 != (long *)0x0) goto LAB_01dadd70;
LAB_01daddc8:
    FUN_00930750(lVar11 + 0x651f0,*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x1e35f0);
  }
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  FUN_021af274(&DAT_053fe348);
  FUN_021c279c(&DAT_053fe348);
  FUN_021b7e40(&DAT_053fe348);
  FUN_021b8410(&DAT_053fe348);
  puVar1 = PTR_DAT_04bb2020;
  DAT_0545416c = 0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "TapDreamFirstTalkDone";
  FUN_02743234(&local_70,0);
  FUN_01955a30(*(undefined8 *)PTR_DAT_04bb47e0);
  puVar4 = PTR_DAT_04bb27d0;
  if (*(long *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) + 0x50) != 0) {
    FUN_01d9781c();
  }
  uVar7 = FUN_01384830();
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar11 = *(long *)((*(long **)puVar4)[5] + 0x50);
  if (lVar11 == 0) {
    return;
  }
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_04bb3730 + 0x238);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_01dadf14:
    if (*pbVar14 < 8) goto LAB_01dadf7c;
LAB_01dadf20:
    lVar13 = **(long **)puVar4;
    bVar15 = *(byte *)(lVar13 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar2 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x471);
      }
    }
    bVar15 = *pbVar14;
    bVar5 = 7 < bVar15;
    if (bVar5) {
      bVar15 = 0xff;
    }
    local_98 = CONCAT71(local_98._1_7_,bVar15);
    if (bVar5) {
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_01dadf7c;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dadf14;
      }
      goto LAB_01dadf20;
    }
LAB_01dadf7c:
    bVar15 = *pbVar14;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_98 = CONCAT71(local_98._1_7_,bVar15);
  }
  local_90 = puVar1 + 0x10;
  pcStack_88 = "sys_illegal_land";
  FUN_025ffac8(&local_70,&local_90,&local_98);
  pcStack_88 = (char *)&local_48;
  puVar1 = PTR_DAT_04bc3458 + 0x10;
  local_90 = (undefined *)(lVar11 + 8);
  local_70 = puVar1;
  local_98 = FUN_02659440();
  uStack_78 = 1;
  local_80 = &local_98;
  FUN_025e0200(&local_70,&local_90);
  local_70 = puVar1;
  iVar6 = FUN_025e0744(&local_70);
  if (iVar6 != -1) {
    iVar6 = (**(code **)(local_70 + 0x20))(&local_70);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar6);
    if (iVar6 < 0xd) goto LAB_01dae030;
  }
  if (local_4c == 0) {
    local_4c = 1;
  }
LAB_01dae030:
  FUN_02601530(&local_70);
  return;
}

