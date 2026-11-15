
/* WARNING: Type propagation algorithm not settling */

bool FUN_0214d690(long param_1,uint param_2,byte param_3,ulong param_4)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 uVar5;
  byte bVar6;
  short sVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [8];
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  undefined8 *puVar19;
  ulong uVar20;
  byte *pbVar21;
  char cVar22;
  long lVar23;
  int iVar24;
  int *piVar25;
  char cVar26;
  uint uVar27;
  uint *puVar28;
  byte *pbVar29;
  long lVar30;
  undefined8 uVar31;
  uint uVar32;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *local_90;
  undefined1 local_88;
  byte local_87;
  
  cVar26 = *(char *)(param_1 + 0x236);
  uVar31 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  *(undefined1 *)(param_1 + 0x236) = 0;
  uVar15 = (uint)((ulong)uVar31 >> 0x20);
  uVar32 = uVar15 >> 8 & 0xff;
  cVar22 = (char)((ulong)uVar31 >> 0x20);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    uVar16 = FUN_0290d828();
    if ((uVar16 & 1) != 0) {
      return false;
    }
    if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      return false;
    }
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 != -1) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return false;
      }
    }
    iVar24 = *(int *)(*(long *)(param_1 + 0x1f0) + 4);
    if (*(char *)(*(long *)(param_1 + 0x1f0) + 9) == '\0') {
      if (((param_3 & 1) == 0) && (iVar24 == 0x16)) {
        local_98 = (undefined *)CONCAT44(local_98._4_4_,6);
        uVar16 = FUN_0290cbcc(&local_98);
        if (((uVar16 & 1) != 0) && ((param_4 & 1) == 0)) {
          return false;
        }
      }
    }
    else {
      uVar16 = FUN_01df9150();
      if ((uVar16 & 1) == 0) {
        return false;
      }
      local_98 = (undefined *)CONCAT44(local_98._4_4_,param_2);
      lVar17 = *(long *)PTR_DAT_04bb4760 + (ulong)param_2 * 0x15;
      if (0x6c < param_2) {
        lVar17 = *(long *)PTR_DAT_04bb4760;
      }
      uVar3 = (uint)*(byte *)(lVar17 + 4) | (*(byte *)(lVar17 + 5) & 3) << 8;
      if (0x1ff < uVar3) {
        uVar3 = uVar3 | 0xfffffc00;
      }
      uVar16 = FUN_01d69340(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),uVar3,1);
      if ((uVar16 & 1) != 0) {
        return false;
      }
      uVar16 = FUN_0214f8b4(param_1);
      if ((uVar16 & 1) == 0) {
        return false;
      }
      if ((param_3 & 1) == 0) {
        return false;
      }
    }
    local_a8 = (undefined *)uVar31;
    if (cVar22 < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
      local_98 = (undefined *)(lVar17 + -0x15180);
      local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
    }
    local_b0 = *(undefined1 (*) [8])(param_1 + 0x228);
    uVar16 = (ulong)local_a8 >> 0x30;
    local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
    local_a8 = (undefined *)(CONCAT26((short)uVar16,(undefined6)local_a8) & 0xff00ffffffffffff);
    if ((char)((ulong)local_b0 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_b0);
      local_98 = (undefined *)(lVar17 + -0x15180);
      local_b0 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
    }
    auVar11 = local_b0;
    local_b0._4_2_ = 5;
    local_b0[7] = auVar11[7];
    local_b0[6] = 0;
    iVar14 = FUN_00a82474(&local_a8,local_b0);
    if (iVar14 < 1) {
      bVar6 = *(byte *)(param_1 + 0x1f8);
      uVar3 = uVar15 + 0x18;
      if ('\x04' < cVar22) {
        uVar3 = uVar15;
      }
      uVar3 = uVar3 & 0xff;
      uVar27 = (uint)bVar6;
      if (((uVar3 < uVar27 || uVar3 == bVar6) &&
          (*(byte *)(param_1 + 0x1f9) != uVar32 || uVar3 != uVar27)) &&
         (uVar32 <= *(byte *)(param_1 + 0x1f9) || uVar3 != uVar27)) {
        return false;
      }
    }
    if ((iVar24 == 0x19) || (iVar24 == 0x17)) {
      pcVar18 = (char *)FUN_0265b250();
      cVar26 = '\x01';
      if (pcVar18 == (char *)0x0) goto LAB_0214d990;
      local_88 = 1;
      local_90 = pcVar18;
      if (*(long **)(pcVar18 + 0x28) == (long *)0x0) {
        local_87 = 0;
      }
      else {
        puVar19 = (undefined8 *)**(long **)(pcVar18 + 0x28);
        local_87 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          local_87 = (**(code **)*puVar19)();
        }
      }
      local_87 = local_87 & 1;
      local_98 = PTR_DAT_04bb7040 + 0x10;
      if (iVar24 == 0x17) {
        if (*(char *)(*(long *)(pcVar18 + 0x10) + *(long *)(pcVar18 + 8) + 0x36) == '\0')
        goto LAB_0214d964;
      }
      else if ((iVar24 == 0x19) &&
              (uVar16 = FUN_0284a7d8(*(long *)(pcVar18 + 0x10) + *(long *)(pcVar18 + 8)),
              (uVar16 & 1) != 0)) {
LAB_0214d964:
        FUN_02640184(&local_98);
        return false;
      }
      FUN_02640184(&local_98);
    }
    cVar26 = '\x01';
  }
