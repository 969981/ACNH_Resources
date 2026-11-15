
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_024b9644(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  char *pcVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  char *__src;
  long *plVar15;
  int iVar16;
  long lVar17;
  short *psVar18;
  long lVar19;
  undefined8 uVar20;
  uint *puVar21;
  byte bVar22;
  uint *puVar23;
  undefined8 *puVar24;
  short sVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 local_178;
  float local_170;
  long local_168;
  char *local_160;
  short local_158;
  short local_156;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined2 uStack_126;
  undefined4 local_124;
  uint local_120;
  undefined1 local_11c [2];
  bool bStack_11a;
  undefined5 uStack_119;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 local_e4;
  undefined5 local_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  
  plVar2 = (long *)(param_1 + 0x1902);
  FUN_02332b04(param_1,1,0);
  local_150 = (undefined *)
              ((ulong)CONCAT42(local_150._4_4_,*(undefined2 *)(param_1 + 0x1900)) << 0x10);
  FUN_02328b10(param_1,&local_150,1);
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      if (*(long *)(param_1 + 0x4d0) != 0) {
        uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x4d0) + 8);
      }
    }
    local_150 = (undefined *)CONCAT44(local_150._4_4_,uVar26);
    *(char *)(param_1 + 0x1926) = (char)uVar26;
  }
  else {
    uVar12 = (uint)*(byte *)(param_1 + 0x1926);
    if (0x78 < uVar12) {
      uVar12 = 0;
    }
    local_150 = (undefined *)CONCAT44(local_150._4_4_,uVar12);
    if (uVar12 != 0) {
      if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
        local_70 = 0;
      }
      else {
        local_70 = 0;
        if (*(long *)(param_1 + 0x4d0) != 0) {
          local_70 = *(uint *)(*(long *)(param_1 + 0x4d0) + 8);
        }
      }
      if (uVar12 != local_70) {
        local_70 = 5;
        local_64 = uVar12;
        FUN_023c79d0(param_1,&local_64,&local_70);
      }
    }
  }
  FUN_023c8568(param_1);
  bVar11 = *(byte *)(param_1 + 0x1ee8);
  lVar17 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  bVar22 = *(byte *)(lVar17 + 0x44);
  if (7 < bVar22) {
    bVar22 = 0xff;
  }
  if (bVar11 == bVar22) {
    lVar19 = 0;
LAB_024b9844:
    lVar17 = lVar17 + 0x40 + lVar19 * 0x20;
    puVar24 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    bVar22 = *(byte *)(lVar17 + 100);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 1;
      goto LAB_024b9844;
    }
    bVar22 = *(byte *)(lVar17 + 0x84);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 2;
      goto LAB_024b9844;
    }
    bVar22 = *(byte *)(lVar17 + 0xa4);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 3;
      goto LAB_024b9844;
    }
    bVar22 = *(byte *)(lVar17 + 0xc4);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 4;
      goto LAB_024b9844;
    }
    bVar22 = *(byte *)(lVar17 + 0xe4);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 5;
      goto LAB_024b9844;
    }
    bVar22 = *(byte *)(lVar17 + 0x104);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 6;
      goto LAB_024b9844;
    }
    bVar22 = *(byte *)(lVar17 + 0x124);
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) {
      lVar19 = 7;
      goto LAB_024b9844;
    }
    lVar17 = lVar17 + 0x140;
    puVar24 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar24 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar27 = __cxa_guard_acquire(&DAT_052461c0);
      puVar24 = &DAT_05240280;
      if (iVar27 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar24 = &DAT_05240280;
    }
  }
  uVar13 = FUN_016ff8c0(puVar24,8,&local_70);
  if ((uVar13 & 1) != 0) {
    *(undefined4 *)(lVar17 + 0x18) = local_68;
    *(ulong *)(lVar17 + 0x10) = CONCAT44(uStack_6c,local_70);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(byte *)(param_1 + 0x17cd) >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x190a) = 1;
      goto LAB_024b98e4;
    }
  }
  else if ((*(char *)(param_1 + 0x190a) != '\0') && (*(char *)(param_1 + 0xadd) == '\0')) {
    if ((*(byte *)(param_1 + 0x17cd) >> 4 & 1) != 0) {
      FUN_0236b9d0(param_1,param_1 + 0x1ee9);
    }
LAB_024b98e4:
    *(undefined1 *)(param_1 + 0xadd) = 1;
  }
  if (*(char *)(param_1 + 0x190a) == '\0') {
    local_148 = (char *)0x0;
    local_140 = 0x3f80000000000000;
    local_138._0_2_ = 0xff00;
    local_134 = 0;
    uStack_130._0_2_ = 0;
    uStack_130._2_2_ = 0;
    local_12c = 0;
    uStack_128 = 0;
    uStack_127 = 0;
    local_150 = *(undefined **)PTR_DAT_04bb37e0;
    local_124 = 0x3f800000;
    local_120 = local_120 & 0xffffff00;
    _local_11c = 0x3f80000000000000;
    local_e4 = 0;
    local_e0 = 0;
    uStack_db = 0;
    uStack_d8 = 0;
    uStack_10c = _UNK_04102208;
    local_114 = _DAT_04102200;
    uStack_fc = _UNK_04102888;
    local_104 = _DAT_04102880;
    uVar6 = *(ushort *)(param_1 + 0x1900);
    uStack_ec = (undefined4)_UNK_041023d8;
    iStack_e8 = (int)((ulong)_UNK_041023d8 >> 0x20);
    local_f4 = (undefined4)_DAT_041023d0;
    uStack_f0 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
    lVar17 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
    iVar27 = (uint)uVar6 * 0x10000 - *(int *)(lVar17 + 4);
    local_178 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_178);
    local_150 = (undefined *)*plVar2;
    lVar17 = FUN_0251e98c(1);
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf00) + 0xf0))(lVar17 + 0xf00);
    uVar26 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf30) + 0xf0))(lVar17 + 0xf30);
    uVar28 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf60) + 0xf0))(lVar17 + 0xf60);
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    puVar24 = *(undefined8 **)(param_1 + 0x60);
    local_134 = 0;
    local_148 = (char *)CONCAT44(uVar28,uVar26);
    local_12c = 0;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_140 = CONCAT44(0x3f800000,*puVar14);
    local_124 = 0x3f800000;
    local_138 = (uint)CONCAT21(local_138._2_2_,bVar11) << 8;
    uStack_127 = *(char *)(param_1 + 0x1925) != '\0';
    uStack_130 = iVar27;
    if (puVar24 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar27 = __cxa_guard_acquire(&DAT_052461c0);
        puVar24 = &DAT_05240280;
        if (iVar27 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar24 = &DAT_05240280;
      }
    }
    FUN_0170d420(puVar24,&local_150);
    iVar27 = *(int *)(param_1 + 0x178);
  }
  else {
    FUN_0236c210(param_1,0);
    iVar27 = *(int *)(param_1 + 0x178);
  }
  if (iVar27 != 0) {
    return;
  }
  cVar5 = *(char *)(param_1 + 0x1924);
  uVar13 = FUN_024bc518(param_1);
  if ((uVar13 & 1) != 0) {
    FUN_0230e2b0(&local_150);
    pcVar7 = local_148;
    uVar12 = *(uint *)(param_1 + 0x17cc);
    if (local_148 != "Player_GetDemo") {
      iVar27 = 0xe;
      if ((int)local_140 < 0xf) {
        iVar27 = (int)local_140 + -1;
      }
      memcpy(local_148,"Player_GetDemo",(long)iVar27);
      pcVar7[iVar27] = '\0';
    }
    pcVar7 = (char *)CONCAT44(uStack_ec,uStack_f0);
    if (cVar5 == '\0') {
      if (pcVar7 != "Get_Fish") {
        __src = "Get_Fish";
        bVar9 = SBORROW4(iStack_e8,8);
        iVar27 = iStack_e8 + -8;
        bVar10 = iStack_e8 == 8;
        iVar16 = 8;
        goto LAB_024b9b48;
      }
    }
    else if (pcVar7 != "Get_FishFes") {
      __src = "Get_FishFes";
      bVar9 = SBORROW4(iStack_e8,0xb);
      iVar27 = iStack_e8 + -0xb;
      bVar10 = iStack_e8 == 0xb;
      iVar16 = 0xb;
LAB_024b9b48:
      if (bVar10 || iVar27 < 0 != bVar9) {
        iVar16 = iStack_e8 + -1;
      }
      memcpy(pcVar7,__src,(long)iVar16);
      pcVar7[iVar16] = '\0';
    }
    local_98 = 0xc;
    if ((uVar12 & 0x40) != 0) {
      local_98 = 2;
    }
    local_178 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_178);
    local_178 = (undefined *)0xfffe;
    local_a0 = (undefined4)*plVar2;
    local_9c = (undefined4)((ulong)*plVar2 >> 0x20);
    FUN_0277d4ac(&local_178);
    lVar17 = *plVar2;
    local_94 = (undefined2)lVar17;
    local_92 = (undefined1)((ulong)lVar17 >> 0x10);
    local_91 = (undefined1)((ulong)lVar17 >> 0x18);
    local_90 = (undefined4)((ulong)lVar17 >> 0x20);
    local_78 = 0x3c;
    local_88 = (uVar12 >> 6 & 1) != 0;
    if ((bool)local_88) {
      local_84 = 2;
    }
    else {
      local_80 = local_a0;
      local_7c = local_9c;
    }
    FUN_02328d9c(param_1,&local_150);
  }
  if ((*(uint *)(param_1 + 0x17cc) >> 9 & 1) == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x200;
    local_178 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_178);
    local_178 = (undefined *)*plVar2;
    uVar13 = (ulong)local_148 >> 0x10;
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_148._0_2_ = CONCAT11(bVar11,*(int *)(param_1 + 0x178) == 0);
    local_148 = (char *)(CONCAT62((int6)uVar13,(undefined2)local_148) & 0xffffffffff00ffff);
    local_150 = local_178;
    FUN_02306d40(&local_150);
  }
  *(undefined1 *)(param_1 + 0x1913) = 1;
  uVar13 = FUN_0231eddc(param_1,0);
  if ((uVar13 & 1) == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffbfffff;
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar17 == 0) || (*(int *)(lVar17 + 0x15c) == 0)) {
LAB_024b9cf8:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar17 = 0;
      if (DAT_00000028 == '\0') goto LAB_024b9d3c;
LAB_024b9d14:
      bVar11 = (**(code **)(*(long *)(lVar17 + 0x20) + 0x18))((long *)(lVar17 + 0x20));
      *(undefined1 *)(lVar17 + 0x28) = 0;
    }
    else {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar17 + 0x28) != '\0') goto LAB_024b9d14;
