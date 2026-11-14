
/* WARNING: Removing unreachable block (ram,0x0170f6b0) */
/* WARNING: Removing unreachable block (ram,0x0170f67c) */
/* WARNING: Removing unreachable block (ram,0x0170f898) */
/* WARNING: Removing unreachable block (ram,0x01710160) */

void FUN_0170f380(long *param_1,uint *param_2)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  uint *puVar19;
  undefined8 *puVar20;
  char cVar21;
  byte bVar22;
  ulong uVar23;
  uint *puVar24;
  uint *puVar25;
  int *piVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  void *__src;
  undefined1 *__src_00;
  undefined4 local_188;
  undefined4 local_184;
  undefined *local_180;
  undefined1 *puStack_178;
  int local_170;
  undefined1 auStack_16c [63];
  undefined1 local_12d;
  undefined2 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_cd;
  undefined2 local_c8;
  uint local_c0;
  char local_bc;
  uint local_b8;
  uint local_b4;
  char local_b0;
  uint local_ac;
  uint local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  uint local_88 [5];
  byte local_74 [4];
  uint local_70;
  undefined4 local_6c;
  
  puVar8 = PTR_DAT_04bb43c0;
  local_c0 = *param_2;
  local_bc = (char)param_2[1];
  local_b8 = param_2[2];
  local_b4 = param_2[3];
  local_b0 = (char)param_2[4];
  local_ac = param_2[5];
  local_a8 = param_2[6];
  local_a4 = (undefined2)param_2[7];
  local_a2 = *(undefined1 *)((long)param_2 + 0x1e);
  if (*(char *)((long)param_2 + 0x1d) != '\0') {
    lVar27 = param_1[0x290];
    if (*(char *)(lVar27 + 0x1d5) == '\0') {
LAB_0170f464:
      puVar19 = (uint *)(lVar27 + 0xd4);
    }
    else {
      lVar29 = *(long *)PTR_DAT_04bb43c0;
      puVar19 = (uint *)(lVar27 + 0xcc);
      uVar12 = FUN_0277d6c4(puVar19);
      if (*(long *)puVar8 == 0) {
LAB_0170f448:
        iVar13 = FUN_0277d6c4(puVar19);
        if (iVar13 != 0xfffd) goto LAB_0170f464;
        puVar19 = (uint *)PTR_DAT_04bb37e0;
      }
      else {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if ((*(uint *)(lVar29 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0170f448;
      }
    }
    puVar24 = (uint *)(param_1[0x290] + 0xcc);
    uVar17 = *puVar24;
    uVar12 = *(uint *)(param_1[0x290] + 0xd0);
    local_120 = *(undefined **)puVar24;
    lVar29 = *(long *)puVar8;
    local_b8 = *puVar19;
    local_b4 = puVar19[1];
    uVar14 = FUN_0277d6c4(&local_120);
    lVar27 = *(long *)puVar8;
    if (lVar27 != 0) {
      lVar29 = *(long *)(lVar29 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
      if (((uVar14 < *(uint *)(lVar29 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
         ((*(uint *)((long)param_1 + 0x15f4) >> 4 & 1) == 0)) {
        local_b0 = '\0';
        local_b8 = uVar17;
        local_b4 = uVar12;
      }
    }
    puVar19 = (uint *)(param_1[0x290] + 0x1fc);
    uVar17 = *puVar19;
    uVar12 = *(uint *)(param_1[0x290] + 0x200);
    local_180 = *(undefined **)puVar19;
    uVar14 = FUN_0277d6c4(&local_180);
    lVar29 = *(long *)puVar8;
    if (lVar29 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar14 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
        local_b0 = '\0';
        local_b8 = uVar17;
        local_b4 = uVar12;
      }
    }
    lVar27 = param_1[0x292];
    if (*(char *)(lVar27 + 0x1d5) == '\0') {
LAB_0170f614:
      puVar19 = (uint *)(lVar27 + 0xd4);
    }
    else {
      puVar19 = (uint *)(lVar27 + 0xcc);
      uVar12 = FUN_0277d6c4(puVar19);
      if (*(long *)puVar8 == 0) {
LAB_0170f5f8:
        iVar13 = FUN_0277d6c4(puVar19);
        if (iVar13 != 0xfffd) goto LAB_0170f614;
        puVar19 = (uint *)PTR_DAT_04bb37e0;
      }
      else {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if ((*(uint *)(lVar29 + 0x1d8) <= uVar12) ||
           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0170f5f8;
      }
    }
    local_ac = *puVar19;
    local_a8 = puVar19[1];
  }
  uVar12 = local_c0;
  if ((*(uint *)((long)param_1 + 0x15f4) & 0x1000) != 0) {
    uVar12 = 0;
  }
  local_120 = (undefined *)CONCAT44(local_120._4_4_,4);
  lVar27 = *(long *)puVar8;
  uVar17 = 0;
  if (local_b0 != '\0') {
    uVar17 = *(uint *)((long)param_1 + 0x15f4) >> 4 & 1;
  }
  uVar14 = FUN_0277d6c4(&local_b8);
  puVar19 = (uint *)PTR_DAT_04bb37e0;
  lVar29 = *(long *)puVar8;
  if (lVar29 == 0) {
    puVar24 = (uint *)PTR_DAT_04bb37e0;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar27 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      local_110 = 0;
      local_120 = PTR_DAT_04bc0510 + 0x10;
      local_118 = (void *)CONCAT44(local_b4,local_b8);
      uVar14 = FUN_0277d6c4(&local_118);
      if (*(long *)puVar8 != 0) {
        lVar27 = *(long *)(lVar29 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar14 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar14 = FUN_0277d6c4(&local_b8);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar27 + 0x1d8)) &&
             (lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar14 * 8), lVar27 != 0)) {
            local_110 = lVar27;
          }
        }
      }
      local_6c = (uint)local_6c._2_2_ << 0x10;
      FUN_01adab50(&local_120,&local_6c);
      uVar14 = 0;
      do {
        local_88[0] = uVar14;
        puVar24 = &local_b8;
        if (uVar14 != 0) {
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar14);
          if (uVar14 < 0xe) {
            local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar14);
            uVar15 = uVar14 + 7;
            if (-1 < (int)uVar14) {
              uVar15 = uVar14;
            }
            if (((uint)((int)uVar15 >> 3) < 2) &&
               (local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar14),
               (local_74[(ulong)(uint)((int)uVar15 >> 3) + 8] >> (ulong)(uVar14 & 7) & 1) != 0)) {
              if (uVar14 == 9) goto LAB_0170f858;
              break;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0xe);
      iVar13 = FUN_01ad78cc(&local_120);
      if (iVar13 == 0x1c) goto LAB_0170f858;
    }
    puVar24 = (uint *)PTR_DAT_04bb37e0;
  }
LAB_0170f858:
  puVar3 = puVar19;
  if (uVar17 == 0) {
    puVar3 = puVar24;
  }
  local_120 = (undefined *)CONCAT44(local_120._4_4_,5);
  lVar27 = *(long *)puVar8;
  uVar14 = 0;
  if ((char)local_a4 != '\0') {
    uVar14 = *(uint *)((long)param_1 + 0x15f4) >> 5 & 1;
  }
  uVar15 = FUN_0277d6c4(&local_ac);
  lVar29 = *(long *)puVar8;
  if (lVar29 == 0) {
LAB_0170f998:
    puVar28 = (uint *)PTR_DAT_04bb37e0;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((*(uint *)(lVar27 + 0x1d8) <= uVar15) ||
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0170f998;
    local_110 = 0;
    local_120 = PTR_DAT_04bc0510 + 0x10;
    local_118 = (void *)CONCAT44(local_a8,local_ac);
    uVar15 = FUN_0277d6c4(&local_118);
    if (*(long *)puVar8 != 0) {
      lVar27 = *(long *)(lVar29 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
        lVar27 = *(long *)PTR_DAT_04bc0428;
        uVar15 = FUN_0277d6c4(&local_ac);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
           (lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8), lVar27 != 0)) {
          local_110 = lVar27;
        }
      }
    }
    iVar13 = FUN_01ad78cc(&local_120);
    puVar28 = &local_ac;
    if (iVar13 != 0x1c) goto LAB_0170f998;
  }
  puVar7 = PTR_DAT_04bb2020;
  puVar4 = puVar19;
  if (uVar14 == 0) {
    puVar4 = puVar28;
  }
  lVar29 = *(long *)puVar8;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "HumanHandTool";
  uVar15 = FUN_0277d6c4(puVar24);
  lVar27 = *(long *)puVar8;
  if (lVar27 == 0) {
LAB_0170fb64:
    uVar16 = 0;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if (*(uint *)(lVar29 + 0x1d8) <= uVar15) goto LAB_0170fb64;
    uVar16 = 0;
    if (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar15 * 8) != 0) {
      local_110 = 0;
      local_118 = *(void **)puVar24;
      local_120 = PTR_DAT_04bc0510 + 0x10;
      uVar15 = FUN_0277d6c4(&local_118);
      if (*(long *)puVar8 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar15 = FUN_0277d6c4(puVar24);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
             (lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8), lVar27 != 0)) {
            local_110 = lVar27;
          }
        }
      }
      iVar13 = FUN_01ad78cc(&local_120);
      if (iVar13 != 0x1c) {
        local_70 = local_70 & 0xffff0000;
        FUN_01adab50(&local_120,&local_70);
        uVar15 = 0;
        do {
          local_6c = uVar15;
          if ((uVar15 != 0) && (local_88[0] = uVar15, uVar15 < 0xe)) {
            local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar15);
            uVar16 = uVar15 + 7;
            if (-1 < (int)uVar15) {
              uVar16 = uVar15;
            }
            if (((uint)((int)uVar16 >> 3) < 2) &&
               (local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar15),
               (local_74[(ulong)(uint)((int)uVar16 >> 3) + 4] >> (ulong)(uVar15 & 7) & 1) != 0)) {
              if (uVar15 == 9) {
                FUN_01ad7ca0(&local_180,iVar13);
                uVar16 = FUN_0171b3a0(&local_180);
                uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
                goto LAB_0170fb68;
              }
              break;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0xe);
        goto LAB_0170fb64;
      }
      uVar16 = 0x13;
    }
  }
