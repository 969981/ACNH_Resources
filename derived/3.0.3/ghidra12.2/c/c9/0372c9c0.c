
void FUN_0372c9c0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined8 local_118;
  short local_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined4 uStack_10c;
  short sStack_108;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  short local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  short local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  short local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  short local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  
  uVar18 = FUN_03771210();
  *param_5 = uVar18;
  param_5[1] = param_2;
  param_5[2] = param_3;
  *param_6 = 0x80000000;
  if ((((byte)(&DAT_00001230)[param_4] >> 2 & 1) == 0) &&
     (puVar8 = (undefined4 *)FUN_0252d9bc(0), puVar8 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_4 + 0x117c) = *puVar8;
    *(undefined4 *)(param_4 + 0x1180) = puVar8[1];
    *(undefined4 *)(param_4 + 0x1184) = puVar8[2];
  }
  FUN_0372bfa0(param_4,param_5,param_6);
  puVar3 = PTR_DAT_04bb2720;
  local_c0 = 0;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0;
  local_b8 = local_c8;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    lVar10 = *(long *)PTR_DAT_04bb2720;
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x330) != 0)) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar9,0);
      if ((iVar6 == 0x758f7eaf) &&
         (((*(long *)puVar3 != 0 && (lVar10 = *(long *)(*(long *)puVar3 + 0x330), lVar10 != 0)) &&
          (*(int *)(lVar10 + 0x244) != 0)))) {
        FUN_01811430(&local_d0);
        goto LAB_0372cb04;
      }
    }
  }
  local_c0 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x50);
  local_b0 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x60);