LAB_0214d990:
  iVar24 = *(int *)(param_1 + 0x1e4);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar24);
  if (iVar24 == 0) {
LAB_0214d9f8:
    lVar17 = *(long *)(param_1 + 0x78);
    if (lVar17 == param_1 + 0x70) {
      return false;
    }
    uVar3 = uVar15 + 0x18;
    if ('\x04' < cVar22) {
      uVar3 = uVar15;
    }
    pbVar29 = (byte *)(lVar17 + -0x10);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_0214da64:
    puVar9 = PTR_DAT_04bc2638;
    if ((((uint)*(byte *)(lVar17 + -0x10) <= (uVar3 & 0xff)) &&
        (((uint)*(byte *)(lVar17 + -0x10) != (uVar3 & 0xff) || (pbVar29[1] <= uVar32)))) &&
       (((uVar3 & 0xff) < (uint)pbVar29[2] ||
        (((uint)pbVar29[2] == (uVar3 & 0xff) && (uVar32 < pbVar29[3])))))) {
      lVar30 = *(long *)PTR_DAT_04bb32f0;
      lVar23 = *(long *)PTR_DAT_04bb3968;
      uVar15 = *(uint *)(pbVar29 + 4);
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar15);
      if ((int)*(uint *)(lVar23 + 0x16718) < 1) {
        if ((((*(long *)(lVar23 + 0x16608) == 0) ||
             (puVar28 = *(uint **)(*(long *)(lVar23 + 0x16608) + 8), puVar28 == (uint *)0x0)) ||
            ((uVar15 < *(uint *)(lVar23 + 0x16620) &&
             (*(char *)(*(long *)(lVar23 + 0x16628) + (long)(int)uVar15) == '\0')))) ||
           (((*puVar28 <= uVar15 || (puVar28[1] == 0)) || ((ushort)puVar28[2] == 0))))
        goto LAB_0214de30;
        iVar24 = 0xc;
        if (*(char *)((long)puVar28 + 10) != '\0') {
          iVar24 = 0x1c;
        }
        puVar28 = (uint *)((ulong)(puVar28[1] * uVar15 + (uint)(ushort)puVar28[2] * 8 + iVar24) +
                          (long)puVar28);
        if (lVar30 == 0) goto LAB_0214de30;
LAB_0214dae8:
        if (puVar28 == (uint *)0x0) goto LAB_0214de30;
        uVar15 = *puVar28;
        if (uVar15 != 0) {
          cVar22 = *PTR_DAT_04bc2630;
          do {
            if (cVar22 == '\0') {
              cVar22 = '\x01';
              *PTR_DAT_04bc2630 = 1;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar9 + 0x28) = 0xffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              uVar15 = *puVar28;
            }
            else {
              uVar27 = *(uint *)(puVar9 + 0x18);
              if (-1 < (int)uVar27) {
                pcVar18 = (char *)((ulong)uVar27 + (long)puVar28);
                goto LAB_0214dc6c;
              }
              if (uVar27 != 0xffffffff) goto LAB_0214dbd4;
            }
            puVar8 = (uint *)(ulong)uVar15;
            pcVar18 = (char *)0x0;
            if ((puVar8 == (uint *)0x0) || (pcVar18 = (char *)0x0, puVar28 == puVar8))
            goto LAB_0214dc6c;
            lVar23 = 0xc;
            if (*(char *)((long)puVar28 + (10 - (long)puVar8)) != '\0') {
              lVar23 = 0x1c;
            }
            lVar23 = (long)puVar28 + (lVar23 - (long)puVar8);
            pcVar18 = (char *)0x0;
            if (lVar23 == 0) goto LAB_0214dc6c;
            uVar16 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar8));
            *(undefined4 *)(puVar9 + 0x18) = 0xfffffffe;
            if (uVar16 == 0) goto LAB_0214dbd4;
            piVar25 = (int *)(lVar23 + 4);
            while (piVar25[-1] != 0x7d740fa4) {
              piVar25 = piVar25 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_0214dbd4;
            }
            iVar24 = 0;
            if (*piVar25 != -1) {
              iVar24 = *piVar25;
            }
            *(int *)(puVar9 + 0x18) = iVar24;
            uVar15 = *puVar28;
            if (uVar15 == 0) goto LAB_0214dbd4;
          } while( true );
        }
        pcVar18 = (char *)0x0;
        goto LAB_0214dc6c;
      }
      if (uVar15 < *(uint *)(lVar23 + 0x16718)) {
        if (*(uint *)(lVar23 + 0x16708) <= uVar15) {
          uVar15 = 0;
        }
        puVar28 = *(uint **)(*(long *)(lVar23 + 0x16710) + (ulong)uVar15 * 8);
        if (lVar30 != 0) goto LAB_0214dae8;
      }
      goto LAB_0214de30;
    }
    goto LAB_0214da54;
  }
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar24);
  if (iVar24 == 0x22) goto LAB_0214d9f8;
  pbVar29 = (byte *)(param_1 + 0x1e0);
  uVar3 = uVar15 + 0x18;
  if ('\x04' < cVar22) {
    uVar3 = uVar15;
  }
  if ((uVar3 & 0xff) < (uint)*pbVar29) goto LAB_0214d9f8;
  bVar12 = false;
  bVar13 = false;
  if ((uint)*pbVar29 == (uVar3 & 0xff)) {
    bVar13 = uVar32 <= *(byte *)(param_1 + 0x1e1);
    bVar12 = *(byte *)(param_1 + 0x1e1) == uVar32;
  }
  if (bVar13 && !bVar12) goto LAB_0214d9f8;
  if ((uint)*(byte *)(param_1 + 0x1e2) <= (uVar3 & 0xff)) {
    bVar12 = false;
    bVar13 = false;
    if ((uint)*(byte *)(param_1 + 0x1e2) == (uVar3 & 0xff)) {
      bVar13 = uVar32 <= *(byte *)(param_1 + 0x1e3);
      bVar12 = *(byte *)(param_1 + 0x1e3) == uVar32;
    }
    if (!bVar13 || bVar12) goto LAB_0214d9f8;
  }
