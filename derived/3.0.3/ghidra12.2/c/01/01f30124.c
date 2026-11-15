
undefined8 FUN_01f30124(long param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined *puVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  undefined4 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte local_94 [4];
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined1 local_78;
  byte local_77;
  uint local_6c;
  byte local_68 [4];
  uint local_64;
  
  puVar5 = PTR_DAT_04bb5ce0;
  puVar4 = PTR_DAT_04bb39b0;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return 0;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
    return 0;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
  if (0xff < (uint)(int)sVar8) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 6 & 1) == 0) {
    return 0;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_01f3020c:
    if (*pbVar15 < 8) goto LAB_01f30284;
LAB_01f30218:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f3027c:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_01f30284;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar16 = *(byte *)(lVar18 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar16 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
      if (7 < bVar16) {
        puVar1 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar15 = (byte *)(lVar18 + 0x471);
      }
    }
    bVar16 = *pbVar15;
    bVar7 = 7 < bVar16;
    if (bVar7) {
      bVar16 = 0xff;
    }
    local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar16);
    if (bVar7) goto LAB_01f3027c;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f3020c;
      }
      goto LAB_01f30218;
    }
LAB_01f30284:
    bVar16 = *pbVar15;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar16);
  }
  uVar11 = FUN_02915598(&local_88);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  uVar9 = FUN_0180da90();
  puVar3 = PTR_DAT_04bb2020;
  if ((uVar9 & 0xfffffffe) == 4) {
    return 0;
  }
  uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "VisitQuestCallCount";
  local_64 = uVar9;
  sVar8 = FUN_02196ed0(&local_64,&local_88);
  if (((sVar8 == 0) && (uVar9 < 10)) && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
    uVar11 = (ulong)uVar9;
    puVar14 = (undefined *)(&DAT_053fec00)[uVar11 * 0x174];
    if (puVar14 != &DAT_053febf8 + uVar11 * 0xba0) {
      puVar19 = (undefined4 *)(puVar14 + -0x10);
      uVar2 = (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20);
      uVar17 = uVar2 >> 8 & 0xff;
      uVar9 = uVar2 + 0x18;
      if ('\x04' < (char)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x20)) {
        uVar9 = uVar2;
      }
      do {
        if (((uint)(byte)puVar14[-0x10] <= (uVar9 & 0xff)) &&
           (((uint)(byte)puVar14[-0x10] != (uVar9 & 0xff) ||
            (*(byte *)((long)puVar19 + 1) <= uVar17)))) {
          if ((uVar9 & 0xff) < (uint)*(byte *)((long)puVar19 + 2)) {
            return 0;
          }
          if (((uint)*(byte *)((long)puVar19 + 2) == (uVar9 & 0xff)) &&
             (uVar17 < *(byte *)((long)puVar19 + 3))) {
            return 0;
          }
        }
        puVar14 = *(undefined **)(puVar14 + 8);
        puVar19 = (undefined4 *)(puVar14 + -0x10);
      } while (puVar19 != &DAT_053febe8 + uVar11 * 0x2e8);
    }
  }
  lVar18 = *(long *)puVar4;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_01f30420:
    if (7 < *pbVar15) {
LAB_01f3042c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar18 = **(long **)PTR_DAT_04bb27d0;
        bVar16 = *(byte *)(lVar18 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar16 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
          if (7 < bVar16) {
            puVar1 = (uint *)(lVar18 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar15 = (byte *)(lVar18 + 0x471);
          }
        }
        local_68[0] = *pbVar15;
        if (local_68[0] < 8) goto LAB_01f304ac;
      }
      pbVar15 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f30420;
      }
      goto LAB_01f3042c;
    }
  }
  local_68[0] = *pbVar15;
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
LAB_01f304ac:
  uVar11 = FUN_00a738a0(local_68,0);
  if ((uVar11 & 1) != 0) {
    return 0;
  }
  uVar11 = FUN_02532764(local_68,PTR_DAT_04bb3238);
  if ((((uVar11 & 1) != 0) || (uVar11 = FUN_0252f03c(local_68), (uVar11 & 1) != 0)) &&
     ((*(long *)PTR_DAT_04bb7ff8 == 0 || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)))) {
    local_6c = 0;
    uVar11 = FUN_02b5f380(&local_6c,local_68);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    if (((local_6c < 8) && (uVar11 = FUN_0180cab0((ulong)local_6c + 0x16), (uVar11 & 1) != 0)) &&
       ((lVar18 = *(long *)puVar4, lVar18 == 0 ||
        ((*(int *)(lVar18 + 0x15c) == 0 || (iVar10 = FUN_0180d8d0(), iVar10 == 0)))))) {
      if ((param_2 & 1) != 0) {
        lVar18 = FUN_0265b2e0();
        if (lVar18 == 0) {
          return 0;
        }
        local_78 = 1;
        local_80 = (char *)lVar18;
        if (*(long **)(lVar18 + 0x28) == (long *)0x0) {
          local_77 = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(lVar18 + 0x28);
          local_77 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            local_77 = (**(code **)*puVar12)();
          }
        }
        local_77 = local_77 & 1;
        local_88 = PTR_DAT_04bb7000 + 0x10;
        uVar11 = FUN_0284a8e4(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
        FUN_02640184(&local_88);
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      local_88 = puVar3 + 0x10;
      local_80 = "VisitQuestCallCount";
      sVar8 = FUN_02196ed0(&local_64,&local_88);
      if (sVar8 == 0) {
        lVar18 = *(long *)puVar5;
        if (lVar18 == 0) {
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar23 = 85.0;
          fVar24 = 85.0;
        }
        else {
          fVar22 = (float)*(int *)(lVar18 + 0xd88) * 5.0;
          fVar21 = (float)*(int *)(lVar18 + 0xd8c) * 5.0;
          fVar23 = (float)*(int *)(lVar18 + 0xd98) * 5.0 + 5.0;
          fVar24 = (float)*(int *)(lVar18 + 0xd9c) * 5.0 + 5.0;
        }
        FUN_02507c6c(&local_88,1,1,0,0);
        local_94[0] = 0xff;
        if ((byte)local_88 < 8) {
          local_94[0] = (byte)local_88;
        }
        local_90 = local_88._4_4_;
        local_8c = local_80._0_2_;
        bVar16 = (byte)local_88;
        while (bVar16 < 8) {
          pfVar13 = (float *)FUN_0251b3b0(local_94,0);
          if (pfVar13 == (float *)0x0) {
            return 0;
          }
          fVar20 = *pfVar13;
          bVar7 = false;
          bVar6 = false;
          if (fVar22 <= fVar20) {
            bVar7 = false;
            bVar6 = true;
            if (!NAN(fVar20) && !NAN(fVar23)) {
              bVar7 = fVar20 < fVar23;
              bVar6 = false;
            }
          }
          if (bVar7 == bVar6) {
            return 0;
          }
          fVar20 = pfVar13[2];
          bVar7 = false;
          bVar6 = false;
          if (fVar21 <= fVar20) {
            bVar7 = false;
            bVar6 = true;
            if (!NAN(fVar20) && !NAN(fVar24)) {
              bVar7 = fVar20 < fVar24;
              bVar6 = false;
            }
          }
          if (bVar7 == bVar6) {
            return 0;
          }
          FUN_02507e7c(local_94);
          bVar16 = local_94[0];
        }
      }
      return 1;
    }
  }
  return 0;
}

