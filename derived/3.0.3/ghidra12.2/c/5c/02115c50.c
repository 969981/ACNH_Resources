
void FUN_02115c50(long param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte bVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  void *pvVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  uint local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint5 local_110;
  undefined3 uStack_10b;
  undefined4 local_108;
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_6c [12];
  
  *(undefined4 *)(param_1 + 0x1608) = *(undefined4 *)(param_1 + 0x1604);
  if (*(int *)(param_1 + 0x1608) != 0) {
    *(int *)(param_1 + 0x160c) = *(int *)(param_1 + 0x1608);
  }
  puVar3 = PTR_DAT_04bb6298;
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
LAB_02115e00:
    uVar13 = 0;
  }
  else {
    local_158 = (undefined *)CONCAT44(local_158._4_4_,0x15);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 0x15 & 1) == 0) goto LAB_02115e00;
    lVar21 = *(long *)PTR_DAT_04bb39b0;
    pbVar19 = PTR_DAT_04bb32e0;
    if (lVar21 == 0) {
LAB_02115d2c:
      if (*pbVar19 < 8) goto LAB_02115da4;
LAB_02115d38:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02115d9c:
        pbVar19 = PTR_DAT_04bb5038;
        goto LAB_02115da4;
      }
      lVar21 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar21 + 0x473);
      pbVar19 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar6 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar6 = (uint *)(lVar21 + 0x48);
        }
        if ((*puVar6 & 8) != 0) {
          pbVar19 = (byte *)(lVar21 + 0x471);
        }
      }
      bVar20 = *pbVar19;
      bVar11 = 7 < bVar20;
      if (bVar11) {
        bVar20 = 0xff;
      }
      local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
      if (bVar11) goto LAB_02115d9c;
    }
    else {
      if (*(int *)(lVar21 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar21 + 0x158);
      }
      if (7 < *pbVar19) {
        if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02115d2c;
        }
        goto LAB_02115d38;
      }
LAB_02115da4:
      bVar20 = *pbVar19;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
    }
    (**(code **)(DAT_053ed080 + 0x18))(&DAT_053ed080);
    local_158 = PTR_DAT_04bb2020 + 0x10;
    local_150 = (void *)DAT_053ed088;
    iVar12 = FUN_02753180(&local_80,&local_158);
    uVar13 = 1;
    if (iVar12 != 0) {
      uVar13 = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x1604) = uVar13;
  if ((*(int *)(param_1 + 0x1604) != 0) &&
     (*(int *)(param_1 + 0x1604) != *(int *)(param_1 + 0x160c))) {
    iVar12 = *(int *)(param_1 + 0x1e8);
    if (iVar12 != 0) {
      iVar15 = *(int *)(param_1 + 0x1530);
      if (iVar15 < *(int *)(param_1 + 0x1534)) {
        plVar16 = *(long **)(param_1 + 0x1f0);
        lVar21 = (long)iVar12 << 3;
        do {
          if (iVar15 < *(int *)(param_1 + 0x1534)) {
            puVar22 = *(undefined8 **)(param_1 + 0x1540);
            uVar13 = *(undefined4 *)(*plVar16 + 0x1c4);
            if (puVar22 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x1540) = *puVar22;
            }
            *(undefined4 *)puVar22 = uVar13;
            iVar15 = *(int *)(param_1 + 0x1530);
            if (iVar15 < *(int *)(param_1 + 0x1534)) {
              *(undefined8 **)(*(long *)(param_1 + 0x1538) + (long)iVar15 * 8) = puVar22;
              iVar15 = *(int *)(param_1 + 0x1530) + 1;
              *(int *)(param_1 + 0x1530) = iVar15;
            }
          }
          plVar16 = plVar16 + 1;
          lVar21 = lVar21 + -8;
        } while (lVar21 != 0);
        iVar12 = *(int *)(param_1 + 0x1e8);
      }
      if (0 < iVar12) {
        lVar21 = 0;
        do {
          puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x1f0) + lVar21 * 8);
          (**(code **)*puVar22)(puVar22);
          lVar21 = lVar21 + 1;
          *puVar22 = *(undefined8 *)(param_1 + 0x1f8);
          *(undefined8 **)(param_1 + 0x1f8) = puVar22;
        } while (lVar21 < *(int *)(param_1 + 0x1e8));
      }
    }
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if ((*(int *)(param_1 + 0x1604) == 2) &&
     ((*(int *)(param_1 + 0x1e8) == 0 || (*(int *)(param_1 + 0x160c) != 2)))) {
    local_128._0_4_ = (uint)(uint3)local_128;
    local_148 = 0x706c6100000020;
    _local_110 = 0x43070000;
    local_80._0_4_ = 2;
    puVar1 = PTR_DAT_04bb2028 + 0x10;
    local_120 = (char *)0x1ffffffff;
    local_118 = 0x431b0000;
    local_158 = puVar1;
    local_150 = (void *)((long)&local_148 + 4);
    FUN_021252f0(param_1,&local_158,&local_80);
    local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
    FUN_02124850(param_1,&local_80);
    local_128._0_4_ = (uint)(uint3)local_128;
    local_148 = 0x776c6100000020;
    _local_110 = 0x43070000;
    local_80._0_4_ = 2;
    local_120 = (char *)0x1ffffffff;
    local_118 = 0x43250000;
    local_158 = puVar1;
    local_150 = (void *)((long)&local_148 + 4);
    FUN_021252f0(param_1,&local_158,&local_80);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    FUN_02124850(param_1,&local_80);
  }
  if ((*(ushort *)(param_1 + 0x1528) >> 1 & 1) == 0) {
    FUN_02116d14(param_1);
  }
  sVar8 = *(short *)puVar3;
  if (sVar8 == -1) {
    return;
  }
  puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
  if (0xff < (uint)(int)sVar8) {
    puVar6 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar6 >> 0x15 & 1) == 0) {
    return;
  }
  local_12c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_158 = (undefined *)
              CONCAT17(PTR_DAT_04bb37e0[3],
                       CONCAT16(PTR_DAT_04bb37e0[2],CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,0x15)))
  ;
  local_130 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  local_150 = (void *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_148 = CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_140 = CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_138 = CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_128 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_120 = (char *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_118 = CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_130);
  local_110 = (uint5)local_130;
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02116160;
LAB_021161c0:
    bVar20 = *pbVar19;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar21 + 0x158);
    }
    if ((*pbVar19 < 8) ||
       (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8)))) goto LAB_021161c0;