LAB_024b9d3c:
      bVar11 = 1;
    }
    *(byte *)(lVar17 + 0x29) = bVar11 & 1;
    psVar18 = (short *)(lVar17 + 0x2c);
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar17 + 0x158);
    }
    bVar22 = *pbVar1;
    bVar11 = *pbVar3;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    if (bVar11 == bVar22) goto LAB_024b9cf8;
    psVar18 = (short *)PTR_DAT_04bb37e0;
  }
  sVar25 = *psVar18;
  local_156 = psVar18[1];
  local_154 = *(undefined4 *)(psVar18 + 2);
  local_158 = sVar25;
  if (cVar5 != '\0') {
    FUN_0277d6c4(&local_158);
    uVar13 = (ulong)_local_11c >> 0x30;
    local_11c = (undefined1  [2])((ushort)_local_11c & 0xff00);
    local_120 = 0x3f800000;
    _local_11c = (uint6)(ushort)local_11c;
    _local_11c = CONCAT26((short)uVar13,_local_11c);
    local_178 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_178);
    local_150 = (undefined *)*plVar2;
    local_148 = (char *)0x4;
    local_140 = CONCAT44(3,(int)local_140);
    local_124 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
    uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
    local_12c = (undefined4)uVar20;
    uStack_128 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_127 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_126 = (undefined2)((ulong)uVar20 >> 0x30);
    lVar17 = FUN_0251e98c(1);
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf00) + 0xf0))(lVar17 + 0xf00);
    uVar28 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf30) + 0xf0))(lVar17 + 0xf30);
    uVar29 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf60) + 0xf0))(lVar17 + 0xf60);
    uVar26 = *puVar14;
    local_140 = local_140 & 0xffffffffffffff00;
    local_138 = uVar28;
    local_134 = uVar29;
