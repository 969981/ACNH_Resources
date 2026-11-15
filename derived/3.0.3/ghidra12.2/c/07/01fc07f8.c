
byte FUN_01fc07f8(undefined *param_1,float *param_2,uint *param_3)

{
  float *pfVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ushort uVar14;
  long lVar15;
  uint *puVar16;
  undefined8 uVar17;
  int iVar18;
  long *plVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  uint *puVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  byte local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  int local_108;
  int iStack_104;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb43c0;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 6) {
LAB_01fc083c:
    bVar6 = 1;
    lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    *param_2 = *(float *)(lVar15 + 0x278);
    param_2[1] = *(float *)(lVar15 + 0x27c);
    param_2[2] = *(float *)(lVar15 + 0x280);
    goto LAB_01fc10f0;
  }
  if (param_3[0x3e] == 0) {
    lVar15 = *(long *)PTR_DAT_04bb27c0;
    if (lVar15 == 0) goto LAB_01fc10ec;
    uVar7 = *param_3;
    if ((((uVar7 == 0) ||
         (plVar19 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
        ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar7)) {
      plVar19 = (long *)0x0;
    }
    if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar15 = *(long *)puVar2;
      iVar8 = (**(code **)(*plVar11 + 0x60))();
      if (iVar8 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_01fc0a34;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01fc0a34:
      uVar7 = 0;
    }
    if (plVar19 != (long *)0x0) {
      lVar15 = plVar19[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar12 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb37d0);
      bVar6 = 0;
      uVar10 = 0;
      if ((int)lVar15 == 1) {
        uVar10 = uVar7;
      }
      if (((uVar12 & 1) == 0) || (uVar10 == 0)) goto LAB_01fc10f0;
      puVar20 = (undefined8 *)plVar19[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar20 != (undefined8 *)0x0) &&
         (uVar12 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6708), (uVar12 & 1) != 0)) {
        local_128 = PTR_DAT_04bbc1a0 + 0x10;
        local_120 = PTR_DAT_04bb2010 + 0x10;
        lVar15 = *(long *)(puVar20[1] + 0x68);
        pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                          (ulong)(*(uint *)(lVar15 + 0x2b4) + 0x40000000 >> 0x18) * 0x10);
        fVar25 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar26 = (*pfVar1 + fVar25 * pfVar1[1]) * 5.0;
        fVar25 = (pfVar1[2] + fVar25 * pfVar1[3]) * 5.0;
        fVar26 = *(float *)(lVar15 + 0x278) + fVar26 + fVar26 + -2.5;
        fVar25 = *(float *)(lVar15 + 0x280) + fVar25 + fVar25 + -2.5;
        iVar8 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
        iVar3 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
        local_c0 = CONCAT44(iVar3,iVar8);
        local_b0 = (undefined *)CONCAT44(iVar3 + 1,iVar8 + 1);
        local_138 = 0;
        lVar15 = *(long *)(puVar20[1] + 0x68);
        pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                          (ulong)(*(uint *)(lVar15 + 0x2b4) + 0xc0000000 >> 0x18) * 0x10);
        fVar25 = (float)(*(uint *)(lVar15 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar26 = (*pfVar1 + fVar25 * pfVar1[1]) * 5.0;
        fVar25 = (pfVar1[2] + fVar25 * pfVar1[3]) * 5.0;
        fVar26 = *(float *)(lVar15 + 0x278) + fVar26 + fVar26 + -2.5;
        fVar25 = *(float *)(lVar15 + 0x280) + fVar25 + fVar25 + -2.5;
        local_108 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
        iStack_104 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
        local_118 = (uint *)CONCAT44(iStack_104,local_108);
        local_108 = local_108 + 1;
        iStack_104 = iStack_104 + 1;
        lVar15 = *(long *)PTR_DAT_04bb2720;
        local_110 = local_120;
        local_d0 = local_128;
        puStack_c8 = local_120;
        local_b8 = local_120;
        if (lVar15 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar15 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
            iVar8 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar8 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        local_134 = *(undefined4 *)(puVar20 + 7);
        local_130 = FUN_017baf44();
        local_130 = local_130 & 1;
        local_140 = PTR_DAT_04bb3140 + 0x10;
        local_e0 = param_1;
        local_d8 = &local_140;
        uVar10 = FUN_01fc5970(&local_e0,&local_d0);
        uVar7 = FUN_01fc5970(&local_e0,&local_128);
        uVar17 = 3;
        if (((uVar10 & 1) == 0) || ((uVar7 & 1) == 0)) goto LAB_01fc0a18;
      }
    }
    goto LAB_01fc10ec;
  }
  if (param_3[0x3e] != 2) {
    uVar7 = 0;
    uVar10 = 0;
    uVar17 = 2;
LAB_01fc0a18:
    bVar6 = FUN_01fc5368(param_1,param_2,param_3,uVar17,uVar10 & 1,uVar7 & 1);
    goto LAB_01fc10f0;
  }
  puVar16 = param_3 + 2;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(puVar16);
  lVar15 = *(long *)puVar5;
  if (lVar15 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_118 = (uint *)0x0;
      local_120 = *(undefined **)(param_3 + 2);
      local_128 = PTR_DAT_04bc0510 + 0x10;
      uVar7 = FUN_0277d6c4(&local_120);
      if (*(long *)puVar5 == 0) {
LAB_01fc0cbc:
        puVar23 = (uint *)0x0;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01fc0cbc;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(puVar16);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (*(uint *)(lVar15 + 0x1d8) <= uVar7) goto LAB_01fc0cbc;
        puVar23 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
        if (puVar23 != (uint *)0x0) {
          local_118 = puVar23;
        }
      }
      uVar12 = FUN_0277e294(puVar16);
      if ((uVar12 & 1) != 0) {
        local_140 = (undefined *)0x0;
        local_138 = 0;
        FUN_021fd6f0(&local_140,0,puVar16,param_3 + 4,0);
        uVar24 = FUN_02080828(param_1 + 0xafb8,&local_140,puVar16);
        uVar17 = *(undefined8 *)(param_1 + 8);
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
        uVar9 = FUN_01ae98d0(&local_128);
        uVar7 = 0;
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar9);
        if (((puVar23 != (uint *)0x0) && (uVar10 = *puVar23, uVar10 != 0)) &&
           (puVar23 != (uint *)(ulong)uVar10)) {
          puVar16 = (uint *)((long)puVar23 - (long)(ulong)uVar10);
          uVar7 = 0;
          if (*puVar16 != 0) {
            uVar7 = puVar16[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar10 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar23 - lVar15) / (ulong)uVar7);
                }
                if (*puVar16 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *(uint *)PTR_DAT_04bc0110) &&
                   (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar10 * 2),
                   uVar7 = (uint)uVar14, uVar14 < 9)) goto LAB_01fc0db4;
              }
            }
            uVar7 = 0;
          }
        }
