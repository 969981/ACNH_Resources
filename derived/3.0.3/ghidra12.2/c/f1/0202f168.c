
void FUN_0202f168(void)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int local_138;
  uint local_134;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_118;
  char *local_110;
  undefined1 local_108;
  byte local_107;
  undefined *local_100;
  char *local_f8;
  undefined1 local_f0;
  byte local_ef;
  uint local_e4;
  undefined *local_e0;
  long local_d8;
  undefined1 local_d0;
  byte local_cf;
  byte local_c8 [4];
  byte local_c4 [4];
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined *local_b0;
  long local_a8;
  undefined1 local_a0;
  byte local_9f;
  undefined8 local_78;
  int local_70;
  uint local_6c [3];
  
  uVar9 = FUN_0290d828();
  if ((uVar9 & 1) != 0) {
    return;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    return;
  }
  local_6c[0] = 0xffffffff;
  sVar6 = *(short *)PTR_DAT_04bbdeb0;
  if (sVar6 != -1) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 6 & 1) != 0) {
      return;
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x1d);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x1d & 1) != 0) {
      return;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0x2d0d9846) {
    return;
  }
  local_70 = 0;
  DAT_05405f40._0_2_ = 0;
  DAT_05405f40._2_4_ = 0x101;
  DAT_05405f40._6_1_ = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar8 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  uVar9 = FUN_02b5f400(&local_70,*(undefined4 *)(puVar15 + 7));
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb32f0;
  local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (lVar14 != 0) {
    uVar9 = FUN_00882d58(lVar14,&local_78);
    if (((uVar9 & 1) != 0) && (4 < local_78._4_1_)) {
      return;
    }
    uVar9 = FUN_008827e0(lVar14);
    if ((uVar9 & 1) != 0) {
      FUN_0203d394(&local_e0,lVar14);
      FUN_00772610(&local_b0,&local_e0);
      iVar8 = FUN_008841f4(lVar14,&local_b0);
      if (iVar8 < 2) {
        return;
      }
    }
  }
  FUN_038e7ea0(&local_c0);
  local_c4[0] = 0xff;
  FUN_02507c6c(&local_b0,1,1,0,0);
  puVar21 = PTR_DAT_04bb5038;
  bVar5 = (byte)local_b0;
  if ((byte)local_b0 < 8) {
    do {
      local_100 = (undefined *)((ulong)local_100 & 0xffffffff00000000);
      local_118 = (undefined *)CONCAT71(local_118._1_7_,bVar5);
      iVar8 = FUN_02582fe0(&local_118);
      if (iVar8 != -1) {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
        uVar9 = FUN_02b5e950(&local_e0,iVar8);
        if ((uVar9 & 1) != 0) {
          local_100 = (undefined *)CONCAT44(local_100._4_4_,(int)local_e0);
          if ((int)local_e0 == local_70) {
            local_c4[0] = (byte)local_b0;
            if (7 < (byte)local_b0) {
              local_c4[0] = 0xff;
            }
            if (7 < local_c4[0]) {
              return;
            }
            goto LAB_0202f3a8;
          }
        }
      }
      bVar5 = (byte)local_b0;
      uVar9 = (ulong)local_b0 & 0xff;
      if ((7 < (byte)local_b0) || (uVar9 + 1 == 8)) break;
      pbVar16 = puVar21 + uVar9 + 1;
      uVar13 = FUN_02507924(&local_b0,pbVar16);
      if ((uVar13 & 1) == 0) {
        if (uVar9 + 2 == 8) break;
        pbVar16 = puVar21 + uVar9 + 2;
        uVar13 = FUN_02507924(&local_b0,pbVar16);
        if ((uVar13 & 1) == 0) {
          if (uVar9 + 3 == 8) break;
          pbVar16 = puVar21 + uVar9 + 3;
          uVar13 = FUN_02507924(&local_b0,pbVar16);
          if ((uVar13 & 1) == 0) {
            if (uVar9 + 4 == 8) break;
            pbVar16 = puVar21 + uVar9 + 4;
            uVar13 = FUN_02507924(&local_b0,pbVar16);
            if ((uVar13 & 1) == 0) {
              if (uVar9 + 5 == 8) break;
              pbVar16 = puVar21 + uVar9 + 5;
              uVar13 = FUN_02507924(&local_b0,pbVar16);
              if ((uVar13 & 1) == 0) {
                if (uVar9 + 6 == 8) break;
                pbVar16 = puVar21 + uVar9 + 6;
                uVar13 = FUN_02507924(&local_b0,pbVar16);
                if ((uVar13 & 1) == 0) {
                  if (uVar9 + 7 == 8) break;
                  pbVar16 = puVar21 + uVar9 + 7;
                  uVar13 = FUN_02507924(&local_b0,pbVar16);
                  if ((uVar13 & 1) == 0) {
                    if (bVar5 == 0) break;
                    pbVar16 = puVar21 + uVar9 + 8;
                    FUN_02507924(&local_b0,pbVar16);
                  }
                }
              }
            }
          }
        }
      }
      bVar5 = *pbVar16;
      if (7 < bVar5) break;
      local_b0 = (undefined *)CONCAT71(local_b0._1_7_,bVar5);
    } while( true );
  }
  if (7 < local_c4[0]) {
    return;
  }
