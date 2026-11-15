
undefined8 FUN_02429380(long param_1,ulong param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  short sVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  byte bVar19;
  byte bVar20;
  uint *puVar21;
  uint *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong local_1e0;
  undefined *local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1ac;
  undefined1 auStack_170 [88];
  undefined1 auStack_118 [88];
  undefined1 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  byte local_70 [4];
  byte local_6c [12];
  
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  local_70[0] = *pbVar2;
  if (7 < local_70[0]) {
    local_70[0] = 0xff;
  }
  uVar13 = FUN_02669430(local_70);
  puVar1 = PTR_DAT_04bb6298;
  uVar6 = *(ushort *)PTR_DAT_04bb6298;
  uVar14 = (uint)(short)uVar6;
  if ((uVar13 & 1) == 0) {
    if (uVar6 == 0xffff) {
      return 0;
    }
    local_1c8 = CONCAT44(local_1c8._4_4_,0x20);
    puVar3 = PTR_DAT_04bc39f8 + (ulong)uVar14 * 8;
    if (0xff < uVar6) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar3 + 4) & 1) == 0) {
      return 0;
    }
LAB_02429428:
    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar14 * 8);
    if (0xff < uVar14) {
      puVar21 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar21 >> 0x11 & 1) != 0) &&
         (uVar7 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         uVar7 < DAT_0534f408)) &&
        (puVar21 = *(uint **)(DAT_0534f410 + (long)(int)uVar7 * 8), puVar21 != (uint *)0x0)) &&
       (uVar7 = *puVar21, uVar7 != 0 && puVar21 != (uint *)(ulong)uVar7)) {
      puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar7);
      if (((*puVar22 != 0) && (uVar7 = puVar22[1], uVar7 != 0)) && ((ulong)(ushort)puVar22[2] != 0))
      {
        lVar4 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar22 + lVar4 + (ulong)(ushort)puVar22[2] * 8;
        if (lVar4 != 0) {
          uVar5 = 0;
          if ((ulong)uVar7 != 0) {
            uVar5 = (uint)((ulong)((long)puVar21 - lVar4) / (ulong)uVar7);
          }
          if (*puVar22 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < *(uint *)PTR_DAT_04bc0e98) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar5 * 2) == 1)) {
            return 0;
          }
        }
      }
    }
    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < uVar14) {
      puVar21 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar21 >> 0x19 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
      return 0;
    }
    local_1c8 = CONCAT44(local_1c8._4_4_,0x1a);
    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar14 * 8);
    if (0xff < (uint)(int)(short)uVar6) {
      puVar21 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar21 >> 0x1a & 1) != 0) {
      if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
        return 0;
      }
      if ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 4) &&
         (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 5)) {
        return 0;
      }
    }
  }
  else if (uVar6 != 0xffff) goto LAB_02429428;
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    return 0;
  }
  lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar2 * 0x740;
  if (7 < *pbVar2) {
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  local_78 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  uVar13 = FUN_022be1b0(lVar4 + 0xb0,&local_78);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar24 = &DAT_055c04a0;
  }
  else {
    puVar24 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar12 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
  }
  puVar9 = PTR_DAT_04bc1220;
  pbVar18 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb32e0;
  puVar3 = PTR_DAT_04bb27d0;
  lVar15 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar15 + 0x476)) {
    local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffffffffff00);
    bVar19 = *(byte *)(lVar15 + 0x473);
    if ((long)(char)bVar19 == 0xffffffffffffffff) {
LAB_02429724:
      pbVar16 = PTR_DAT_04bb5038;
      if (*PTR_DAT_04bc1220 != '\0') {
        pbVar16 = PTR_DAT_04bb32e0;
      }
    }
    else {
      puVar21 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
      if (7 < bVar19) {
        puVar21 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar21 >> 3 & 1) == 0) goto LAB_02429724;
      pbVar16 = PTR_DAT_04bb32e0;
      if ((*(byte *)(lVar15 + 0x48) & 1) != 0) {
        pbVar16 = (byte *)(lVar15 + 0xc0);
      }
    }
    bVar19 = *pbVar16;
    bVar20 = *pbVar2;
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    local_1c8 = CONCAT71(local_1c8._1_7_,bVar19);
    if (bVar19 == bVar20) {
LAB_024297f8:
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,1);
      lVar15 = **(long **)puVar3;
      bVar19 = *(byte *)(lVar15 + 0x473);
      if ((long)(char)bVar19 == 0xffffffffffffffff) {
LAB_02429830:
        if (*puVar9 != '\x01') {
          pbVar18 = puVar8;
        }
      }
      else {
        puVar21 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
        if (7 < bVar19) {
          puVar21 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar21 >> 3 & 1) == 0) goto LAB_02429830;
        pbVar18 = puVar8;
        if ((*(byte *)(lVar15 + 200) & 1) != 0) {
          pbVar18 = (byte *)(lVar15 + 0x140);
        }
      }
      bVar19 = *pbVar18;
      bVar20 = *pbVar2;
      if (7 < bVar19) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_1c8 = CONCAT71(local_1c8._1_7_,bVar19);
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,1);
        sVar11 = FUN_01dbd9e8(*(long **)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,2);
      FUN_01dbd8c4(&local_1c8,*(undefined8 *)puVar3,&local_1d8);
      bVar20 = *pbVar2;
      bVar19 = (byte)local_1c8;
      if (7 < (byte)local_1c8) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,2);
        sVar11 = FUN_01dbd9e8(*(undefined8 *)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,3);
      FUN_01dbd8c4(&local_1c8,*(undefined8 *)puVar3,&local_1d8);
      bVar20 = *pbVar2;
      bVar19 = (byte)local_1c8;
      if (7 < (byte)local_1c8) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,3);
        sVar11 = FUN_01dbd9e8(*(undefined8 *)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,4);
      FUN_01dbd8c4(&local_1c8,*(undefined8 *)puVar3,&local_1d8);
      bVar20 = *pbVar2;
      bVar19 = (byte)local_1c8;
      if (7 < (byte)local_1c8) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,4);
        sVar11 = FUN_01dbd9e8(*(undefined8 *)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,5);
      FUN_01dbd8c4(&local_1c8,*(undefined8 *)puVar3,&local_1d8);
      bVar20 = *pbVar2;
      bVar19 = (byte)local_1c8;
      if (7 < (byte)local_1c8) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,5);
        sVar11 = FUN_01dbd9e8(*(undefined8 *)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,6);
      FUN_01dbd8c4(&local_1c8,*(undefined8 *)puVar3,&local_1d8);
      bVar20 = *pbVar2;
      bVar19 = (byte)local_1c8;
      if (7 < (byte)local_1c8) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,6);
        sVar11 = FUN_01dbd9e8(*(undefined8 *)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
      local_1d8 = (undefined *)CONCAT71(local_1d8._1_7_,7);
      FUN_01dbd8c4(&local_1c8,*(undefined8 *)puVar3,&local_1d8);
      bVar20 = *pbVar2;
      bVar19 = (byte)local_1c8;
      if (7 < (byte)local_1c8) {
        bVar19 = 0xff;
      }
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      if (bVar19 != bVar20) {
        local_1e0 = CONCAT71(local_1e0._1_7_,7);
        sVar11 = FUN_01dbd9e8(*(undefined8 *)puVar3,&local_1e0,1);
        if (sVar11 != -1) {
          bVar10 = DAT_055c1b60 == &DAT_055c1b58;
          puVar23 = DAT_055c1b60 + -8;
          if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
            do {
              puVar17 = (undefined8 *)puVar17[1];
              sVar11 = sVar11 + -1;
              bVar10 = puVar17 == &DAT_055c1b58;
            } while (!bVar10 && sVar11 != 0);
            puVar23 = puVar17 + -8;
          }
          puVar17 = &DAT_055c04a0;
          if (!bVar10) {
            puVar17 = puVar23;
          }
          if (*(int *)(puVar24 + 7) == *(int *)(puVar17 + 7)) goto LAB_02429e40;
        }
      }
    }
    else {
      local_1e0 = local_1e0 & 0xffffffffffffff00;
      sVar11 = FUN_01dbd9e8(*(long **)PTR_DAT_04bb27d0,&local_1e0,1);
      if (sVar11 == -1) goto LAB_024297f8;
      bVar10 = DAT_055c1b60 == &DAT_055c1b58;
      puVar23 = DAT_055c1b60 + -8;
      if ((sVar11 != 0) && (puVar17 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
        do {
          puVar17 = (undefined8 *)puVar17[1];
          sVar11 = sVar11 + -1;
          bVar10 = puVar17 == &DAT_055c1b58;
        } while (!bVar10 && sVar11 != 0);
        puVar23 = puVar17 + -8;
      }
      puVar17 = &DAT_055c04a0;
      if (!bVar10) {
        puVar17 = puVar23;
      }
      if (*(int *)(puVar24 + 7) != *(int *)(puVar17 + 7)) goto LAB_024297f8;
LAB_02429e40:
      uVar13 = FUN_016e4ef8();
      if ((uVar13 & 1) == 0) {
        if ((param_2 & 1) == 0) {
          FUN_0257a010(&local_1c8);
          FUN_006e43a0(auStack_118,PTR_PTR_04bb2238);
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          pcStack_1d0 = "Player_FtrActionError";
          local_1d8 = puVar1;
          FUN_006e43a0(&local_1c8,&local_1d8);
          pcStack_1d0 = "FtrPickupError_ExistsVisitor";
          local_1d8 = puVar1;
          FUN_006e43a0(auStack_170,&local_1d8);
          local_c0 = 0;
          local_b4 = 9;
          local_90 = 1;
          local_8c = 1;
          local_80 = 0x3c;
          FUN_024480f0(param_1,&local_1c8);
          return 1;
        }
        return 1;
      }
    }
  }
  local_1e0 = 0xfffe;
  FUN_0277d4ac(&local_1e0);
  FUN_016e49e4(&local_1e0,&local_78,0);
  sVar11 = *(short *)puVar1;
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  if (sVar11 != -1) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x15);
    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
    if (0xff < (uint)(int)sVar11) {
      puVar21 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar21 >> 0x15 & 1) != 0) {
      uVar14 = *(uint *)(param_1 + 0x17cc);
      goto LAB_02429f90;
    }
  }
  local_6c[0] = *pbVar2;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  FUN_02669430(local_6c);
  uVar13 = FUN_025579bc(pbVar2,&local_1e0,&local_1d8);
  uVar14 = *(uint *)(param_1 + 0x17cc);
  if ((uVar13 & 1) != 0) {
    *(uint *)(param_1 + 0x17cc) = uVar14 | 0x40;
    if ((param_2 & 1) == 0) {
      FUN_0257a010(&local_1c8);
      FUN_006e43a0(auStack_118,PTR_PTR_04bb2238);
      FUN_006e43a0(&local_1c8,&DAT_054c2648);
      local_1d8 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1d0 = "PickupFence_FullItem";
      FUN_006e43a0(auStack_170,&local_1d8);
      local_c0 = 0;
      local_b4 = 9;
      local_90 = 1;
      local_8c = 1;
      local_b8 = 0;
      local_80 = 0x3c;
      FUN_024480f0(param_1,&local_1c8);
      return 1;
    }
    return 1;
  }
LAB_02429f90:
  *(uint *)(param_1 + 0x17cc) = uVar14 & 0xffffffbf;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 8) = 0x100000000;
    uVar13 = FUN_022be56c(lVar4 + 0xb0);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
    FUN_02429180(&local_1c8);
    local_1bc = *(undefined8 *)(lVar4 + 0xdc);
    local_1b4 = *(undefined4 *)(lVar4 + 0xe4);
    local_1c0 = *(undefined4 *)(lVar4 + 0x108);
    local_1c8 = *(undefined8 *)(lVar4 + 0xc4);
    local_1ac = 0x200000000;
    FUN_024291c0(param_1,&local_1c8);
  }
  return 1;
}