LAB_01fc0db4:
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar7);
        uVar12 = FUN_02200640(uVar24,&local_f0,param_1 + 0x188,uVar17,param_3 + 4,&local_d0,
                              &local_e0,0);
        bVar6 = 0;
        if ((uVar12 & 1) == 0) goto LAB_01fc10f0;
        local_c0 = 0;
        local_b8 = (undefined *)0x0;
        local_7c = 0;
        local_d0 = PTR_DAT_04bc1558 + 0x10;
        puStack_c8 = (undefined *)0x0;
        local_b0 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_a8 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = 0;
        local_90 = 0;
        uStack_88 = 0xffffffff00000000;
        local_80 = 0xffffffff;
        local_78 = 0xfffe;
        puStack_98 = puStack_a8;
        FUN_0277d4ac(&local_78);
        uVar14 = 0;
        local_68 = 0;
        local_64 = 0;
        local_e0 = (undefined *)0x0;
        local_70 = 0x3bf800000;
        local_78 = *(undefined8 *)(param_3 + 2);
        local_d8 = (undefined **)((ulong)local_d8._4_4_ << 0x20);
        local_a0 = *(undefined8 *)(param_3 + 8);
        local_90 = *(undefined8 *)(param_3 + 0xc);
        local_7c = local_f0._0_1_;
        if (((puVar23 != (uint *)0x0) && (uVar7 = *puVar23, uVar7 != 0)) &&
           (puVar23 != (uint *)(ulong)uVar7)) {
          puVar16 = (uint *)((long)puVar23 - (long)(ulong)uVar7);
          if (((*puVar16 != 0) && (uVar7 = puVar16[1], uVar7 != 0)) &&
             ((ulong)(ushort)puVar16[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar15 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar23 - lVar15) / (ulong)uVar7);
              }
              if (*puVar16 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if ((uVar10 < *(uint *)PTR_DAT_04bc0110) &&
                 (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar10 * 2),
                 uVar14 < 9)) goto LAB_01fc1234;
            }
          }
          uVar14 = 0;
        }
