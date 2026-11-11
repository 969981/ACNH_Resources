
/* WARNING: Removing unreachable block (ram,0x00495f28) */

undefined8 FUN_004954a0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  char *pcVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  long *plVar29;
  long lVar30;
  undefined1 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined1 auVar36 [16];
  uint local_184;
  long local_180;
  undefined8 local_178;
  uint local_170 [10];
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  uint *local_d8;
  uint *puStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  
  if (*(int *)(param_1 + 0x1f8) != 0) {
    if (DAT_04c71040 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(&local_148,&DAT_04c70ff0,1);
    lVar10 = FUN_004446b0(&local_148,"Type Compendium already begun",&DAT_0413df78);
    *(char **)(lVar10 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    *(undefined8 *)(lVar10 + 0x30) = 0x61e;
    FUN_00444c00(&local_148);
    return 0x80040200;
  }
  if ((*param_3 == 0) && (param_3[2] == 0)) goto LAB_00495ea4;
  local_80 = 0;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_0049e570(&local_a8,param_3);
  FUN_0048fc90(auStack_c8);
  lVar10 = FUN_0048fe50(auStack_c8,&local_a8);
  if (lVar10 == 0) {
    if (DAT_04c71040 != '\0') {
      FUN_00444bc0(&local_148,&DAT_04c70ff0,1);
      lVar10 = FUN_004446b0(&local_148,"Cannot reuse the existing type compendium",&DAT_0413df78);
      *(char **)(lVar10 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
      ;
      *(undefined8 *)(lVar10 + 0x30) = 0x629;
      FUN_00444c00(&local_148);
    }
    FUN_0048fce0(auStack_c8);
    FUN_0049e4f0(&local_a8);
    return 0x80040200;
  }
  FUN_00490100(&local_148,auStack_c8);
  lVar35 = param_1 + 0x308;
  FUN_00495f30(param_1 + 0x48,local_128,uStack_120,lVar35);
  FUN_00495f30(param_1 + 0x80,local_118,uStack_110,lVar35);
  FUN_00495f30(param_1 + 0xb8,local_108,uStack_100,lVar35);
  puVar6 = PTR_DAT_048607b8;
  plVar1 = (long *)(param_1 + 0xf0);
  if (&local_138 != plVar1) {
    iVar16 = (int)((ulong)(lStack_130 - local_138) >> 3);
    uVar9 = iVar16 * -0x55555555;
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x3fffffff) < (int)uVar9) {
      uVar11 = FUN_004267f0(PTR_DAT_048607b8,uVar9,0x18,*(undefined8 *)(param_1 + 0xf0),
                            *(undefined4 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf0) = uVar11;
    }
    uVar17 = *(uint *)(param_1 + 0xf8);
    iVar16 = uVar17 + iVar16 * 0x55555555;
    if (0 < iVar16) {
      plVar29 = (long *)(*plVar1 + (long)(int)uVar17 * 0x18 + -0x10);
      do {
        *(undefined4 *)(plVar29 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)plVar29 + 0xc)) && (*plVar29 != 0)) {
          FUN_00421f90(puVar6,*plVar29,0x10,*(uint *)((long)plVar29 + 0xc) & 0x3fffffff);
        }
        *plVar29 = 0;
        iVar16 = iVar16 + -1;
        *(undefined4 *)((long)plVar29 + 0xc) = 0x80000000;
        plVar29 = plVar29 + -3;
      } while (iVar16 != 0);
      uVar17 = *(uint *)(param_1 + 0xf8);
    }
    lVar35 = *plVar1;
    if ((int)uVar9 <= (int)uVar17) {
      uVar17 = uVar9;
    }
    if ((lVar35 != local_138) && (0 < (int)uVar17)) {
      uVar32 = 0;
      do {
        puVar23 = (undefined8 *)(local_138 + uVar32 * 0x18);
        puVar21 = (undefined8 *)(lVar35 + uVar32 * 0x18);
        plVar29 = puVar21 + 1;
        *puVar21 = *puVar23;
        uVar3 = *(uint *)(puVar23 + 2);
        lVar30 = puVar23[1];
        if ((int)(*(uint *)((long)puVar21 + 0x14) & 0x3fffffff) < (int)uVar3) {
          lVar12 = FUN_004267f0(puVar6,uVar3,0x10,*plVar29,
                                *(undefined4 *)(lVar35 + uVar32 * 0x18 + 0x10));
          *plVar29 = lVar12;
        }
        else {
          lVar12 = *plVar29;
        }
        puVar18 = (uint *)(lVar35 + uVar32 * 0x18 + 0x10);
        uVar4 = *puVar18;
        uVar2 = uVar4;
        if ((int)uVar3 <= (int)uVar4) {
          uVar2 = uVar3;
        }
        if (lVar12 != lVar30 && 0 < (int)uVar2) {
          uVar27 = (ulong)uVar2;
          if (uVar27 - 1 < 7) {
            lVar26 = 0;
          }
          else {
            lVar26 = 0;
            puVar23 = (undefined8 *)(lVar12 + 0x40);
            puVar21 = (undefined8 *)(lVar30 + 0x40);
            do {
              uVar11 = puVar21[-7];
              lVar26 = lVar26 + 8;
              puVar23[-8] = puVar21[-8];
              puVar23[-7] = uVar11;
              uVar11 = puVar21[-5];
              puVar23[-6] = puVar21[-6];
              puVar23[-5] = uVar11;
              uVar11 = puVar21[-3];
              puVar23[-4] = puVar21[-4];
              puVar23[-3] = uVar11;
              uVar11 = puVar21[-1];
              puVar23[-2] = puVar21[-2];
              puVar23[-1] = uVar11;
              uVar11 = puVar21[1];
              *puVar23 = *puVar21;
              puVar23[1] = uVar11;
              uVar11 = puVar21[3];
              puVar23[2] = puVar21[2];
              puVar23[3] = uVar11;
              uVar11 = puVar21[5];
              puVar23[4] = puVar21[4];
              puVar23[5] = uVar11;
              puVar33 = puVar21 + 6;
              uVar11 = puVar21[7];
              puVar21 = puVar21 + 0x10;
              puVar23[6] = *puVar33;
              puVar23[7] = uVar11;
              puVar23 = puVar23 + 0x10;
            } while (uVar27 - (uVar27 & 7) != lVar26);
          }
          if ((uVar2 & 7) != 0) {
            lVar25 = -(uVar27 & 7);
            puVar23 = (undefined8 *)(lVar12 + lVar26 * 0x10);
            puVar21 = (undefined8 *)(lVar30 + lVar26 * 0x10);
            do {
              uVar11 = puVar21[1];
              *puVar23 = *puVar21;
              puVar23[1] = uVar11;
              lVar25 = lVar25 + 1;
              puVar23 = puVar23 + 2;
              puVar21 = puVar21 + 2;
            } while (lVar25 != 0);
          }
          lVar12 = *plVar29;
        }
        if (uVar3 - uVar4 != 0 && (int)uVar4 <= (int)uVar3) {
          puVar23 = (undefined8 *)(lVar30 + (long)(int)uVar2 * 0x10);
          puVar21 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 0x10);
          uVar2 = uVar3 - uVar4 & 7;
          if (6 < uVar3 + ~uVar4) {
            iVar16 = (uVar4 + uVar2) - uVar3;
            puVar33 = puVar23;
            puVar13 = puVar21;
            do {
              uVar11 = puVar33[1];
              puVar23 = puVar33 + 0x10;
              *puVar13 = *puVar33;
              puVar13[1] = uVar11;
              puVar21 = puVar13 + 0x10;
              uVar11 = puVar33[3];
              iVar16 = iVar16 + 8;
              puVar13[2] = puVar33[2];
              puVar13[3] = uVar11;
              uVar11 = puVar33[5];
              puVar13[4] = puVar33[4];
              puVar13[5] = uVar11;
              uVar11 = puVar33[7];
              puVar13[6] = puVar33[6];
              puVar13[7] = uVar11;
              uVar11 = puVar33[9];
              puVar13[8] = puVar33[8];
              puVar13[9] = uVar11;
              uVar11 = puVar33[0xb];
              puVar13[10] = puVar33[10];
              puVar13[0xb] = uVar11;
              uVar11 = puVar33[0xd];
              puVar13[0xc] = puVar33[0xc];
              puVar13[0xd] = uVar11;
              uVar11 = puVar33[0xf];
              puVar13[0xe] = puVar33[0xe];
              puVar13[0xf] = uVar11;
              puVar33 = puVar23;
              puVar13 = puVar21;
            } while (iVar16 != 0);
          }
          if (uVar2 != 0) {
            iVar16 = -uVar2;
            do {
              uVar11 = puVar23[1];
              *puVar21 = *puVar23;
              puVar21[1] = uVar11;
              iVar16 = iVar16 + 1;
              puVar23 = puVar23 + 2;
              puVar21 = puVar21 + 2;
            } while (iVar16 != 0);
          }
        }
        uVar32 = uVar32 + 1;
        *puVar18 = uVar3;
      } while (uVar32 != uVar17);
    }
    iVar16 = uVar9 - uVar17;
    if (0 < iVar16) {
      iVar28 = 0;
      puVar23 = (undefined8 *)(local_138 + (long)(int)uVar17 * 0x18);
      puVar21 = (undefined8 *)(*plVar1 + (long)(int)uVar17 * 0x18);
      do {
        while( true ) {
          *puVar21 = *puVar23;
          puVar21[1] = 0;
          puVar21[2] = 0x8000000000000000;
          uVar17 = *(uint *)(puVar23 + 2);
          puVar33 = (undefined8 *)puVar23[1];
          puVar23 = puVar23 + 3;
          local_170[0] = uVar17;
          if ((int)uVar17 < 1) break;
          puVar13 = (undefined8 *)FUN_00421ed0(puVar6,0x10,local_170);
          *(uint *)(puVar21 + 2) = uVar17;
          *(uint *)((long)puVar21 + 0x14) = local_170[0];
          uVar3 = uVar17 & 7;
          puVar21[1] = puVar13;
          if (6 < uVar17 - 1) {
            iVar22 = uVar3 - uVar17;
            puVar14 = puVar13;
            puVar34 = puVar33;
            do {
              uVar11 = puVar34[1];
              puVar13 = puVar14 + 0x10;
              *puVar14 = *puVar34;
              puVar14[1] = uVar11;
              puVar33 = puVar34 + 0x10;
              uVar11 = puVar34[3];
              iVar22 = iVar22 + 8;
              puVar14[2] = puVar34[2];
              puVar14[3] = uVar11;
              uVar11 = puVar34[5];
              puVar14[4] = puVar34[4];
              puVar14[5] = uVar11;
              uVar11 = puVar34[7];
              puVar14[6] = puVar34[6];
              puVar14[7] = uVar11;
              uVar11 = puVar34[9];
              puVar14[8] = puVar34[8];
              puVar14[9] = uVar11;
              uVar11 = puVar34[0xb];
              puVar14[10] = puVar34[10];
              puVar14[0xb] = uVar11;
              uVar11 = puVar34[0xd];
              puVar14[0xc] = puVar34[0xc];
              puVar14[0xd] = uVar11;
              uVar11 = puVar34[0xf];
              puVar14[0xe] = puVar34[0xe];
              puVar14[0xf] = uVar11;
              puVar14 = puVar13;
              puVar34 = puVar33;
            } while (iVar22 != 0);
          }
          if (uVar3 != 0) {
            iVar22 = -uVar3;
            do {
              uVar11 = puVar33[1];
              *puVar13 = *puVar33;
              puVar13[1] = uVar11;
              iVar22 = iVar22 + 1;
              puVar13 = puVar13 + 2;
              puVar33 = puVar33 + 2;
            } while (iVar22 != 0);
          }
          iVar28 = iVar28 + 1;
          puVar21 = puVar21 + 3;
          if (iVar28 == iVar16) goto LAB_004959e4;
        }
        puVar21[1] = 0;
        puVar21[2] = 0x8000000000000000;
        iVar28 = iVar28 + 1;
        puVar21 = puVar21 + 3;
      } while (iVar28 != iVar16);
    }