LAB_0170fb68:
  local_120 = (undefined *)CONCAT44(local_120._4_4_,uVar16);
  if (((param_1[0x227] != 0) && (lVar27 = *(long *)(param_1[0x227] + 0x78), lVar27 != 0)) &&
     (plVar18 = *(long **)(lVar27 + 0x48), plVar18 != (long *)0x0)) {
    (**(code **)(*plVar18 + 0x28))(plVar18,&local_a0,uVar16);
  }
  local_a0 = puVar7 + 0x10;
  lVar29 = *(long *)puVar8;
  local_98 = "HumanHandToolEx";
  uVar15 = FUN_0277d6c4(puVar3);
  lVar27 = *(long *)puVar8;
  if (lVar27 == 0) {
LAB_0170fd64:
    uVar16 = 0;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if (*(uint *)(lVar29 + 0x1d8) <= uVar15) goto LAB_0170fd64;
    uVar16 = 0;
    if (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar15 * 8) != 0) {
      local_110 = 0;
      local_120 = PTR_DAT_04bc0510 + 0x10;
      if (uVar17 == 0) {
        puVar19 = puVar24;
      }
      local_118 = (void *)CONCAT44(puVar19[1],CONCAT22(*(short *)((long)puVar19 + 2),(short)*puVar3)
                                  );
      uVar15 = FUN_0277d6c4(&local_118);
      if (*(long *)puVar8 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar15 = FUN_0277d6c4(puVar3);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
             (lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8), lVar27 != 0)) {
            local_110 = lVar27;
          }
        }
      }
      iVar13 = FUN_01ad78cc(&local_120);
      if (iVar13 != 0x1c) {
        local_70 = local_70 & 0xffff0000;
        FUN_01adab50(&local_120,&local_70);
        uVar15 = 0;
        do {
          local_6c = uVar15;
          if ((uVar15 != 0) && (local_88[0] = uVar15, uVar15 < 0xe)) {
            local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar15);
            uVar16 = uVar15 + 7;
            if (-1 < (int)uVar15) {
              uVar16 = uVar15;
            }
            if (((uint)((int)uVar16 >> 3) < 2) &&
               (local_180 = (undefined *)CONCAT44(local_180._4_4_,uVar15),
               (local_74[(ulong)(uint)((int)uVar16 >> 3) + 4] >> (ulong)(uVar15 & 7) & 1) != 0)) {
              if (uVar15 == 9) {
                FUN_01ad7ca0(&local_180,iVar13);
                uVar16 = FUN_0171b3a0(&local_180);
                uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
                goto LAB_0170fd68;
              }
              break;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0xe);
        goto LAB_0170fd64;
      }
      uVar16 = 0x13;
    }
  }