LAB_01fc1234:
        FUN_020809e0(param_1 + 0xafb8,param_2,&local_e0,&local_d0,uVar14);
        bVar6 = 1;
        if ((*param_2 == 0.0) && (param_2[1] == 0.0)) {
          bVar6 = param_2[2] != 0.0;
        }
        goto LAB_01fc10f0;
      }
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,4);
      if (puVar23 == (uint *)0x0) {
        uVar7 = 0xbc;
      }
      else {
        uVar7 = *puVar23;
        local_140._0_4_ = 0;
        if ((uVar7 != 0) && (puVar23 != (uint *)(ulong)uVar7)) {
          puVar16 = (uint *)((long)puVar23 - (long)(ulong)uVar7);
          local_140._0_4_ = 0;
          if (*puVar16 != 0) {
            uVar7 = puVar16[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar10 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar23 - lVar15) / (ulong)uVar7);
                }
                if (*puVar16 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_140._0_4_ =
                         (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2),
                   (uint)local_140 < 0xbd)) goto LAB_01fc0fac;
              }
            }
            local_140._0_4_ = 0;
          }
        }
LAB_01fc0fac:
        if ((uint)local_140 == 4) {
          bVar6 = FUN_01fc5368(param_1,param_2,param_3,2,0,0);
          goto LAB_01fc10f0;
        }
        uVar7 = 0;
        uVar10 = *puVar23;
        if ((uVar10 != 0) && (puVar23 != (uint *)(ulong)uVar10)) {
          puVar16 = (uint *)((long)puVar23 - (long)(ulong)uVar10);
          uVar7 = 0;
          if (*puVar16 != 0) {
            uVar7 = puVar16[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar10 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar23 - lVar15) / (ulong)uVar7);
                }
                if (*puVar16 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar7 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2),
                   uVar7 < 0xbd)) goto LAB_01fc1124;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_01fc1124:
      local_d0 = (undefined *)CONCAT44(local_d0._4_4_,5);
      local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar7);
      if (uVar7 == 5) goto LAB_01fc083c;
      FUN_0071ca50(&local_140,param_3,0);
      bVar6 = 0;
      if (((local_140 == (undefined *)0x0) || ((char)local_138 == '\0')) ||
         (local_138._2_1_ == '\0')) goto LAB_01fc10f0;
      local_c0 = 0;
      local_d0 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_b0 = (undefined *)0x0;
      puStack_c8 = puVar2;
      local_b8 = puVar2;
      FUN_012e1d60(&local_d0,*(long *)(local_140 + 0x68) + 0x278,2,2);
      iVar8 = local_b0._4_4_ + 2;
      iVar3 = (int)local_b0 + (int)local_c0;
      if (iVar3 < 0 != SCARRY4((int)local_b0,(int)local_c0)) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = local_b0._4_4_ + local_c0._4_4_;
      iVar3 = (iVar3 >> 1) + 1;
      if (iVar4 < 0 != SCARRY4(local_b0._4_4_,local_c0._4_4_)) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = (iVar4 >> 1) + 1;
      iVar18 = (int)(float)((int)local_b0 + 2);
      local_d8 = (undefined **)CONCAT44((int)(float)iVar8,iVar3);
      iVar21 = (int)(float)((int)local_c0 + -1);
      local_100 = puVar2;
      local_f8 = iVar21;
      iStack_f4 = iVar4;
      local_f0 = puVar2;
      local_e8 = iVar18;
      iStack_e4 = iVar4;
      local_e0 = puVar2;
      uVar12 = FUN_01fa4150(param_1,&local_e0);
      if ((uVar12 & 1) == 0) {
        uVar12 = FUN_01fa4150(param_1,&local_100);
        uVar13 = FUN_01fa4150(param_1,&local_f0);
        if (((uVar12 & 1) == 0) || ((uVar13 & 1) == 0)) {
          if (((uVar12 & 1) == 0) && (iVar21 = iVar18, (uVar13 & 1) == 0)) goto LAB_01fc10ec;
          if (param_2 != (float *)0x0) {
            *param_2 = (float)iVar21 * 5.0;
            goto LAB_01fc1324;
          }
        }
        else if (param_2 != (float *)0x0) {
          fVar26 = *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278);
          fVar28 = (float)iVar18 * 5.0 - fVar26;
          fVar25 = (float)iVar4 * 5.0;
          fVar26 = (float)iVar21 * 5.0 - fVar26;
          fVar27 = fVar25 - *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x280);
          fVar27 = fVar27 * fVar27;
          if (fVar27 + fVar26 * fVar26 <= fVar27 + fVar28 * fVar28) {
            iVar18 = iVar21;
          }
          *param_2 = (float)iVar18 * 5.0;
          goto LAB_01fc1328;
        }
      }
      else if (param_2 != (float *)0x0) {
        *param_2 = (float)iVar3 * 5.0;
        iVar4 = (int)(float)iVar8;
LAB_01fc1324:
        fVar25 = (float)iVar4 * 5.0;
LAB_01fc1328:
        param_2[2] = fVar25;
      }
      bVar6 = 1;
      goto LAB_01fc10f0;
    }
  }
LAB_01fc10ec:
  bVar6 = 0;
LAB_01fc10f0:
  return bVar6 & 1;
}