LAB_0202f3a8:
  FUN_00a80e48(&local_78);
  pcVar10 = (char *)FUN_0265b2e0();
  pcVar11 = (char *)FUN_0265b250();
  lVar14 = FUN_0265afd0();
  local_c8[0] = local_c4[0];
  if (7 < local_c4[0]) {
    local_c8[0] = 0xff;
  }
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_c8,1);
  puVar21 = PTR_DAT_04bb27d0;
  uVar9 = FUN_01dbf2ac(*(undefined8 *)PTR_DAT_04bb27d0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  if (lVar14 == 0) {
    return;
  }
  if (pcVar11 == (char *)0x0) {
    return;
  }
  if (pcVar10 == (char *)0x0) {
    return;
  }
  if (1 < *(byte *)(**(long **)puVar21 + 0x476)) {
    return;
  }
  local_a0 = 1;
  local_a8 = lVar12;
  if (*(long **)(lVar12 + 0x28) == (long *)0x0) {
    local_9f = 0;
  }
  else {
    puVar15 = (undefined8 *)**(long **)(lVar12 + 0x28);
    local_9f = 0;
    if (puVar15 != (undefined8 *)0x0) {
      local_9f = (**(code **)*puVar15)();
    }
  }
  local_9f = local_9f & 1;
  local_b0 = PTR_DAT_04bb4e08 + 0x10;
  if (*(ushort *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x1341e) < 0xe)
  goto LAB_0202fa50;
  local_d0 = 1;
  local_d8 = lVar14;
  if (*(long **)(lVar14 + 0x28) == (long *)0x0) {
    local_cf = 0;
  }
  else {
    puVar15 = (undefined8 *)**(long **)(lVar14 + 0x28);
    local_cf = 0;
    if (puVar15 != (undefined8 *)0x0) {
      local_cf = (**(code **)*puVar15)();
    }
  }
  puVar7 = PTR_DAT_04bb2020;
  local_cf = local_cf & 1;
  local_e0 = PTR_DAT_04bb4dc8 + 0x10;
  puVar21 = PTR_DAT_04bb2020 + 0x10;
  local_f8 = "SurpriseVisitDone";
  local_100 = puVar21;
  iVar8 = FUN_0274bce0(local_c4,&local_100);
  if (iVar8 == 0) {
LAB_0202f6a4:
    local_e4 = 0;
    lVar12 = *(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar12 + 0xc154);
    FUN_021eb820(&local_e4);
    FUN_021ebc40(&local_e4,0,0,piVar1);
    local_f0 = 1;
    local_f8 = pcVar10;
    if (*(long **)(pcVar10 + 0x28) == (long *)0x0) {
      local_ef = 0;
    }
    else {
      puVar15 = (undefined8 *)**(long **)(pcVar10 + 0x28);
      local_ef = 0;
      if (puVar15 != (undefined8 *)0x0) {
        local_ef = (**(code **)*puVar15)();
      }
    }
    local_ef = local_ef & 1;
    local_100 = PTR_DAT_04bb7000 + 0x10;
    local_108 = 1;
    local_110 = pcVar11;
    if (*(long **)(pcVar11 + 0x28) == (long *)0x0) {
      local_107 = 0;
    }
    else {
      puVar15 = (undefined8 *)**(long **)(pcVar11 + 0x28);
      local_107 = 0;
      if (puVar15 != (undefined8 *)0x0) {
        local_107 = (**(code **)*puVar15)();
      }
    }
    local_107 = local_107 & 1;
    local_118 = PTR_DAT_04bb7040 + 0x10;
    piVar2 = (int *)(*(long *)(pcVar10 + 0x10) + *(long *)(pcVar10 + 8));
    if (*(char *)((long)piVar2 + 0x2f) == '\x02') {
      if ((*piVar2 != *piVar1) ||
         ((*(long *)(lVar12 + 0xc158) != *(long *)(piVar2 + 1) ||
          *(long *)(lVar12 + 0xc160) != *(long *)(piVar2 + 3)) ||
          *(int *)(lVar12 + 0xc168) != piVar2[5])) {
        if (*(byte *)(piVar2 + 0xb) < 10) {
          local_e4 = local_e4 & (1 << (ulong)(*(byte *)(piVar2 + 0xb) & 0x1f) ^ 0xffffffffU);
        }
        goto LAB_0202f7d0;
      }
LAB_0202fa78:
      FUN_02640184(&local_118);
      FUN_02640184(&local_100);
    }
    else {
LAB_0202f7d0:
      piVar2 = (int *)(*(long *)(pcVar11 + 0x10) + *(long *)(pcVar11 + 8));
      if (*(char *)((long)piVar2 + 0x2f) == '\x02') {
        if ((*piVar2 == *piVar1) &&
           ((*(long *)(lVar12 + 0xc158) == *(long *)(piVar2 + 1) &&
            *(long *)(lVar12 + 0xc160) == *(long *)(piVar2 + 3)) &&
            *(int *)(lVar12 + 0xc168) == piVar2[5])) goto LAB_0202fa78;
        if (*(byte *)(piVar2 + 0xb) < 10) {
          local_e4 = local_e4 & (1 << (ulong)(*(byte *)(piVar2 + 0xb) & 0x1f) ^ 0xffffffffU);
        }
      }
      FUN_021eb8f0(&local_e4);
      FUN_021ec000(&local_e4);
      uVar19 = 0xffffffff;
      uVar9 = 0;
      puVar21 = &DAT_053fe348;
      uVar23 = 0xffffffff;
      local_138 = -1;
      local_134 = 0;
      uVar18 = local_c0;
      uVar24 = uStack_bc;
      uVar22 = local_b8;
      uVar20 = uStack_b4;
      do {
        uVar17 = (uint)uVar9;
        if ((local_e4 >> (ulong)(uVar17 & 0x1f) & 1) == 0) {
LAB_0202f944:
        }
        else {
          iVar8 = FUN_021d6f50(uVar9 & 0xffffffff,local_c4);
          local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar8);
          if ((iVar8 < 3) ||
             (uVar9 == ((long)*(char *)(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x1e335d)
                       & 0xffffffffU))) goto LAB_0202f944;
          if (puVar21[0xaf9] == '\0') {
            if (uVar9 != DAT_05454074) goto LAB_0202f920;
            goto LAB_0202f944;
          }
          if ((((*(long *)(puVar21 + 0xaa0) != 0) &&
               (uVar4 = *(uint *)(*(long *)(puVar21 + 0xaa0) + 4), uVar4 < 6)) &&
              ((1 << (ulong)(uVar4 & 0x1f) & 0x2eU) != 0)) ||
             ((uVar9 == DAT_05454074 ||
              (local_128 = (undefined *)CONCAT44(local_128._4_4_,*(int *)(puVar21 + 0x4e8)),
              *(int *)(puVar21 + 0x4e8) != 0)))) goto LAB_0202f944;
LAB_0202f920:
          pcStack_120 = "MuseumCafeExitTime";
          local_128 = puVar7 + 0x10;
          iVar8 = FUN_027490f0(uVar9 & 0xffffffff,&local_128);
          if (1 < iVar8) goto LAB_0202f944;
          local_128 = PTR_DAT_04bb2020 + 0x10;
          pcStack_120 = "PastCountFromLastVisitPlayerHouse";
          iVar8 = FUN_02746c30(uVar9 & 0xffffffff,local_c4,&local_128);
          if (iVar8 == 0) {
            if (local_138 != 0) {
              local_134 = 0;
            }
          }
          else if (local_138 < iVar8) {
            local_134 = 0;
          }
          else if (iVar8 < local_138) goto LAB_0202f944;
          local_134 = local_134 + 1;
          uVar18 = uVar18 ^ uVar18 << 0xb;
          uVar4 = uVar18 >> 8 ^ uVar20 >> 0x13 ^ uVar18 ^ uVar20;
          if (((ulong)uVar4 * (ulong)local_134 & 0xffffffff00000000) == 0) {
            uVar23 = uVar17;
            uVar19 = uVar17;
          }
          uVar18 = uVar24;
          uVar24 = uVar22;
          uVar22 = uVar20;
          local_138 = iVar8;
          uVar20 = uVar4;
        }
        uVar9 = uVar9 + 1;
        puVar21 = puVar21 + 0xba0;
      } while (uVar9 != 10);
      local_6c[0] = uVar19;
      FUN_02640184(&local_118);
      FUN_02640184(&local_100);
      local_100 = PTR_DAT_04bb2020 + 0x10;
      local_f8 = "VisitQuestCallCount";
      DAT_05405fcc = uVar23;
      FUN_021be8c0(local_6c,&local_100,0);
    }
  }
  else {
    local_110 = "SurpriseVisitCount";
    local_118 = puVar21;
    iVar8 = FUN_0274bce0(local_c4,&local_118);
    if (iVar8 == 0) goto LAB_0202f6a4;
  }
  FUN_02640184(&local_e0);
LAB_0202fa50:
  FUN_02640184(&local_b0);
  return;
}