LAB_0170fd68:
  if (((param_1[0x227] != 0) && (lVar27 = *(long *)(param_1[0x227] + 0x78), lVar27 != 0)) &&
     (plVar18 = *(long **)(lVar27 + 0x48), plVar18 != (long *)0x0)) {
    local_120._0_4_ = uVar16;
    (**(code **)(*plVar18 + 0x28))(plVar18,&local_a0,uVar16);
  }
  puVar7 = PTR_PTR_04bb2238;
  if (((short)*puVar3 == -2) && ((short)*puVar4 == -2)) {
    if (param_1[0x227] == 0) {
      puVar20 = &DAT_04c931a0;
    }
    else {
      puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
    }
    local_120._0_4_ = *(uint *)(puVar20 + 0xb);
    puVar19 = (uint *)FUN_0171ec68(&local_120);
    puVar7 = PTR_DAT_04bbde90;
    puVar8 = PTR_DAT_04bbde88;
    if (puVar19 == (uint *)0x0) {
LAB_01710554:
      uVar17 = uVar12;
    }
    else {
      if (*puVar19 != 0) {
        cVar21 = *PTR_DAT_04bbde88;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar17 = *(uint *)(puVar7 + 0x14);
            if (-1 < (int)uVar17) {
              if ((byte *)((ulong)uVar17 + (long)puVar19) == (byte *)0x0) break;
              bVar22 = *(byte *)((ulong)uVar17 + (long)puVar19);
              if ((char)bVar22 < '\0') goto LAB_01710554;
              uVar17 = (uint)bVar22;
              goto LAB_01710558;
            }
            if (uVar17 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)*puVar19;
          uVar17 = 0;
          if ((*puVar19 == 0) || (puVar19 == puVar24)) goto LAB_01710558;
          lVar27 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar27 = 0x1c;
          }
          lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
          if (lVar27 == 0) break;
          uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
          if (uVar23 == 0) break;
          piVar26 = (int *)(lVar27 + 4);
          while (piVar26[-1] != -0x2ade889f) {
            piVar26 = piVar26 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_0171054c;
          }
          uVar17 = 0;
          iVar13 = 0;
          if (*piVar26 != -1) {
            iVar13 = *piVar26;
          }
          *(int *)(puVar7 + 0x14) = iVar13;
          if (*puVar19 == 0) goto LAB_01710558;
        } while( true );
      }
LAB_0171054c:
      uVar17 = 0;
    }
