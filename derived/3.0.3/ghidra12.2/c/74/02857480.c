
void FUN_02857480(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  void *__s;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  byte *pbVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  char cVar23;
  undefined8 local_838;
  undefined4 local_830;
  undefined4 uStack_82c;
  long local_828;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined8 local_818;
  undefined8 local_810;
  uint local_808;
  uint uStack_804;
  uint local_800;
  byte local_7fc [4];
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  byte *local_80;
  
  local_7f8 = (undefined *)((ulong)local_7f8 & 0xffffffff00000000);
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  uVar10 = FUN_02852c70(param_1,&local_7f8);
  puVar4 = PTR_DAT_04bb39d8;
  if ((uVar10 & 1) != 0) {
    uVar8 = (uint)local_7f8 - ((uint)local_7f8 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
    if (DAT_055a345c == '\0') {
      puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar22 = *puVar15 ^ *puVar15 << 0xb;
      uVar9 = puVar15[3];
      *puVar15 = puVar15[1];
      puVar15[1] = puVar15[2];
      uVar22 = uVar22 >> 8 ^ uVar9 >> 0x13 ^ uVar22 ^ uVar9;
      puVar15[2] = uVar9;
      puVar15[3] = uVar22;
      uVar22 = (uint)((ulong)uVar22 * (ulong)uVar8 >> 0x20);
      uVar8 = (uint)local_7f8 - ((uint)local_7f8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
    }
    else {
      uVar22 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar9 = uVar22 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar22 ^ DAT_05582b7c;
      uVar22 = (uint)((ulong)uVar9 * (ulong)uVar8 >> 0x20);
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar9;
    }
    cVar23 = -1;
    if ((uint)local_7f8 != 0) {
      uVar10 = (ulong)local_7f8 & 0xffffffff;
      cVar23 = -1;
      if (uVar22 < uVar8) {
        iVar21 = uVar22 + 2;
        do {
          iVar21 = iVar21 + -1;
          uVar8 = (uint)uVar10;
          if (iVar21 < 2) {
            uVar8 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
            uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
            uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
            uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
            iVar21 = uVar8 + (uVar8 >> 8);
            cVar23 = (char)iVar21 + (char)((uint)iVar21 >> 0x10);
            goto LAB_02857610;
          }
          uVar8 = uVar8 - 1 & uVar8;
          uVar10 = (ulong)uVar8;
        } while (uVar8 != 0);
        cVar23 = -1;
      }
    }
LAB_02857610:
    *(char *)(param_1 + 0x3c) = cVar23;
  }
  bVar20 = *(byte *)(param_1 + 0x2c);
  if ((bVar20 < 10) && ((&DAT_053fee41)[((long)(char)bVar20 & 0xffffffffU) * 0xba0] != '\0')) {
    iVar21 = (&DAT_053fe824)[(ulong)(uint)(int)(char)bVar20 * 0x2e8];
    local_7f8 = (undefined *)CONCAT44(local_7f8._4_4_,iVar21);
    if (iVar21 == 2) {
      *(undefined1 *)(param_1 + 0x2e) = 4;
    }
    else {
      if (iVar21 != 1) goto LAB_02857670;
      *(undefined1 *)(param_1 + 0x2e) = 3;
    }
  }
  else {
LAB_02857670:
    lVar11 = *(long *)PTR_DAT_04bb32f0;
    local_838 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_838 >> 0x20) < '\x05') {
      lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_838);
      local_7f8 = (undefined *)(lVar18 - 0x15180);
      local_838 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7f8);
    }
    uVar6 = local_838;
    local_838._7_1_ = SUB81(uVar6,7);
    local_838._0_7_ = (uint7)CONCAT24(5,(undefined4)local_838);
    local_810 = (ulong)local_838;
    lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_810);
    local_7f8 = (undefined *)(lVar18 + 0x15180);
    uVar10 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7f8);
    local_810 = uVar10;
    if (lVar11 == 0) {
LAB_02857740:
      lVar11 = 2;
      if (DAT_055a345c != '\0') goto LAB_0285774c;
LAB_028577dc:
      puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
      uVar8 = *puVar15 ^ *puVar15 << 0xb;
      uVar22 = puVar15[3];
      *puVar15 = puVar15[1];
      puVar15[1] = puVar15[2];
      uVar8 = uVar8 >> 8 ^ uVar22 >> 0x13 ^ uVar8 ^ uVar22;
      puVar15[2] = uVar22;
      puVar15[3] = uVar8;
    }
    else {
      local_88 = (undefined **)local_838;
      if ((char)((ulong)local_838 >> 0x20) < '\x05') {
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_7f8 = (undefined *)(lVar11 + -0x15180);
        uVar10 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7f8);
        local_88 = (undefined **)uVar10;
      }
      uVar13 = (ulong)local_88;
      uVar16 = (ulong)local_88 >> 0x10;
      local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
      local_88._7_1_ = SUB81(uVar13,7);
      local_88._0_7_ = (uint7)(uint6)local_88;
      uVar10 = FUN_00872588(uVar10,uVar13,uVar16,uVar13 >> 0x18);
      if ((uVar10 & 1) != 0) goto LAB_02857740;
      local_88 = (undefined **)local_810;
      if ((char)(local_810 >> 0x20) < '\x05') {
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_7f8 = (undefined *)(lVar11 + -0x15180);
        uVar10 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7f8);
        local_88 = (undefined **)uVar10;
      }
      uVar13 = (ulong)local_88;
      uVar16 = (ulong)local_88 >> 0x10;
      local_88._0_6_ = CONCAT24(5,(undefined4)local_88);
      local_88._7_1_ = SUB81(uVar13,7);
      local_88._0_7_ = (uint7)(uint6)local_88;
      uVar10 = FUN_00872588(uVar10,uVar13,uVar16,uVar13 >> 0x18);
      lVar11 = 2;
      if ((uVar10 & 1) == 0) {
        lVar11 = 3;
      }
      if (DAT_055a345c == '\0') goto LAB_028577dc;
