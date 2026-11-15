
/* WARNING: Removing unreachable block (ram,0x022ac434) */
/* WARNING: Removing unreachable block (ram,0x022ac474) */

bool FUN_022ac180(long param_1,undefined8 *param_2,float *param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_17c;
  uint local_178;
  int local_174;
  undefined1 *local_170;
  undefined1 *local_168;
  int local_15c;
  uint local_150 [2];
  undefined *local_148;
  undefined *puStack_140;
  uint local_138;
  uint uStack_134;
  undefined *local_130;
  int local_128;
  int iStack_124;
  undefined2 local_120;
  undefined4 local_11e;
  undefined1 local_11a;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 uStack_105;
  undefined1 local_104;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc [4];
  undefined *local_f8;
  uint local_f0;
  uint uStack_ec;
  undefined *local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined *local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  byte local_b8;
  undefined *local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_88;
  undefined1 local_86;
  byte local_85;
  undefined1 local_83;
  undefined1 local_7e;
  undefined4 local_7c;
  
  puVar1 = PTR_DAT_04bb6298;
  uVar7 = *(undefined2 *)param_2;
  uVar5 = *(undefined1 *)((long)param_2 + 2);
  uVar6 = *(undefined1 *)((long)param_2 + 3);
  uVar4 = *(undefined4 *)((long)param_2 + 4);
  local_98 = *param_2;
  local_150[0] = *param_4 + 0x20000000U >> 0x1e;
  uVar11 = local_150[0] - 1;
  if (uVar11 < 3) {
    uVar21 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
    local_170 = &DAT_0417a394 + *(int *)(&DAT_0417a394 + uVar21);
    local_15c = *(int *)(&DAT_0417a3ac + uVar21);
    local_168 = &DAT_0417a3a0 + *(int *)(&DAT_0417a3a0 + uVar21);
    local_174 = *(int *)(&DAT_0417a3b8 + uVar21);
  }
  else {
    local_15c = 1;
    local_174 = 1;
    local_170 = &DAT_0417a20a;
    local_168 = &DAT_0417a213;
  }
  local_86 = 2;
  local_7c = 0;
  local_9c = 0;
  local_7e = 0;
  local_88 = *(undefined2 *)PTR_DAT_04bb6298;
  local_83 = 0;
  local_85 = *(byte *)(param_1 + 0x10);
  local_a8 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0) & 0xfffffffe;
  if (7 < local_85) {
    local_85 = 0xff;
  }
  uStack_a4 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0) & 0xfffffffe;
  local_b0 = PTR_DAT_04bb2010 + 0x10;
  if (((DAT_0547a4a8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_0547a4a8), iVar17 != 0)) {
    DAT_0547a4a0 = 0;
    __cxa_guard_release(&DAT_0547a4a8);
  }
  if (((DAT_0547a4b8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_0547a4b8), iVar17 != 0)) {
    DAT_0547a4b0 = 0;
    __cxa_guard_release(&DAT_0547a4b8);
  }
  puVar2 = PTR_DAT_04bb2720;
  DAT_0547a4a0 = 0;
  DAT_0547a4b0 = 0;
  local_c0 = 0;
  lVar22 = *(long *)PTR_DAT_04bb2720;
  if (lVar22 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar17 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar17 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_bc = *(undefined4 *)(puVar23 + 7);
  local_b8 = FUN_017baf44();
  local_b8 = local_b8 & 1;
  local_c8 = PTR_DAT_04bb6268 + 0x10;
  uVar10 = *(ushort *)puVar1;
  uVar21 = (ulong)(short)uVar10;
  if (uVar21 == 0xffffffffffffffff) {
    local_17c = 0;
    local_178 = 0;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar21 & 0xffffffff) * 8);
    if (0xff < uVar10) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    local_178 = *puVar3 >> 3 & 1;
    local_150[0] = 1;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar21 & 0xffffffff) * 8);
    if (0xff < uVar10) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    local_17c = *puVar3 >> 1 & 1;
  }
  iVar17 = FUN_0277d6c4(param_2);
  lVar22 = *(long *)puVar2;
  if (lVar22 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar18 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar18 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  uVar14 = uStack_a4;
  uVar11 = local_a8;
  iVar18 = *(int *)(puVar23 + 7);
  uVar21 = 0;
  bVar24 = false;
  bVar16 = true;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    cVar8 = local_170[uVar21];
    local_d0 = local_15c * cVar8 + uVar11;
    cVar9 = local_168[uVar21];
    uStack_cc = local_174 * cVar9 + uVar14;
    if ((uVar21 == 4) && (bVar24)) {
      bVar24 = false;
      local_d0 = uVar11;
      uStack_cc = uVar14;
    }
    uVar13 = uStack_cc;
    uVar12 = local_d0;
    local_e8 = PTR_DAT_04bb2010 + 0x10;
    local_e0 = local_d0;
    uStack_dc = uStack_cc;
    local_d8 = puVar1;
    uVar20 = FUN_022aac60(param_1,&local_e8,local_178,local_17c);
    if (((uVar20 & 1) != 0) &&
       ((iVar18 != -0x17df00c3 ||
        ((((lVar22 = *(long *)PTR_DAT_04bb59d8, *(int *)(lVar22 + 0x28) <= (int)uVar12 &&
           ((int)(uVar12 + 1) <= *(int *)(lVar22 + 0x38))) &&
          (*(int *)(lVar22 + 0x2c) <= (int)uVar13)) &&
         ((int)(uVar13 + 1) <= *(int *)(lVar22 + 0x3c))))))) {
      local_f8 = PTR_DAT_04bb2010 + 0x10;
      local_f0 = uVar12;
      uStack_ec = uVar13;
      uVar20 = FUN_022aa4c0(&local_c8,&local_f8,local_15c * cVar8,local_174 * cVar9,0xfffffffe);
      if ((uVar20 & 1) != 0) {
        local_fc[0] = 0xff;
        local_100 = 0;
        uVar20 = FUN_022a6bb0(param_3,&local_b0,&local_d8,0,local_fc,&local_100);
        if (((uVar20 & 1) != 0) && (uVar20 = FUN_022a9384(param_1,&local_d8), (uVar20 & 1) == 0)) {
          if ((iVar17 == 0x3332) && (uVar21 == 0)) {
            fVar25 = (float)(int)uVar12 * 5.0 + 5.0;
            fVar26 = (float)(int)uVar13 * 5.0 + 5.0;
            fVar27 = *param_3 - fVar25;
            fVar28 = param_3[2] - fVar26;
            if (16.0 <= fVar28 * fVar28 + fVar27 * fVar27) {
              iVar19 = FUN_006f0400(fVar25 - *param_3,fVar26 - param_3[2]);
              fVar26 = (float)(uint)(iVar19 - *param_4) * 8.381903e-08;
              fVar25 = fVar26 + -360.0;
              if (fVar26 <= 180.0) {
                fVar25 = fVar26;
              }
              bVar15 = true;
              if ((fVar25 <= 60.0) && (bVar15 = false, !NAN(fVar25))) {
                bVar15 = fVar25 < -60.0;
              }
              if (!bVar15) goto LAB_022ac534;
            }
            bVar24 = true;
          }
          else {
LAB_022ac534:
            local_90 = (undefined2)uVar12;
            local_8e = (undefined2)uVar13;
            local_110 = 0;
            puStack_140 = PTR_DAT_04bb2010 + 0x10;
            iStack_124 = uVar13 + 1;
            local_120 = 0xff00;
            local_11e = 0;
            local_11a = 0;
            local_118 = 0xffffffffffffffff;
            local_10c = 0x41200000;
            local_104 = 0;
            local_103 = 0xff;
            local_150[0] = CONCAT22(local_150[0]._2_2_,*(undefined2 *)PTR_DAT_04bb6298);
            local_128 = uVar12 + 1;
            uStack_105 = 1;
            local_148 = puVar2;
            local_138 = uVar12;
            uStack_134 = uVar13;
            local_130 = puStack_140;
            uVar20 = FUN_022ab010(param_1,local_150,&local_9c);
            if ((uVar20 & 1) != 0) {
              puVar23 = (undefined8 *)(param_1 + 0x14);
              *puVar23 = 0xfffe;
              FUN_0277d4ac(puVar23);
              *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
              FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
              *(undefined4 *)(param_1 + 0x58) = 0;
              *(uint *)(param_1 + 0x48) = uVar12;
              *(uint *)(param_1 + 0x4c) = uVar13;
              *(undefined2 *)puVar23 = uVar7;
              *(undefined1 *)(param_1 + 0x16) = uVar5;
              *(undefined8 *)(param_1 + 0x2c) = 0;
              *(undefined8 *)(param_1 + 0x34) = 0;
              *(undefined1 *)(param_1 + 0x17) = uVar6;
              *(undefined4 *)(param_1 + 0x18) = uVar4;
              *(undefined8 *)(param_1 + 0x50) = 0x200000000;
              return bVar16;
            }
          }
        }
      }
    }
    bVar16 = uVar21 < 8;
    uVar21 = uVar21 + 1;
    if (uVar21 == 9) {
      return bVar16;
    }
  } while( true );
}