LAB_01710558:
    FUN_01707f58(param_1,uVar17,2,0);
    *(undefined4 *)((long)param_1 + 0x16c4) = 0;
    if (param_1[0x227] == 0) {
      puVar20 = &DAT_04c931a0;
    }
    else {
      puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
    }
    local_120 = (undefined *)CONCAT44(local_120._4_4_,*(undefined4 *)(puVar20 + 0xb));
    puVar19 = (uint *)FUN_0171ec68(&local_120);
    puVar7 = PTR_DAT_04bbde90;
    puVar8 = PTR_DAT_04bbde88;
    if (puVar19 == (uint *)0x0) goto LAB_017118dc;
    if (*puVar19 != 0) {
      cVar21 = *PTR_DAT_04bbde88;
      do {
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar17 = *(uint *)(puVar7 + 0x14);
          uVar23 = (ulong)uVar17;
          if (-1 < (int)uVar17) goto LAB_017118bc;
          if (uVar17 != 0xffffffff) goto LAB_017118d4;
        }
        puVar24 = (uint *)(ulong)*puVar19;
        uVar17 = 0;
        if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
        lVar27 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
          lVar27 = 0x1c;
        }
        lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
        if (lVar27 == 0) goto LAB_017118d4;
        uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
        *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
        if (uVar23 == 0) goto LAB_017118d4;
        piVar26 = (int *)(lVar27 + 4);
        while (piVar26[-1] != -0x2ade889f) {
          piVar26 = piVar26 + 2;
          uVar23 = uVar23 - 1;
          if (uVar23 == 0) goto LAB_017118d4;
        }
        uVar17 = 0;
        iVar13 = 0;
        if (*piVar26 != -1) {
          iVar13 = *piVar26;
        }
        *(int *)(puVar7 + 0x14) = iVar13;
      } while (*puVar19 != 0);
      goto LAB_017118e0;
    }
  }
  else {
    local_cd = 0;
    __dest = (void *)((long)&local_110 + 4);
    local_110 = CONCAT44(local_110._4_4_,0x40);
    puVar1 = PTR_DAT_04bb2f70 + 0x10;
    local_120 = puVar1;
    local_118 = __dest;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(void **)(puVar7 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
      lVar27 = 0;
      do {
        if (*(char *)(*(long *)(puVar7 + 8) + lVar27) == '\0') goto LAB_0170feac;
        lVar29 = *(long *)(puVar7 + 8) + lVar27;
        if (*(char *)(lVar29 + 1) == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_0170feac;
        }
        if (*(char *)(lVar29 + 2) == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_0170feac;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_0170feac:
      iVar13 = (int)lVar27;
      if ((int)local_110 <= (int)lVar27) {
        iVar13 = (int)local_110 + -1;
      }
      memcpy(__dest,__src,(long)iVar13);
      *(undefined1 *)((long)__dest + (long)iVar13) = 0;
    }
    local_c8 = 0;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    local_120 = puVar2;
    uVar15 = (**(code **)(*param_1 + 0x268))(param_1,&local_120,puVar3);
    local_12d = 0;
    local_170 = 0x40;
    local_180 = puVar1;
    puStack_178 = auStack_16c;
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    __src_00 = *(undefined1 **)(puVar7 + 8);
    if (auStack_16c != __src_00) {
      (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
      lVar27 = 0;
      do {
        if (*(char *)(*(long *)(puVar7 + 8) + lVar27) == '\0') goto LAB_0170ff8c;
        lVar29 = *(long *)(puVar7 + 8) + lVar27;
        if (*(char *)(lVar29 + 1) == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_0170ff8c;
        }
        if (*(char *)(lVar29 + 2) == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_0170ff8c;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_0170ff8c:
      iVar13 = (int)lVar27;
      if (local_170 <= (int)lVar27) {
        iVar13 = local_170 + -1;
      }
      memcpy(auStack_16c,__src_00,(long)iVar13);
      auStack_16c[iVar13] = 0;
    }
    local_128 = 0;
    local_180 = puVar2;
    uVar16 = (**(code **)(*param_1 + 0x278))(param_1,&local_180,puVar4);
    if (((uVar15 | uVar16) & 1) != 0) {
      lVar27 = param_1[0x227];
      if (lVar27 == 0) {
        local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20);
        puVar20 = &DAT_04c931a0;
      }
      else {
        uVar15 = *(uint *)(param_1 + 0x2d3) >> 1 & 1;
        local_a0 = (undefined *)
                   (CONCAT44(local_a0._4_4_,*(uint *)(param_1 + 0x2d3) >> 1) & 0xffffffff00000001);
        uVar16 = 0;
        if (*(long *)(lVar27 + 0x78) != 0) {
          uVar16 = *(uint *)(*(long *)(lVar27 + 0x78) + 0x18);
        }
        if (uVar16 <= uVar15) {
          uVar15 = 0;
        }
        if (*(uint *)(lVar27 + 0x80) <= uVar15) {
          uVar15 = 0;
        }
        puVar20 = (undefined8 *)(*(long *)(lVar27 + 0x88) + (long)(int)uVar15 * 0xe8 + 0x60);
      }
      local_184 = *(undefined4 *)(puVar20 + 0xb);
      puVar19 = (uint *)FUN_0171ec68(&local_184);
      puVar1 = PTR_DAT_04bbde90;
      puVar7 = PTR_DAT_04bbde88;
      if (local_bc == '\0') {
LAB_017106dc:
        bVar9 = local_c8._1_1_ != '\0';
        pcVar6 = PTR_DAT_04bbde88;
        puVar20 = (undefined8 *)PTR_DAT_04bbde90;
joined_r0x017106f4:
        PTR_DAT_04bbde88 = pcVar6;
        PTR_DAT_04bbde90 = (undefined *)puVar20;
        if (local_bc == '\0') {
LAB_01710824:
          bVar10 = local_128._1_1_ != '\0';
          bVar9 = (bool)(bVar9 | bVar10);
          pcVar6 = PTR_DAT_04bbde88;
          puVar20 = (undefined8 *)PTR_DAT_04bbde90;
        }
        else {
          if (puVar19 == (uint *)0x0) {
            bVar11 = false;
            bVar10 = false;
            goto LAB_01710980;
          }
          local_a0._4_4_ = (uint)((ulong)local_a0 >> 0x20);
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
          if (*puVar19 != 0) {
            cVar21 = *pcVar6;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *puVar20 = 0xffffffffffffffff;
                puVar20[1] = 0xffffffffffffffff;
                *pcVar6 = '\x01';
                puVar20[6] = 0xffffffffffffffff;
                puVar20[2] = 0xffffffffffffffff;
                puVar20[3] = 0xffffffffffffffff;
                puVar20[4] = 0xffffffffffffffff;
                puVar20[5] = 0xffffffffffffffff;
                uVar15 = *puVar19;
              }
              else {
                uVar15 = *(uint *)(puVar20 + 2);
                if (-1 < (int)uVar15) {
                  if (((byte *)((ulong)uVar15 + (long)puVar19) != (byte *)0x0) &&
                     ((*(byte *)((ulong)uVar15 + (long)puVar19) >> 1 & 1) != 0)) goto LAB_01710824;
                  break;
                }
                if (uVar15 != 0xffffffff) break;
                uVar15 = *puVar19;
              }
              if ((uVar15 == 0) || (puVar25 = (uint *)(ulong)uVar15, puVar19 == puVar25)) break;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar25)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar25);
              if (lVar27 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar25));
              *(undefined4 *)(puVar20 + 2) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != -0x60aedc2c) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_0171083c;
              }
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar20 + 2) = iVar13;
              if (*puVar19 == 0) break;
            } while( true );
          }
LAB_0171083c:
          bVar10 = false;
          pcVar6 = PTR_DAT_04bbde88;
          puVar20 = (undefined8 *)PTR_DAT_04bbde90;
        }
        PTR_DAT_04bbde88 = pcVar6;
        PTR_DAT_04bbde90 = (undefined *)puVar20;
        if (local_bc != '\0') {
          if (puVar19 == (uint *)0x0) {
            bVar11 = false;
          }
          else {
            local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
            if (*puVar19 != 0) {
              cVar21 = *pcVar6;
              do {
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *puVar20 = 0xffffffffffffffff;
                  puVar20[1] = 0xffffffffffffffff;
                  *pcVar6 = '\x01';
                  puVar20[6] = 0xffffffffffffffff;
                  puVar20[2] = 0xffffffffffffffff;
                  puVar20[3] = 0xffffffffffffffff;
                  puVar20[4] = 0xffffffffffffffff;
                  puVar20[5] = 0xffffffffffffffff;
                  uVar15 = *puVar19;
                }
                else {
                  uVar15 = *(uint *)(puVar20 + 2);
                  if (-1 < (int)uVar15) {
                    if (((byte *)((ulong)uVar15 + (long)puVar19) != (byte *)0x0) &&
                       ((*(byte *)((ulong)uVar15 + (long)puVar19) & 1) != 0)) goto LAB_01710964;
                    break;
                  }
                  if (uVar15 != 0xffffffff) break;
                  uVar15 = *puVar19;
                }
                if ((uVar15 == 0) || (puVar25 = (uint *)(ulong)uVar15, puVar19 == puVar25)) break;
                lVar27 = 0xc;
                if (*(char *)((long)puVar19 + (10 - (long)puVar25)) != '\0') {
                  lVar27 = 0x1c;
                }
                lVar27 = (long)puVar19 + (lVar27 - (long)puVar25);
                if (lVar27 == 0) break;
                uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar25));
                *(undefined4 *)(puVar20 + 2) = 0xfffffffe;
                if (uVar23 == 0) break;
                piVar26 = (int *)(lVar27 + 4);
                while (piVar26[-1] != -0x60aedc2c) {
                  piVar26 = piVar26 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) goto LAB_01710978;
                }
                iVar13 = 0;
                if (*piVar26 != -1) {
                  iVar13 = *piVar26;
                }
                *(int *)(puVar20 + 2) = iVar13;
                if (*puVar19 == 0) break;
              } while( true );
            }
LAB_01710978:
            bVar11 = false;
            if (local_bc == '\0') goto LAB_017109ac;
          }
          goto LAB_01710980;
        }
