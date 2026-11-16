
/* WARNING: Removing unreachable block (ram,0x027e7344) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_027e69c0(byte *param_1,long param_2,undefined4 param_3,int param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  ushort *puVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined3 uVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  char *pcVar21;
  int *piVar22;
  byte *pbVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  ushort *puVar28;
  uint uVar29;
  ulong uVar30;
  bool bVar31;
  undefined2 local_110;
  undefined1 local_10e;
  uint local_10c;
  undefined *local_108;
  char *local_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  char *pcStack_70;
  
  puVar11 = PTR_DAT_04bb46b0;
  lVar25 = *(long *)PTR_DAT_04bb46b0;
  if (lVar25 == 0) {
    return false;
  }
  puVar26 = *(undefined8 **)(lVar25 + 0x10);
  if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
    lVar25 = (**(code **)(*(long *)*puVar26 + 0x38))();
    if (lVar25 == 0) {
      return false;
    }
    lVar25 = lVar25 + 0x70;
  }
  else {
    if (puVar26 == (undefined8 *)0x0) {
      return false;
    }
    if ((long *)puVar26[0x26] == (long *)0x0) {
      return false;
    }
    lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
    if (lVar25 == 0) {
      return false;
    }
  }
  plVar1 = (long *)(&LAB_00205710 + lVar25);
  lVar27 = *(long *)(&LAB_00205730 + lVar25);
  if (lVar27 == 0) {
    uVar19 = 0;
  }
  else {
    if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
      uVar19 = 0;
      plVar20 = *(long **)(lVar27 + 0x20);
    }
    else {
      uVar19 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
      uVar19 = uVar19 & 0xffffffff;
      if (*(long *)(&LAB_00205730 + lVar25) == 0) goto LAB_027e6ae0;
      plVar20 = *(long **)(*(long *)(&LAB_00205730 + lVar25) + 0x20);
    }
    if (plVar20 != (long *)0x0) {
      local_108 = (undefined *)*plVar1;
      local_100 = *(char **)(&LAB_00205718 + lVar25);
      local_f8 = 0xc0;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_108);
    }
  }
LAB_027e6ae0:
  pcVar21 = *(char **)(&LAB_00205718 + lVar25) + *plVar1;
  bVar15 = pcVar21[0xb4];
  uVar30 = (ulong)bVar15;
  if (bVar15 == 3) {
    bVar31 = false;
    uVar30 = 3;
LAB_027e6b34:
    bVar15 = pcVar21[0xb5];
    if (bVar15 == 3) {
      bVar31 = false;
LAB_027e6b78:
      bVar15 = pcVar21[0xb6];
      if (bVar15 != 3) {
        pcVar12 = pcVar21 + (ulong)bVar15 * 0x3c;
        if (2 < bVar15) {
          pcVar12 = pcVar21;
        }
        if (pcVar12[0x20] == '\x01') {
          uVar30 = (ulong)(uint)bVar15;
        }
        else {
          if (pcVar12[0x20] != '\x02') {
            uVar29 = (uint)bVar15;
            if ((uint)uVar30 != 3) {
              uVar29 = (uint)uVar30;
            }
            goto joined_r0x027e6bbc;
          }
          if (bVar31) {
            bVar31 = false;
            goto LAB_027e6e00;
          }
        }
      }
      goto LAB_027e6df4;
    }
    pcVar12 = pcVar21 + (ulong)bVar15 * 0x3c;
    if (2 < bVar15) {
      pcVar12 = pcVar21;
    }
    uVar29 = (uint)bVar15;
    if (pcVar12[0x20] != '\x01') {
      if (pcVar12[0x20] != '\x02') {
        bVar31 = false;
        if ((uint)uVar30 != 3) {
          uVar29 = (uint)uVar30;
        }
        uVar30 = (ulong)uVar29;
      }
      goto LAB_027e6b78;
    }
joined_r0x027e6bbc:
    uVar30 = (ulong)uVar29;
  }
  else {
    pcVar12 = pcVar21 + uVar30 * 0x3c;
    if (2 < bVar15) {
      pcVar12 = pcVar21;
    }
    if (pcVar12[0x20] != '\x01') {
      if (pcVar12[0x20] == '\x02') {
        bVar31 = true;
        uVar30 = 3;
      }
      else {
        bVar31 = false;
      }
      goto LAB_027e6b34;
    }
LAB_027e6df4:
    uVar29 = (uint)uVar30;
  }
  if (2 < uVar29) {
    bVar31 = true;
    goto LAB_027e6e00;
  }
  local_10c = (uint)uVar30;
  if ((*(long *)(&LAB_00205730 + lVar25) != 0) &&
     (plVar20 = *(long **)(*(long *)(&LAB_00205730 + lVar25) + 0x20), plVar20 != (long *)0x0)) {
    local_f8 = 0xc0;
    local_108 = (undefined *)*plVar1;
    local_100 = *(char **)(&LAB_00205718 + lVar25);
    (**(code **)(*plVar20 + 0x20))(plVar20,&local_108);
    uVar30 = (ulong)local_10c;
  }
  iVar18 = FUN_0285e924(uVar30);
  local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar18);
  bVar31 = 1 < iVar18;
  if (iVar18 < 2) goto LAB_027e6e00;
  lVar27 = *(long *)(&LAB_00205730 + lVar25);
  if ((lVar27 != 0) && (plVar20 = *(long **)(lVar27 + 0x20), plVar20 != (long *)0x0)) {
    local_108 = (undefined *)*plVar1;
    local_100 = *(char **)(&LAB_00205718 + lVar25);
    local_f8 = 0xc0;
    (**(code **)(*plVar20 + 0x20))(plVar20,&local_108);
    lVar27 = *(long *)(&LAB_00205730 + lVar25);
  }
  local_108 = (undefined *)CONCAT44(local_108._4_4_,local_10c);
  puVar28 = (ushort *)(*(char **)(&LAB_00205718 + lVar25) + *plVar1);
  puVar13 = (undefined1 *)((long)puVar28 + 0xb7) + local_10c;
  if (2 < local_10c) {
    puVar13 = (undefined1 *)((long)puVar28 + 0xb7);
  }
  uVar16 = *puVar13;
  if ((lVar27 != 0) && (plVar20 = *(long **)(lVar27 + 0x20), plVar20 != (long *)0x0)) {
    local_f8 = 0xc0;
    local_108 = (undefined *)*plVar1;
    local_100 = *(char **)(&LAB_00205718 + lVar25);
    (**(code **)(*plVar20 + 0x20))(plVar20,&local_108);
    puVar28 = (ushort *)(*(long *)(&LAB_00205718 + lVar25) + *plVar1);
  }
  local_108 = (undefined *)CONCAT44(local_108._4_4_,local_10c);
  pbVar2 = param_1 + 0xac3b0;
  pbVar3 = param_1 + 0x99180;
  pbVar4 = param_1 + 0x85f50;
  pbVar5 = param_1 + 0x72d20;
  pbVar6 = param_1 + 0x5faf0;
  pbVar7 = param_1 + 0x4c8c0;
  pbVar8 = param_1 + 0x39690;
  pbVar9 = param_1 + 0x26460;
  pbVar23 = param_1 + 0x13230;
  puVar14 = puVar28 + (ulong)local_10c * 0x1e;
  if (2 < local_10c) {
    puVar14 = puVar28;
  }
  local_10e = (undefined1)puVar14[1];
  local_110 = *puVar14;
  iVar18 = *(int *)(puVar14 + 2);
  uVar30 = (ulong)(local_110 & 0xff);
  if (((0x22 < uVar30) ||
      (local_110._1_1_ = (byte)(local_110 >> 8), (byte)PTR_DAT_04bc27f0[uVar30] < local_110._1_1_))
     || (uVar29 = (uint)local_110._1_1_,
        (*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(uVar29 & 0x1f) & 1) == 0)) {
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_108 = (undefined *)0x0;
    DAT_05594ba8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (char *)0x0;
    local_f8 = 0;
    if (local_10c < 3) {
      DAT_05594b50 = *(undefined4 *)(&UNK_0417ba70 + (long)(int)local_10c * 4);
      FUN_020fc590(&local_108,&LAB_027e9b40);
      uVar17 = FUN_027e8fb0(param_1,&local_108);
    }
    else {
      uVar17 = 0x80023;
    }
    local_108 = (undefined *)CONCAT53(local_108._3_5_,uVar17);
    local_110 = (ushort)uVar17;
    local_10e = FUN_020fd7d8(&local_108);
  }
  uVar30 = (ulong)*param_1;
  if (((uVar30 < 0x23) && (bVar15 = param_1[1], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
     (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
      (CONCAT11(*param_1,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8))))) {
LAB_027e7190:
    param_4 = param_4 + 1;
  }
  else {
    uVar30 = (ulong)*pbVar23;
    if (((uVar30 < 0x23) && (bVar15 = param_1[0x13231], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
       && (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
           (CONCAT11(*pbVar23,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8)))))
    goto LAB_027e7190;
    uVar30 = (ulong)*pbVar9;
    if ((((uVar30 < 0x23) && (bVar15 = param_1[0x26461], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
        && ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0)) &&
       (CONCAT11(*pbVar9,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8))) goto LAB_027e7190;
    uVar30 = (ulong)*pbVar8;
    if (((uVar30 < 0x23) && (bVar15 = param_1[0x39691], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
       && (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
           (CONCAT11(*pbVar8,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8)))))
    goto LAB_027e7190;
    uVar30 = (ulong)*pbVar7;
    if (((uVar30 < 0x23) && (bVar15 = param_1[0x4c8c1], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
       && (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
           (CONCAT11(*pbVar7,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8)))))
    goto LAB_027e7190;
    uVar30 = (ulong)*pbVar6;
    if ((((uVar30 < 0x23) && (bVar15 = param_1[0x5faf1], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
        && ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0)) &&
       (CONCAT11(*pbVar6,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8))) goto LAB_027e7190;
    uVar30 = (ulong)*pbVar5;
    if (((uVar30 < 0x23) && (bVar15 = param_1[0x72d21], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
       && (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
           (CONCAT11(*pbVar5,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8)))))
    goto LAB_027e7190;
    uVar30 = (ulong)*pbVar4;
    if (((uVar30 < 0x23) && (bVar15 = param_1[0x85f51], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
       && (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
           (CONCAT11(*pbVar4,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8)))))
    goto LAB_027e7190;
    uVar30 = (ulong)*pbVar3;
    if ((((uVar30 < 0x23) && (bVar15 = param_1[0x99181], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
        && ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0)) &&
       (CONCAT11(*pbVar3,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8))) goto LAB_027e7190;
    uVar30 = (ulong)*pbVar2;
    if (((uVar30 < 0x23) && (bVar15 = param_1[0xac3b1], bVar15 <= (byte)PTR_DAT_04bc27f0[uVar30]))
       && (((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(bVar15 & 0x1f) & 1) != 0 &&
           (CONCAT11(*pbVar2,bVar15) == (ushort)(local_110 >> 8 | local_110 << 8)))))
    goto LAB_027e7190;
    FUN_0268c7a0(param_2,&local_110,4,0);
    puVar10 = PTR_DAT_04bb2020 + 0x10;
    local_100 = "FromSettlerQuest";
    local_108 = puVar10;
    FUN_02749650(param_2 + 0x1267c,param_3,&local_108,1,0);
    FUN_026b1034(param_2,4,(ulong)(iVar18 != 0) << 1);
    FUN_027e9bf0(param_1,param_2,param_3,param_4);
    uVar30 = (ulong)(byte)local_110;
    local_100 = "IsNpcIncreased";
    if (0x22 < (byte)local_110) {
      uVar30 = 0;
    }
    *(uint *)(param_1 + uVar30 * 4 + 0xbf5e0) =
         *(uint *)(param_1 + uVar30 * 4 + 0xbf5e0) | 1 << (ulong)(local_110._1_1_ & 0x1f);
    local_108 = puVar10;
    iVar18 = FUN_0273ea30(&local_108);
    if ((iVar18 == 0) && (uVar24 = FUN_021d7d60(param_2), (int)uVar24 != -1)) {
      puVar10 = PTR_DAT_04bb2020 + 0x10;
      local_100 = "Is3rdNpc";
      local_108 = puVar10;
      FUN_027494ac(uVar24,&local_108,1);
      local_100 = "IsNpcIncreased";
      local_108 = puVar10;
      FUN_0273f3c4(&local_108,1);
    }
    pcVar21 = (char *)FUN_02663ce0(uVar16);
    if (pcVar21 != (char *)0x0) {
      local_f8 = local_f8 & 0xffffffffffffff00;
      local_100 = pcVar21;
      if (*(long *)(pcVar21 + 0x28) == 0) {
        uVar16 = 0;
      }
      else {
        puVar26 = *(undefined8 **)(*(long *)(pcVar21 + 0x28) + 0x10);
        uVar16 = 0;
        if (puVar26 != (undefined8 *)0x0) {
          uVar16 = (**(code **)*puVar26)();
        }
      }
      puVar10 = PTR_DAT_04bb6ba8;
      local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) & 0xffffffffffff01ff
      ;
      local_108 = PTR_DAT_04bb6ba8 + 0x10;
      FUN_02640280(pcVar21,0x12e8);
      local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
      if (param_1[0x1e3361] != 0xff) {
        *(byte *)(*(long *)(pcVar21 + 0x10) + *(long *)(pcVar21 + 8) + 0x1c4) = param_1[0x1e3361];
      }
      FUN_02640184(&local_108);
      local_f8 = local_f8 & 0xffffffffffffff00;
      if (*(long *)(pcVar21 + 0x28) == 0) {
        uVar16 = 0;
        local_100 = pcVar21;
      }
      else {
        puVar26 = *(undefined8 **)(*(long *)(pcVar21 + 0x28) + 0x10);
        uVar16 = 0;
        local_100 = pcVar21;
        if (puVar26 != (undefined8 *)0x0) {
          uVar16 = (**(code **)*puVar26)();
        }
      }
      local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) & 0xffffffffffff01ff
      ;
      local_108 = puVar10 + 0x10;
      FUN_02640280(pcVar21,0x12e8);
      FUN_027cdc30(*(long *)(pcVar21 + 0x10) + *(long *)(pcVar21 + 8));
      FUN_02640184(&local_108);
    }
    if ((*(int *)(puVar14 + 2) != 0) && (*(long *)puVar11 != 0)) {
      lVar27 = FUN_026eec4c(*(long *)puVar11,0);
      if (lVar27 == 0) {
LAB_027e7474:
        if (*(long *)puVar11 != 0) {
          lVar27 = FUN_026eec4c(*(long *)puVar11,1);
          if (lVar27 != 0) {
            local_f8 = CONCAT71(local_f8._1_7_,1);
            local_100 = (char *)(lVar27 + 0x17b88);
            if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
              uVar16 = 0;
            }
            else {
              puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
              uVar16 = 0;
              if (puVar26 != (undefined8 *)0x0) {
                uVar16 = (**(code **)*puVar26)();
              }
            }
            local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                       0xffffffffffff01ff;
            local_108 = PTR_DAT_04bb4c18 + 0x10;
            piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
            iVar18 = *(int *)(puVar14 + 2);
            if ((iVar18 == piVar22[7]) &&
               ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
            FUN_02640184(&local_108);
          }
          if (*(long *)puVar11 != 0) {
            lVar27 = FUN_026eec4c(*(long *)puVar11,2);
            if (lVar27 != 0) {
              local_100 = (char *)(lVar27 + 0x17b88);
              local_f8 = CONCAT71(local_f8._1_7_,1);
              if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
                uVar16 = 0;
              }
              else {
                puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
                uVar16 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  uVar16 = (**(code **)*puVar26)();
                }
              }
              local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                         0xffffffffffff01ff;
              local_108 = PTR_DAT_04bb4c18 + 0x10;
              piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
              iVar18 = *(int *)(puVar14 + 2);
              if ((iVar18 == piVar22[7]) &&
                 ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                  *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                  piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
              FUN_02640184(&local_108);
            }
            if (*(long *)puVar11 != 0) {
              lVar27 = FUN_026eec4c(*(long *)puVar11,3);
              if (lVar27 != 0) {
                local_100 = (char *)(lVar27 + 0x17b88);
                local_f8 = CONCAT71(local_f8._1_7_,1);
                if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
                  uVar16 = 0;
                }
                else {
                  puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
                  uVar16 = 0;
                  if (puVar26 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar26)();
                  }
                }
                local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                           0xffffffffffff01ff;
                local_108 = PTR_DAT_04bb4c18 + 0x10;
                piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
                iVar18 = *(int *)(puVar14 + 2);
                if ((iVar18 == piVar22[7]) &&
                   ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                    *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                    piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
                FUN_02640184(&local_108);
              }
              if (*(long *)puVar11 != 0) {
                lVar27 = FUN_026eec4c(*(long *)puVar11,4);
                if (lVar27 != 0) {
                  local_100 = (char *)(lVar27 + 0x17b88);
                  local_f8 = CONCAT71(local_f8._1_7_,1);
                  if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
                    uVar16 = 0;
                  }
                  else {
                    puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
                    uVar16 = 0;
                    if (puVar26 != (undefined8 *)0x0) {
                      uVar16 = (**(code **)*puVar26)();
                    }
                  }
                  local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                             0xffffffffffff01ff;
                  local_108 = PTR_DAT_04bb4c18 + 0x10;
                  piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
                  iVar18 = *(int *)(puVar14 + 2);
                  if ((iVar18 == piVar22[7]) &&
                     ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                      *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                      piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
                  FUN_02640184(&local_108);
                }
                if (*(long *)puVar11 != 0) {
                  lVar27 = FUN_026eec4c(*(long *)puVar11,5);
                  if (lVar27 != 0) {
                    local_100 = (char *)(lVar27 + 0x17b88);
                    local_f8 = CONCAT71(local_f8._1_7_,1);
                    if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
                      uVar16 = 0;
                    }
                    else {
                      puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
                      uVar16 = 0;
                      if (puVar26 != (undefined8 *)0x0) {
                        uVar16 = (**(code **)*puVar26)();
                      }
                    }
                    local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                               0xffffffffffff01ff;
                    local_108 = PTR_DAT_04bb4c18 + 0x10;
                    piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
                    iVar18 = *(int *)(puVar14 + 2);
                    if ((iVar18 == piVar22[7]) &&
                       ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                        *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                        piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
                    FUN_02640184(&local_108);
                  }
                  if (*(long *)puVar11 != 0) {
                    lVar27 = FUN_026eec4c(*(long *)puVar11,6);
                    if (lVar27 != 0) {
                      local_100 = (char *)(lVar27 + 0x17b88);
                      local_f8 = CONCAT71(local_f8._1_7_,1);
                      if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
                        uVar16 = 0;
                      }
                      else {
                        puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
                        uVar16 = 0;
                        if (puVar26 != (undefined8 *)0x0) {
                          uVar16 = (**(code **)*puVar26)();
                        }
                      }
                      local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                                 0xffffffffffff01ff;
                      local_108 = PTR_DAT_04bb4c18 + 0x10;
                      piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
                      iVar18 = *(int *)(puVar14 + 2);
                      if ((iVar18 == piVar22[7]) &&
                         ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                          *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                          piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
                      FUN_02640184(&local_108);
                    }
                    if ((*(long *)puVar11 != 0) &&
                       (lVar27 = FUN_026eec4c(*(long *)puVar11,7), lVar27 != 0)) {
                      local_100 = (char *)(lVar27 + 0x17b88);
                      local_f8 = CONCAT71(local_f8._1_7_,1);
                      if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
                        uVar16 = 0;
                      }
                      else {
                        puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
                        uVar16 = 0;
                        if (puVar26 != (undefined8 *)0x0) {
                          uVar16 = (**(code **)*puVar26)();
                        }
                      }
                      local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                                 0xffffffffffff01ff;
                      local_108 = PTR_DAT_04bb4c18 + 0x10;
                      piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
                      iVar18 = *(int *)(puVar14 + 2);
                      if ((iVar18 == piVar22[7]) &&
                         ((*(long *)(piVar22 + 8) == *(long *)(puVar14 + 4) &&
                          *(long *)(piVar22 + 10) == *(long *)(puVar14 + 8)) &&
                          piVar22[0xc] == *(int *)(puVar14 + 0xc))) goto LAB_027e7974;
                      FUN_02640184(&local_108);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        local_100 = (char *)(lVar27 + 0x17b88);
        local_f8 = CONCAT71(local_f8._1_7_,1);
        if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
          uVar16 = 0;
        }
        else {
          puVar26 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
          uVar16 = 0;
          if (puVar26 != (undefined8 *)0x0) {
            uVar16 = (**(code **)*puVar26)();
          }
        }
        local_f8 = CONCAT62(local_f8._2_6_,CONCAT11(uVar16,(undefined1)local_f8)) &
                   0xffffffffffff01ff;
        local_108 = PTR_DAT_04bb4c18 + 0x10;
        piVar22 = (int *)(*(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90));
        iVar18 = *(int *)(puVar14 + 2);
        if ((iVar18 != piVar22[7]) ||
           ((*(long *)(piVar22 + 8) != *(long *)(puVar14 + 4) ||
            *(long *)(piVar22 + 10) != *(long *)(puVar14 + 8)) ||
            piVar22[0xc] != *(int *)(puVar14 + 0xc))) {
          FUN_02640184(&local_108);
          goto LAB_027e7474;
        }
LAB_027e7974:
        if ((((iVar18 != 0) && (*piVar22 != 0)) &&
            (piVar22 = (int *)FUN_02691a08(param_2), piVar22[7] != 0)) && (*piVar22 != 0)) {
          puVar11 = PTR_DAT_04bb2020 + 0x10;
          pcStack_70 = "InducementFlag";
          local_78 = puVar11;
          FUN_02747170(piVar22 + 0xe,&local_78,1);
          pcStack_70 = "HasAcquaintanceship";
          local_78 = puVar11;
          FUN_02747170(piVar22 + 0xe,&local_78,1);
        }
        FUN_02640184(&local_108);
      }
    }
  }
  local_108 = (undefined *)CONCAT44(local_108._4_4_,2);
  *(undefined1 *)(puVar14 + 0x10) = 2;
  if (1 < param_4) {
    uVar30 = (ulong)*param_1;
    if (((uVar30 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      uVar30 = (ulong)*pbVar23;
      if (((uVar30 < 0x23) && (param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0))
      {
        uVar30 = (ulong)*pbVar9;
        if (((uVar30 < 0x23) && (param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)
           ) {
          uVar30 = (ulong)*pbVar8;
          pbVar23 = pbVar8;
          if (uVar30 < 0x23) {
            if (((byte)PTR_DAT_04bc27f0[uVar30] < param_1[0x39691]) ||
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1)
                == 0)) {
              uVar24 = 3;
            }
            else {
              uVar30 = (ulong)*pbVar7;
              if (((uVar30 < 0x23) && (param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1)
                  != 0)) {
                uVar30 = (ulong)*pbVar6;
                if (((uVar30 < 0x23) && (param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) &
                    1) != 0)) {
                  uVar30 = (ulong)*pbVar5;
                  if (((uVar30 < 0x23) && (param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
                     ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(param_1[0x72d21] & 0x1f)
                      & 1) != 0)) {
                    uVar30 = (ulong)*pbVar4;
                    if (((uVar30 < 0x23) && (param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar30])) &&
                       ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >>
                         (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
                      uVar30 = (ulong)*pbVar3;
                      if (((uVar30 < 0x23) && (param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar30]))
                         && ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >>
                              (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
                        uVar30 = (ulong)*pbVar2;
                        if (((uVar30 < 0x23) && (param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar30])
                            ) && ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >>
                                   (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) goto LAB_027e6e00;
                        uVar24 = 9;
                        pbVar23 = pbVar2;
                      }
                      else {
                        uVar24 = 8;
                        pbVar23 = pbVar3;
                      }
                    }
                    else {
                      uVar24 = 7;
                      pbVar23 = pbVar4;
                    }
                  }
                  else {
                    uVar24 = 6;
                    pbVar23 = pbVar5;
                  }
                }
                else {
                  uVar24 = 5;
                  pbVar23 = pbVar6;
                }
              }
              else {
                uVar24 = 4;
                pbVar23 = pbVar7;
              }
            }
          }
          else {
            uVar24 = 3;
          }
        }
        else {
          uVar24 = 2;
          pbVar23 = pbVar9;
        }
      }
      else {
        uVar24 = 1;
      }
    }
    else {
      uVar24 = 0;
      pbVar23 = param_1;
    }
    FUN_027e69c0(param_1,pbVar23,uVar24,param_4 + -1);
  }
LAB_027e6e00:
  if ((((uVar19 & 1) != 0) && (*(long *)(&LAB_00205730 + lVar25) != 0)) &&
     (puVar26 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar25) + 0x18),
     puVar26 != (undefined8 *)0x0)) {
    (**(code **)*puVar26)();
  }
  return bVar31;
}