LAB_004959e4:
    *(uint *)(param_1 + 0xf8) = uVar9;
  }
  FUN_00450fe0(local_170,0xffffffffffffffff);
  local_180 = 0;
  local_178 = 0x8000000000000000;
  uVar32 = (ulong)(lStack_140 - local_148) >> 3;
  if ((int)uVar32 < 1) {
LAB_00495a50:
    FUN_00426990(PTR_DAT_048607c0,&local_180,0x18);
  }
  else {
    local_180 = FUN_004267f0(PTR_DAT_048607c0,uVar32,0x18,0,0,(long)&local_178 + 4);
    if ((uint)local_178 == (local_178._4_4_ & 0x3fffffff)) goto LAB_00495a50;
  }
  puVar23 = (undefined8 *)(local_180 + (long)(int)(uint)local_178 * 0x18);
  iVar16 = (uint)local_178 + 1;
  *(undefined8 *)((long)puVar23 + 0xd) = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  puVar6 = PTR_DAT_048607c0;
  local_178 = CONCAT44(local_178._4_4_,iVar16);
  if (1 < (ulong)(lStack_140 - local_148 >> 3)) {
    uVar32 = 1;
    do {
      iVar16 = (int)uVar32;
      if (uVar32 < (ulong)(long)*(int *)(lVar10 + 0x10)) {
        bVar7 = *(long *)(*(long *)(lVar10 + 8) + (long)iVar16 * 8) != 0;
      }
      else {
        bVar7 = false;
      }
      if ((uint)local_178 == (local_178._4_4_ & 0x3fffffff)) {
        FUN_00426990(puVar6,&local_180,0x18);
      }
      lVar35 = local_180;
      puVar23 = (undefined8 *)(local_180 + (long)(int)(uint)local_178 * 0x18);
      lVar30 = (long)(int)(uint)local_178;
      *(undefined8 *)((long)puVar23 + 0xd) = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      local_178 = CONCAT44(local_178._4_4_,(uint)local_178 + 1);
      pbVar15 = *(byte **)(local_148 + (long)iVar16 * 8);
      if ((*pbVar15 >> 3 & 1) != 0) {
        if (*(long *)(param_1 + 0x218) != 0) {
          pbVar15 = (byte *)FUN_004a03b0(*(long *)(param_1 + 0x218),pbVar15,0);
        }
        auVar36 = FUN_004273b0(pbVar15);
        *puVar23 = auVar36._0_8_;
        *(long *)(lVar35 + lVar30 * 0x18 + 8) = auVar36._8_8_;
      }
      if (bVar7) {
        lVar12 = (long)iVar16;
        uVar8 = FUN_004514d0(local_170,*(undefined8 *)(*(long *)(lVar10 + 8) + lVar12 * 8));
        lVar35 = lVar35 + lVar30 * 0x18;
        pcVar19 = (char *)(lVar35 + 0x14);
        puVar24 = (undefined4 *)(lVar35 + 0x10);
        if (*pcVar19 == '\0') {
          *puVar24 = uVar8;
          *pcVar19 = '\x01';
          bVar5 = *(byte *)(*(long *)(*(long *)(lVar10 + 8) + lVar12 * 8) + 3);
        }
        else {
          *puVar24 = uVar8;
          bVar5 = *(byte *)(*(long *)(*(long *)(lVar10 + 8) + lVar12 * 8) + 3);
        }
        if ((bVar5 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x1c0) = 1;
        }
        uVar9 = FUN_00428440();
        *(uint *)(*(long *)(param_1 + 0xf0) + lVar12 * 0x18 + 4) = uVar9 & 0x1f;
      }
      uVar32 = (ulong)(iVar16 + 1);
    } while (uVar32 < (ulong)(lStack_140 - local_148 >> 3));
    iVar16 = (uint)local_178;
  }
  lVar35 = local_180;
  lVar30 = local_180 + (long)iVar16 * 0x18;
  FUN_0049c0f0(param_1 + 0x200);
  FUN_0049be30(param_1 + 0x200,lVar35,lVar30);
  puVar6 = PTR_DAT_048607b8;
  if (local_d8 != puStack_d0) {
    puVar18 = local_d8;
    do {
      local_184 = *puVar18;
      FUN_0049ba50(param_1 + 0x2e8,&local_184);
      lVar35 = FUN_004514d0(local_170,
                            *(undefined8 *)(*(long *)(lVar10 + 8) + (long)(int)local_184 * 8));
      uVar32 = (ulong)local_184;
      uVar9 = *(uint *)(param_1 + 0x20);
      if (uVar9 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
        FUN_00426990(puVar6,param_1 + 0x18,8);
        uVar9 = *(uint *)(param_1 + 0x20);
      }
      *(ulong *)(*(long *)(param_1 + 0x18) + (long)(int)uVar9 * 8) = uVar32 | lVar35 << 0x20;
      *(uint *)(param_1 + 0x20) = uVar9 + 1;
      if (*(int *)(param_1 + 0x210) < (int)local_184) {
        *(uint *)(param_1 + 0x210) = local_184;
      }
      puVar18 = puVar18 + 2;
    } while (puStack_d0 != puVar18);
  }
  iVar28 = *(int *)(param_1 + 0x38);
  lVar10 = *(long *)(param_1 + 0x30);
  iVar16 = iVar28 + ((int)puStack_f0 - (int)local_f8);
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar16) {
    lVar10 = FUN_00426720(PTR_DAT_048607b8,iVar16,1,lVar10,iVar28);
    *(long *)(param_1 + 0x30) = lVar10;
  }
  if (local_f8 != puStack_f0) {
    puVar20 = (undefined1 *)(lVar10 + iVar28);
    do {
      puVar31 = local_f8 + 1;
      *puVar20 = *local_f8;
      puVar20 = puVar20 + 1;
      local_f8 = puVar31;
    } while (puStack_f0 != puVar31);
  }
  *(int *)(param_1 + 0x38) = iVar16;
  iVar28 = *(int *)(param_1 + 0x1f0);
  iVar16 = iVar28 + (int)((ulong)((long)puStack_e0 - (long)local_e8) >> 3);
  if ((int)(*(uint *)(param_1 + 500) & 0x3fffffff) < iVar16) {
    lVar10 = FUN_00426720(PTR_DAT_048607b8,iVar16,8,*(undefined8 *)(param_1 + 0x1e8),iVar28,
                          param_1 + 500);
    *(long *)(param_1 + 0x1e8) = lVar10;
    lVar35 = local_178;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x1e8);
    lVar35 = local_178;
  }
  if (local_e8 != puStack_e0) {
    uVar32 = (long)puStack_e0 + (-8 - (long)local_e8);
    puVar23 = (undefined8 *)(lVar10 + (long)iVar28 * 8);
    uVar9 = ((uint)(uVar32 >> 3) & 0x1fffffff) + 1;
    if ((uVar9 & 3) != 0) {
      lVar10 = -((ulong)uVar9 & 3);
      puVar21 = puVar23;
      puVar33 = local_e8;
      do {
        local_e8 = puVar33 + 1;
        lVar10 = lVar10 + 1;
        puVar23 = puVar21 + 1;
        *puVar21 = *puVar33;
        puVar21 = puVar23;
        puVar33 = local_e8;
      } while (lVar10 != 0);
    }
    if (0x17 < uVar32) {
      do {
        *puVar23 = *local_e8;
        puVar23[1] = local_e8[1];
        puVar23[2] = local_e8[2];
        puVar21 = local_e8 + 3;
        local_e8 = local_e8 + 4;
        puVar23[3] = *puVar21;
        puVar23 = puVar23 + 4;
      } while (local_e8 != puStack_e0);
    }
  }
  *(int *)(param_1 + 0x1f0) = iVar16;
  local_178._4_4_ = (uint)((ulong)lVar35 >> 0x20);
  uVar9 = local_178._4_4_;
  local_178 = (ulong)local_178._4_4_ << 0x20;
  if ((-1 < lVar35) && (local_180 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_180,0x18,uVar9 & 0x3fffffff);
  }
  FUN_00451010(local_170);
  FUN_0048fce0(auStack_c8);
  FUN_0049e4f0(&local_a8);
LAB_00495ea4:
  lVar10 = *param_2;
  if (lVar10 != 0) {
    FUN_004435a0(lVar10);
  }
  lVar35 = param_2[1];
  lVar30 = param_2[2];
  lVar26 = param_2[3];
  lVar12 = *(long *)(param_1 + 0x1c8);
  *(long *)(param_1 + 0x1c8) = lVar10;
  if (lVar12 != 0) {
    FUN_004435c0();
  }
  *(long *)(param_1 + 0x1d0) = lVar35;
  *(long *)(param_1 + 0x1d8) = lVar30;
  *(long *)(param_1 + 0x1e0) = lVar26;
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  return 0;
}