LAB_0285774c:
      uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar8;
    }
    *(char *)(param_1 + 0x2e) = (char)(lVar11 * (ulong)uVar8 >> 0x20);
  }
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_9c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
  memset(__s,0,0x754);
  local_838 = (undefined *)((ulong)local_838 & 0xffffffff00000000);
  local_80 = (byte *)&local_838;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_7f8,&local_88);
  local_7fc[0] = 0;
  FUN_01b02920(local_7fc,0,0);
  puVar4 = PTR_DAT_04bb43c0;
  local_80 = (byte *)&local_810;
  local_810 = CONCAT44(local_810._4_4_,8);
  local_88 = &PTR_FUN_049ff4e8;
  uVar8 = 0;
  local_7fc[0] = local_7fc[0] & 0xfe;
  do {
    (**(code **)(local_7f8 + 0x10))(&local_838,&local_7f8,uVar8);
    lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    uVar22 = 1 << (ulong)(uVar8 & 0x1f);
    if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar22) != 0) {
      lVar11 = *(long *)puVar4;
      uVar9 = FUN_0277d6c4(&local_838);
      if (*(long *)puVar4 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_88)(&local_88,&local_838), (uVar10 & 1) != 0))
        goto LAB_02857950;
      }
      lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      lVar18 = (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar11 + lVar18) = *(uint *)(lVar11 + lVar18) & (uVar22 ^ 0xffffffff);
    }
LAB_02857950:
    uVar8 = uVar8 + 1;
  } while (uVar8 != 15000);
  uVar8 = 0;
  local_80 = local_7fc;
  local_88 = &PTR_FUN_049ff6a0;
  do {
    (**(code **)(local_7f8 + 0x10))(&local_838,&local_7f8,uVar8);
    lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    uVar22 = 1 << (ulong)(uVar8 & 0x1f);
    if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar22) != 0) {
      lVar11 = *(long *)puVar4;
      uVar9 = FUN_0277d6c4(&local_838);
      if (*(long *)puVar4 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_88)(&local_88,&local_838), (uVar10 & 1) != 0))
        goto LAB_02857a34;
      }
      lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      lVar18 = (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar11 + lVar18) = *(uint *)(lVar11 + lVar18) & (uVar22 ^ 0xffffffff);
    }