LAB_02116160:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_021161b8:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_021161c0;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar20 = *(byte *)(lVar21 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar6 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar6 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar6 & 8) != 0) {
        pbVar19 = (byte *)(lVar21 + 0x471);
      }
    }
    bVar20 = *pbVar19;
    if (7 < bVar20) goto LAB_021161b8;
  }
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_108 = 0;
  local_158 = (undefined *)CONCAT71((int7)((ulong)local_158 >> 8),bVar20);
  FUN_02543cdc(&local_158);
  puVar3 = PTR_DAT_04bb2720;
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar21 = *(long *)PTR_DAT_04bb2720;
    uVar14 = 0;
    if (lVar21 != 0) {
      if (*(long *)(lVar21 + 0x330) == 0) {
        uVar14 = 0;
      }
      else {
        puVar22 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar12 = FUN_006bd550(*puVar22,0);
        uVar14 = 0;
        if (iVar12 == 0x758f7eaf) {
          uVar14 = 0;
          if (*(long *)puVar3 != 0) {
            lVar21 = *(long *)(*(long *)puVar3 + 0x330);
            uVar14 = 0;
            if (lVar21 != 0) {
              uVar14 = *(uint *)(lVar21 + 0x248);
            }
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x1e8) != 0) {
      plVar16 = *(long **)(param_1 + 0x1f0);
      plVar23 = plVar16 + *(int *)(param_1 + 0x1e8);
      if (uVar14 < 8) {
        uVar25 = (ulong)uVar14;
        goto LAB_021162a4;
      }
      iVar12 = 0;
      pvVar2 = (void *)((long)&local_148 + 4);
      puVar3 = PTR_DAT_04bb2ab0 + 0x10;
      do {
        lVar21 = *plVar16;
        if (*(char *)(lVar21 + 8) == '\0') {
          local_138._0_4_ = (uint)(uint3)local_138;
          plVar26 = (long *)(lVar21 + 0xf8);
          local_130 = *(uint *)(lVar21 + 0xf0);
          local_12c = *(undefined4 *)(lVar21 + 0x130);
          local_118._1_7_ = (uint7)((ulong)local_118 >> 8) & 0xffffff;
          local_128 = (undefined *)0x0;
          local_120 = (char *)0x0;
          local_118 = (ulong)local_118._1_7_ << 8;
          local_148 = CONCAT35(local_148._5_3_,0x10);
          local_158 = puVar3;
          local_150 = pvVar2;
          (**(code **)(*plVar26 + 0x18))(plVar26);
          pvVar24 = *(void **)(lVar21 + 0x100);
          if (pvVar2 != pvVar24) {
            (**(code **)(*(long *)(lVar21 + 0xf8) + 0x18))(plVar26);
            lVar17 = 0;
            do {
              if (*(char *)(*(long *)(lVar21 + 0x100) + lVar17) == '\0') goto LAB_0211650c;
              lVar4 = *(long *)(lVar21 + 0x100) + lVar17;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar17 = lVar17 + 1;
                goto LAB_0211650c;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar17 = lVar17 + 2;
                goto LAB_0211650c;
              }
              lVar17 = lVar17 + 3;
            } while (lVar17 != 0x80001);
            lVar17 = 0;
LAB_0211650c:
            iVar15 = (int)lVar17;
            if ((int)local_148 <= (int)lVar17) {
              iVar15 = (int)local_148 + -1;
            }
            memcpy(pvVar2,pvVar24,(long)iVar15);
            *(undefined1 *)((long)pvVar2 + (long)iVar15) = 0;
          }
          uVar13 = FUN_0211dd00(param_1,&local_158,iVar12);
          *(undefined4 *)(lVar21 + 0xe8) = uVar13;
        }
        else {
          FUN_021250f0(param_1,lVar21,iVar12);
        }
        plVar16 = plVar16 + 1;
        iVar12 = iVar12 + 1;
      } while (plVar16 != plVar23);
    }
  }
  else if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar16 = *(long **)(param_1 + 0x1f0);
    uVar25 = 7;
    plVar23 = plVar16 + *(int *)(param_1 + 0x1e8);
