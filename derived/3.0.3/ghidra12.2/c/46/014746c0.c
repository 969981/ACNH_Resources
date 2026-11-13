
bool FUN_014746c0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  undefined4 *puVar33;
  int iVar34;
  long lVar35;
  undefined8 *puVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  float fStack_128;
  float local_124;
  undefined *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  long local_110;
  undefined *local_108;
  int local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined *local_f0;
  undefined8 local_e8;
  byte local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    local_c8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uStack_c0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_b8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uStack_b0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_d8 = *(undefined8 *)PTR_DAT_04bb2f80;
    uStack_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    (**(code **)(**(long **)(param_1 + 0xa90) + 0x108))
              (*(long **)(param_1 + 0xa90),&local_d8,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
    puVar9 = PTR_DAT_04bc0510;
    puVar1 = PTR_DAT_04bb43c0;
    local_140 = 0;
    local_f0 = PTR_DAT_04bb2e18 + 0x10;
    local_150 = PTR_DAT_04bc0510 + 0x10;
    local_e8 = 0;
    local_148 = *(undefined **)(param_1 + 0x288);
    lVar35 = *(long *)PTR_DAT_04bb43c0;
    uVar29 = FUN_0277d6c4(&local_148);
    if (*(long *)puVar1 != 0) {
      lVar35 = *(long *)(lVar35 + 0x57e58);
      uVar29 = (uVar29 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if ((uVar29 < *(uint *)(lVar35 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar29 * 8) != 0)) {
        lVar35 = *(long *)PTR_DAT_04bc0428;
        uVar29 = FUN_0277d6c4(param_1 + 0x288);
        uVar29 = (uVar29 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
        if (uVar29 < *(uint *)(lVar35 + 0x1d8)) {
          lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar29 * 8);
          if (lVar35 != 0) {
            local_140 = lVar35;
          }
        }
      }
    }
    FUN_01afb1a0(&local_150,&local_f0);
    uVar7 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
    local_120 = (undefined *)CONCAT44(local_120._4_4_,uVar7);
    local_150 = (undefined *)CONCAT44(local_150._4_4_,*(int *)(param_1 + 0x2d0));
    uVar37 = (uint)local_e8;
    uVar29 = local_e8._4_4_;
    if (3 < *(int *)(param_1 + 0x2d0) - 2U) {
      uVar29 = (uint)local_e8;
      uVar37 = local_e8._4_4_;
      if ((uVar7 & 0x80000001) != 1) {
        uVar29 = local_e8._4_4_;
        uVar37 = (uint)local_e8;
      }
    }
    local_e8 = (ulong)local_e8._4_4_ << 0x20;
    iVar5 = *(int *)(param_1 + 0x2c8);
    iVar39 = *(int *)(param_1 + 0x2cc);
    lVar35 = *(long *)PTR_DAT_04bb2720;
    if (lVar35 == 0) {
      puVar36 = &DAT_055c04a0;
    }
    else {
      puVar36 = &DAT_055c04a0;
      if (*(long *)(lVar35 + 0x330) != 0) {
        puVar36 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
        iVar30 = FUN_006bd550(*puVar36,0);
        puVar36 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar30 != 0x758f7eaf) {
          puVar36 = &DAT_055c04a0;
        }
      }
    }
    local_e8 = CONCAT44(*(undefined4 *)(puVar36 + 7),(uint)local_e8);
    local_e0 = FUN_017baf44();
    local_e0 = local_e0 & 1;
    local_f0 = PTR_DAT_04bb3140 + 0x10;
    local_f8 = 0xfffe;
    uStack_f4 = 0;
    FUN_0277d4ac(&local_f8);
    if (uVar29 != 0) {
      iVar30 = iVar39 + uVar29;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      iVar38 = iVar5;
      do {
        local_108 = puVar1;
        local_100 = iVar38;
        iStack_fc = iVar39;
        FUN_01a50240(&local_150,&local_f0,1,&local_108);
        local_f8 = SUB84(local_150,0);
        uStack_f4 = local_150._4_4_;
        uVar32 = FUN_0277e158(&local_f8);
        puVar8 = PTR_DAT_04bb43c0;
        if ((uVar32 & 1) != 0) {
          local_110 = 0;
          local_118 = local_f8;
          uStack_114 = uStack_f4;
          lVar35 = *(long *)PTR_DAT_04bb43c0;
          local_120 = puVar9 + 0x10;
          uVar29 = FUN_0277d6c4(&local_118);
          if (*(long *)puVar8 != 0) {
            lVar35 = *(long *)(lVar35 + 0x57e58);
            uVar29 = (uVar29 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
            if ((uVar29 < *(uint *)(lVar35 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar29 * 8) != 0)) {
              lVar35 = *(long *)PTR_DAT_04bc0428;
              uVar29 = FUN_0277d6c4(&local_f8);
              uVar29 = (uVar29 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
              if (uVar29 < *(uint *)(lVar35 + 0x1d8)) {
                lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar29 * 8);
                if (lVar35 != 0) {
                  local_110 = lVar35;
                }
              }
            }
          }
          local_140 = 0;
          local_148 = PTR_DAT_04bb2010 + 0x10;
          local_130 = 0;
          local_150 = puVar2;
          local_138 = local_148;
          FUN_01afb480(&local_120,&local_150);
          iVar27 = iStack_fc;
          iVar26 = local_100;
          iVar14 = (int)(float)local_140;
          iVar16 = (int)local_140._4_4_;
          iVar20 = (int)(float)local_130;
          iVar22 = (int)local_130._4_4_;
          FUN_007535b4(&local_150,&local_d8);
          fVar25 = local_124;
          fVar24 = fStack_128;
          fVar12 = (float)local_148;
          fVar13 = local_148._4_4_;
          fVar15 = (float)local_140;
          fVar19 = local_138._4_4_;
          fVar21 = (float)local_130;
          fVar10 = (float)local_150;
          fVar11 = local_150._4_4_;
          fVar17 = local_140._4_4_;
          fVar18 = (float)local_138;
          fVar23 = local_130._4_4_;
          iVar31 = FUN_01afa5ec(&local_120);
          iVar34 = (int)param_2[2];
          iVar6 = (int)param_2[1];
          if (iVar6 <= iVar34) {
            return true;
          }
          iVar3 = *(int *)((long)param_2 + 0xc) + iVar34;
          iVar4 = 0;
          if (iVar6 <= iVar3) {
            iVar4 = iVar6;
          }
          puVar33 = (undefined4 *)(*param_2 + (long)(iVar3 - iVar4) * 0x38);
          iVar6 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
          *(int *)(param_2 + 2) = iVar34 + 1;
          *puVar33 = local_f8;
          puVar33[1] = uStack_f4;
          puVar33[0xb] = 0;
          puVar33[4] = local_100;
          puVar33[5] = iStack_fc;
          fVar40 = ((float)(iVar14 + iVar26) * 5.0 + (float)(iVar20 + iVar26) * 5.0 + 5.0) * 0.5;
          fVar41 = ((float)(iVar16 + iVar27) * 5.0 + (float)(iVar22 + iVar27) * 5.0 + 5.0) * 0.5;
          puVar33[10] = fVar40;
          puVar33[0xc] = fVar41;
          iVar34 = (int)(long)((float)iVar31 * 90.0 * 11930465.0);
          puVar33[0xd] = iVar34;
          puVar33[9] = iVar34 - iVar6;
          puVar33[8] = fVar25 + fVar23 * 0.0 + fVar40 * fVar21 + fVar41 * fVar24;
          puVar33[7] = fVar19 + fVar17 * 0.0 + fVar40 * fVar15 + fVar41 * fVar18;
          puVar33[6] = fVar13 + fVar11 * 0.0 + fVar40 * fVar10 + fVar41 * fVar12;
        }
        if (iVar38 < (int)(uVar37 + iVar5 + -1)) {
          iVar38 = iVar38 + 1;
        }
        else {
          iVar39 = iVar39 + 1;
          iVar38 = iVar5;
        }
      } while ((iVar5 != iVar38) || (iVar30 != iVar39));
    }
    bVar28 = (int)param_2[2] != 0;
  }
  else {
    bVar28 = false;
  }
  return bVar28;
}