LAB_0372cb04:
  local_118 = &PTR_LAB_04b46018;
  local_110 = (short)param_4;
  uStack_10e = (undefined1)((ulong)param_4 >> 0x10);
  uStack_10d = (undefined1)((ulong)param_4 >> 0x18);
  uStack_10c = (undefined4)((ulong)param_4 >> 0x20);
  FUN_0372c5e0(param_4,&local_118,param_5);
  puVar5 = PTR_DAT_04bc00c8;
  puVar4 = PTR_DAT_04bb43c0;
  puVar3 = PTR_DAT_04bb37e0;
  if (*(int *)(param_4 + 0xe0) != 0) {
    plVar17 = *(long **)(param_4 + 0xe8);
    lVar10 = (long)*(int *)(param_4 + 0xe0) << 3;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar14 = *plVar17;
      if (*(int *)(lVar14 + 0x3c) == 1) {
        local_110 = *(short *)puVar3;
        uStack_10e = puVar3[2];
        uStack_10d = puVar3[3];
        local_e0 = *(undefined4 *)puVar3;
        local_100 = *(undefined4 *)puVar3;
        local_a0 = *(undefined4 *)puVar3;
        uStack_10c = *(undefined4 *)(puVar3 + 4);
        local_e8 = *(undefined8 *)puVar3;
        local_f0 = *(undefined8 *)puVar3;
        local_118 = *(undefined ***)puVar3;
        local_b0 = *(undefined8 *)puVar3;
        local_b8 = *(undefined **)puVar3;
        local_c0 = *(undefined8 *)puVar3;
        local_c8 = *(undefined **)puVar3;
        local_d0 = *(undefined **)puVar3;
        local_fc = CONCAT17(uStack_10d,CONCAT16(uStack_10e,CONCAT24(local_110,uStack_10c)));
        sStack_108 = local_110;
        uStack_106 = uStack_10e;
        uStack_105 = uStack_10d;
        local_104 = uStack_10c;
        local_f4 = uStack_10c;
        local_dc = uStack_10c;
        local_d8 = local_110;
        local_d6 = uStack_10e;
        local_d5 = uStack_10d;
        local_d4 = uStack_10c;
        local_a8 = local_110;
        local_a6 = uStack_10e;
        local_a5 = uStack_10d;
        local_a4 = uStack_10c;
        local_9c = uStack_10c;
        local_98 = local_110;
        local_96 = uStack_10e;
        local_95 = uStack_10d;
        local_94 = uStack_10c;
        local_90 = local_110;
        local_8e = uStack_10e;
        local_8d = uStack_10d;
        local_8c = uStack_10c;
        FUN_0372d6e0(&local_d0,lVar14 + 0x10);
        local_118 = *(undefined ***)(lVar14 + 0x88);
        local_110 = *(short *)(lVar14 + 0x90);
        uStack_10e = (undefined1)*(undefined2 *)(lVar14 + 0x92);
        uStack_10d = (undefined1)((ushort)*(undefined2 *)(lVar14 + 0x92) >> 8);
        uVar11 = *(undefined8 *)(lVar14 + 0x94);
        uStack_10c = (undefined4)uVar11;
        sStack_108 = (short)((ulong)uVar11 >> 0x20);
        uStack_106 = (undefined1)((ulong)uVar11 >> 0x30);
        uStack_105 = (undefined1)((ulong)uVar11 >> 0x38);
        local_104 = *(undefined4 *)(lVar14 + 0x9c);
        local_100 = *(undefined4 *)(lVar14 + 0xa0);
        local_fc = *(ulong *)(lVar14 + 0xa4);
        local_f4 = *(undefined4 *)(lVar14 + 0xac);
        local_f0 = *(undefined8 *)(lVar14 + 0xb0);
        local_e8 = *(undefined8 *)(lVar14 + 0xb8);
        local_e0 = *(undefined4 *)(lVar14 + 0xc0);
        local_dc = *(undefined4 *)(lVar14 + 0xc4);
        local_d8 = *(undefined2 *)(lVar14 + 200);
        local_d6 = *(undefined1 *)(lVar14 + 0xca);
        local_d5 = *(undefined1 *)(lVar14 + 0xcb);
        local_d4 = *(undefined4 *)(lVar14 + 0xcc);
        if (local_110 == -2) {
LAB_0372d050:
          local_110 = (short)local_c8;
          uStack_10e = (undefined1)((ulong)local_c8 >> 0x10);
          uStack_10d = (undefined1)((ulong)local_c8 >> 0x18);
          uStack_10c = local_c8._4_4_;
        }
        else {
          lVar16 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4(&local_110);
          lVar15 = *(long *)puVar4;
          if (lVar15 == 0) goto LAB_0372d050;
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0372d050;
          local_78 = (uint *)0x0;
          local_88 = PTR_DAT_04bc0510 + 0x10;
          local_80 = CONCAT13(uStack_10d,CONCAT12(uStack_10e,local_110));
          uStack_7c = uStack_10c;
          uVar7 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar4 == 0) {
LAB_0372d030:
            local_70 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_0372d030;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_110);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar12 == (uint *)0x0)) goto LAB_0372d030;
            local_70 = 0;
            uVar7 = *puVar12;
            local_78 = puVar12;
            if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
              local_70 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)puVar5) &&
                       (local_70 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                       local_70 < 0xbd)) goto LAB_0372d03c;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_0372d03c:
          local_6c = 0xa2;
          if (local_70 == 0xa2) goto LAB_0372d050;
        }
        if (local_fc._4_2_ == -2) {
LAB_0372d1e4:
          local_fc = CONCAT44((undefined4)local_b0,(undefined4)local_fc);
          local_f4 = local_b0._4_4_;
        }
        else {
          lVar16 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4((long)&local_fc + 4);
          lVar15 = *(long *)puVar4;
          if (lVar15 == 0) goto LAB_0372d1e4;
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0372d1e4;
          local_78 = (uint *)0x0;
          local_88 = PTR_DAT_04bc0510 + 0x10;
          local_80 = local_fc._4_4_;
          uStack_7c = local_f4;
          uVar7 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar4 == 0) {
LAB_0372d1c4:
            local_70 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_0372d1c4;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4((long)&local_fc + 4);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar12 == (uint *)0x0)) goto LAB_0372d1c4;
            local_70 = 0;
            uVar7 = *puVar12;
            local_78 = puVar12;
            if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
              local_70 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)puVar5) &&
                       (local_70 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                       local_70 < 0xbd)) goto LAB_0372d1d0;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_0372d1d0:
          local_6c = 0xa2;
          if (local_70 == 0xa2) goto LAB_0372d1e4;
        }
        if ((short)local_118 == -2) {
LAB_0372d380:
          local_118 = (undefined **)local_d0;
        }
        else {
          lVar16 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4(&local_118);
          lVar15 = *(long *)puVar4;
          if (lVar15 == 0) goto LAB_0372d380;
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0372d380;
          local_78 = (uint *)0x0;
          local_88 = PTR_DAT_04bc0510 + 0x10;
          local_80 = (undefined4)local_118;
          uStack_7c = local_118._4_4_;
          uVar7 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar4 == 0) {
LAB_0372d358:
            local_70 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_0372d358;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_118);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar12 == (uint *)0x0)) goto LAB_0372d358;
            local_70 = 0;
            uVar7 = *puVar12;
            local_78 = puVar12;
            if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
              local_70 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)puVar5) &&
                       (local_70 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                       local_70 < 0xbd)) goto LAB_0372d364;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_0372d364:
          local_6c = 0xa2;
          if (local_70 == 0xa2) goto LAB_0372d380;
        }
        if ((short)local_e8 == -2) {
LAB_0372d514:
          local_e8 = CONCAT44(local_9c,local_a0);
        }
        else {
          lVar16 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4(&local_e8);
          lVar15 = *(long *)puVar4;
          if (lVar15 == 0) goto LAB_0372d514;
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0372d514;
          local_78 = (uint *)0x0;
          local_88 = PTR_DAT_04bc0510 + 0x10;
          local_80 = (undefined4)local_e8;
          uStack_7c = local_e8._4_4_;
          uVar7 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar4 == 0) {
LAB_0372d4f4:
            local_70 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_0372d4f4;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_e8);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar12 == (uint *)0x0)) goto LAB_0372d4f4;
            local_70 = 0;
            uVar7 = *puVar12;
            local_78 = puVar12;
            if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
              local_70 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)puVar5) &&
                       (local_70 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                       local_70 < 0xbd)) goto LAB_0372d500;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_0372d500:
          local_6c = 0xa2;
          if (local_70 == 0xa2) goto LAB_0372d514;
        }
        if ((short)local_100 == -2) {
LAB_0372cb90:
          local_fc = local_fc & 0xffffffff00000000;
          local_100._0_2_ = (undefined2)local_b8;
          local_100._2_1_ = local_b8._2_1_;
          local_100._3_1_ = local_b8._3_1_;
          uVar18 = local_b8._4_4_;
        }
        else {
          lVar16 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4(&local_100);
          lVar15 = *(long *)puVar4;
          if (lVar15 == 0) goto LAB_0372cb90;
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((*(uint *)(lVar16 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0372cb90;
          local_78 = (uint *)0x0;
          local_80 = local_100;
          uStack_7c = (undefined4)local_fc;
          local_88 = puVar1;
          uVar7 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar4 == 0) {
LAB_0372d678:
            local_70 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
            goto LAB_0372d678;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(&local_100);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
               (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar12 == (uint *)0x0)) goto LAB_0372d678;
            local_70 = 0;
            uVar7 = *puVar12;
            local_78 = puVar12;
            if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
              local_70 = 0;
              if (*puVar13 != 0) {
                uVar7 = puVar13[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
                    }
                    if (*puVar13 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)puVar5) &&
                       (local_70 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar2 * 2),
                       local_70 < 0xbd)) goto LAB_0372d684;
                  }
                }
                local_70 = 0;
              }
            }
          }