LAB_0214dfd0:
  puVar10 = PTR_DAT_04bc25f0;
  puVar9 = PTR_DAT_04bc25e8;
  puVar1 = PTR_DAT_04bb3968;
  lVar17 = *(long *)PTR_DAT_04bb3968;
  uVar15 = *(uint *)(pbVar29 + 4);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar15);
  if ((int)*(uint *)(lVar17 + 0x168f0) < 1) {
    if (((*(long *)(lVar17 + 0x167e0) == 0) ||
        (puVar28 = *(uint **)(*(long *)(lVar17 + 0x167e0) + 8), puVar28 == (uint *)0x0)) ||
       (((uVar15 < *(uint *)(lVar17 + 0x167f8) &&
         (*(char *)(*(long *)(lVar17 + 0x16800) + (long)(int)uVar15) == '\0')) ||
        (((*puVar28 <= uVar15 || (puVar28[1] == 0)) || ((ushort)puVar28[2] == 0))))))
    goto LAB_0214e2f4;
    iVar24 = 0xc;
    if (*(char *)((long)puVar28 + 10) != '\0') {
      iVar24 = 0x1c;
    }
    puVar28 = (uint *)((ulong)(puVar28[1] * uVar15 + (uint)(ushort)puVar28[2] * 8 + iVar24) +
                      (long)puVar28);
  }
  else {
    if (*(uint *)(lVar17 + 0x168f0) <= uVar15) goto LAB_0214e2f4;
    if (*(uint *)(lVar17 + 0x168e0) <= uVar15) {
      uVar15 = 0;
    }
    puVar28 = *(uint **)(*(long *)(lVar17 + 0x168e8) + (ulong)uVar15 * 8);
  }
  if ((puVar28 != (uint *)0x0) && (*puVar28 != 0)) {
    cVar22 = *PTR_DAT_04bc25e8;
    do {
      if (cVar22 == '\0') {
        cVar22 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
      }
      else {
        uVar15 = *(uint *)(puVar10 + 8);
        if (-1 < (int)uVar15) {
          if ((((char *)((ulong)uVar15 + (long)puVar28) != (char *)0x0) &&
              (*(char *)((ulong)uVar15 + (long)puVar28) == '\x04')) && ((param_4 & 1) == 0)) {
            lVar17 = *(long *)PTR_DAT_04bb4760 + (ulong)param_2 * 0x15;
            if (0x6c < param_2) {
              lVar17 = *(long *)PTR_DAT_04bb4760;
            }
            uVar15 = (uint)*(byte *)(lVar17 + 4) | (*(byte *)(lVar17 + 5) & 3) << 8;
            if (0x1ff < uVar15) {
              uVar15 = uVar15 | 0xfffffc00;
            }
            local_98 = (undefined *)CONCAT44(local_98._4_4_,3);
            uVar16 = FUN_02911fc0(uVar15,&local_98);
            if ((uVar16 & 1) == 0) {
              FUN_02507c6c(&local_98,7,1,0,0);
              puVar10 = PTR_DAT_04bb5038;
              puVar9 = PTR_DAT_04bb4718;
              uVar16 = (ulong)local_98 & 0xff;
              if ((byte)local_98._0_1_ < 8) {
                lVar23 = *(long *)PTR_DAT_04bb4718;
                while( true ) {
                  if (lVar23 == 0) {
                    if (((uVar15 ^ 0xffffffff) & 0xffff) == 0) {
                      return false;
                    }
                  }
                  else {
                    if ((uint)*(ushort *)(lVar23 + uVar16 * 2 + 0xe80) == (uVar15 & 0xffff)) {
                      return false;
                    }
                    if ((uint)*(ushort *)(lVar23 + uVar16 * 2 + 0xe90) == (uVar15 & 0xffff)) {
                      return false;
                    }
                  }
                  do {
                    if (uVar16 == 7) goto LAB_0214e284;
                    uVar16 = uVar16 + 1;
                    uVar20 = FUN_02507924(&local_98,puVar10 + uVar16);
                  } while ((uVar20 & 1) == 0);
                  bVar6 = puVar10[uVar16];
                  uVar16 = (ulong)bVar6;
                  if (7 < bVar6) break;
                  local_98 = (undefined *)CONCAT71(local_98._1_7_,bVar6);
                  lVar23 = *(long *)puVar9;
                }
LAB_0214e284:
                local_98 = (undefined *)CONCAT71(local_98._1_7_,0xff);
              }
              uVar16 = FUN_01d69340(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),uVar15,1);
              if ((uVar16 & 1) != 0) {
                return false;
              }
              if (((param_3 & 1) != 0) &&
                 (uVar16 = FUN_020e9b90(lVar17,*(undefined2 *)PTR_DAT_04bbdeb0), (uVar16 & 1) != 0))
              {
                return false;
              }
            }
          }
          break;
        }
        if (uVar15 != 0xffffffff) break;
      }
      lVar17 = (long)puVar28 - (ulong)*puVar28;
      if ((*puVar28 == 0) || (lVar17 == 0)) break;
      lVar23 = 0xc;
      if (*(char *)(lVar17 + 10) != '\0') {
        lVar23 = 0x1c;
      }
      if (lVar23 + lVar17 == 0) break;
      uVar16 = (ulong)*(ushort *)(lVar17 + 8);
      *(undefined4 *)(puVar10 + 8) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar25 = (int *)(lVar23 + lVar17 + 4);
      while (piVar25[-1] != 0x378b2f14) {
        piVar25 = piVar25 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0214e2f4;
      }
      iVar24 = 0;
      if (*piVar25 != -1) {
        iVar24 = *piVar25;
      }
      *(int *)(puVar10 + 8) = iVar24;
      if (*puVar28 == 0) break;
    } while( true );
  }