LAB_01710964:
        bVar11 = (char)local_c8 != '\0';
        if (local_bc != '\0') goto LAB_01710980;
LAB_017109ac:
        if ((char)local_128 == '\0') goto LAB_01710bf4;
LAB_017109b4:
        puVar1 = PTR_DAT_04bbde90;
        puVar7 = PTR_DAT_04bbde88;
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,8);
        if ((*(uint *)((long)param_1 + 0x15f4) >> 8 & 1) == 0) {
          bVar22 = 1;
        }
        else {
          if (puVar19 == (uint *)0x0) goto LAB_01710bf4;
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0xc);
          if (*puVar19 == 0) {
LAB_01711948:
            bVar22 = 0;
          }
          else {
            cVar21 = *PTR_DAT_04bbde88;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar1 = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                *puVar7 = 1;
                *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar15 = *(uint *)(puVar1 + 0x2c);
                if (-1 < (int)uVar15) {
                  if ((ulong)uVar15 + (long)puVar19 == 0) goto LAB_01711948;
                  bVar22 = *(byte *)((ulong)uVar15 + (long)puVar19 + 1) >> 4 & 1;
                  goto LAB_0171194c;
                }
                if (uVar15 != 0xffffffff) goto LAB_01711948;
              }
              puVar25 = (uint *)(ulong)*puVar19;
              bVar22 = 0;
              if ((*puVar19 == 0) || (puVar19 == puVar25)) goto LAB_0171194c;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar25)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar25);
              if (lVar27 == 0) goto LAB_01711948;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar25));
              *(undefined4 *)(puVar1 + 0x2c) = 0xfffffffe;
              bVar22 = 0;
              if (uVar23 == 0) goto LAB_0171194c;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != 0x42ad246a) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) {
                  bVar22 = 0;
                  goto LAB_0171194c;
                }
              }
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar1 + 0x2c) = iVar13;
            } while (*puVar19 != 0);
            bVar22 = 0;
          }
LAB_0171194c:
          bVar22 = bVar22 ^ 1;
        }
      }
      else {
        if (puVar19 != (uint *)0x0) {
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
          if (*puVar19 != 0) {
            cVar21 = *PTR_DAT_04bbde88;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar1 = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                *puVar7 = 1;
                *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                uVar15 = *puVar19;
              }
              else {
                uVar15 = *(uint *)(puVar1 + 0x10);
                if (-1 < (int)uVar15) {
                  if (((byte *)((ulong)uVar15 + (long)puVar19) != (byte *)0x0) &&
                     ((*(byte *)((ulong)uVar15 + (long)puVar19) >> 1 & 1) != 0)) goto LAB_017106dc;
                  break;
                }
                if (uVar15 != 0xffffffff) break;
                uVar15 = *puVar19;
              }
              if ((uVar15 == 0) || (puVar25 = (uint *)(ulong)uVar15, puVar19 == puVar25)) break;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar25)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar25);
              if (lVar27 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar25));
              *(undefined4 *)(puVar1 + 0x10) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != -0x60aedc2c) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_017106f0;
              }
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar1 + 0x10) = iVar13;
              if (*puVar19 == 0) break;
            } while( true );
          }
LAB_017106f0:
          bVar9 = false;
          pcVar6 = PTR_DAT_04bbde88;
          puVar20 = (undefined8 *)PTR_DAT_04bbde90;
          goto joined_r0x017106f4;
        }
        bVar11 = false;
        bVar10 = false;
        bVar9 = false;
LAB_01710980:
        puVar1 = PTR_DAT_04bbde90;
        puVar7 = PTR_DAT_04bbde88;
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0xb);
        if ((*(uint *)((long)param_1 + 0x15f4) >> 0xb & 1) != 0) goto LAB_017109ac;
        if ((puVar19 != (uint *)0x0) &&
           (local_a0 = (undefined *)((ulong)local_a0._4_4_ << 0x20), *puVar19 != 0)) {
          cVar21 = *PTR_DAT_04bbde88;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
              uVar15 = *puVar19;
            }
            else {
              uVar15 = *(uint *)(puVar1 + 0x10);
              if (-1 < (int)uVar15) {
                if ((byte *)((ulong)uVar15 + (long)puVar19) != (byte *)0x0) {
                  bVar22 = 0;
                  if (((*(byte *)((ulong)uVar15 + (long)puVar19) & 1) == 0) ||
                     ((char)local_128 == '\0')) goto LAB_01710bf8;
                  goto LAB_017109b4;
                }
                break;
              }
              if (uVar15 != 0xffffffff) break;
              uVar15 = *puVar19;
            }
            if ((uVar15 == 0) || (puVar25 = (uint *)(ulong)uVar15, puVar19 == puVar25)) break;
            lVar27 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar25)) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar19 + (lVar27 - (long)puVar25);
            if (lVar27 == 0) break;
            uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar25));
            *(undefined4 *)(puVar1 + 0x10) = 0xfffffffe;
            if (uVar23 == 0) break;
            piVar26 = (int *)(lVar27 + 4);
            while (piVar26[-1] != -0x60aedc2c) {
              piVar26 = piVar26 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) goto LAB_01710bf4;
            }
            iVar13 = 0;
            if (*piVar26 != -1) {
              iVar13 = *piVar26;
            }
            *(int *)(puVar1 + 0x10) = iVar13;
            if (*puVar19 == 0) break;
          } while( true );
        }
LAB_01710bf4:
        bVar22 = 0;
      }