LAB_021162a4:
    iVar12 = 0;
    pvVar2 = (void *)((long)&local_148 + 4);
    puVar3 = PTR_DAT_04bb2ab0 + 0x10;
    do {
      lVar21 = *plVar16;
      if (*(char *)(lVar21 + uVar25 * 0x1c + 8) == '\0') {
        local_138._0_4_ = (uint)(uint3)local_138;
        plVar26 = (long *)(lVar21 + 0xf8);
        local_130 = *(uint *)(lVar21 + 0xf0);
        local_12c = *(undefined4 *)(lVar21 + 0x130);
        local_118._1_7_ = (uint7)((ulong)local_118 >> 8) & 0xffffff;
        local_128 = (undefined *)0x0;
        local_120 = (char *)0x0;
        local_118 = (ulong)local_118._1_7_ << 8;
        local_148 = CONCAT35(local_148._5_3_,0x10);
        local_158 = puVar3;
        local_150 = pvVar2;
        (**(code **)(*plVar26 + 0x18))(plVar26);
        pvVar24 = *(void **)(lVar21 + 0x100);
        if (pvVar2 != pvVar24) {
          (**(code **)(*(long *)(lVar21 + 0xf8) + 0x18))(plVar26);
          lVar17 = 0;
          do {
            if (*(char *)(*(long *)(lVar21 + 0x100) + lVar17) == '\0') goto LAB_021163b0;
            lVar4 = *(long *)(lVar21 + 0x100) + lVar17;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_021163b0;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_021163b0;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_021163b0:
          iVar15 = (int)lVar17;
          if ((int)local_148 <= (int)lVar17) {
            iVar15 = (int)local_148 + -1;
          }
          memcpy(pvVar2,pvVar24,(long)iVar15);
          *(undefined1 *)((long)pvVar2 + (long)iVar15) = 0;
        }
        uVar13 = FUN_0211dd00(param_1,&local_158,iVar12);
        *(undefined4 *)(lVar21 + 0xe8) = uVar13;
      }
      else {
        FUN_021250f0(param_1,lVar21,iVar12);
      }
      plVar16 = plVar16 + 1;
      iVar12 = iVar12 + 1;
    } while (plVar16 != plVar23);
  }
  puVar3 = PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    local_158 = (undefined *)CONCAT44(local_158._4_4_,0x15);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 0x15 & 1) != 0) {
      local_90 = 7;
      local_120 = (char *)((long)&local_118 + 4);
      local_95 = 0;
      local_118 = CONCAT35(local_118._5_3_,0x80);
      local_88 = 0;
      local_128 = PTR_DAT_04bb2d88 + 0x10;
      local_8c = 0;
      local_138 = 0;
      local_130 = 0;
      local_158 = (undefined *)0xffffffff00000000;
      local_150 = (void *)0x0;
      local_148 = 0x3f80000000000000;
      local_140 = 0;
      uVar14 = FUN_006bd550(&DAT_040aacdf,0);
      iVar12 = 0;
      uVar13 = 0xffffffff;
      iVar15 = 0xeb;
      do {
        uVar5 = iVar12 + iVar15 >> 1;
        if (*(uint *)(PTR_DAT_04bb3858 +
                     (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) == uVar14)
        {
          uVar13 = *(undefined4 *)
                    (PTR_DAT_04bb3858 +
                    ((long)((ulong)(uint)(iVar12 + iVar15) << 0x20) >> 0x21) * 8 + 4);
          break;
        }
        iVar9 = uVar5 - 1;
        if (*(uint *)(PTR_DAT_04bb3858 +
                     (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) < uVar14) {
          iVar12 = uVar5 + 1;
          iVar9 = iVar15;
        }
        iVar15 = iVar9;
      } while (iVar12 <= iVar9);
      lVar21 = *(long *)puVar3;
      local_158 = (undefined *)CONCAT44(uVar13,(undefined4)local_158);
      pbVar18 = pbVar19;
      if (lVar21 == 0) {
        if (7 < *pbVar19) goto LAB_021166d8;
LAB_02116744:
        bVar20 = *pbVar18;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
      }
      else {
        if (*(int *)(lVar21 + 0x15c) != 0) {
          pbVar18 = (byte *)(lVar21 + 0x158);
        }
        if ((*pbVar18 < 8) ||
           (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8))))
        goto LAB_02116744;
LAB_021166d8:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211673c:
          pbVar18 = PTR_DAT_04bb5038;
          goto LAB_02116744;
        }
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar21 + 0x473);
        pbVar18 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar6 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar6 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar6 & 8) != 0) {
            pbVar18 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar20 = *pbVar18;
        bVar11 = 7 < bVar20;
        if (bVar11) {
          bVar20 = 0xff;
        }
        local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
        if (bVar11) goto LAB_0211673c;
      }
      uVar13 = FUN_02582fe0(&local_80);
      pcVar10 = local_120;
      local_140 = local_140 & 0xffffffff;
      local_138 = CONCAT44(local_138._4_4_,uVar13);
      local_130 = 1;
      if (local_120 != "NpcPlayer/AIC:PhotoStudio") {
        iVar12 = 0x19;
        if ((int)local_118 < 0x1a) {
          iVar12 = (int)local_118 + -1;
        }
        memcpy(local_120,"NpcPlayer/AIC:PhotoStudio",(long)iVar12);
        pcVar10[iVar12] = '\0';
      }
      lVar21 = *(long *)puVar3;
      pbVar18 = pbVar19;
      if (lVar21 == 0) {
        if (7 < *pbVar19) goto LAB_02116814;
LAB_02116880:
        local_6c[0] = *pbVar18;
        if (7 < local_6c[0]) {
          local_6c[0] = 0xff;
        }
      }
      else {
        if (*(int *)(lVar21 + 0x15c) != 0) {
          pbVar18 = (byte *)(lVar21 + 0x158);
        }
        if ((*pbVar18 < 8) ||
           (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8))))
        goto LAB_02116880;