LAB_0214e2f4:
  pbVar21 = (byte *)FUN_0214fac0(param_1,param_2,pbVar29);
  if (pbVar21 != (byte *)0x0) {
    pbVar29 = pbVar21;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 4);
  }
  *(byte **)(param_1 + 0x1f0) = pbVar29;
  *(undefined8 *)(param_1 + 0x228) = uVar31;
  *(byte *)(param_1 + 0x1fa) = (param_3 ^ 0xff) & 1;
  iVar24 = *(int *)(pbVar29 + 4);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar24);
  if ((cVar26 != '\0') || (*(int *)(param_1 + 0x1fc) != iVar24)) {
    if (*(int *)(param_1 + 0x1fc) != iVar24) {
      uVar5 = *(undefined1 *)(param_1 + 0x234);
      *(undefined1 *)(param_1 + 0x234) = 0;
      *(undefined1 *)(param_1 + 0x235) = uVar5;
      lVar17 = FUN_0205684c(*(long *)puVar1 + 0x16558,iVar24);
      if (lVar17 != 0) {
        pcVar18 = (char *)FUN_021533c0(lVar17,0,0xaaae3a0f,*(undefined8 *)PTR_DAT_04bc2aa8);
        if (pcVar18 == (char *)0x0) {
          bVar12 = false;
        }
        else {
          bVar12 = *pcVar18 != '\0';
        }
        *(bool *)(param_1 + 0x234) = bVar12;
      }
    }
    FUN_0214fcb0(param_1,param_2);
    iVar24 = *(int *)(*(long *)(param_1 + 0x1f0) + 4);
  }
  return *(int *)(param_1 + 0x1fc) != iVar24;