LAB_01710bf8:
      lVar29 = *(long *)puVar8;
      uVar15 = FUN_0277d6c4(puVar3);
      lVar27 = *(long *)puVar8;
      if (lVar27 == 0) {
LAB_01710d1c:
        uVar16 = 0;
      }
      else {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if (*(uint *)(lVar29 + 0x1d8) <= uVar15) goto LAB_01710d1c;
        uVar16 = 0;
        if (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar15 * 8) != 0) {
          local_a0 = PTR_DAT_04bc0510 + 0x10;
          local_90 = 0;
          puVar19 = (uint *)PTR_DAT_04bb37e0;
          if (uVar17 == 0) {
            puVar19 = puVar24;
          }
          local_98 = (char *)CONCAT62(*(undefined6 *)((long)puVar19 + 2),(short)*puVar3);
          uVar17 = FUN_0277d6c4(&local_98);
          if (*(long *)puVar8 != 0) {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((uVar17 < *(uint *)(lVar27 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
              lVar27 = *(long *)PTR_DAT_04bc0428;
              uVar17 = FUN_0277d6c4(puVar3);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar27 + 0x1d8)) &&
                 (lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8), lVar27 != 0
                 )) {
                local_90 = lVar27;
              }
            }
          }
          iVar13 = FUN_01ad78cc(&local_a0);
          if (iVar13 == 0x1c) {
            uVar16 = 0x13;
          }
          else {
            local_188 = (uint)local_188._2_2_ << 0x10;
            FUN_01adab50(&local_a0,&local_188);
            uVar17 = 0;
            do {
              local_70 = uVar17;
              if ((uVar17 != 0) && (local_6c = uVar17, uVar17 < 0xe)) {
                uVar15 = uVar17 + 7;
                if (-1 < (int)uVar17) {
                  uVar15 = uVar17;
                }
                local_88[0] = uVar17;
                if (((uint)((int)uVar15 >> 3) < 2) &&
                   (((byte)auStack_16c[(ulong)(uint)((int)uVar15 >> 3) - 0x1c] >>
                     (ulong)(uVar17 & 7) & 1) != 0)) {
                  if (uVar17 == 9) {
                    FUN_01ad7ca0(local_88,iVar13);
                    uVar16 = FUN_0171b3a0(local_88);
                    uVar16 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
                    goto LAB_01710dcc;
                  }
                  break;
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != 0xe);
            uVar16 = 0;
          }
LAB_01710dcc:
          lVar27 = *(long *)puVar8;
        }
      }
      local_188 = uVar16;
      uVar17 = FUN_0277d6c4(puVar4);
      lVar29 = *(long *)puVar8;
      if (lVar29 == 0) {
LAB_01710fa4:
        uVar15 = 0;
      }
      else {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if (*(uint *)(lVar27 + 0x1d8) <= uVar17) goto LAB_01710fa4;
        uVar15 = 0;
        if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8) != 0) {
          local_a0 = PTR_DAT_04bc0510 + 0x10;
          local_90 = 0;
          puVar19 = (uint *)PTR_DAT_04bb37e0;
          if (uVar14 == 0) {
            puVar19 = puVar28;
          }
          local_98 = (char *)CONCAT62(*(undefined6 *)((long)puVar19 + 2),(short)*puVar4);
          uVar17 = FUN_0277d6c4(&local_98);
          if (*(long *)puVar8 != 0) {
            lVar27 = *(long *)(lVar29 + 0x57e58);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((uVar17 < *(uint *)(lVar27 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
              lVar27 = *(long *)PTR_DAT_04bc0428;
              uVar17 = FUN_0277d6c4(puVar4);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar27 + 0x1d8)) &&
                 (lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar17 * 8), lVar27 != 0
                 )) {
                local_90 = lVar27;
              }
            }
          }
          iVar13 = FUN_01ad78cc(&local_a0);
          if (iVar13 != 0x1c) {
            local_74[0] = 0;
            local_74[1] = 0;
            FUN_01adab50(&local_a0,local_74);
            local_88[0] = 0;
            do {
              local_70 = local_88[0];
              if ((local_88[0] != 0) && (local_6c = local_88[0], local_88[0] < 0xe)) {
                uVar17 = local_88[0] + 7;
                if (-1 < (int)local_88[0]) {
                  uVar17 = local_88[0];
                }
                if (((uint)((int)uVar17 >> 3) < 2) &&
                   ((local_74[(uint)((int)uVar17 >> 3)] >> (ulong)(local_88[0] & 7) & 1) != 0)) {
                  if (local_88[0] == 9) {
                    FUN_01ad7ca0(local_88,iVar13);
                    uVar17 = FUN_0171b3a0(local_88);
                    uVar15 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
                    goto LAB_01710fa8;
                  }
                  break;
                }
              }
              local_88[0] = local_88[0] + 1;
            } while (local_88[0] != 0xe);
            goto LAB_01710fa4;
          }
          uVar15 = 0x13;
        }
      }
LAB_01710fa8:
      local_88[0] = uVar15;
      if (bVar9) {
        if (!bVar10) {
          if (local_188 == 0) {
            if (param_1[0x227] == 0) {
              puVar20 = &DAT_04c931a0;
            }
            else {
              puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
            }
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar20 + 0xb));
            puVar19 = (uint *)FUN_0171ec68(&local_a0);
            puVar7 = PTR_DAT_04bbde90;
            puVar8 = PTR_DAT_04bbde88;
            if (puVar19 == (uint *)0x0) goto LAB_0171175c;
            if (*puVar19 == 0) goto LAB_01711754;
            cVar21 = *PTR_DAT_04bbde88;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar17 = *(uint *)(puVar7 + 0x14);
                uVar23 = (ulong)uVar17;
                if (-1 < (int)uVar17) goto LAB_0171173c;
                if (uVar17 != 0xffffffff) goto LAB_01711754;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              uVar17 = 0;
              if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
              if (lVar27 == 0) goto LAB_01711754;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
              if (uVar23 == 0) goto LAB_01711754;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != -0x2ade889f) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_01711754;
              }
              uVar17 = 0;
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar7 + 0x14) = iVar13;
            } while (*puVar19 != 0);
            goto LAB_01711760;
          }
          if (local_188 != *(uint *)((long)param_1 + 0x16c4)) {
            FUN_01707310(param_1,&local_120,uVar12,2,local_a2);
            FUN_01707750(param_1,&local_120);
            *(uint *)((long)param_1 + 0x16c4) = local_188;
          }