LAB_02857a34:
    uVar8 = uVar8 + 1;
  } while (uVar8 != 15000);
  local_838._0_4_ = 2;
  local_88 = &PTR_FUN_049ff4e8;
  local_80 = (byte *)&local_838;
  FUN_008a1ba0(&local_7f8,&local_88);
  local_838._0_4_ = 5;
  local_88 = &PTR_FUN_049ff4e8;
  local_80 = (byte *)&local_838;
  FUN_008a1ba0(&local_7f8,&local_88);
  local_838 = (undefined *)CONCAT44(local_838._4_4_,7);
  local_88 = &PTR_FUN_049ff4e8;
  local_80 = (byte *)&local_838;
  FUN_008a1ba0(&local_7f8,&local_88);
  lVar11 = FUN_0265c2a0((long)(char)bVar20);
  if (lVar11 != 0) {
    if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 & 0xffffffff;
    }
    local_838 = (undefined *)CONCAT44(local_838._4_4_,0x4f);
    local_80 = (byte *)&local_838;
    local_88 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_7f8,&local_88);
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 != 0) {
      puVar12 = *(undefined8 **)(lVar18 + 0x10);
      if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
        lVar18 = (**(code **)(*(long *)*puVar12 + 0x38))();
        if (lVar18 != 0) {
          lVar18 = lVar18 + 0x70;
          goto LAB_02857bd0;
        }
      }
      else if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
              (lVar18 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar18 != 0)) {
LAB_02857bd0:
        if (*(long **)(lVar18 + 0x1a0da0) == (long *)0x0) {
          uVar13 = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(lVar18 + 0x1a0da0);
          uVar13 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            uVar13 = (**(code **)*puVar12)();
          }
        }
        uVar8 = *(uint *)(*(long *)(lVar18 + 0x1a0d88) + *(long *)(lVar18 + 0x1a0d80));
        if (2 < uVar8) {
          uVar8 = 0;
        }
        local_88 = (undefined **)CONCAT44(local_88._4_4_,uVar8);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x1a0da0) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar18 + 0x1a0da0) + 8),
           puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)();
        }
        if (1 < (int)uVar8) {
          local_838 = (undefined *)CONCAT44(local_838._4_4_,0x50);
          local_80 = (byte *)&local_838;
          local_88 = &PTR_FUN_049ff4e8;
          FUN_008a1ba0(&local_7f8,&local_88);
          lVar18 = *(long *)(lVar11 + 8);
          lVar1 = *(long *)(lVar11 + 0x10);
          lVar14 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
          uVar8 = FUN_0277d6c4(lVar1 + lVar18 + 0x125ec);
          if ((uVar8 >> 3 & 0x1fff) < 0x753) {
            lVar18 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
            *(uint *)(lVar14 + lVar18) =
                 *(uint *)(lVar14 + lVar18) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
    }
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  uVar8 = 0;
  local_88 = &PTR_FUN_049ff740;
  local_80 = (byte *)CONCAT44(local_80._4_4_,2999);
  do {
    (**(code **)(local_7f8 + 0x10))(&local_838,&local_7f8,uVar8);
    lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    uVar22 = 1 << (ulong)(uVar8 & 0x1f);
    if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar22) != 0) {
      lVar11 = *(long *)puVar4;
      uVar9 = FUN_0277d6c4(&local_838);
      if (*(long *)puVar4 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_88)(&local_88,&local_838), (uVar10 & 1) != 0))
        goto LAB_02857d24;
      }
      lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      lVar18 = (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar11 + lVar18) = *(uint *)(lVar11 + lVar18) & (uVar22 ^ 0xffffffff);
    }
LAB_02857d24:
    uVar8 = uVar8 + 1;
  } while (uVar8 != 15000);
  cVar23 = *(char *)(param_1 + 0x3c);
  local_800 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar8 = 0;
  local_88 = &PTR_FUN_04a91e00;
  iVar21 = 0;
  if (local_800 < 4) {
    iVar21 = local_800 + 1;
  }
  local_80 = (byte *)CONCAT44(local_80._4_4_,iVar21);
  do {
    (**(code **)(local_7f8 + 0x10))(&local_838,&local_7f8,uVar8);
    lVar11 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    uVar22 = 1 << (ulong)(uVar8 & 0x1f);
    if ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) & uVar22) != 0) {
      lVar11 = *(long *)puVar4;
      uVar9 = FUN_0277d6c4(&local_838);
      if (*(long *)puVar4 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           (uVar10 = (*(code *)*local_88)(&local_88,&local_838), (uVar10 & 1) != 0))
        goto LAB_02857e34;
      }
      lVar11 = (**(code **)(local_7f8 + 0x18))(&local_7f8);
      lVar18 = (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar11 + lVar18) = *(uint *)(lVar11 + lVar18) & (uVar22 ^ 0xffffffff);
    }