LAB_0214dbd4:
  pcVar18 = (char *)0x0;
LAB_0214dc6c:
  pcVar4 = "NotEvent";
  if (pcVar18 != (char *)0x0) {
    pcVar4 = pcVar18;
  }
  FUN_006d8678(&local_98,pcVar4);
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  puVar9 = PTR_DAT_04bc2638;
  if (local_90 != "NotEvent") {
    uVar16 = 0;
    bVar12 = true;
    do {
      if (local_90[uVar16] != "NotEvent"[uVar16]) break;
      if (local_90[uVar16] == '\0') {
        if (bVar12) goto LAB_0214de30;
        break;
      }
      if (local_90[uVar16 + 1] != "NotEvent"[uVar16 + 1]) break;
      if (local_90[uVar16 + 1] == '\0') goto LAB_0214de30;
      if (local_90[uVar16 + 2] != "NotEvent"[uVar16 + 2]) break;
      if (local_90[uVar16 + 2] == '\0') goto LAB_0214de30;
      bVar12 = uVar16 < 0x7fffe;
      uVar16 = uVar16 + 3;
    } while (uVar16 != 0x80001);
    uVar15 = *puVar28;
    if (uVar15 != 0) {
      cVar22 = *PTR_DAT_04bc2630;
      do {
        if (cVar22 == '\0') {
          cVar22 = '\x01';
          *PTR_DAT_04bc2630 = 1;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          uVar15 = *puVar28;
        }
        else {
          uVar27 = *(uint *)(puVar9 + 0x18);
          if (-1 < (int)uVar27) {
            pcVar18 = (char *)((ulong)uVar27 + (long)puVar28);
            goto LAB_0214de08;
          }
          if (uVar27 != 0xffffffff) break;
        }
        puVar8 = (uint *)(ulong)uVar15;
        pcVar18 = (char *)0x0;
        if ((puVar8 == (uint *)0x0) || (pcVar18 = (char *)0x0, puVar28 == puVar8))
        goto LAB_0214de08;
        lVar23 = 0xc;
        if (*(char *)((long)puVar28 + (10 - (long)puVar8)) != '\0') {
          lVar23 = 0x1c;
        }
        lVar23 = (long)puVar28 + (lVar23 - (long)puVar8);
        pcVar18 = (char *)0x0;
        if (lVar23 == 0) goto LAB_0214de08;
        uVar16 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar8));
        *(undefined4 *)(puVar9 + 0x18) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar25 = (int *)(lVar23 + 4);
        while (piVar25[-1] != 0x7d740fa4) {
          piVar25 = piVar25 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0214de04;
        }
        iVar24 = 0;
        if (*piVar25 != -1) {
          iVar24 = *piVar25;
        }
        *(int *)(puVar9 + 0x18) = iVar24;
        uVar15 = *puVar28;
        if (uVar15 == 0) break;
      } while( true );
    }