LAB_024b9e24:
    uVar20 = _local_11c;
    uStack_130._0_2_ = (undefined2)uVar26;
    uStack_130._2_2_ = (undefined2)((uint)uVar26 >> 0x10);
    local_11c = (undefined1  [2])CONCAT11(*(char *)(param_1 + 0x1925) != '\0',local_11c[0]);
    uStack_119 = SUB85(uVar20,3);
    _local_11c = CONCAT12(cVar5 != '\0',local_11c);
    FUN_0236cba0(param_1,&local_150);
    return;
  }
  if (((*(byte *)(param_1 + 0x17cc) >> 6 & 1) != 0) && (sVar25 == -2)) {
    local_150 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_150);
  }
  puVar8 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(&local_158);
  if (*(long *)puVar8 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if (((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
       ((*(byte *)(param_1 + 0x17cc) >> 6 & 1) != 0)) {
      local_178 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_178);
      local_178 = (undefined *)*plVar2;
      local_150 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_150);
      FUN_016e49e4(&local_150,&local_178,0);
      lVar17 = *(long *)puVar8;
      uVar12 = FUN_0277d6c4(&local_150);
      if (*(long *)puVar8 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          FUN_026738b0(pbVar1,&local_150,1,0);
        }
      }
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar27 = __cxa_guard_acquire(&DAT_054f0960);
          puVar21 = (uint *)&DAT_054f0958;
          if (iVar27 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar21 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar21 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar21 = puVar21 + (ulong)*pbVar1 * 2;
        }
      }
      local_150 = (undefined *)CONCAT44(local_150._4_4_,0x13);
      *puVar21 = *puVar21 | 0x80000;
      sVar25 = local_158;
    }
  }
  if (((*(uint *)(param_1 + 0x17cc) >> 6 & 1) == 0) || (sVar25 != -2)) {
    if (((*(uint *)(param_1 + 0x17cc) >> 6 & 1) == 0) || (sVar25 == -2)) {
      if (*(char *)(param_1 + 0xadc) == '\0') {
        uVar13 = (ulong)_local_11c >> 0x30;
        local_11c = (undefined1  [2])((ushort)_local_11c & 0xff00);
        local_120 = 0x3f800000;
        _local_11c = (uint6)(ushort)local_11c;
        _local_11c = CONCAT26((short)uVar13,_local_11c);
        local_178 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_178);
        local_150 = (undefined *)*plVar2;
        local_148 = (char *)0x4;
        local_140 = CONCAT44(3,(int)local_140);
        local_124 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
        uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
        local_12c = (undefined4)uVar20;
        uStack_128 = (undefined1)((ulong)uVar20 >> 0x20);
        uStack_127 = (undefined1)((ulong)uVar20 >> 0x28);
        uStack_126 = (undefined2)((ulong)uVar20 >> 0x30);
        lVar17 = FUN_0251e98c(1);
        puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf00) + 0xf0))(lVar17 + 0xf00);
        uVar28 = *puVar14;
        puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf30) + 0xf0))(lVar17 + 0xf30);
        uVar29 = *puVar14;
        puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0xf60) + 0xf0))(lVar17 + 0xf60);
        uVar26 = *puVar14;
        local_140 = CONCAT71(local_140._1_7_,1);
        local_138 = uVar28;
        local_134 = uVar29;
        goto LAB_024b9e24;
      }
      goto LAB_024ba5cc;
    }
    local_140 = 0;
    local_150 = PTR_DAT_04bc0510 + 0x10;
    lVar17 = *(long *)puVar8;
    local_148 = (char *)CONCAT44(local_154,CONCAT22(local_156,sVar25));
    uVar12 = FUN_0277d6c4(&local_148);
    if (*(long *)puVar8 == 0) {
LAB_024ba51c:
      local_178 = (undefined *)CONCAT44(local_178._4_4_,0x6a);
      uVar12 = 0xbc;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_024ba51c;
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_158);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
         (puVar21 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8),
         puVar21 == (uint *)0x0)) goto LAB_024ba51c;
      uVar12 = 0;
      local_178 = (undefined *)CONCAT44(local_178._4_4_,0x6a);
      uVar4 = *puVar21;
      if ((uVar4 != 0) && (puVar21 != (uint *)(ulong)uVar4)) {
        puVar23 = (uint *)((long)puVar21 - (long)(ulong)uVar4);
        uVar12 = 0;
        if (*puVar23 != 0) {
          uVar12 = puVar23[1];
          if ((uVar12 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
            lVar17 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar23 + lVar17 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar17 != 0) {
              uVar4 = 0;
              if ((ulong)uVar12 != 0) {
                uVar4 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar12);
              }
              if (*puVar23 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar12 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
                 , uVar12 < 0xbd)) goto LAB_024ba528;
            }
          }
          uVar12 = 0;
        }
      }
    }
