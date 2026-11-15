
/* WARNING: Removing unreachable block (ram,0x02148fd4) */
/* WARNING: Removing unreachable block (ram,0x02148f9c) */
/* WARNING: Removing unreachable block (ram,0x02148fdc) */

void FUN_02147c00(ushort *param_1,int *param_2,int *param_3,ushort *param_4)

{
  undefined **ppuVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  ushort *puVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  int iVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined *local_e0;
  float local_d8;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b0;
  ushort *local_a8;
  undefined8 local_a0;
  ushort *local_98;
  undefined8 local_90;
  
  local_b0 = &PTR_FUN_04a75530;
  local_a0 = CONCAT44(*param_3,*param_2);
  iVar18 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_a8 = param_1;
  local_98 = param_4;
  if (iVar18 != 0) {
    lVar33 = (long)iVar18 << 3;
    puVar31 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_b0)(&local_b0,*puVar31);
      lVar33 = lVar33 + -8;
      puVar31 = puVar31 + 1;
    } while (lVar33 != 0);
  }
  FUN_02507c6c(&local_b0,7,1,1,0);
  puVar15 = PTR_DAT_04bb5038;
  puVar13 = PTR_DAT_04bb4718;
  puVar14 = PTR_DAT_04bb3238;
  uVar34 = (uint)(byte)local_b0;
  local_108 = (undefined *)CONCAT44(local_b0._4_4_,(float)local_108);
  bVar5 = 0xff;
  if ((byte)local_b0 < 8) {
    bVar5 = (byte)local_b0;
  }
  local_108 = (undefined *)CONCAT71(local_108._1_7_,bVar5);
  local_100 = CONCAT62(local_100._2_6_,local_a8._0_2_);
  if (param_4 == (ushort *)0x0) {
    if ((byte)local_b0 < 8) {
      while( true ) {
        lVar33 = *(long *)puVar13;
        local_d0 = (undefined **)CONCAT71(local_d0._1_7_,(char)uVar34);
        piVar6 = (int *)puVar14;
        if (lVar33 != 0) {
          piVar6 = (int *)(lVar33 + (ulong)uVar34 * 4 + 0xde8);
        }
        if ((*piVar6 != *param_2 && *piVar6 != *param_3) &&
           (pfVar20 = (float *)FUN_0251b3b0(&local_d0,0), pfVar20 != (float *)0x0)) {
          uVar3 = (int)((float)(int)(*pfVar20 + -2.5) / 5.0) - (uint)(*pfVar20 + -2.5 < 0.0) &
                  0xffff;
          uVar4 = (int)((float)(int)(pfVar20[2] + -2.5) / 5.0) - (uint)(pfVar20[2] + -2.5 < 0.0) &
                  0xffff;
          FUN_035a4bec(param_1,uVar3,uVar4);
          if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
            FUN_035a9090(param_1,uVar3,uVar4,0);
          }
        }
        uVar32 = (ulong)uVar34;
        do {
          if (uVar32 == 7) goto LAB_02147df8;
          uVar32 = uVar32 + 1;
          uVar21 = FUN_02507924(&local_108,puVar15 + uVar32);
        } while ((uVar21 & 1) == 0);
        uVar34 = (uint)(byte)puVar15[uVar32];
        if (7 < uVar34) break;
        local_108 = (undefined *)CONCAT71(local_108._1_7_,puVar15[uVar32]);
      }
    }
  }
  else if ((byte)local_b0 < 8) {
    while( true ) {
      lVar33 = *(long *)puVar13;
      local_d0 = (undefined **)CONCAT71(local_d0._1_7_,(char)uVar34);
      piVar6 = (int *)puVar14;
      if (lVar33 != 0) {
        piVar6 = (int *)(lVar33 + (ulong)uVar34 * 4 + 0xde8);
      }
      if ((*piVar6 != *param_2 && *piVar6 != *param_3) &&
         (pfVar20 = (float *)FUN_0251b3b0(&local_d0,0), pfVar20 != (float *)0x0)) {
        uVar3 = (int)((float)(int)(*pfVar20 + -2.5) / 5.0) - (uint)(*pfVar20 + -2.5 < 0.0) & 0xffff;
        uVar4 = (int)((float)(int)(pfVar20[2] + -2.5) / 5.0) - (uint)(pfVar20[2] + -2.5 < 0.0) &
                0xffff;
        FUN_035a4dd4(param_1,uVar3,uVar4,param_4);
        if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
          FUN_035a9090(param_1,uVar3,uVar4,param_4);
        }
      }
      uVar32 = (ulong)uVar34;
      do {
        if (uVar32 == 7) goto LAB_02147df8;
        uVar32 = uVar32 + 1;
        uVar21 = FUN_02507924(&local_108,puVar15 + uVar32);
      } while ((uVar21 & 1) == 0);
      uVar34 = (uint)(byte)puVar15[uVar32];
      if (7 < uVar34) break;
      local_108 = (undefined *)CONCAT71(local_108._1_7_,puVar15[uVar32]);
    }
  }