LAB_0214de04:
    pcVar18 = (char *)0x0;
LAB_0214de08:
    pcStack_a0 = "NotEvent";
    if (pcVar18 != (char *)0x0) {
      pcStack_a0 = pcVar18;
    }
    local_a8 = puVar1;
    uVar16 = FUN_00879630(lVar30,&local_a8,1);
    if ((uVar16 & 1) == 0) goto LAB_0214da54;
  }
LAB_0214de30:
  local_b0._0_4_ = *(undefined4 *)(pbVar29 + 4);
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 == 0) goto LAB_0214dfd0;
  puVar19 = *(undefined8 **)(lVar23 + 0x10);
  if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
    lVar23 = (**(code **)(*(long *)*puVar19 + 0x38))();
    if (lVar23 == 0) goto LAB_0214dfd0;
    lVar23 = lVar23 + 0x70;
  }
  else if (((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0)) ||
          (lVar23 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar23 == 0)) goto LAB_0214dfd0;
  plVar2 = (long *)(lVar23 + 0xe6ba8);
  if ((*(long **)(lVar23 + 0xe6bc8) == (long *)0x0) ||
     (puVar19 = (undefined8 *)**(long **)(lVar23 + 0xe6bc8), puVar19 == (undefined8 *)0x0)) {
    uVar15 = 1;
  }
  else {
    uVar15 = (**(code **)*puVar19)();
    uVar15 = uVar15 ^ 1;
  }
  bVar12 = true;
  switch(local_b0._0_4_) {
  case (BADTYPE)0x15:
    local_a8 = *(undefined **)(*(long *)(lVar23 + 0xe6bb0) + *plVar2 + 0x150);
    break;
  case (BADTYPE)0x16:
    uVar16 = FUN_0284a8e4(*(long *)(lVar23 + 0xe6bb0) + *plVar2 + 0x134);
    if ((uVar16 & 1) != 0) goto switchD_0214dee8_caseD_17;
    goto LAB_0214df70;
  default:
    goto switchD_0214dee8_caseD_17;
  case (BADTYPE)0x18:
    local_a8 = *(undefined **)(*(long *)(lVar23 + 0xe6bb0) + *plVar2 + 0x118);
    break;
  case (BADTYPE)0x19:
    uVar16 = FUN_0284a7d8(*(long *)(lVar23 + 0xe6bb0) + *plVar2 + 0xfc);
    goto joined_r0x0214dfa8;
  }
  if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
    lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_98 = (undefined *)(lVar30 + -0x15180);
    local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
  }
  uVar16 = (ulong)local_a8 >> 0x30;
  local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
  local_a8 = (undefined *)(CONCAT26((short)uVar16,(undefined6)local_a8) & 0xff00ffffffffffff);
  uVar16 = FUN_00a80d84(&local_a8,1);
joined_r0x0214dfa8:
  if ((uVar16 & 1) == 0) {
LAB_0214df70:
    bVar12 = false;
  }
switchD_0214dee8_caseD_17:
  if ((((uVar15 & 1) == 0) && (*(long *)(lVar23 + 0xe6bc8) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar23 + 0xe6bc8) + 8), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  if (bVar12) goto LAB_0214dfd0;
LAB_0214da54:
  lVar17 = *(long *)(lVar17 + 8);
  pbVar29 = (byte *)(lVar17 + -0x10);
  if (pbVar29 == (byte *)(param_1 + 0x60)) {
    return false;
  }
  goto LAB_0214da64;
}

