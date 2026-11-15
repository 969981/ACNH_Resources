
/* WARNING: Removing unreachable block (ram,0x022b6644) */

undefined8
FUN_022b6400(long param_1,undefined8 *param_2,long param_3,float *param_4,undefined4 param_5,
            undefined1 *param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_1f8;
  int iStack_1f4;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  undefined *local_1b0;
  int local_1a8;
  int iStack_1a4;
  undefined4 local_19c;
  undefined *local_198;
  undefined *puStack_190;
  int local_188 [2];
  undefined *local_180;
  int local_178 [2];
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  byte local_160;
  undefined2 local_158 [4];
  undefined *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined4 local_126;
  undefined1 local_122;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined2 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined2 local_f4;
  undefined1 local_f2;
  byte local_f1;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ea;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  uint local_94;
  
  puVar1 = PTR_DAT_04bb6298;
  local_e8 = 0;
  local_f2 = 0x1e;
  local_ef = 0;
  local_108 = 0;
  local_f4 = *(undefined2 *)PTR_DAT_04bb6298;
  local_fc = (undefined2)*(undefined4 *)(param_3 + 8);
  local_104 = *param_2;
  local_fa = (undefined2)*(undefined4 *)(param_3 + 0xc);
  local_f1 = *(byte *)(param_1 + 0x10);
  if (7 < local_f1) {
    local_f1 = 0xff;
  }
  local_ea = (undefined1)param_5;
  local_e4 = param_5;
  uVar12 = FUN_0252ae9c();
  local_130 = 0;
  local_f0 = 2;
  if ((uVar12 & 1) == 0) {
    local_f0 = 0;
  }
  local_128 = 0xff00;
  local_126 = 0;
  local_122 = 0;
  local_150 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_148 = PTR_DAT_04bb2010 + 0x10;
  local_118 = 0;
  local_140 = 0;
  local_120 = 0xffffffffffffffff;
  local_114 = 0x41200000;
  local_158[0] = *(undefined2 *)puVar1;
  local_10c = 0xff00;
  puStack_138 = puStack_148;
  if ((param_7 & 1) == 0) {
LAB_022b6558:
    local_168 = 0;
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar18 = &DAT_055c04a0;
    }
    else {
      puVar18 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar10 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
    }
    local_164 = *(undefined4 *)(puVar18 + 7);
    local_160 = FUN_017baf44();
    local_160 = local_160 & 1;
    local_170 = PTR_DAT_04bb6268 + 0x10;
    sVar7 = *(short *)puVar1;
    if (sVar7 == -1) {
      local_94 = 0;
    }
    else {
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      local_94 = *puVar4 >> 3 & 1;
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
    }
    if (((DAT_0547a4a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0547a4a8), iVar10 != 0)) {
      DAT_0547a4a0 = 0;
      __cxa_guard_release(&DAT_0547a4a8);
    }
    if (((DAT_0547a4b8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0547a4b8), iVar10 != 0)) {
      DAT_0547a4b0 = 0;
      __cxa_guard_release(&DAT_0547a4b8);
    }
    DAT_0547a4a0 = 0;
    DAT_0547a4b0 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    local_188[0] = 0;
    local_188[1] = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_178[0] = 0;
    local_178[1] = 0;
    local_198 = puVar1;
    puStack_190 = puVar2;
    local_180 = puVar2;
    uVar11 = FUN_0125fb10(&local_198);
    puVar9 = PTR_DAT_04bb27c8;
    if ((uVar11 & 1) == 0) {
      local_1f8 = 0;
      iStack_1f4 = 0;
      local_1f0 = 0;
      local_1ec = 0;
    }
    else {
      lVar15 = *(long *)PTR_DAT_04bb27a8;
      if (((lVar15 == 0) || (*(char *)(lVar15 + 0x4b30) == '\0')) ||
         ((*(uint *)(lVar15 + 0x4b34) & 0xfffffffe) != 2)) {
        piVar16 = local_178;
        local_1ec = 1;
      }
      else {
        piVar16 = local_188;
        local_1ec = -8;
      }
      local_1ec = *piVar16 + local_1ec;
      local_1f0 = local_1ec + 7;
      iStack_1f4 = local_178[1] + -5;
      local_1f8 = local_178[1];
    }
    fVar21 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_4,0);
    fVar24 = 10000.0;
    lVar15 = 0;
    local_1e8 = 0;
    bVar8 = false;
    do {
      local_19c = 0;
      cVar5 = (&DAT_0417a20a)[lVar15];
      iVar10 = *(int *)(param_3 + 8) + (int)cVar5;
      cVar6 = (&DAT_0417a213)[lVar15];
      iVar3 = *(int *)(param_3 + 0xc) + (int)cVar6;
      lVar17 = *(long *)puVar9;
      fVar25 = (float)iVar10;
      fVar26 = (float)iVar3;
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,fVar25 * 5.0 + 2.5);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,fVar26 * 5.0 + 2.5);
      if (((lVar17 != 0) && (*(long *)(lVar17 + 0xa8) != 0)) && (*(char *)(lVar17 + 0x11c8) == '\0')
         ) {
        FUN_0093a950(lVar17 + 0x28,&local_d0,&local_19c);
      }
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,local_19c);
      lVar17 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_19c);
      if (lVar17 != 0) {
        pcVar13 = (char *)FUN_009823a0(lVar17,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10);
        if ((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) {
          if ((uVar11 & 1) != 0) {
            if (((local_188[0] <= iVar10) && (iVar10 <= local_178[0])) && (local_188[1] <= iVar3)) {
              if (iVar3 <= local_178[1]) goto LAB_022b6914;
            }
            if (((local_1ec <= iVar10) && (iVar10 <= local_1f0)) &&
               ((iStack_1f4 <= iVar3 && (iVar3 <= local_1f8)))) goto LAB_022b6914;
          }
          fVar22 = (fVar25 * 5.0 + 5.0) - *param_4;
          fVar23 = (fVar26 * 5.0 + 5.0) - param_4[2];
          fVar22 = fVar23 * fVar23 + fVar22 * fVar22;
          if (fVar22 < fVar24) {
            local_1e8 = CONCAT44(iVar10,iVar3);
            bVar8 = true;
            fVar24 = fVar22;
          }
        }
      }
LAB_022b6914:
      if (local_94 == 0) {
        iVar20 = iVar3;
        iVar19 = iVar10;
        do {
          local_e0 = PTR_DAT_04bb2010 + 0x10;
          local_d0 = PTR_DAT_04bbc1a0 + 0x10;
          local_d8 = iVar19;
          iStack_d4 = iVar20;
          local_c8 = local_e0;
          local_c0 = iVar19;
          iStack_bc = iVar20;
          local_b8 = local_e0;
          local_b0 = iVar19;
          iStack_ac = iVar20;
          if (((*(long *)puVar9 == 0) || (lVar17 = *(long *)(*(long *)puVar9 + 0xa8), lVar17 == 0))
             || ((uVar12 = FUN_00971f80(lVar17,&local_d0,0), (uVar12 & 1) == 0 ||
                 (uVar12 = FUN_00975dc0(&local_e0), (uVar12 & 1) == 0)))) goto LAB_022b6790;
          if (iVar19 < iVar10 + 1) {
            iVar19 = iVar19 + 1;
          }
          else {
            iVar20 = iVar20 + 1;
            iVar19 = iVar10;
          }
        } while ((iVar10 != iVar19) || (iVar3 + 2 != iVar20));
LAB_022b69d8:
        local_1b0 = PTR_DAT_04bb2010 + 0x10;
        local_1a8 = iVar10;
        iStack_1a4 = iVar3;
        uVar12 = FUN_022aa4c0(&local_170,&local_1b0,(int)cVar5,(int)cVar6,0xfffffffe);
        if ((uVar12 & 1) != 0) {
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,fVar25 * 5.0 + 5.0);
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,fVar26 * 5.0 + 5.0);
          fVar25 = (float)FUN_0093a950(*(long *)puVar9 + 0x28,&local_d0,0);
          if (fVar25 - fVar21 <= 5.0) {
            if (-5.0 <= fVar25 - fVar21) {
              local_fc = (undefined2)iVar10;
              local_fa = (undefined2)iVar3;
              local_140 = CONCAT44(iVar3,iVar10);
              local_130 = CONCAT44(iVar3 + 1,iVar10 + 1);
              uVar12 = FUN_022ab010(param_1,local_158,&local_108);
              if ((uVar12 & 1) != 0) {
                FUN_01254a00(&local_108,local_e4,param_4,0);
                if (param_6 != (undefined1 *)0x0) {
                  *param_6 = 1;
                }
                goto LAB_022b6afc;
              }
            }
          }
        }
      }
      else {
        local_b0 = iVar10 + 1;
        iStack_ac = iVar3 + 1;
        local_d0 = puVar1;
        local_c8 = puVar2;
        local_c0 = iVar10;
        iStack_bc = iVar3;
        local_b8 = puVar2;
        uVar12 = FUN_0097d8e0(&local_d0);
        if ((uVar12 & 1) != 0) goto LAB_022b69d8;
      }