LAB_024ba528:
    local_160 = (char *)CONCAT44(local_160._4_4_,uVar12);
    if (uVar12 == (uint)local_178) {
      uVar13 = FUN_0142ae90((float)*(int *)(param_1 + 0x1914) * 0.001,
                            (float)(int)*(short *)(param_1 + 0x1918) * 0.25,
                            (float)*(int *)(param_1 + 0x191a) * 0.001,2);
      if ((uVar13 & 1) == 0) goto LAB_024ba5cc;
      plVar15 = (long *)&local_158;
      iVar27 = *(int *)(param_1 + 0x191a);
      local_178 = (undefined *)
                  CONCAT44((float)(int)*(short *)(param_1 + 0x1918) * 0.25,
                           (float)*(int *)(param_1 + 0x1914) * 0.001);
      goto LAB_024ba5b0;
    }
    goto LAB_024ba5cc;
  }
  local_160 = (char *)0xfffe;
  FUN_0277d4ac(&local_160);
  local_160 = (char *)*plVar2;
  lVar17 = *(long *)puVar8;
  local_140 = 0;
  local_150 = PTR_DAT_04bc0510 + 0x10;
  local_148 = local_160;
  uVar12 = FUN_0277d6c4(&local_148);
  if (*(long *)puVar8 == 0) {
LAB_024ba2b8:
    local_178 = (undefined *)CONCAT44(local_178._4_4_,0x6a);
    uVar12 = 0xbc;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_024ba2b8;
    lVar17 = *(long *)PTR_DAT_04bc0428;
    uVar12 = FUN_0277d6c4(&local_160);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
       (puVar21 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8),
       puVar21 == (uint *)0x0)) goto LAB_024ba2b8;
    uVar12 = 0;
    local_178 = (undefined *)CONCAT44(local_178._4_4_,0x6a);
    uVar4 = *puVar21;
    if ((uVar4 != 0) && (puVar21 != (uint *)(ulong)uVar4)) {
      puVar23 = (uint *)((long)puVar21 - (long)(ulong)uVar4);
      uVar12 = 0;
      if (*puVar23 != 0) {
        uVar12 = puVar23[1];
        if ((uVar12 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar23 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar23 + lVar17 + (ulong)(ushort)puVar23[2] * 8;
          if (lVar17 != 0) {
            uVar4 = 0;
            if ((ulong)uVar12 != 0) {
              uVar4 = (uint)((ulong)((long)puVar21 - lVar17) / (ulong)uVar12);
            }
            if (*puVar23 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar12 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
               uVar12 < 0xbd)) goto LAB_024ba2c4;
          }
        }
        uVar12 = 0;
      }
    }
  }
