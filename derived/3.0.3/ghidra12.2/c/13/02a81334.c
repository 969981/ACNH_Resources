
undefined8 FUN_02a81334(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ushort uVar17;
  long *plVar18;
  uint *puVar19;
  int iVar20;
  long lVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  uint local_1a0 [2];
  undefined *local_198;
  uint local_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  undefined2 local_180;
  undefined *local_178;
  undefined1 local_170;
  uint local_16c;
  undefined *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined *local_150;
  undefined *puStack_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [127];
  undefined1 local_b5;
  undefined4 local_b0;
  char local_ac;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_56;
  
  puVar13 = PTR_DAT_04bc39f8;
  puVar3 = PTR_DAT_04bb6298;
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 == -1) {
LAB_02a81598:
    local_60 = param_2[1];
    puStack_90 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puStack_148 = PTR_DAT_04bb2d88 + 0x10;
    local_56 = *(undefined4 *)((long)param_2 + 0x22);
    local_b5 = 0;
    local_98 = 0;
    local_58 = (undefined1)param_2[8];
    local_134[0] = 0;
    local_150 = PTR_DAT_04bc49b8 + 0x10;
    local_b0 = 0;
    local_ac = '\0';
    local_68 = 0;
    local_140 = local_134;
    uStack_a0 = 0;
    local_138 = 0x80;
    local_80 = 0;
    local_70 = 0;
    local_64 = 0;
    local_5c = (undefined4)(long)((float)(int)param_2[2] * 90.0 * 11930465.0);
    local_a8 = puVar3;
    local_88 = puVar3;
    local_78 = puVar3;
    FUN_02b34590(&local_150,&local_60);
    if (local_ac != '\0') {
      local_170 = 0;
      local_16c = 0;
      local_158 = 0;
      iVar11 = local_70._4_4_ - local_80._4_4_;
      local_178 = PTR_DAT_04bc4608 + 0x10;
      iVar12 = (int)local_70 - (int)local_80;
      local_180 = (undefined2)param_2[8];
      uStack_160 = 0;
      local_1a0[0] = param_2[1];
      local_188 = param_2[2];
      iVar20 = iVar12 + 2;
      local_154 = 0;
      fVar24 = (float)(int)param_2[7] * 10.0 + 2.5;
      fVar23 = (float)(int)param_2[6] * 10.0 + 2.5;
      if (-1 < iVar12 + 1) {
        iVar20 = iVar12 + 1;
      }
      iVar12 = iVar11 + 2;
      if (-1 < iVar11 + 1) {
        iVar12 = iVar11 + 1;
      }
      uVar4 = ((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0)) + (iVar12 >> 1);
      uStack_184 = *(undefined4 *)((long)param_2 + 0x22);
      uVar5 = ((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0)) + (iVar20 >> 1);
      local_198 = puVar3;
      local_190 = uVar5;
      uStack_18c = uVar4;
      local_168 = puVar3;
      FUN_02a8f958(&local_178,local_1a0);
      local_1a0[0] = *param_2;
      if (local_1a0[0] == 0) {
        plVar18 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      }
      else {
        plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
        plVar18 = plVar2 + local_1a0[0];
        if (0x38 < local_1a0[0]) {
          plVar18 = plVar2;
        }
      }
      puVar7 = &DAT_05636dd8;
      if (*plVar18 != 0) {
        puVar7 = (undefined8 *)(*plVar18 + 0x148);
      }
      if (puVar7[1] != 0) {
        uVar15 = FUN_02a59250(puVar7,&local_178);
        puVar3 = PTR_DAT_04bb5008;
        if ((uVar15 & 1) != 0) {
          local_1a0[0] = local_16c;
          if (local_16c == 0) {
LAB_02a81a14:
            uVar17 = 0;
          }
          else {
            lVar21 = *(long *)PTR_DAT_04bb5008;
            if ((int)*(uint *)(lVar21 + 0x1e0) < 1) {
              if ((((*(long *)(lVar21 + 0xd0) != 0) &&
                   (puVar19 = *(uint **)(*(long *)(lVar21 + 0xd0) + 8), puVar19 != (uint *)0x0)) &&
                  ((*(uint *)(lVar21 + 0xe8) <= local_16c ||
                   (*(char *)(*(long *)(lVar21 + 0xf0) + (long)(int)local_16c) != '\0')))) &&
                 (((local_16c < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
                iVar20 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  iVar20 = 0x1c;
                }
                puVar19 = (uint *)((ulong)(puVar19[1] * local_16c + (uint)(ushort)puVar19[2] * 8 +
                                          iVar20) + (long)puVar19);
                goto joined_r0x02a81a0c;
              }
              goto LAB_02a81a14;
            }
            if (*(uint *)(lVar21 + 0x1e0) <= local_16c) goto LAB_02a81a14;
            uVar6 = local_16c;
            if (*(uint *)(lVar21 + 0x1d0) <= local_16c) {
              uVar6 = 0;
            }
            puVar19 = *(uint **)(*(long *)(lVar21 + 0x1d8) + (ulong)uVar6 * 8);
joined_r0x02a81a0c:
            uVar17 = 0;
            if (puVar19 != (uint *)0x0) {
              uVar17 = 0;
              uVar6 = *puVar19;
              if ((uVar6 != 0) && (puVar19 != (uint *)(ulong)uVar6)) {
                puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar6);
                uVar17 = 0;
                if (*puVar22 != 0) {
                  uVar6 = puVar22[1];
                  if ((uVar6 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                    lVar21 = 0xc;
                    if (*(char *)((long)puVar22 + 10) != '\0') {
                      lVar21 = 0x1c;
                    }
                    lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
                    if (lVar21 != 0) {
                      uVar9 = 0;
                      if ((ulong)uVar6 != 0) {
                        uVar9 = (uint)((ulong)((long)puVar19 - lVar21) / (ulong)uVar6);
                      }
                      if (*puVar22 <= uVar9) {
                        uVar9 = 0xffffffff;
                      }
                      if ((uVar9 < *(uint *)PTR_DAT_04bc46a8) &&
                         (uVar17 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar9 * 2),
                         uVar17 < 5)) goto LAB_02a81a18;
                    }
                  }
                  goto LAB_02a81a14;
                }
              }
            }
          }
LAB_02a81a18:
          if (puVar7[1] == 0) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = 0xffffffff;
            if ((uVar5 < 0x120) && (uVar4 < 0x100)) {
              uVar14 = *(undefined4 *)(puVar7[1] + (ulong)uVar5 * 0x400 + (ulong)uVar4 * 4 + 0x30);
            }
          }
          lVar21 = *(long *)PTR_DAT_04bb5008 + 0x26e8;
          if ((char)param_2[8] == '\0') {
            switch(uVar17) {
            case 0:
              puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
              if (0x38 < *param_2) {
                puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
              }
              FUN_02b3a450(lVar21,uVar14,*puVar8);
              break;
            case 1:
            case 4:
              puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
              if (0x38 < *param_2) {
                puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
              }
              FUN_02b39e40(lVar21,uVar14,*puVar8);
              break;
            case 2:
              puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
              if (0x38 < *param_2) {
                puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
              }
              FUN_02b3aef0(lVar21,uVar14,*puVar8);
              break;
            case 3:
              puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
              if (0x38 < *param_2) {
                puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
              }
              FUN_02b3b680(lVar21,uVar14,*puVar8);
            }
          }
          else {
            puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
            if (0x38 < *param_2) {
              puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
            }
            FUN_02b3bef0(lVar21,*puVar8);
          }
          if (*(char *)((long)param_2 + 0x26) != '\0') {
            lVar21 = *(long *)puVar3;
LAB_02a81a94:
            uVar14 = FUN_02a75a38(lVar21 + 0x1e08,&local_178,uVar14);
            if (*(undefined4 **)(param_2 + 10) != (undefined4 *)0x0) {
              **(undefined4 **)(param_2 + 10) = uVar14;
            }
          }
          goto LAB_02a81ab4;
        }
      }
    }
LAB_02a81980:
    uVar16 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8;
    if (0xff < (uint)(int)sVar10) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_02a81598;
    local_60 = param_2[1];
    puStack_90 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puStack_148 = PTR_DAT_04bb2d88 + 0x10;
    local_56 = *(undefined4 *)((long)param_2 + 0x22);
    local_b5 = 0;
    local_98 = 0;
    local_58 = (undefined1)param_2[8];
    local_134[0] = 0;
    local_150 = PTR_DAT_04bc49b8 + 0x10;
    local_b0 = 0;
    local_ac = '\0';
    local_68 = 0;
    local_140 = local_134;
    uStack_a0 = 0;
    local_138 = 0x80;
    local_80 = 0;
    local_70 = 0;
    local_64 = 0;
    local_5c = (undefined4)(long)((float)(int)param_2[2] * 90.0 * 11930465.0);
    local_a8 = puVar1;
    local_88 = puVar1;
    local_78 = puVar1;
    FUN_02b34590(&local_150,&local_60);
    if (local_ac == '\0') goto LAB_02a81980;
    local_170 = 0;
    local_16c = 0;
    local_158 = 0;
    iVar11 = local_70._4_4_ - local_80._4_4_;
    local_178 = PTR_DAT_04bc4608 + 0x10;
    iVar12 = (int)local_70 - (int)local_80;
    local_180 = (undefined2)param_2[8];
    uStack_160 = 0;
    local_1a0[0] = param_2[1];
    local_188 = param_2[2];
    iVar20 = iVar12 + 2;
    local_154 = 0;
    fVar24 = (float)(int)param_2[7] * 10.0 + 2.5;
    fVar23 = (float)(int)param_2[6] * 10.0 + 2.5;
    if (-1 < iVar12 + 1) {
      iVar20 = iVar12 + 1;
    }
    iVar12 = iVar11 + 2;
    if (-1 < iVar11 + 1) {
      iVar12 = iVar11 + 1;
    }
    uVar4 = ((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0)) + (iVar12 >> 1);
    uStack_184 = *(undefined4 *)((long)param_2 + 0x22);
    uVar5 = ((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0)) + (iVar20 >> 1);
    local_198 = puVar1;
    local_190 = uVar5;
    uStack_18c = uVar4;
    local_168 = puVar1;
    FUN_02a8f958(&local_178,local_1a0);
    local_1a0[0] = *param_2;
    if (local_1a0[0] == 0) {
      plVar18 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    }
    else {
      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar18 = plVar2 + local_1a0[0];
      if (0x38 < local_1a0[0]) {
        plVar18 = plVar2;
      }
    }
    puVar7 = &DAT_05636dd8;
    if (*plVar18 != 0) {
      puVar7 = (undefined8 *)(*plVar18 + 0x148);
    }
    if (puVar7[1] == 0) goto LAB_02a81980;
    uVar15 = FUN_02a59250(puVar7,&local_178);
    puVar1 = PTR_DAT_04bb5008;
    if ((uVar15 & 1) == 0) goto LAB_02a81980;
    local_1a0[0] = local_16c;
    if (local_16c == 0) {
LAB_02a81c04:
      uVar17 = 0;
    }
    else {
      lVar21 = *(long *)PTR_DAT_04bb5008;
      if ((int)*(uint *)(lVar21 + 0x1e0) < 1) {
        if ((((*(long *)(lVar21 + 0xd0) != 0) &&
             (puVar19 = *(uint **)(*(long *)(lVar21 + 0xd0) + 8), puVar19 != (uint *)0x0)) &&
            ((*(uint *)(lVar21 + 0xe8) <= local_16c ||
             (*(char *)(*(long *)(lVar21 + 0xf0) + (long)(int)local_16c) != '\0')))) &&
           (((local_16c < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar20 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar20 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * local_16c + (uint)(ushort)puVar19[2] * 8 + iVar20)
                            + (long)puVar19);
          goto joined_r0x02a81bfc;
        }
        goto LAB_02a81c04;
      }
      if (*(uint *)(lVar21 + 0x1e0) <= local_16c) goto LAB_02a81c04;
      uVar6 = local_16c;
      if (*(uint *)(lVar21 + 0x1d0) <= local_16c) {
        uVar6 = 0;
      }
      puVar19 = *(uint **)(*(long *)(lVar21 + 0x1d8) + (ulong)uVar6 * 8);
joined_r0x02a81bfc:
      uVar17 = 0;
      if (puVar19 != (uint *)0x0) {
        uVar17 = 0;
        uVar6 = *puVar19;
        if ((uVar6 != 0) && (puVar19 != (uint *)(ulong)uVar6)) {
          puVar22 = (uint *)((long)puVar19 - (long)(ulong)uVar6);
          uVar17 = 0;
          if (*puVar22 != 0) {
            uVar6 = puVar22[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
              lVar21 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar21 = 0x1c;
              }
              lVar21 = (long)puVar22 + lVar21 + (ulong)(ushort)puVar22[2] * 8;
              if (lVar21 != 0) {
                uVar9 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar9 = (uint)((ulong)((long)puVar19 - lVar21) / (ulong)uVar6);
                }
                if (*puVar22 <= uVar9) {
                  uVar9 = 0xffffffff;
                }
                if ((uVar9 < *(uint *)PTR_DAT_04bc46a8) &&
                   (uVar17 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar9 * 2),
                   uVar17 < 5)) goto LAB_02a81c08;
              }
            }
            goto LAB_02a81c04;
          }
        }
      }
    }
