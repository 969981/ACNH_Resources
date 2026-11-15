
void FUN_02193d74(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined5 local_11c;
  undefined3 uStack_117;
  undefined4 local_114;
  undefined1 uStack_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  int local_dc;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  uint local_68;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x1b30) < 1) {
    uVar4 = *(uint *)(param_1 + 0x3658);
    puVar14 = &DAT_053fd568;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x10))) {
      plVar6 = (long *)(param_1 + 0x18);
      goto LAB_02193de8;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x365c);
    puVar14 = &DAT_053fd568;
    if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x1b30))) {
      plVar6 = (long *)(param_1 + 0x1b38);
LAB_02193de8:
      puVar14 = *(undefined4 **)(*plVar6 + (ulong)uVar4 * 8);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3b0) + 0x568) = 0;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3b0) + 0x56c) = 0;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x3668) = 0;
  }
  local_178[0] = 0;
  local_13c = 0;
  uStack_138 = 0xfffe;
  local_160 = 0;
  local_134 = 0;
  local_170 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_168 = PTR_DAT_04bb2010 + 0x10;
  local_150 = 0;
  local_158 = puStack_168;
  FUN_0277d4ac(&uStack_138);
  local_11c = 0;
  uStack_117 = 0;
  local_114 = 0;
  uStack_110 = 0;
  local_120 = 0xbf800000;
  local_10c = (undefined *)0xfffe;
  local_130 = 0x41c8000041800000;
  uStack_128 = 0xbf800000bf800000;
  FUN_0277d4ac(&local_10c);
  local_104 = 0;
  local_a5 = 0;
  local_d0 = local_c4;
  local_c8 = 0x20;
  local_d8 = PTR_DAT_04bb2028 + 0x10;
  local_90 = 0x20;
  local_98 = local_8c;
  local_c4[0] = 0;
  local_6d = 0;
  local_8c[0] = 0;
  local_178[0] = 0;
  local_160 = 0;
  local_140 = 0;
  local_13c = 0;
  local_198 = (undefined *)0xfffe;
  local_150 = 0;
  local_148 = 0;
  local_a0 = local_d8;
  FUN_0277d4ac(&local_198);
  uStack_138 = (undefined4)local_198;
  local_134 = local_198._4_4_;
  local_130 = 0x41c8000041800000;
  uStack_128 = 0xbf800000bf800000;
  local_120 = 0xbf800000;
  local_11c = 0;
  uStack_117 = 0;
  local_114 = 0;
  uStack_110 = 0;
  local_198 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_198);
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_10c = local_198;
  *local_d0 = 0;
  *local_98 = 0;
  local_148 = *(undefined8 *)(puVar14 + 10);
  local_140 = puVar14[0xc];
  if (*(char *)((long)puVar14 + 0x69) == '\0') {
    uVar9 = *(undefined1 *)((long)puVar14 + 0xde);
    puVar15 = (undefined8 *)(puVar14 + 0x37);
    puVar10 = puVar14 + 0x38;
    uVar11 = *(undefined1 *)((long)puVar14 + 0xdf);
  }
  else {
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar6 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar6 = &DAT_05240280;
      }
      else {
        plVar6 = &DAT_05240280;
      }
    }
    puVar15 = &local_198;
    (**(code **)(*plVar6 + 0x370))(&local_198);
    puVar10 = (undefined4 *)((long)&local_198 + 4);
    uVar9 = local_198._2_1_;
    uVar11 = local_198._3_1_;
  }
  puVar3 = local_10c;
  puVar2 = PTR_DAT_04bb43c0;
  local_10c._4_4_ = SUB84(puVar3,4);
  local_10c._0_4_ = CONCAT13(uVar11,CONCAT12(uVar9,(undefined2)local_10c));
  local_10c = (undefined *)CONCAT62(local_10c._2_6_,*(undefined2 *)puVar15);
  local_10c = (undefined *)CONCAT44(*puVar10,(undefined4)local_10c);
  if ((*(char *)((long)puVar14 + 0x6a) != '\0') &&
     (uVar4 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), 3 < uVar4)) {
    plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar6 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar6 = &DAT_05240280;
      }
      else {
        plVar6 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar6 + 0x370))(&local_180);
    lVar17 = *(long *)puVar2;
    uVar4 = FUN_0277d6c4(&local_180);
    lVar16 = *(long *)puVar2;
    if (lVar16 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_188 = 0;
        local_198 = PTR_DAT_04bc0510 + 0x10;
        local_190 = local_180;
        uStack_18c = uStack_17c;
        uVar4 = FUN_0277d6c4(&local_190);
        if (*(long *)puVar2 == 0) {
LAB_021941ac:
          local_68 = 0xbc;
        }
        else {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_021941ac;
          lVar16 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(&local_180);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar4) ||
             (puVar12 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar12 == (uint *)0x0)) goto LAB_021941ac;
          local_68 = 0;
          uVar4 = *puVar12;
          if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
            puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
            local_68 = 0;
            if (*puVar13 != 0) {
              uVar4 = puVar13[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar16 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar16 = 0x1c;
                }
                lVar16 = (long)puVar13 + lVar16 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar16 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar12 - lVar16) / (ulong)uVar4);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                     local_68 < 0xbd)) goto LAB_021941b0;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_021941b0:
        local_64 = 0x14;
        if (local_68 == 0x14) {
          plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x60);
          if (plVar6 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(&DAT_052461c0);
              if (iVar5 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
              plVar6 = &DAT_05240280;
            }
            else {
              plVar6 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar6 + 0x370))(&local_198);
          local_10c = local_198;
        }
      }
    }
  }
  lVar16 = *(long *)puVar2;
  uVar4 = FUN_0277d6c4(&local_10c);
  if (*(long *)puVar2 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x60);
      if (plVar6 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar6 = &DAT_05240280;
        }
        else {
          plVar6 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar6 + 0x370))(&local_198);
      uVar7 = FUN_0277d7b4(&local_10c,&local_198);
      if ((uVar7 & 1) == 0) {
        local_10c = *(undefined **)PTR_DAT_04bb37e0;
      }
    }
  }
  local_130 = *(undefined8 *)(puVar14 + 0x60);
  uStack_128 = *(undefined8 *)(puVar14 + 0x62);
  local_114 = puVar14[0x67];
  local_120 = puVar14[100];
  local_11c = (undefined5)*(undefined8 *)(puVar14 + 0x65);
  uStack_117 = (undefined3)((ulong)*(undefined8 *)(puVar14 + 0x65) >> 0x28);
  local_dc = CONCAT31(local_dc._1_3_,1);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
    if (*(int *)(param_1 + 0x1b30) < 1) {
      uVar4 = *(uint *)(param_1 + 0x3658);
      puVar10 = &DAT_053fd568;
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x10))) {
        plVar6 = (long *)(param_1 + 0x18);
        goto LAB_02194334;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x365c);
      puVar10 = &DAT_053fd568;
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x1b30))) {
        plVar6 = (long *)(param_1 + 0x1b38);
LAB_02194334:
        puVar10 = *(undefined4 **)(*plVar6 + (ulong)uVar4 * 8);
      }
    }
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar18 = *(float *)(lVar16 + 0x278) + 2.5;
    uVar4 = ((uint)((float)puVar10[10] < 0.0) - (int)((float)(int)(float)puVar10[10] / 5.0)) +
            ((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0) & 0xffff);
    uVar1 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar1 = uVar4;
    }
    if (uVar1 < 0x17) {
      fVar18 = *(float *)(lVar16 + 0x280) + 2.5;
      uVar4 = ((uint)((float)puVar10[0xc] < 0.0) - (int)((float)(int)(float)puVar10[0xc] / 5.0)) +
              ((int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0) & 0xffff);
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      if ((uVar1 < 0x13) && (*(int *)(param_1 + 0x3668) < 0x96)) goto LAB_0219440c;
    }
    local_dc = (uint)local_dc._1_3_ << 8;
  }