LAB_02857e34:
    puVar5 = PTR_DAT_04bb39d8;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 15000);
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    bVar20 = *PTR_DAT_04bb32e0;
joined_r0x02857f88:
    if (7 < bVar20) {
LAB_02857f8c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar11 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar11 + 0x473);
        pbVar19 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar15 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar15 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar15 & 8) != 0) {
            pbVar19 = (byte *)(lVar11 + 0x471);
          }
        }
        bVar20 = *pbVar19;
        bVar7 = bVar20 < 8;
        if (!bVar7) {
          bVar20 = 0xff;
        }
        local_838 = (undefined *)CONCAT71(local_838._1_7_,bVar20);
        if (bVar7) goto LAB_0285800c;
      }
      pbVar19 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar11 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar20 = *pbVar19;
        goto joined_r0x02857f88;
      }
      goto LAB_02857f8c;
    }
  }
  bVar20 = *pbVar19;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_838 = (undefined *)CONCAT71(local_838._1_7_,bVar20);
LAB_0285800c:
  FUN_02845944(&local_7f8,(int)cVar23,&local_838);
  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
  uVar8 = *puVar15 ^ *puVar15 << 0xb;
  uVar9 = puVar15[3];
  *puVar15 = puVar15[1];
  puVar15[1] = puVar15[2];
  uVar22 = uVar8 ^ uVar9;
  uVar8 = uVar8 >> 8 ^ uVar9 >> 0x13 ^ uVar22;
  puVar15[2] = uVar9;
  puVar15[3] = uVar8;
  uVar8 = (uVar8 ^ uVar22 >> 0x1e) * 0x6c078965 + 1;
  uVar22 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  local_810 = CONCAT44(uVar22,uVar8);
  uVar9 = (uVar22 ^ uVar22 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
  local_818 = 0x1095;
  local_808 = uVar9;
  uStack_804 = uVar2;
  FUN_0277d4ac(&local_818);
  lVar18 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
  lVar11 = 0;
  iVar21 = 0;
  do {
    puVar15 = (uint *)(lVar18 + lVar11);
    lVar11 = lVar11 + 4;
    uVar17 = *puVar15 - (*puVar15 >> 1 & 0x55555555);
    uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
    uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
    uVar17 = uVar17 + (uVar17 >> 8);
    iVar21 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + iVar21;
  } while (lVar11 != 0x754);
  if (iVar21 == 0) {
    local_820 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_81c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    lVar18 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
    lVar11 = 0;
    uVar17 = 0;
    do {
      puVar15 = (uint *)(lVar18 + lVar11);
      lVar11 = lVar11 + 4;
      uVar3 = *puVar15 - (*puVar15 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar17 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar17;
    } while (lVar11 != 0x754);
    uVar8 = uVar8 ^ uVar8 * 0x800;
    local_810 = CONCAT44(uVar9,uVar22);
    uStack_804 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar2;
    local_808 = uVar2;
    FUN_00889f80(&local_820,&local_7f8,(int)((ulong)uStack_804 * (ulong)uVar17 >> 0x20) + 1);
    FUN_01a4c66c(&local_810,&local_820);
  }
  local_828 = 0;
  local_838 = PTR_DAT_04bc0510 + 0x10;
  lVar11 = *(long *)puVar4;
  local_830 = (undefined4)local_818;
  uStack_82c = local_818._4_4_;
  uVar8 = FUN_0277d6c4(&local_830);
  if (*(long *)puVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_818);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (uVar8 < *(uint *)(lVar11 + 0x1d8)) {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar11 != 0) {
          local_828 = lVar11;
        }
      }
    }
  }
  FUN_01b0678c(&local_838,&local_820);
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x34) = local_830;
  *(undefined4 *)(param_1 + 0x38) = uStack_82c;
  return;
}

