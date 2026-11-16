
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_026d4700(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  void *__dest;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *****pppppuVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  uint uVar18;
  char *pcVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  undefined *puStack_7e88;
  char *local_7e80;
  undefined8 local_7e78;
  char *local_7e70;
  undefined8 *****local_7e68;
  undefined8 *****pppppuStack_7e60;
  undefined8 *****local_7e58 [2];
  undefined8 *****local_7e48 [2];
  undefined8 *****local_7e38 [2];
  undefined8 *****local_7e28 [2];
  undefined8 *****local_7e18 [2];
  undefined8 *****local_7e08 [2];
  undefined8 *****local_7df8 [2];
  undefined8 *****local_7de8 [2];
  undefined8 *****local_7dd8 [2];
  undefined8 *****local_7dc8 [2];
  undefined8 *****local_7db8 [2];
  undefined8 *****local_7da8 [2];
  undefined8 *****local_7d98 [2];
  undefined8 *****local_7d88 [2];
  undefined8 *****local_7d78 [2];
  undefined8 *****local_7d68 [2];
  undefined8 *****local_7d58 [2];
  undefined8 *****local_7d48 [2];
  undefined8 *****local_7d38 [2];
  undefined8 *****local_7d28 [2];
  undefined8 *****local_7d18 [2];
  undefined8 *****local_7d08 [2];
  undefined8 *****local_7cf8 [2];
  undefined8 *****local_7ce8 [2];
  undefined8 ****local_7cd8 [2];
  undefined8 ***local_7cc8 [2];
  undefined8 **local_7cb8 [2];
  undefined8 *local_7ca8 [2];
  undefined8 local_7c98;
  undefined8 local_7c88 [2];
  undefined8 local_7c78 [3759];
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined1 local_6e4;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  uint local_6c8;
  undefined2 local_6c4;
  undefined2 uStack_6c2;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 local_6b0;
  undefined1 auStack_6a8 [56];
  undefined8 local_670;
  undefined *local_638;
  char *local_630;
  undefined8 local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 auStack_480 [704];
  undefined1 auStack_1c0 [320];
  undefined8 local_80;
  ulong local_78;
  long local_70;
  
  puVar5 = PTR_DAT_04bb2020;
  puVar3 = (uint *)(param_1 + 0xe0a68);
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  local_7e70 = "PlacementRadioGymnastics";
  local_7e78 = puVar4;
  uVar14 = FUN_0273f0a0(&local_7e78);
  if ((uVar14 & 1) != 0) {
    local_7e70 = "RadioGymnasticsBbsFlag";
    local_7e78 = puVar4;
    iVar13 = FUN_0273ea30(&local_7e78);
    lVar21 = DAT_04cea100;
    if ((iVar13 != 2) && (DAT_04cea100 != 0)) {
      local_670 = *(ulong *)(param_2 + 0x10);
      local_7e78 = puVar5 + 0x10;
      local_7e70 = "Countdown";
      if ((char)(local_670 >> 0x20) < '\x05') {
        lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_670);
        local_638 = (undefined *)(lVar15 + -0x15180);
        local_670 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_638);
      }
      uVar22 = local_670;
      uVar14 = local_670 >> 0x30;
      local_670._0_6_ = CONCAT24(5,(undefined4)local_670);
      local_670 = CONCAT26((short)uVar14,(undefined6)local_670) & 0xff00ffffffffffff;
      uVar14 = FUN_00879dd0(lVar21,&local_7e78,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
      if ((uVar14 & 1) == 0) {
        puVar5 = puVar5 + 0x10;
        local_7e80 = "Bbs_Information";
        puStack_7e88 = puVar5;
        FUN_006d8678(&local_670,"0%02d",iVar13 + 0x35);
        FUN_006d8678(auStack_6a8,"1%02d",iVar13 + 0x35);
        memset(&local_7e78,0,0x77d0);
        local_6e8 = 0;
        local_6c8 = 0;
        uVar9 = *(undefined4 *)(param_2 + 0x10);
        local_6e4 = 2;
        local_6c4 = 0xffff;
        local_6f8 = 0;
        uStack_6f4 = 0;
        local_6f0 = 0;
        uStack_6ec = 0;
        local_6e0 = 0;
        local_6d8 = 0;
        local_6d0 = 0;
        local_6b0 = 0;
        uStack_6c0 = 0;
        uStack_6bc = 0;
        uStack_6b8 = 0;
        uStack_6b4 = 0;
        uVar14 = nn::time::IsValidDate
                           ((uint)*(ushort *)(param_2 + 0x10),(uint)*(byte *)(param_2 + 0x12),
                            (uint)*(byte *)(param_2 + 0x13));
        if ((uVar14 & 1) != 0) {
          local_7e78 = (undefined *)CONCAT44(local_7e78._4_4_,uVar9);
        }
        uStack_6c2 = 5;
        FUN_01bdde78(&local_638);
        local_618 = 0;
        local_78 = (ulong)&local_7e78 | 4;
        local_80 = 0;
        local_70 = (long)&local_7c98 + 4;
        local_610 = auStack_480;
        local_608 = auStack_1c0;
        FUN_01bdd994(&local_638,&puStack_7e88,&local_670,auStack_6a8);
        uVar23 = *(uint *)(param_1 + 0xe0adc);
        *(undefined4 *)(param_1 + 0xe0adc) = *(undefined4 *)(param_1 + 0xe0ad8);
        *(undefined8 *)(param_1 + 0xe0ad4) = *(undefined8 *)(param_1 + 0xe0ad0);
        *(undefined8 *)(param_1 + 0xe0acc) = *(undefined8 *)(param_1 + 0xe0ac8);
        *(undefined8 *)(param_1 + 0xe0ac4) = *(undefined8 *)(param_1 + 0xe0ac0);
        *(undefined8 *)(param_1 + 0xe0abc) = *(undefined8 *)(param_1 + 0xe0ab8);
        uVar9 = *(undefined4 *)(param_1 + 0xe0ab4);
        *(undefined4 *)(param_1 + 0xe0ab4) = *(undefined4 *)(param_1 + 0xe0ab0);
        *(undefined4 *)(param_1 + 0xe0ab8) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0aac);
        *(undefined4 *)(param_1 + 0xe0aac) = *(undefined4 *)(param_1 + 0xe0aa8);
        *(undefined4 *)(param_1 + 0xe0ab0) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0aa4);
        *(undefined4 *)(param_1 + 0xe0aa4) = *(undefined4 *)(param_1 + 0xe0aa0);
        *(undefined4 *)(param_1 + 0xe0aa8) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a9c);
        *(undefined4 *)(param_1 + 0xe0a9c) = *(undefined4 *)(param_1 + 0xe0a98);
        *(undefined4 *)(param_1 + 0xe0aa0) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a94);
        *(undefined4 *)(param_1 + 0xe0a94) = *(undefined4 *)(param_1 + 0xe0a90);
        *(undefined4 *)(param_1 + 0xe0a98) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a8c);
        *(undefined4 *)(param_1 + 0xe0a8c) = *(undefined4 *)(param_1 + 0xe0a88);
        *(undefined4 *)(param_1 + 0xe0a90) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a84);
        *(undefined4 *)(param_1 + 0xe0a84) = *(undefined4 *)(param_1 + 0xe0a80);
        *(undefined4 *)(param_1 + 0xe0a88) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a7c);
        *(undefined4 *)(param_1 + 0xe0a7c) = *(undefined4 *)(param_1 + 0xe0a78);
        *(undefined4 *)(param_1 + 0xe0a80) = uVar9;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a74);
        *(undefined4 *)(param_1 + 0xe0a74) = *(undefined4 *)(param_1 + 0xe0a70);
        *(undefined4 *)(param_1 + 0xe0a78) = uVar9;
        uVar25 = *puVar3;
        uVar9 = *(undefined4 *)(param_1 + 0xe0a6c);
        *puVar3 = uVar23;
        *(uint *)(param_1 + 0xe0a6c) = uVar25;
        *(undefined4 *)(param_1 + 0xe0a70) = uVar9;
        __dest = (void *)(param_1 + 8 + (ulong)uVar23 * 0x77d0);
        if (0x1d < uVar23) {
          __dest = (void *)(param_1 + 8);
        }
        memcpy(__dest,&local_7e78,0x777c);
        local_630 = "RadioGymnasticsBbsFlag";
        *(undefined8 *)((long)__dest + 0x77a0) = local_6d8;
        *(undefined8 *)((long)__dest + 0x7798) = local_6e0;
        *(ulong *)((long)__dest + 0x777c) = CONCAT44(local_6f8,uStack_6fc);
        *(ulong *)((long)__dest + 0x7784) = CONCAT44(local_6f0,uStack_6f4);
        *(undefined1 *)((long)__dest + 0x7794) = local_6e4;
        *(ulong *)((long)__dest + 0x778c) = CONCAT44(local_6e8,uStack_6ec);
        *(undefined8 *)((long)__dest + 0x77a8) = local_6d0;
        uVar25 = local_6c8;
        if (1 < local_6c8) {
          uVar25 = 0;
        }
        *(uint *)((long)__dest + 0x77b0) = uVar25;
        *(ulong *)((long)__dest + 0x77bc) = CONCAT44(uStack_6b8,uStack_6bc);
        *(ulong *)((long)__dest + 0x77c4) = CONCAT44(local_6b0,uStack_6b4);
        *(ulong *)((long)__dest + 0x77b4) = CONCAT44(uStack_6c0,CONCAT22(uStack_6c2,local_6c4));
        local_638 = puVar5;
        FUN_0273f3c4(&local_638,2);
      }
    }
  }
  local_7e58[0] = local_7e48;
  local_7e48[0] = local_7e38;
  local_7c88[0] = 0;
  local_7e38[0] = local_7e28;
  local_7e68 = local_7e58;
  local_7e18[0] = local_7e08;
  local_7e28[0] = local_7e18;
  local_7df8[0] = local_7de8;
  local_7e08[0] = local_7df8;
  local_7dd8[0] = local_7dc8;
  local_7de8[0] = local_7dd8;
  local_7db8[0] = local_7da8;
  local_7dc8[0] = local_7db8;
  local_7d98[0] = local_7d88;
  local_7da8[0] = local_7d98;
  local_7d78[0] = local_7d68;
  local_7d88[0] = local_7d78;
  local_7d58[0] = local_7d48;
  local_7d68[0] = local_7d58;
  local_7d38[0] = local_7d28;
  local_7d48[0] = local_7d38;
  local_7d18[0] = local_7d08;
  local_7d28[0] = local_7d18;
  local_7cf8[0] = local_7ce8;
  local_7d08[0] = local_7cf8;
  local_7cd8[0] = local_7cc8;
  local_7ce8[0] = local_7cd8;
  local_7cb8[0] = local_7ca8;
  local_7cc8[0] = local_7cb8;
  local_7c98 = local_7c88;
  local_7ca8[0] = &local_7c98;
  local_7e78 = (undefined *)0x0;
  local_7e70 = (char *)0x0;
  if (local_7c78 != (undefined8 *)0x0) {
    local_7e78 = (undefined *)0x1e00000000;
    local_7e70 = (char *)local_7c78;
  }
  lVar21 = 0;
  ppppuVar6 = (undefined8 ****)(param_1 + 8);
  pppppuStack_7e60 = local_7e68;
  do {
    ppppuVar16 = ppppuVar6 + (ulong)*(uint *)((long)puVar3 + lVar21) * 0xefa;
    if (0x1d < *(uint *)((long)puVar3 + lVar21)) {
      ppppuVar16 = ppppuVar6;
    }
    uVar14 = nn::time::IsValidDate
                       ((uint)*(ushort *)ppppuVar16,(uint)*(byte *)((long)ppppuVar16 + 2),
                        (uint)*(byte *)((long)ppppuVar16 + 3));
    pppppuVar12 = local_7e68;
    if ((uVar14 & 1) == 0) break;
    ppppuVar16 = ppppuVar6 + (ulong)*(uint *)((long)puVar3 + lVar21) * 0xefa;
    if (0x1d < *(uint *)((long)puVar3 + lVar21)) {
      ppppuVar16 = ppppuVar6;
    }
    if (*(int *)(ppppuVar16 + 0xef9) != 0) break;
    if (local_7e68 != (undefined8 *****)0x0) {
      local_7e68 = (undefined8 *****)*local_7e68;
    }
    *pppppuVar12 = (undefined8 ****)0x0;
    pppppuVar12[1] = (undefined8 ****)0x0;
    *(undefined2 *)((long)pppppuVar12 + 10) = 0x101;
    *(undefined1 *)((long)pppppuVar12 + 0xd) = 0;
    if ((int)local_7e78 < local_7e78._4_4_) {
      *(undefined8 ******)((long)local_7e70 + (long)(int)local_7e78 * 8) = pppppuVar12;
      local_7e78 = (undefined *)CONCAT44(local_7e78._4_4_,(int)local_7e78 + 1);
    }
    ppppuVar16 = ppppuVar6 + (ulong)*(uint *)((long)puVar3 + lVar21) * 0xefa;
    if (0x1d < *(uint *)((long)puVar3 + lVar21)) {
      ppppuVar16 = ppppuVar6;
    }
    *pppppuVar12 = ppppuVar16;
    ppppuVar16 = ppppuVar6 + (ulong)*(uint *)((long)puVar3 + lVar21) * 0xefa;
    if (0x1d < *(uint *)((long)puVar3 + lVar21)) {
      ppppuVar16 = ppppuVar6;
    }
    ppppuVar16 = (undefined8 ****)FUN_0272eca4(ppppuVar16,1);
    lVar21 = lVar21 + 4;
    pppppuVar12[1] = ppppuVar16;
  } while (lVar21 != 0x78);
  pcVar19 = local_7e70;
  if ((int)local_7e78 != 0) {
    if (1 < (int)local_7e78) {
      uVar23 = 0;
      uVar25 = (int)local_7e78 - 1;
      do {
        if ((int)uVar25 <= (int)uVar23) break;
        uVar22 = (ulong)uVar23;
        uVar24 = (ulong)uVar25;
        uVar14 = uVar22;
        uVar25 = uVar23;
        do {
          plVar7 = (long *)((long)pcVar19 + uVar14 * 8);
          lVar21 = *plVar7;
          lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(plVar7[1] + 8));
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar21 + 8));
          if ((lVar15 <= lVar17) &&
             (lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar21 + 8)), lVar21 != lVar15)
             ) {
            lVar21 = plVar7[1];
            uVar25 = (uint)uVar14;
            plVar7[1] = *(long *)((long)pcVar19 + uVar14 * 8);
            *(long *)((long)pcVar19 + uVar14 * 8) = lVar21;
          }
          uVar14 = uVar14 + 1;
        } while (uVar24 != uVar14);
        if ((int)uVar25 <= (int)uVar23) break;
        uVar14 = (ulong)uVar25;
        uVar23 = uVar25;
        do {
          plVar7 = (long *)((long)pcVar19 + uVar14 * 8);
          lVar21 = *plVar7;
          lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(plVar7[-1] + 8));
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar21 + 8));
          if (lVar17 < lVar15) {
            lVar21 = plVar7[-1];
            uVar23 = (uint)uVar14;
            plVar7[-1] = *(long *)((long)pcVar19 + uVar14 * 8);
            *(long *)((long)pcVar19 + uVar14 * 8) = lVar21;
          }
          else {
            nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar21 + 8));
          }
          uVar14 = uVar14 - 1;
        } while ((long)uVar22 < (long)uVar14);
      } while (uVar23 != uVar25);
    }
    if ((int)local_7e78 != 0) {
      pcVar19 = local_7e70;
      if (((long)(int)local_7e78 & 1U) != 0) {
        pcVar19 = (char *)((long)local_7e70 + 8);
        iVar13 = *(int *)(param_1 + 0xe0ae0) + 1;
        lVar21 = **(long **)local_7e70;
        *(int *)(param_1 + 0xe0ae0) = iVar13;
        *(int *)(lVar21 + 0x77c8) = iVar13;
      }
      if (((long)(int)local_7e78 - 1U & 0x1fffffffffffffff) != 0) {
        do {
          iVar13 = *(int *)(param_1 + 0xe0ae0) + 1;
          lVar21 = **(long **)pcVar19;
          *(int *)(param_1 + 0xe0ae0) = iVar13;
          *(int *)(lVar21 + 0x77c8) = iVar13;
          puVar1 = (undefined8 *)((long)pcVar19 + 8);
          pcVar19 = (char *)((long)pcVar19 + 0x10);
          lVar21 = *(long *)*puVar1;
          iVar13 = *(int *)(param_1 + 0xe0ae0) + 1;
          *(int *)(param_1 + 0xe0ae0) = iVar13;
          *(int *)(lVar21 + 0x77c8) = iVar13;
        } while (pcVar19 != (char *)((long)local_7e70 + (long)(int)local_7e78 * 8));
      }
    }
    uVar14 = 0;
    uVar25 = 0x1d;
    do {
      uVar18 = (uint)uVar14;
      uVar23 = uVar18;
      if ((int)uVar25 <= (int)uVar18) {
        return;
      }
      do {
        uVar20 = (uint)uVar14;
        if (0x1d < uVar20) {
          uVar14 = 0;
        }
        uVar10 = puVar3[uVar14];
        ppppuVar16 = ppppuVar6 + (ulong)uVar10 * 0xefa;
        if (0x1d < uVar10) {
          ppppuVar16 = ppppuVar6;
        }
        uVar2 = uVar20 + 1;
        uVar22 = (ulong)uVar2;
        if (0x1d < uVar2) {
          uVar22 = 0;
        }
        uVar11 = puVar3[uVar22];
        ppppuVar8 = ppppuVar6 + (ulong)uVar11 * 0xefa;
        if (0x1d < uVar11) {
          ppppuVar8 = ppppuVar6;
        }
        if (*(uint *)(ppppuVar16 + 0xef9) < *(uint *)(ppppuVar8 + 0xef9)) {
          puVar3[uVar14] = uVar11;
          puVar3[uVar22] = uVar10;
          uVar23 = uVar20;
        }
        uVar14 = (ulong)uVar2;
      } while (uVar25 != uVar2);
      uVar20 = uVar23;
      uVar25 = uVar23;
      if ((int)uVar23 <= (int)uVar18) {
        return;
      }
      do {
        uVar14 = (ulong)uVar25;
        if (0x1d < uVar25) {
          uVar14 = 0;
        }
        uVar10 = puVar3[uVar14];
        ppppuVar16 = ppppuVar6 + (ulong)uVar10 * 0xefa;
        if (0x1d < uVar10) {
          ppppuVar16 = ppppuVar6;
        }
        uVar2 = uVar25 - 1;
        uVar22 = (ulong)uVar2;
        if (0x1d < uVar2) {
          uVar22 = 0;
        }
        uVar11 = puVar3[uVar22];
        ppppuVar8 = ppppuVar6 + (ulong)uVar11 * 0xefa;
        if (0x1d < uVar11) {
          ppppuVar8 = ppppuVar6;
        }
        if (*(uint *)(ppppuVar8 + 0xef9) < *(uint *)(ppppuVar16 + 0xef9)) {
          puVar3[uVar14] = uVar11;
          puVar3[uVar22] = uVar10;
          uVar20 = uVar25;
        }
        uVar25 = uVar2;
      } while ((int)uVar18 < (int)uVar2);
      uVar14 = (ulong)uVar20;
      uVar25 = uVar23;
    } while (uVar20 != uVar23);
  }
  return;
}