LAB_022b6790:
      lVar15 = lVar15 + 1;
    } while (lVar15 != 9);
    if (bVar8) {
      local_f2 = 0x21;
      local_fc = (undefined2)((ulong)local_1e8 >> 0x20);
      local_fa = (undefined2)local_1e8;
      local_140 = CONCAT44((int)local_1e8,local_1e8._4_4_);
      local_130 = CONCAT44((int)local_1e8 + 1,local_1e8._4_4_ + 1);
      uVar12 = FUN_022ab010(param_1,local_158,&local_108);
      if ((uVar12 & 1) != 0) {
        FUN_01254a00(&local_108,local_e4,param_4,0);
        if (param_6 != (undefined1 *)0x0) {
          *param_6 = 0;
        }
        goto LAB_022b6afc;
      }
    }
    local_f2 = 0x1f;
    FUN_01254a00(&local_108,local_e4,param_4,0);
    if (param_6 == (undefined1 *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      *param_6 = 0;
    }
  }
  else {
    local_140 = *(undefined8 *)(param_3 + 8);
    local_130 = CONCAT44(*(int *)(param_3 + 0xc) + 1,*(int *)(param_3 + 8) + 1);
    local_f2 = 0x20;
    uVar12 = FUN_022ab010(param_1,local_158,&local_108);
    if ((uVar12 & 1) == 0) goto LAB_022b6558;
    FUN_01254a00(&local_108,local_e4,param_4,0);
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
LAB_022b6afc:
    uVar14 = 1;
  }
  return uVar14;
}