LAB_02116814:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02116878:
          pbVar18 = PTR_DAT_04bb5038;
          goto LAB_02116880;
        }
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar21 + 0x473);
        pbVar18 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar6 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar6 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar6 & 8) != 0) {
            pbVar18 = (byte *)(lVar21 + 0x471);
          }
        }
        local_6c[0] = *pbVar18;
        if (7 < local_6c[0]) goto LAB_02116878;
      }
      (**(code **)(DAT_053ed0b8 + 0x18))(&DAT_053ed0b8);
      local_80 = PTR_DAT_04bb2020 + 0x10;
      uStack_78 = DAT_053ed0c0;
      iVar12 = FUN_02753180(local_6c,&local_80);
      puVar1 = PTR_DAT_04bb2720;
      if (iVar12 != 0) {
        if (*(int *)(param_1 + 0x1604) == 1) {
          lVar21 = *(long *)PTR_DAT_04bb2720;
          if ((lVar21 != 0) && (*(long *)(lVar21 + 0x330) != 0)) {
            puVar22 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
            iVar15 = FUN_006bd550(*puVar22,0);
            if ((iVar15 == 0x758f7eaf) &&
               ((*(long *)puVar1 != 0 && (lVar21 = *(long *)(*(long *)puVar1 + 0x330), lVar21 != 0))
               )) {
              uVar14 = *(uint *)(lVar21 + 0x248);
              lVar21 = param_1 + 0x10;
              if (uVar14 < 8) {
                lVar21 = lVar21 + (ulong)uVar14 * 0x1c;
              }
              goto LAB_02116964;
            }
          }
          lVar21 = param_1 + 0x10;
        }
        else {
          lVar21 = param_1 + 0xd4;
        }
LAB_02116964:
        pcVar10 = local_120;
        local_150 = *(void **)(lVar21 + 4);
        local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(lVar21 + 0xc));
        if (local_120 != "NpcPlayer/AIC:DemoPhotoStudio") {
          iVar15 = 0x1d;
          if ((int)local_118 < 0x1e) {
            iVar15 = (int)local_118 + -1;
          }
          memcpy(local_120,"NpcPlayer/AIC:DemoPhotoStudio",(long)iVar15);
          pcVar10[iVar15] = '\0';
        }
      }
      lVar21 = *(long *)PTR_DAT_04bb27c0;
      if (lVar21 == 0) {
LAB_02116a18:
        iVar15 = *(int *)PTR_DAT_04bb3238;
      }
      else {
        *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) | 0x20;
        *(undefined4 *)(param_1 + 0x1600) = 0xfffffffe;
        iVar15 = FUN_007402e0(lVar21,&local_158,(ulong)local_158 & 0xffffffff,0);
        if (iVar15 == 0) goto LAB_02116a18;
        *(ushort *)(param_1 + 0x1528) =
             *(ushort *)(param_1 + 0x1528) & 0xffde | (ushort)(iVar12 != 0);
      }
      *(int *)(param_1 + 0xf0) = iVar15;
    }
  }
  lVar21 = *(long *)puVar3;
  pbVar18 = pbVar19;
  if (lVar21 == 0) {
    if (7 < *pbVar19) goto LAB_02116a8c;
LAB_02116af8:
    bVar20 = *pbVar18;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar21 + 0x158);
    }
    if ((*pbVar18 < 8) ||
       (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8)))) goto LAB_02116af8;