LAB_01711094:
          if (!bVar11 && bVar22 == 0) goto LAB_01711778;
          goto LAB_01711098;
        }
        if (local_88[0] == 0) {
          if (param_1[0x227] == 0) {
            puVar20 = &DAT_04c931a0;
          }
          else {
            puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
          }
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar20 + 0xb));
          puVar19 = (uint *)FUN_0171ec68(&local_a0);
          puVar7 = PTR_DAT_04bbde90;
          puVar8 = PTR_DAT_04bbde88;
          if (puVar19 == (uint *)0x0) goto LAB_0171175c;
          if (*puVar19 == 0) goto LAB_01711754;
          cVar21 = *PTR_DAT_04bbde88;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar7 + 0x14);
              uVar23 = (ulong)uVar17;
              if (-1 < (int)uVar17) goto LAB_0171173c;
              if (uVar17 != 0xffffffff) goto LAB_01711754;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            uVar17 = 0;
            if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
            lVar27 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
            if (lVar27 == 0) goto LAB_01711754;
            uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
            *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
            if (uVar23 == 0) goto LAB_01711754;
            piVar26 = (int *)(lVar27 + 4);
            while (piVar26[-1] != -0x2ade889f) {
              piVar26 = piVar26 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) goto LAB_01711754;
            }
            uVar17 = 0;
            iVar13 = 0;
            if (*piVar26 != -1) {
              iVar13 = *piVar26;
            }
            *(int *)(puVar7 + 0x14) = iVar13;
          } while (*puVar19 != 0);
          goto LAB_01711760;
        }
        if (local_88[0] == *(uint *)((long)param_1 + 0x16c4)) goto LAB_01711094;
        FUN_01707310(param_1,&local_180,uVar12,2,local_a2);
        FUN_01707750(param_1,&local_180);
        *(uint *)((long)param_1 + 0x16c4) = local_88[0];
        if (bVar11 || bVar22 != 0) goto LAB_01711098;
LAB_01711778:
        if (param_1[0x227] == 0) {
          puVar20 = &DAT_04c931a0;
        }
        else {
          puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
        }
        local_a0 = (undefined *)
                   CONCAT44((int)((ulong)local_a0 >> 0x20),*(undefined4 *)(puVar20 + 0xb));
        puVar19 = (uint *)FUN_0171ec68(&local_a0);
        puVar7 = PTR_DAT_04bbde90;
        puVar8 = PTR_DAT_04bbde88;
        if (puVar19 != (uint *)0x0) {
          if (*puVar19 != 0) {
            cVar21 = *PTR_DAT_04bbde88;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar17 = *(uint *)(puVar7 + 0x14);
                uVar23 = (ulong)uVar17;
                if (-1 < (int)uVar17) goto LAB_017118bc;
                if (uVar17 != 0xffffffff) goto LAB_017118d4;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              uVar17 = 0;
              if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
              if (lVar27 == 0) goto LAB_017118d4;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
              if (uVar23 == 0) goto LAB_017118d4;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != -0x2ade889f) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_017118d4;
              }
              uVar17 = 0;
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar7 + 0x14) = iVar13;
            } while (*puVar19 != 0);
            goto LAB_017118e0;
          }
          goto LAB_017118d4;
        }
      }
      else {
        if (param_1[0x227] == 0) {
          puVar20 = &DAT_04c931a0;
        }
        else {
          puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar20 + 0xb));
        puVar19 = (uint *)FUN_0171ec68(&local_a0);
        puVar7 = PTR_DAT_04bbde90;
        puVar8 = PTR_DAT_04bbde88;
        if (puVar19 == (uint *)0x0) {
LAB_0171175c:
          uVar17 = uVar12;
        }
        else {
          if (*puVar19 == 0) goto LAB_01711754;
          cVar21 = *PTR_DAT_04bbde88;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar17 = *(uint *)(puVar7 + 0x14);
              uVar23 = (ulong)uVar17;
              if (-1 < (int)uVar17) goto LAB_0171173c;
              if (uVar17 != 0xffffffff) goto LAB_01711754;
            }
            puVar24 = (uint *)(ulong)*puVar19;
            uVar17 = 0;
            if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
            lVar27 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
            if (lVar27 == 0) goto LAB_01711754;
            uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
            *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
            if (uVar23 == 0) goto LAB_01711754;
            piVar26 = (int *)(lVar27 + 4);
            while (piVar26[-1] != -0x2ade889f) {
              piVar26 = piVar26 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) goto LAB_01711754;
            }
            uVar17 = 0;
            iVar13 = 0;
            if (*piVar26 != -1) {
              iVar13 = *piVar26;
            }
            *(int *)(puVar7 + 0x14) = iVar13;
          } while (*puVar19 != 0);
        }
LAB_01711760:
        FUN_01707f58(param_1,uVar17,2,0);
        *(undefined4 *)((long)param_1 + 0x16c4) = 0;
        if (!bVar11 && bVar22 == 0) goto LAB_01711778;
LAB_01711098:
        if (bVar22 != 0) {
          if (local_88[0] != 0) {
            if (local_88[0] == *(uint *)(param_1 + 0x2d8)) {
              return;
            }
            FUN_01707310(param_1,&local_180,uVar12,3,local_a2);
            FUN_01707750(param_1,&local_180);
            *(uint *)(param_1 + 0x2d8) = local_88[0];
            return;
          }
          if (param_1[0x227] == 0) {
            puVar20 = &DAT_04c931a0;
          }
          else {
            puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
          }
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar20 + 0xb));
          puVar19 = (uint *)FUN_0171ec68(&local_a0);
          puVar7 = PTR_DAT_04bbde90;
          puVar8 = PTR_DAT_04bbde88;
          if (puVar19 == (uint *)0x0) goto LAB_017118dc;
          if (*puVar19 != 0) {
            cVar21 = *PTR_DAT_04bbde88;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar17 = *(uint *)(puVar7 + 0x14);
                uVar23 = (ulong)uVar17;
                if (-1 < (int)uVar17) goto LAB_017118bc;
                if (uVar17 != 0xffffffff) goto LAB_017118d4;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              uVar17 = 0;
              if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
              if (lVar27 == 0) goto LAB_017118d4;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
              if (uVar23 == 0) goto LAB_017118d4;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != -0x2ade889f) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_017118d4;
              }
              uVar17 = 0;
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar7 + 0x14) = iVar13;
            } while (*puVar19 != 0);
            goto LAB_017118e0;
          }
          goto LAB_017118d4;
        }
        if (local_188 != 0) {
          if (local_188 == *(uint *)(param_1 + 0x2d8)) {
            return;
          }
          FUN_01707310(param_1,&local_120,uVar12,3,local_a2);
          FUN_01707750(param_1,&local_120);
          *(uint *)(param_1 + 0x2d8) = local_188;
          return;
        }
        if (param_1[0x227] == 0) {
          puVar20 = &DAT_04c931a0;
        }
        else {
          puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar20 + 0xb));
        puVar19 = (uint *)FUN_0171ec68(&local_a0);
        puVar7 = PTR_DAT_04bbde90;
        puVar8 = PTR_DAT_04bbde88;
        if (puVar19 != (uint *)0x0) {
          if (*puVar19 != 0) {
            cVar21 = *PTR_DAT_04bbde88;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar17 = *(uint *)(puVar7 + 0x14);
                uVar23 = (ulong)uVar17;
                if (-1 < (int)uVar17) goto LAB_017118bc;
                if (uVar17 != 0xffffffff) goto LAB_017118d4;
              }
              puVar24 = (uint *)(ulong)*puVar19;
              uVar17 = 0;
              if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
              lVar27 = 0xc;
              if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
              if (lVar27 == 0) goto LAB_017118d4;
              uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
              *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
              if (uVar23 == 0) goto LAB_017118d4;
              piVar26 = (int *)(lVar27 + 4);
              while (piVar26[-1] != -0x2ade889f) {
                piVar26 = piVar26 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_017118d4;
              }
              uVar17 = 0;
              iVar13 = 0;
              if (*piVar26 != -1) {
                iVar13 = *piVar26;
              }
              *(int *)(puVar7 + 0x14) = iVar13;
            } while (*puVar19 != 0);
            goto LAB_017118e0;
          }
          goto LAB_017118d4;
        }
      }