LAB_0219440c:
  if (*(char *)(puVar14 + 0x12) == '\0') {
    uVar8 = 9;
    goto LAB_02194490;
  }
  if (((float)puVar14[0x13] == 0.0) && ((float)puVar14[0x14] == 0.0)) {
    lVar16 = *(long *)(param_1 + 8);
    if ((float)puVar14[0x15] != 0.0) goto LAB_02194464;
    lVar16 = *(long *)(lVar16 + 0x3b8);
    *(undefined8 *)(lVar16 + 0xaf00) = 0;
    puVar14 = (undefined4 *)(PTR_DAT_04bb2150 + 8);
  }
  else {
    lVar16 = *(long *)(param_1 + 8);
LAB_02194464:
    lVar16 = *(long *)(lVar16 + 0x3b8);
    *(undefined4 *)(lVar16 + 0xaf00) = puVar14[0x13];
    *(undefined4 *)(lVar16 + 0xaf04) = puVar14[0x14];
    puVar14 = puVar14 + 0x15;
  }
  uVar8 = 0x2b;
  *(undefined4 *)(lVar16 + 0xaf08) = *puVar14;
LAB_02194490:
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
  (**(code **)(*plVar6 + 0x38))(plVar6,uVar8,local_178,1);
  *(byte *)(param_1 + 0x366c) = *(byte *)(param_1 + 0x366c) | 1;
  return;
}