LAB_0372d684:
          local_6c = 0xa2;
          if (local_70 == 0xa2) goto LAB_0372cb90;
          uVar18 = (undefined4)local_fc;
        }
        *(undefined1 *)(lVar14 + 0xa2) = local_100._2_1_;
        *(undefined1 *)(lVar14 + 0xa3) = local_100._3_1_;
        *(short *)(lVar14 + 0xa0) = (short)local_100;
        *(undefined4 *)(lVar14 + 0xa4) = uVar18;
        *(short *)(lVar14 + 0xa8) = local_fc._4_2_;
        *(undefined4 *)(lVar14 + 0x8c) = local_118._4_4_;
        *(undefined1 *)(lVar14 + 0xaa) = local_fc._6_1_;
        *(ulong *)(lVar14 + 0x90) =
             CONCAT44(uStack_10c,CONCAT13(uStack_10d,CONCAT12(uStack_10e,local_110)));
        *(undefined1 *)(lVar14 + 0xab) = local_fc._7_1_;
        *(uint *)(lVar14 + 0x98) = CONCAT13(uStack_105,CONCAT12(uStack_106,sStack_108));
        *(undefined4 *)(lVar14 + 0x9c) = local_104;
        *(undefined4 *)(lVar14 + 0xac) = local_f4;
        *(undefined8 *)(lVar14 + 0xb0) = local_f0;
        *(undefined8 *)(lVar14 + 0xb8) = local_e8;
        *(undefined4 *)(lVar14 + 0xc0) = local_e0;
        *(undefined4 *)(lVar14 + 0xc4) = local_dc;
        *(short *)(lVar14 + 200) = local_d8;
        *(undefined1 *)(lVar14 + 0xca) = local_d6;
        *(undefined1 *)(lVar14 + 0xcb) = local_d5;
        *(undefined4 *)(lVar14 + 0xcc) = local_d4;
        *(undefined4 *)(lVar14 + 0x40) = (undefined4)local_d0;
        *(undefined4 *)(lVar14 + 0x44) = local_d0._4_4_;
        *(undefined **)(lVar14 + 0x48) = local_c8;
        *(undefined8 *)(lVar14 + 0x50) = local_c0;
        *(undefined4 *)(lVar14 + 0x58) = (undefined4)local_b8;
        *(undefined4 *)(lVar14 + 0x5c) = local_b8._4_4_;
        *(undefined2 *)(lVar14 + 0x60) = (undefined2)local_b0;
        *(undefined1 *)(lVar14 + 0x62) = local_b0._2_1_;
        *(undefined1 *)(lVar14 + 99) = local_b0._3_1_;
        *(undefined4 *)(lVar14 + 100) = local_b0._4_4_;
        *(short *)(lVar14 + 0x68) = local_a8;
        *(undefined1 *)(lVar14 + 0x6a) = local_a6;
        *(undefined1 *)(lVar14 + 0x6b) = local_a5;
        *(undefined4 *)(lVar14 + 0x6c) = local_a4;
        *(undefined2 *)(lVar14 + 0x70) = (undefined2)local_a0;
        *(undefined1 *)(lVar14 + 0x72) = local_a0._2_1_;
        *(undefined1 *)(lVar14 + 0x73) = local_a0._3_1_;
        *(undefined4 *)(lVar14 + 0x74) = local_9c;
        *(short *)(lVar14 + 0x78) = local_98;
        *(undefined1 *)(lVar14 + 0x7a) = local_96;
        *(undefined1 *)(lVar14 + 0x7b) = local_95;
        *(undefined4 *)(lVar14 + 0x7c) = local_94;
        *(short *)(lVar14 + 0x80) = local_90;
        *(undefined1 *)(lVar14 + 0x82) = local_8e;
        *(undefined1 *)(lVar14 + 0x83) = local_8d;
        *(undefined4 *)(lVar14 + 0x84) = local_8c;
        *(undefined4 *)(lVar14 + 0x88) = (undefined4)local_118;
        *(ushort *)(lVar14 + 0x114) = *(ushort *)(lVar14 + 0x114) | 2;
      }
      plVar17 = plVar17 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  *(uint *)(&DAT_00001230 + param_4) = *(uint *)(&DAT_00001230 + param_4) & 0xfffffffb | 0x2000;
  return;
}