LAB_02a81c08:
    if (puVar7[1] == 0) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = 0xffffffff;
      if ((uVar5 < 0x120) && (uVar4 < 0x100)) {
        uVar14 = *(undefined4 *)(puVar7[1] + (ulong)uVar5 * 0x400 + (ulong)uVar4 * 4 + 0x30);
      }
    }
    lVar21 = *(long *)PTR_DAT_04bb5008 + 0x26e8;
    if ((char)param_2[8] == '\0') {
      switch(uVar17) {
      case 0:
        puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
        if (0x38 < *param_2) {
          puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
        }
        FUN_02b3a450(lVar21,uVar14,*puVar8);
        break;
      case 1:
      case 4:
        puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
        if (0x38 < *param_2) {
          puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
        }
        FUN_02b39e40(lVar21,uVar14,*puVar8);
        break;
      case 2:
        puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
        if (0x38 < *param_2) {
          puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
        }
        FUN_02b3aef0(lVar21,uVar14,*puVar8);
        break;
      case 3:
        puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
        if (0x38 < *param_2) {
          puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
        }
        FUN_02b3b680(lVar21,uVar14,*puVar8);
      }
    }
    else {
      puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)*param_2 * 4);
      if (0x38 < *param_2) {
        puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
      }
      FUN_02b3bef0(lVar21,*puVar8);
    }
    if (*(char *)((long)param_2 + 0x26) != '\0') {
      uVar17 = *(ushort *)puVar3;
      if ((long)(short)uVar17 == 0xffffffffffffffff) {
        return 1;
      }
      local_1a0[0] = 1;
      puVar19 = (uint *)(puVar13 + ((long)(short)uVar17 & 0xffffffffU) * 8);
      if (0xff < uVar17) {
        puVar19 = (uint *)puVar13;
      }
      if ((*puVar19 >> 1 & 1) == 0) {
        return 1;
      }
      lVar21 = *(long *)puVar1;
      goto LAB_02a81a94;
    }
LAB_02a81ab4:
    uVar16 = 1;
  }
  return uVar16;
}