LAB_02116a8c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02116af0:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_02116af8;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar20 = *(byte *)(lVar21 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar6 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar6 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar6 & 8) != 0) {
        pbVar18 = (byte *)(lVar21 + 0x471);
      }
    }
    bVar20 = *pbVar18;
    bVar11 = 7 < bVar20;
    if (bVar11) {
      bVar20 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar20);
    if (bVar11) goto LAB_02116af0;
  }
  (**(code **)(DAT_053ed0b8 + 0x18))(&DAT_053ed0b8);
  local_158 = PTR_DAT_04bb2020 + 0x10;
  local_150 = (void *)DAT_053ed0c0;
  iVar12 = FUN_02753180(&local_80,&local_158);
  if (iVar12 == 0) {
    return;
  }
  uVar7 = PTR_DAT_04bb37e0[3];
  local_130 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  lVar21 = *(long *)puVar3;
  local_150 = (void *)CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  local_148 = CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  local_140 = CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  local_138 = CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  local_12c = CONCAT13(uVar7,*(undefined3 *)PTR_DAT_04bb37e0);
  local_128 = (undefined *)CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  local_120 = (char *)CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  local_118 = CONCAT17(uVar7,CONCAT34(*(undefined3 *)PTR_DAT_04bb37e0,local_130));
  if (lVar21 == 0) {
    if (7 < *pbVar19) goto LAB_02116c64;
    pbVar19 = PTR_DAT_04bb32e0;
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar21 + 0x158);
    }
    if ((7 < *pbVar19) &&
       (((*(int *)(lVar21 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
        (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar19)))) {
LAB_02116c64:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar21 + 0x473);
        pbVar19 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar6 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar6 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar6 & 8) != 0) {
            pbVar19 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar20 = *pbVar19;
        if (bVar20 < 8) goto LAB_02116cd4;
      }
      pbVar19 = PTR_DAT_04bb5038;
    }
  }
  bVar20 = *pbVar19;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
LAB_02116cd4:
  local_110 = (uint5)local_130;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  local_108 = 0;
  local_158 = (undefined *)
              CONCAT71((int7)(CONCAT17(uVar7,CONCAT16(PTR_DAT_04bb37e0[2],
                                                      CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,
                                                               (int)local_158))) >> 8),bVar20);
  FUN_02543cdc(&local_158);
  return;
}