LAB_024ba2c4:
  local_168 = CONCAT44(local_168._4_4_,uVar12);
  if (uVar12 != (uint)local_178) {
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(char **)(param_1 + 0x1980) = local_160;
    local_178 = (undefined *)CONCAT44(local_178._4_4_,0x9f);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar17 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar17 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar17,0x9f);
    return;
  }
  uVar13 = FUN_0142ae90((float)*(int *)(param_1 + 0x1914) * 0.001,
                        (float)(int)*(short *)(param_1 + 0x1918) * 0.25,
                        (float)*(int *)(param_1 + 0x191a) * 0.001,2);
  if ((uVar13 & 1) != 0) {
    local_168 = 0xfffe;
    FUN_0277d4ac(&local_168);
    plVar15 = &local_168;
    iVar27 = *(int *)(param_1 + 0x191a);
    local_168 = *plVar2;
    local_178 = (undefined *)
                CONCAT44((float)(int)*(short *)(param_1 + 0x1918) * 0.25,
                         (float)*(int *)(param_1 + 0x1914) * 0.001);
LAB_024ba5b0:
    local_170 = (float)iVar27 * 0.001;
    FUN_024ba6bc(param_1,plVar15,&local_178,1);
    return;
  }
LAB_024ba5cc:
  FUN_02373ee0(param_1,6,1,1);
  return;
}