LAB_02147df8:
  puVar14 = PTR_DAT_04bb27c0;
  if (((uint)DAT_05407638 == 0) || (lVar33 = *(long *)PTR_DAT_04bb27c0, lVar33 == 0))
  goto LAB_0214813c;
  plVar28 = *(long **)(*(long *)(*(long *)(lVar33 + 0x1c0) + 8) +
                      ((ulong)((uint)DAT_05407638 >> 0x11) & 0x7ff8));
  if ((plVar28 == (long *)0x0) ||
     (((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0 ||
      (*(uint *)(plVar28 + 0x46) != (uint)DAT_05407638)))) {
    plVar28 = (long *)0x0;
  }
  if (*(int *)(lVar33 + 0x288) == 1 || *(int *)(lVar33 + 0x288) == -1) {
    plVar22 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar33 = *(long *)puVar14;
    iVar18 = (**(code **)(*plVar22 + 0x60))();
    if (iVar18 < 0x11) {
      uVar34 = 1;
    }
    else {
      if (4 < *(uint *)(lVar33 + 0x5e8)) goto LAB_02147ea0;
      uVar34 = 0x1aU >> (ulong)(*(uint *)(lVar33 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02147ea0:
    uVar34 = 0;
  }
  if (plVar28 != (long *)0x0) {
    lVar33 = plVar28[0x2a];
    if (((*PTR_DAT_04bc2240 & 1) == 0) &&
       (iVar18 = __cxa_guard_acquire(PTR_DAT_04bc2240), iVar18 != 0)) {
      *(undefined **)PTR_DAT_04bc2238 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2240);
    }
    uVar32 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bc2238);
    uVar3 = 0;
    if ((int)lVar33 == 1) {
      uVar3 = uVar34;
    }
    if (((uVar32 & 1) != 0) && (uVar3 != 0)) {
      fVar36 = *(float *)(plVar28[0xd] + 0x278);
      fVar37 = *(float *)(plVar28[0xd] + 0x280);
      iVar18 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0);
      iVar11 = iVar18 + -2;
      iVar18 = iVar18 + 1;
      iVar19 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
      iVar35 = iVar19 + -2;
      iVar19 = iVar19 + 2;
      iVar30 = iVar11;
      iVar27 = iVar35;
      do {
        FUN_035a4360(param_1,iVar30,iVar27,0);
        if (iVar30 < iVar18) {
          iVar30 = iVar30 + 1;
        }
        else {
          iVar27 = iVar27 + 1;
          iVar30 = iVar11;
        }
      } while ((iVar11 != iVar30) || (iVar19 != iVar27));
      if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
        iVar27 = iVar11;
        do {
          iVar30 = iVar27 - (uint)*param_1;
          if ((((-1 < iVar30) && (iVar30 < *(int *)(param_1 + 6))) &&
              (iVar10 = iVar35 - (uint)param_1[1], -1 < iVar10)) && (iVar10 < *(int *)(param_1 + 8))
             ) {
            lVar33 = *(long *)(param_1 + 0x20);
            uVar4 = iVar30 + *(int *)(lVar33 + 0x1c) * iVar10;
            uVar3 = 1 << (ulong)(uVar4 & 0x1f);
            uVar34 = *(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar4 >> 5) * 4);
            if ((uVar3 & uVar34) != 0) {
              *(uint *)(*(long *)(lVar33 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                   uVar34 & (uVar3 ^ 0xffffffff);
              *(int *)(lVar33 + 0x18) = *(int *)(lVar33 + 0x18) + -1;
            }
          }
          if (iVar27 < iVar18) {
            iVar27 = iVar27 + 1;
          }
          else {
            iVar35 = iVar35 + 1;
            iVar27 = iVar11;
          }
        } while ((iVar11 != iVar27) || (iVar19 != iVar35));
      }
    }
  }
LAB_0214813c:
  lVar33 = 0;
  iVar18 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  do {
    uVar34 = *(uint *)((long)&DAT_05465dc4 + lVar33);
    if ((uVar34 != 0) && (lVar26 = *(long *)puVar14, lVar26 != 0)) {
      lVar29 = *(long *)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                        ((ulong)(uVar34 >> 0x11) & 0x7ff8));
      if ((lVar29 == 0) ||
         (((*(uint *)(lVar29 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar29 + 0x230) != uVar34)))) {
        lVar29 = 0;
      }
      if (*(int *)(lVar26 + 0x288) == 1 || *(int *)(lVar26 + 0x288) == -1) {
        plVar28 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar26 = *(long *)puVar14;
        iVar19 = (**(code **)(*plVar28 + 0x60))();
        if (iVar19 < 0x11) {
          uVar34 = 1;
        }
        else {
          if (4 < *(uint *)(lVar26 + 0x5e8)) goto LAB_02148220;
          uVar34 = 0x1aU >> (ulong)(*(uint *)(lVar26 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02148220:
        uVar34 = 0;
      }
      if (lVar29 != 0) {
        uVar34 = uVar34 ^ 1;
        if (*(int *)(lVar29 + 0x150) != 1) {
          uVar34 = 1;
        }
        if (uVar34 == 0) {
          fVar36 = *(float *)(*(long *)(lVar29 + 0x68) + 0x278) + -2.5;
          fVar37 = *(float *)(*(long *)(lVar29 + 0x68) + 0x280) + -2.5;
          uVar3 = (int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff;
          uVar4 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
          uVar34 = uVar4 & 0xffff;
          if (param_4 == (ushort *)0x0) {
            FUN_035a4bec(param_1,uVar3,uVar34);
          }
          else {
            FUN_035a4dd4();
          }
          if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
            FUN_035a9090(param_1,uVar3,uVar34,param_4);
          }
          if (iVar18 == -0x10e0fba8) {
            uVar7 = *param_1;
            uVar25 = (uint)uVar7;
            uVar3 = uVar3 - 1;
            if (((((uint)uVar7 <= (uVar3 & 0xffff)) &&
                 ((uVar3 & 0xffff) <= (((uint)uVar7 + (uint)param_1[6]) - 1 & 0xffff))) &&
                ((uint)param_1[1] <= (uVar4 & 0xffff))) &&
               ((uVar4 & 0xffff) <= (((uint)param_1[1] + (uint)param_1[8]) - 1 & 0xffff))) {
              FUN_035a4360(param_1,uVar3,uVar34,0);
              lVar26 = *(long *)(param_1 + 0x20);
              uVar25 = (uint)*param_1;
              if (-1 < *(int *)(lVar26 + 0x18)) {
                uVar9 = (uVar3 - *param_1) + (uVar34 - param_1[1]) * *(int *)(lVar26 + 0x1c);
                uVar8 = 1 << (ulong)(uVar9 & 0x1f);
                uVar4 = *(uint *)(*(long *)(lVar26 + 0x10) + (long)((int)uVar9 >> 5) * 4);
                if ((uVar8 & uVar4) != 0) {
                  *(uint *)(*(long *)(lVar26 + 0x10) + ((long)((ulong)uVar9 << 0x20) >> 0x25) * 4) =
                       uVar4 & (uVar8 ^ 0xffffffff);
                  *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + -1;
                  uVar25 = (uint)*param_1;
                }
              }
            }
            if ((uVar25 <= (uVar3 & 0xffff)) &&
               ((uVar3 & 0xffff) <= ((uVar25 + param_1[6]) - 1 & 0xffff))) {
              uVar34 = uVar34 + 1;
              if (((uint)param_1[1] <= (uVar34 & 0xffff)) &&
                 ((uVar34 & 0xffff) <= (((uint)param_1[1] + (uint)param_1[8]) - 1 & 0xffff))) {
                FUN_035a4360(param_1,uVar3,uVar34,0);
                lVar26 = *(long *)(param_1 + 0x20);
                if (-1 < *(int *)(lVar26 + 0x18)) {
                  uVar4 = (uVar3 - *param_1) + (uVar34 - param_1[1]) * *(int *)(lVar26 + 0x1c);
                  uVar3 = 1 << (ulong)(uVar4 & 0x1f);
                  uVar34 = *(uint *)(*(long *)(lVar26 + 0x10) + (long)((int)uVar4 >> 5) * 4);
                  if ((uVar3 & uVar34) != 0) {
                    *(uint *)(*(long *)(lVar26 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4)
                         = uVar34 & (uVar3 ^ 0xffffffff);
                    *(int *)(lVar26 + 0x18) = *(int *)(lVar26 + 0x18) + -1;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar16 = PTR_DAT_04bbc1a0;
    puVar15 = PTR_DAT_04bb3238;
    puVar13 = PTR_DAT_04bb2010;
    lVar33 = lVar33 + 4;
  } while (lVar33 != 0x24);
  lVar33 = *(long *)PTR_DAT_04bb4848;
  if (lVar33 != 0) {
    uVar23 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    local_d0 = (undefined **)0x0;
    uStack_c8 = (undefined **)0x40a0000000000000;
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)PTR_DAT_04bb3238);
    puVar2 = (ushort *)(PTR_DAT_04bb2010 + 0x10);
    bVar17 = true;
    do {
      bVar12 = bVar17;
      uVar32 = FUN_022921a8(lVar33,&local_d0,uVar23);
      if (((uVar32 & 1) == 0) || (lVar26 = *(long *)puVar14, lVar26 == 0)) {
LAB_021487b4:
        local_108 = (undefined *)0x0;
        local_100 = 0x40a0000000000000;
        local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
        uVar32 = FUN_022924b4(lVar33,&local_108,0);
        fVar36 = local_100._4_4_;
        if (param_4 == (ushort *)0x0) {
          if ((uVar32 & 1) != 0) {
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a5160(local_100._4_4_,param_1,&local_e0);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              local_b0 = (undefined **)(puVar16 + 0x10);
              local_a8 = (ushort *)(puVar13 + 0x10);
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,0);
            }
          }
          local_108 = (undefined *)0x0;
          local_100 = 0x40a0000000000000;
          local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
          uVar32 = FUN_022924b4(lVar33,&local_108,1);
          if ((uVar32 & 1) != 0) {
            fVar36 = local_100._4_4_;
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a5160(local_100._4_4_,param_1,&local_e0);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              local_b0 = (undefined **)(puVar16 + 0x10);
              local_a8 = (ushort *)(puVar13 + 0x10);
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,0);
            }
          }
          local_108 = (undefined *)0x0;
          local_100 = 0x40a0000000000000;
          local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
          uVar32 = FUN_022924b4(lVar33,&local_108,2);
          if ((uVar32 & 1) != 0) {
            fVar36 = local_100._4_4_;
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a5160(local_100._4_4_,param_1,&local_e0);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              local_b0 = (undefined **)(puVar16 + 0x10);
              local_a8 = (ushort *)(puVar13 + 0x10);
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,0);
            }
          }
          local_108 = (undefined *)0x0;
          local_100 = 0x40a0000000000000;
          local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
          uVar32 = FUN_022924b4(lVar33,&local_108,3);
          if ((uVar32 & 1) != 0) {
            fVar36 = local_100._4_4_;
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a5160(local_100._4_4_,param_1,&local_e0);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              puVar24 = (ushort *)0x0;
              goto LAB_021484b4;
            }
          }
        }
        else {
          if ((uVar32 & 1) != 0) {
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a53f0(local_100._4_4_,param_1,&local_e0,param_4);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              local_b0 = (undefined **)(puVar16 + 0x10);
              local_a8 = (ushort *)(puVar13 + 0x10);
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,param_4);
            }
          }
          local_108 = (undefined *)0x0;
          local_100 = 0x40a0000000000000;
          local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
          uVar32 = FUN_022924b4(lVar33,&local_108,1);
          if ((uVar32 & 1) != 0) {
            fVar36 = local_100._4_4_;
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a53f0(local_100._4_4_,param_1,&local_e0,param_4);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              local_b0 = (undefined **)(puVar16 + 0x10);
              local_a8 = (ushort *)(puVar13 + 0x10);
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,param_4);
            }
          }
          local_108 = (undefined *)0x0;
          local_100 = 0x40a0000000000000;
          local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
          uVar32 = FUN_022924b4(lVar33,&local_108,2);
          if ((uVar32 & 1) != 0) {
            fVar36 = local_100._4_4_;
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a53f0(local_100._4_4_,param_1,&local_e0,param_4);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              local_b0 = (undefined **)(puVar16 + 0x10);
              local_a8 = (ushort *)(puVar13 + 0x10);
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,param_4);
            }
          }
          local_108 = (undefined *)0x0;
          local_100 = 0x40a0000000000000;
          local_f8 = (undefined *)CONCAT44(*(undefined4 *)puVar15,*(undefined4 *)puVar15);
          uVar32 = FUN_022924b4(lVar33,&local_108,3);
          if ((uVar32 & 1) != 0) {
            fVar36 = local_100._4_4_;
            local_e0 = local_108;
            local_d8 = (float)local_100;
            FUN_035a53f0(local_100._4_4_,param_1,&local_e0,param_4);
            if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
              if (fVar36 < 0.0) {
                fVar36 = 0.0;
              }
              puVar24 = param_4;
LAB_021484b4:
              local_a8 = (ushort *)(puVar13 + 0x10);
              local_b0 = (undefined **)(puVar16 + 0x10);
              iVar19 = (int)((float)(int)(local_e0._0_4_ - fVar36) / 5.0) -
                       (uint)(local_e0._0_4_ - fVar36 < 0.0);
              iVar27 = (int)((float)(int)(local_d8 - fVar36) / 5.0) -
                       (uint)(local_d8 - fVar36 < 0.0);
              iVar35 = (int)((float)(int)(fVar36 + local_e0._0_4_) / 5.0) -
                       (uint)(fVar36 + local_e0._0_4_ < 0.0);
              iVar11 = (int)((float)(int)(fVar36 + local_d8) / 5.0) -
                       (uint)(fVar36 + local_d8 < 0.0);
              iVar18 = iVar19;
              if (iVar35 <= iVar19) {
                iVar18 = iVar35;
              }
              if (iVar19 <= iVar35) {
                iVar19 = iVar35;
              }
              iVar35 = iVar27;
              if (iVar11 <= iVar27) {
                iVar35 = iVar11;
              }
              if (iVar27 <= iVar11) {
                iVar27 = iVar11;
              }
              local_a0 = CONCAT44(iVar35,iVar18);
              local_90 = CONCAT44(iVar27,iVar19);
              local_98 = local_a8;
              FUN_035a9840(param_1,&local_b0,puVar24);
            }
          }
        }
      }
      else {
        if (((uint)local_c0 == 0) ||
           (((lVar29 = *(long *)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                                ((ulong)((uint)local_c0 >> 0x11) & 0x7ff8)), lVar29 == 0 ||
             ((*(uint *)(lVar29 + 0x248) >> 1 & 1) != 0)) ||
            (*(uint *)(lVar29 + 0x230) != (uint)local_c0)))) {
          lVar29 = 0;
        }
        if (*(int *)(lVar26 + 0x288) != 1 && *(int *)(lVar26 + 0x288) != -1) {
          uVar34 = 0;
          if (lVar29 != 0) goto LAB_02148670;
          goto LAB_021487b4;
        }
        plVar28 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar26 = *(long *)puVar14;
        iVar18 = (**(code **)(*plVar28 + 0x60))();
        if (iVar18 < 0x11) {
          uVar34 = 1;
        }
        else if (*(uint *)(lVar26 + 0x5e8) < 5) {
          uVar34 = 0x1aU >> (ulong)(*(uint *)(lVar26 + 0x5e8) & 0x1f) & 1;
        }
        else {
          uVar34 = 0;
        }
        if (lVar29 == 0) goto LAB_021487b4;