LAB_017118dc:
      uVar17 = uVar12;
      goto LAB_017118e0;
    }
    if (param_1[0x227] == 0) {
      puVar20 = &DAT_04c931a0;
    }
    else {
      puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
    }
    local_a0._0_4_ = *(undefined4 *)(puVar20 + 0xb);
    puVar19 = (uint *)FUN_0171ec68(&local_a0);
    puVar7 = PTR_DAT_04bbde90;
    puVar8 = PTR_DAT_04bbde88;
    if (puVar19 == (uint *)0x0) {
LAB_017103cc:
      uVar17 = uVar12;
    }
    else {
      if (*puVar19 != 0) {
        cVar21 = *PTR_DAT_04bbde88;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar17 = *(uint *)(puVar7 + 0x14);
            if (-1 < (int)uVar17) {
              if ((byte *)((ulong)uVar17 + (long)puVar19) == (byte *)0x0) break;
              bVar22 = *(byte *)((ulong)uVar17 + (long)puVar19);
              if ((char)bVar22 < '\0') goto LAB_017103cc;
              uVar17 = (uint)bVar22;
              goto LAB_017103d0;
            }
            if (uVar17 != 0xffffffff) break;
          }
          puVar24 = (uint *)(ulong)*puVar19;
          uVar17 = 0;
          if ((*puVar19 == 0) || (puVar19 == puVar24)) goto LAB_017103d0;
          lVar27 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
            lVar27 = 0x1c;
          }
          lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
          if (lVar27 == 0) break;
          uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
          *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
          if (uVar23 == 0) break;
          piVar26 = (int *)(lVar27 + 4);
          while (piVar26[-1] != -0x2ade889f) {
            piVar26 = piVar26 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_017103c4;
          }
          uVar17 = 0;
          iVar13 = 0;
          if (*piVar26 != -1) {
            iVar13 = *piVar26;
          }
          *(int *)(puVar7 + 0x14) = iVar13;
          if (*puVar19 == 0) goto LAB_017103d0;
        } while( true );
      }
LAB_017103c4:
      uVar17 = 0;
    }
LAB_017103d0:
    FUN_01707f58(param_1,uVar17,2,0);
    *(undefined4 *)((long)param_1 + 0x16c4) = 0;
    if (param_1[0x227] == 0) {
      puVar20 = &DAT_04c931a0;
    }
    else {
      puVar20 = (undefined8 *)(*(long *)(param_1[0x227] + 0x88) + 0x60);
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar20 + 0xb));
    puVar19 = (uint *)FUN_0171ec68(&local_a0);
    puVar7 = PTR_DAT_04bbde90;
    puVar8 = PTR_DAT_04bbde88;
    if (puVar19 == (uint *)0x0) {
LAB_0171052c:
      uVar17 = uVar12;
      goto LAB_017118e0;
    }
    if (*puVar19 != 0) {
      cVar21 = *PTR_DAT_04bbde88;
      do {
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar17 = *(uint *)(puVar7 + 0x14);
          if (-1 < (int)uVar17) {
            if ((byte *)((ulong)uVar17 + (long)puVar19) == (byte *)0x0) goto LAB_017118d4;
            bVar22 = *(byte *)((ulong)uVar17 + (long)puVar19);
            if (-1 < (char)bVar22) goto LAB_017118cc;
            goto LAB_0171052c;
          }
          if (uVar17 != 0xffffffff) goto LAB_017118d4;
        }
        puVar24 = (uint *)(ulong)*puVar19;
        uVar17 = 0;
        if ((*puVar19 == 0) || (puVar19 == puVar24)) break;
        lVar27 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
          lVar27 = 0x1c;
        }
        lVar27 = (long)puVar19 + (lVar27 - (long)puVar24);
        if (lVar27 == 0) goto LAB_017118d4;
        uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
        *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
        if (uVar23 == 0) goto LAB_017118d4;
        piVar26 = (int *)(lVar27 + 4);
        while (piVar26[-1] != -0x2ade889f) {
          piVar26 = piVar26 + 2;
          uVar23 = uVar23 - 1;
          if (uVar23 == 0) goto LAB_017118d4;
        }
        uVar17 = 0;
        iVar13 = 0;
        if (*piVar26 != -1) {
          iVar13 = *piVar26;
        }
        *(int *)(puVar7 + 0x14) = iVar13;
      } while (*puVar19 != 0);
      goto LAB_017118e0;
    }
  }
LAB_017118d4:
  uVar17 = 0;
LAB_017118e0:
  FUN_01707f58(param_1,uVar17,3,0);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  return;
LAB_0171173c:
  if ((byte *)(uVar23 + (long)puVar19) != (byte *)0x0) {
    bVar5 = *(byte *)(uVar23 + (long)puVar19);
    if (-1 < (char)bVar5) {
      uVar17 = (uint)bVar5;
      goto LAB_01711760;
    }
    goto LAB_0171175c;
  }
LAB_01711754:
  uVar17 = 0;
  goto LAB_01711760;
LAB_017118bc:
  if ((byte *)(uVar23 + (long)puVar19) == (byte *)0x0) goto LAB_017118d4;
  bVar22 = *(byte *)(uVar23 + (long)puVar19);
  if (-1 < (char)bVar22) {
LAB_017118cc:
    uVar17 = (uint)bVar22;
    goto LAB_017118e0;
  }
  goto LAB_017118dc;
}