LAB_02148670:
        uVar34 = uVar34 ^ 1;
        if (*(int *)(lVar29 + 0x150) != 1) {
          uVar34 = 1;
        }
        if (uVar34 != 0) goto LAB_021487b4;
        if ((*(long **)(lVar29 + 0x60) == (long *)0x0) ||
           (uVar32 = (**(code **)(**(long **)(lVar29 + 0x60) + 0x100))(), (uVar32 & 1) != 0)) {
          fVar36 = uStack_c8._4_4_;
          local_108 = *(undefined **)(*(long *)(lVar29 + 0x68) + 0x278);
          local_100 = CONCAT44(local_100._4_4_,*(undefined4 *)(*(long *)(lVar29 + 0x68) + 0x280));
          if (param_4 == (ushort *)0x0) {
            FUN_035a5160(uStack_c8._4_4_,param_1,&local_108);
          }
          else {
            FUN_035a53f0(param_1,&local_108,param_4);
          }
          if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
            if (fVar36 < 0.0) {
              fVar36 = 0.0;
            }
            iVar19 = (int)((float)(int)((float)local_108 - fVar36) / 5.0) -
                     (uint)((float)local_108 - fVar36 < 0.0);
            iVar27 = (int)((float)(int)((float)local_100 - fVar36) / 5.0) -
                     (uint)((float)local_100 - fVar36 < 0.0);
            iVar35 = (int)((float)(int)(fVar36 + (float)local_108) / 5.0) -
                     (uint)(fVar36 + (float)local_108 < 0.0);
            iVar11 = (int)((float)(int)(fVar36 + (float)local_100) / 5.0) -
                     (uint)(fVar36 + (float)local_100 < 0.0);
            iVar18 = iVar19;
            if (iVar35 <= iVar19) {
              iVar18 = iVar35;
            }
            if (iVar19 <= iVar35) {
              iVar19 = iVar35;
            }
            iVar35 = iVar27;
            if (iVar11 <= iVar27) {
              iVar35 = iVar11;
            }
            if (iVar27 <= iVar11) {
              iVar27 = iVar11;
            }
            local_a0 = CONCAT44(iVar35,iVar18);
            local_90 = CONCAT44(iVar27,iVar19);
            local_b0 = ppuVar1;
            local_a8 = puVar2;
            local_98 = puVar2;
            FUN_035a9840(param_1,&local_b0,param_4);
          }
          goto LAB_021487b4;
        }
      }
      uVar23 = 1;
      bVar17 = false;
    } while (bVar12);
  }
  local_e0 = PTR_DAT_04bc43f8 + 0x10;
  local_d8 = (float)DAT_05636e70;
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
  local_108 = PTR_DAT_04bc4608 + 0x10;
  local_100 = CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(float)local_100);
  uStack_f0 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_100 = CONCAT71(local_100._1_7_,PTR_DAT_04bbc570[8]);
  local_f8 = puVar13 + 0x10;
  local_e8 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_e4 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e70 != 0) {
    uStack_c8 = &local_e0;
    local_d0 = &PTR_FUN_04a9b150;
    local_c0 = &local_108;
    puVar31 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar31 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar31[1] != 0) {
      plVar28 = (long *)(*(code *)**(undefined8 **)(puVar31[1] + 0x10))();
      iVar18 = (**(code **)(*plVar28 + 0x18))();
      if (0 < iVar18) {
        iVar19 = 0;
        do {
          FUN_01360490(&local_b0,puVar31[1],iVar19);
          uVar32 = (*(code *)*local_d0)(&local_d0,&local_b0);
          if ((uVar32 & 1) != 0) break;
          bVar17 = iVar18 + -1 != iVar19;
          iVar19 = iVar19 + 1;
        } while (bVar17);
      }
    }
  }
  if (local_100._4_4_ != 0.0) {
    local_b0 = (undefined **)(puVar16 + 0x10);
    local_a8 = (ushort *)(puVar13 + 0x10);
    local_a0 = 0;
    local_90 = 0;
    local_98 = local_a8;
    FUN_02a8f7b0(&local_108,&local_b0);
    iVar19 = local_90._4_4_ + -2;
    iVar18 = (int)local_a0;
    if ((int)local_90 <= (int)local_a0) {
      iVar18 = (int)local_90;
    }
    if ((int)local_a0 <= (int)local_90) {
      local_a0._0_4_ = (int)local_90;
    }
    iVar27 = local_a0._4_4_;
    if (iVar19 <= local_a0._4_4_) {
      iVar27 = iVar19;
    }
    local_90._4_4_ = local_a0._4_4_;
    if (local_a0._4_4_ <= iVar19) {
      local_90._4_4_ = iVar19;
    }
    iVar19 = local_90._4_4_ + 1;
    local_90._0_4_ = (int)local_a0;
    local_a0._4_4_ = iVar27;
    if (iVar19 != iVar27) {
      iVar35 = iVar18;
      local_a0._0_4_ = iVar18;
      do {
        FUN_035a4360(param_1,iVar35,iVar27,0);
        if (iVar35 < (int)local_90) {
          iVar35 = iVar35 + 1;
        }
        else {
          iVar27 = iVar27 + 1;
          iVar35 = (int)local_a0;
        }
      } while (iVar18 != iVar35 || iVar19 != iVar27);
      iVar18 = (int)local_a0;
    }
    local_a0._0_4_ = iVar18;
    if ((-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) && (local_90._4_4_ + 1 != local_a0._4_4_))
    {
      iVar18 = (int)local_a0;
      do {
        iVar19 = iVar18 - (uint)*param_1;
        if ((((-1 < iVar19) && (iVar19 < *(int *)(param_1 + 6))) &&
            (iVar27 = local_a0._4_4_ - (uint)param_1[1], -1 < iVar27)) &&
           (iVar27 < *(int *)(param_1 + 8))) {
          lVar33 = *(long *)(param_1 + 0x20);
          uVar4 = iVar19 + *(int *)(lVar33 + 0x1c) * iVar27;
          uVar3 = 1 << (ulong)(uVar4 & 0x1f);
          uVar34 = *(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar4 >> 5) * 4);
          if ((uVar3 & uVar34) != 0) {
            *(uint *)(*(long *)(lVar33 + 0x10) + ((long)((ulong)uVar4 << 0x20) >> 0x25) * 4) =
                 uVar34 & (uVar3 ^ 0xffffffff);
            *(int *)(lVar33 + 0x18) = *(int *)(lVar33 + 0x18) + -1;
          }
        }
        if (iVar18 < (int)local_90) {
          iVar18 = iVar18 + 1;
        }
        else {
          local_a0._4_4_ = local_a0._4_4_ + 1;
          iVar18 = (int)local_a0;
        }
      } while (((int)local_a0 != iVar18) || (local_90._4_4_ + 1 != local_a0._4_4_));
    }
  }
  return;
}

