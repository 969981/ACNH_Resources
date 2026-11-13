
/* WARNING: Removing unreachable block (ram,0x0148b670) */
/* WARNING: Removing unreachable block (ram,0x0148b680) */
/* WARNING: Removing unreachable block (ram,0x0148b68c) */
/* WARNING: Removing unreachable block (ram,0x0148b554) */
/* WARNING: Removing unreachable block (ram,0x0148b564) */
/* WARNING: Removing unreachable block (ram,0x0148b570) */
/* WARNING: Removing unreachable block (ram,0x0148bc3c) */
/* WARNING: Removing unreachable block (ram,0x0148bc4c) */
/* WARNING: Removing unreachable block (ram,0x0148bc58) */
/* WARNING: Removing unreachable block (ram,0x0148bd60) */
/* WARNING: Removing unreachable block (ram,0x0148bd70) */
/* WARNING: Removing unreachable block (ram,0x0148bd7c) */

undefined8 FUN_0148a480(undefined4 *param_1,undefined4 *param_2)

{
  float *pfVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  char cVar30;
  byte bVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  long lVar37;
  long *plVar38;
  undefined8 **ppuVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_23c;
  undefined4 local_22c;
  int local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  byte local_1d8;
  undefined4 local_1d4;
  undefined *local_1d0;
  int local_1c8;
  int iStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 ****local_1b0;
  undefined8 ****local_1a8;
  undefined8 local_1a0;
  undefined8 ***local_198;
  undefined8 **local_190;
  undefined8 *local_188;
  undefined8 *local_180 [2];
  undefined8 local_170 [2];
  long local_160 [4];
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  byte local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined4 *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  long local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  int local_ac [3];
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar37 = *(long *)PTR_DAT_04bb43c0;
  uVar16 = FUN_0277d6c4(param_2);
  puVar9 = PTR_DAT_04bc0510;
  lVar35 = *(long *)puVar2;
  if (lVar35 == 0) {
    return 0;
  }
  lVar37 = *(long *)(lVar37 + 0x57e58);
  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
  if (*(uint *)(lVar37 + 0x1d8) <= uVar16) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
    return 0;
  }
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  local_c8 = *param_2;
  local_b8 = (int)((float)(int)(float)param_2[2] / 5.0) - (uint)((float)param_2[2] < 0.0);
  iStack_b4 = (int)((float)(int)(float)param_2[4] / 5.0) - (uint)((float)param_2[4] < 0.0);
  local_c4 = param_2[1];
  if (param_2[6] - 2 < 4) {
    local_1c0 = PTR_DAT_04bc0510 + 0x10;
    local_1b8 = (undefined8 **)CONCAT44(local_c4,*param_2);
    local_1b0 = (undefined8 ****)0x0;
    uVar16 = FUN_0277d6c4(&local_1b8);
    if (*(long *)puVar2 != 0) {
      lVar35 = *(long *)(lVar35 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar35 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar35 = *(long *)PTR_DAT_04bc0428;
        uVar16 = FUN_0277d6c4(&local_c8);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
        if (uVar16 < *(uint *)(lVar35 + 0x1d8)) {
          puVar29 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8);
          if (puVar29 != (uint *)0x0) {
            local_1b0 = (undefined8 ****)puVar29;
          }
        }
      }
    }
    uVar22 = FUN_01ae7a70(&local_1c0);
    if ((uVar22 & 1) == 0) goto LAB_0148a7f0;
    uVar24 = 1;
LAB_0148a7e4:
    FUN_01afca60(&local_1c0,uVar24);
    local_c8 = (int)local_1b8;
    local_c4 = local_1b8._4_4_;
  }
  else if ((uint)param_2[6] < 2) {
    local_1c0 = PTR_DAT_04bc0510 + 0x10;
    local_1b8 = (undefined8 **)CONCAT44(local_c4,*param_2);
    local_1b0 = (undefined8 ****)0x0;
    uVar16 = FUN_0277d6c4(&local_1b8);
    if (*(long *)puVar2 == 0) {
LAB_0148a72c:
      if (local_1b0 != (undefined8 ****)0x0) goto LAB_0148a734;
      uVar16 = 0xbc;
    }
    else {
      lVar35 = *(long *)(lVar35 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if ((*(uint *)(lVar35 + 0x1d8) <= uVar16) ||
         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8) == 0)) goto LAB_0148a72c;
      lVar35 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(&local_c8);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if ((*(uint *)(lVar35 + 0x1d8) <= uVar16) ||
         (puVar29 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8),
         puVar29 == (uint *)0x0)) goto LAB_0148a72c;
      local_1b0 = (undefined8 ****)puVar29;
LAB_0148a734:
      uVar26 = *(uint *)local_1b0;
      uVar16 = 0;
      if ((uVar26 != 0) && (local_1b0 != (undefined8 ****)(ulong)uVar26)) {
        puVar29 = (uint *)((long)local_1b0 - (long)(ulong)uVar26);
        uVar16 = 0;
        if (*puVar29 != 0) {
          uVar16 = puVar29[1];
          if ((uVar16 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar26 = 0;
              if ((ulong)uVar16 != 0) {
                uVar26 = (uint)((ulong)((long)local_1b0 - lVar35) / (ulong)uVar16);
              }
              if (*puVar29 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if ((uVar26 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar16 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar26 * 2),
                 uVar16 < 0xbd)) goto LAB_0148a7c8;
            }
          }
          uVar16 = 0;
        }
      }
    }
LAB_0148a7c8:
    local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar16);
    if ((uVar16 & 0xfffffffd) == 0xa4) {
      uVar24 = 0;
      goto LAB_0148a7e4;
    }
  }
LAB_0148a7f0:
  uVar22 = FUN_0277e158(&local_c8);
  if ((uVar22 & 1) == 0) {
    lVar35 = *(long *)puVar2;
    local_1c0 = puVar9 + 0x10;
    local_1b0 = (undefined8 ****)0x0;
    local_1b8 = (undefined8 **)CONCAT44(local_c4,local_c8);
    uVar16 = FUN_0277d6c4(&local_1b8);
    if (*(long *)puVar2 != 0) {
      lVar35 = *(long *)(lVar35 + 0x57e58);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if ((uVar16 < *(uint *)(lVar35 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
        lVar35 = *(long *)PTR_DAT_04bc0428;
        uVar16 = FUN_0277d6c4(&local_c8);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
        if (uVar16 < *(uint *)(lVar35 + 0x1d8)) {
          puVar29 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8);
          if (puVar29 != (uint *)0x0) {
            local_1b0 = (undefined8 ****)puVar29;
          }
        }
      }
    }
    iVar17 = FUN_0277d6c4(&local_1b8);
    puVar10 = PTR_DAT_04bb27c0;
    if ((iVar17 != 0x2b56) && (lVar35 = *(long *)PTR_DAT_04bb27c0, lVar35 != 0)) {
      uVar16 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
      if ((uVar16 == 0) ||
         (((plVar38 = *(long **)(*(long *)(*(long *)(lVar35 + 0x1c0) + 8) +
                                ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar38 == (long *)0x0 ||
           ((*(uint *)(plVar38 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar38 + 0x46) != uVar16))))
      {
        plVar38 = (long *)0x0;
      }
      if ((*(int *)(lVar35 + 0x288) == 1) || (*(int *)(lVar35 + 0x288) == -1)) {
        plVar23 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar35 = *(long *)puVar10;
        iVar17 = (**(code **)(*plVar23 + 0x60))();
        if (iVar17 < 0x11) {
          uVar16 = 1;
        }
        else {
          if (4 < *(uint *)(lVar35 + 0x5e8)) goto LAB_0148a960;
          uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar35 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0148a960:
        uVar16 = 0;
      }
      if (plVar38 != (long *)0x0) {
        lVar35 = plVar38[0x2a];
        uVar26 = *(uint *)(plVar38 + 0x49);
        if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar17 != 0)) {
          *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7d58);
        }
        uVar18 = (**(code **)(*plVar38 + 0x20))(plVar38,PTR_DAT_04bb7d50);
        if ((((int)lVar35 == 1) && ((uVar18 & uVar16) != 0)) && ((uVar26 >> 4 & 1) != 0)) {
          sVar7 = *(short *)PTR_DAT_04bb6298;
          if (sVar7 == -1) {
LAB_0148aa00:
            if ((*(long *)PTR_DAT_04bb59d8 == 0) || (uVar22 = FUN_0375e36c(), (uVar22 & 1) == 0))
            goto LAB_0148aac4;
          }
          else {
            local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
            puVar29 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
            if (0xff < (uint)(int)sVar7) {
              puVar29 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar29 & 1) == 0) goto LAB_0148aa00;
          }
          puVar11 = PTR_DAT_04bbce88;
          puVar10 = PTR_DAT_04bbce80;
          if ((long *)plVar38[0x16] != plVar38 + 0x15) {
            lVar35 = (long)*(int *)((long)plVar38 + 0xbc);
            plVar23 = (long *)(plVar38[0x16] - lVar35);
            do {
              if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar11), iVar17 != 0)) {
                *(undefined ***)puVar10 = &PTR_LAB_049a5a90;
                __cxa_guard_release(puVar11);
              }
              if ((plVar23 != (long *)0x0) &&
                 (uVar22 = (**(code **)(*plVar23 + 0x10))(plVar23,puVar10), (uVar22 & 1) != 0)) {
                uVar22 = FUN_01499bcc(plVar23,param_2);
                if ((uVar22 & 1) != 0) {
                  return 2;
                }
                break;
              }
              plVar23 = (long *)(*(long *)((long)plVar23 + lVar35 + 8) - lVar35);
            } while (plVar23 != (long *)((long)(plVar38 + 0x15) - lVar35));
          }
        }
      }
    }
  }
LAB_0148aac4:
  lVar35 = *(long *)puVar2;
  local_e0 = puVar9 + 0x10;
  local_d0 = 0;
  local_d8 = local_c8;
  uStack_d4 = local_c4;
  uVar16 = FUN_0277d6c4(&local_d8);
  if (*(long *)puVar2 != 0) {
    lVar35 = *(long *)(lVar35 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar35 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      lVar35 = *(long *)PTR_DAT_04bc0428;
      uVar16 = FUN_0277d6c4(&local_c8);
      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if (uVar16 < *(uint *)(lVar35 + 0x1d8)) {
        lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8);
        if (lVar35 != 0) {
          local_d0 = lVar35;
        }
      }
    }
  }
  iVar17 = FUN_0277d6c4(&local_d8);
  if (iVar17 == 0x2b56) {
    local_1f8 = (undefined *)((ulong)local_1f8 & 0xffffffff00000000);
    local_200 = (undefined *)0x0;
    local_128 = (undefined *)((ulong)local_128 & 0xffffffff00000000);
    local_1b8 = (undefined8 **)CONCAT44(local_1b8._4_4_,(float)iStack_b4 * 5.0 + 2.5);
    local_1c0 = (undefined *)(ulong)(uint)((float)local_b8 * 5.0 + 2.5);
    uVar22 = FUN_021f32f0(&local_1c0,&local_200,&local_128,0,0);
    if ((uVar22 & 1) != 0) {
      local_b8 = (int)((float)(int)((float)local_200 + -2.5) / 5.0) -
                 (uint)((float)local_200 + -2.5 < 0.0);
      iStack_b4 = (int)((float)(int)((float)local_1f8 + -2.5) / 5.0) -
                  (uint)((float)local_1f8 + -2.5 < 0.0);
    }
  }
  puVar10 = PTR_DAT_04bb2720;
  puVar9 = PTR_DAT_04bb2010;
  local_1b8 = (undefined8 **)((ulong)local_1b8 & 0xffffffff00000000);
  local_1c0 = PTR_DAT_04bbfe68 + 0x10;
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
      iVar17 = FUN_006bd550(*puVar36,0);
      puVar36 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar17 != 0x758f7eaf) {
        puVar36 = &DAT_055c04a0;
      }
    }
  }
  local_1b8 = (undefined8 **)CONCAT44(*(undefined4 *)(puVar36 + 7),(int)local_1b8);
  uVar15 = FUN_017baf44();
  local_1b0 = (undefined8 ****)(CONCAT71(local_1b0._1_7_,uVar15) & 0xffffffffffffff01);
  uVar22 = FUN_01a4f798(&local_1c0,1,&local_c0);
  if ((uVar22 & 1) == 0) {
    bVar14 = false;
  }
  else {
    FUN_01a50240(&local_200,&local_1c0,1,&local_c0);
    bVar14 = (short)local_200 == -2;
  }
  uVar22 = FUN_01ae59b0(&local_e0);
  if ((uVar22 & 1) == 0) {
    local_ef = false;
  }
  else {
    local_1c0 = PTR_DAT_04bb2e18 + 0x10;
    local_1b8 = (undefined8 **)0x0;
    FUN_01afb1a0(&local_e0,&local_1c0);
    local_ef = (int)local_1b8 == local_1b8._4_4_;
  }
  iVar21 = iStack_b4;
  iVar17 = local_b8;
  puVar11 = PTR_DAT_04bbc1a0;
  local_100 = puVar9 + 0x10;
  local_22c = 0;
  local_f8 = local_b8;
  iStack_f4 = iStack_b4;
  uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar15 = PTR_DAT_04bb37e0[2];
  uVar5 = PTR_DAT_04bb37e0[3];
  local_23c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  bVar40 = *PTR_DAT_04bb32e0;
  if (7 < bVar40) {
    bVar40 = 0xff;
  }
  iVar19 = param_2[8];
  local_f0 = bVar14;
  local_e8 = param_2;
  if ((iVar19 == 0) || (iVar19 == 2)) {
    local_248 = 0;
    local_258 = 0;
    local_250 = 0;
    bVar14 = false;
  }
  else {
    if (iVar19 != 1) {
      return 1;
    }
    local_120 = puVar9 + 0x10;
    local_108 = 0x100000001;
    local_118 = 0;
    local_128 = PTR_DAT_04bbc1a0 + 0x10;
    iVar19 = param_2[6];
    if (iVar19 - 2U < 4) {
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,iVar19);
      iVar20 = iVar19 + -2;
      if (2 < iVar19 - 3U) {
        iVar20 = 0;
      }
    }
    else {
      iVar20 = param_2[5];
    }
    lVar35 = *(long *)puVar10;
    local_138 = 0;
    puStack_110 = local_120;
    if (lVar35 == 0) {
      puVar36 = &DAT_055c04a0;
    }
    else {
      puVar36 = &DAT_055c04a0;
      if (*(long *)(lVar35 + 0x330) != 0) {
        puVar36 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
        iVar19 = FUN_006bd550(*puVar36,0);
        puVar36 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar19 != 0x758f7eaf) {
          puVar36 = &DAT_055c04a0;
        }
      }
    }
    local_134 = *(undefined4 *)(puVar36 + 7);
    local_130 = FUN_017baf44();
    local_130 = local_130 & 1;
    local_140 = PTR_DAT_04bb3140 + 0x10;
    uVar22 = FUN_01a4f798(&local_140,param_2[6],&local_c0);
    if ((uVar22 & 1) != 0) {
      local_1f8._0_4_ = (float)local_b8;
      local_1f8._4_4_ = iStack_b4;
      local_200 = puVar9 + 0x10;
      FUN_01a5033c(&local_1d0,&local_140,param_2[6],&local_c0,&local_200);
      lVar35 = *(long *)puVar2;
      uVar16 = FUN_0277d6c4(&local_1d0);
      if (*(long *)puVar2 != 0) {
        lVar35 = *(long *)(lVar35 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
        if (((uVar16 < *(uint *)(lVar35 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
           (uVar22 = FUN_0277e158(&local_1d0), (uVar22 & 1) == 0)) {
          FUN_01ad5d04(&local_1c0,&local_1d0);
          iVar20 = FUN_01ae98d0(&local_1c0);
          FUN_01afb480(&local_1c0,&local_128);
          fVar41 = ((float)((int)(float)local_1f8 + (int)local_118) * 5.0 +
                   (float)((int)(float)local_1f8 + (int)local_108) * 5.0 + 5.0) * 0.5;
          fVar43 = ((float)(local_1f8._4_4_ + local_118._4_4_) * 5.0 +
                   (float)(local_1f8._4_4_ + local_108._4_4_) * 5.0 + 5.0) * 0.5;
          iVar17 = ((((int)local_108 - (int)local_118) + 1U | 0xfffffffe) - (uint)(fVar41 < 0.0)) +
                   (int)((float)(int)fVar41 / 5.0) + 1;
          iVar21 = (((local_108._4_4_ - local_118._4_4_) + 1U | 0xfffffffe) - (uint)(fVar43 < 0.0))
                   + (int)((float)(int)fVar43 / 5.0) + 1;
        }
      }
    }
    local_1c0._4_4_ = 0;
    local_1b8 = (undefined8 **)0x0;
    local_1b0 = (undefined8 ****)&local_1a0;
    local_1a0 = (undefined8 ****)&local_190;
    local_190 = local_180;
    local_180[0] = local_170;
    local_170[0] = 0;
    iVar19 = 0;
    if (local_160 != (long *)0x0) {
      iVar19 = 4;
      local_1c0._4_4_ = 4;
      local_1b8 = (undefined8 **)local_160;
    }
    local_1c0._0_4_ = 0;
    local_200 = puVar11 + 0x10;
    local_1f8 = puVar9 + 0x10;
    local_1f0._0_4_ = (int)local_118;
    local_1f0._4_4_ = local_118._4_4_;
    local_1e0 = local_108;
    fVar43 = (float)iVar17 * 5.0 + 2.5;
    fVar41 = (float)iVar21 * 5.0 + 2.5;
    local_1a8 = local_1b0;
    if (param_2[6] - 2 < 4) {
      fVar49 = 1.0;
      fVar42 = 0.0;
      fVar46 = 0.0;
      fVar48 = 0.0;
      fVar44 = 0.0;
      iVar17 = (int)local_108;
    }
    else {
      uVar22 = (ulong)((float)iVar20 * 90.0 * 11930465.0);
      uVar16 = (uint)uVar22;
      local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,-uVar16);
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar22 >> 0x18 & 0xff) * 0x10);
      fVar42 = (float)(uVar16 & 0xffffff) * 5.9604645e-08;
      fVar46 = *pfVar1 + fVar42 * pfVar1[1];
      fVar49 = pfVar1[2] + fVar42 * pfVar1[3];
      fVar48 = -(pfVar1[1] * fVar42) - *pfVar1;
      fVar42 = fVar46 * 0.0;
      fVar44 = fVar49 * 0.0;
      fVar46 = fVar46 + 0.0;
      local_1e8 = local_1f8;
      FUN_012e1f40(&local_200,&local_1d0);
      iVar17 = (int)local_1e0;
      iVar19 = local_1c0._4_4_;
    }
    ppppuVar13 = local_1b0;
    fVar45 = (float)((iVar17 - (int)local_1f0) + 1) * 5.0;
    fVar42 = fVar42 * 0.0;
    fVar44 = fVar44 * 0.0;
    fVar47 = fVar43 + fVar42 + fVar45 * fVar49 + fVar46 * 0.0;
    fVar45 = fVar41 + fVar44 + fVar45 * fVar48 + fVar49 * 0.0;
    if ((int)(uint)local_1c0 < iVar19) {
      if (local_1b0 != (undefined8 ****)0x0) {
        local_1b0 = (undefined8 ****)*local_1b0;
      }
      *(uint *)(ppppuVar13 + 1) = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
      *(uint *)((long)ppppuVar13 + 0xc) = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
      *ppppuVar13 = (undefined8 ***)(puVar9 + 0x10);
      if ((int)(uint)local_1c0 < (int)local_1c0._4_4_) {
        local_1b8[(int)(uint)local_1c0] = ppppuVar13;
        local_1c0._0_4_ = (uint)local_1c0 + 1;
        iVar19 = local_1c0._4_4_;
      }
      else {
        iVar19 = local_1c0._4_4_;
      }
    }
    ppppuVar13 = local_1b0;
    fVar45 = (float)(((int)local_1e0 - (int)local_1f0) + 1) * -5.0;
    fVar47 = fVar43 + fVar42 + fVar45 * fVar49 + fVar46 * 0.0;
    fVar45 = fVar41 + fVar44 + fVar45 * fVar48 + fVar49 * 0.0;
    if ((int)(uint)local_1c0 < iVar19) {
      if (local_1b0 != (undefined8 ****)0x0) {
        local_1b0 = (undefined8 ****)*local_1b0;
      }
      *(uint *)(ppppuVar13 + 1) = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
      *(uint *)((long)ppppuVar13 + 0xc) = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
      *ppppuVar13 = (undefined8 ***)(puVar9 + 0x10);
      if ((int)(uint)local_1c0 < (int)local_1c0._4_4_) {
        local_1b8[(int)(uint)local_1c0] = ppppuVar13;
        local_1c0._0_4_ = (uint)local_1c0 + 1;
        iVar19 = local_1c0._4_4_;
      }
      else {
        iVar19 = local_1c0._4_4_;
      }
    }
    ppppuVar13 = local_1b0;
    fVar42 = fVar42 + fVar49 * 0.0;
    fVar44 = fVar44 + fVar48 * 0.0;
    fVar48 = (float)((local_1e0._4_4_ - local_1f0._4_4_) + 1) * 5.0;
    fVar45 = fVar43 + fVar42 + fVar48 * fVar46;
    fVar48 = fVar41 + fVar44 + fVar48 * fVar49;
    if ((int)(uint)local_1c0 < iVar19) {
      if (local_1b0 != (undefined8 ****)0x0) {
        local_1b0 = (undefined8 ****)*local_1b0;
      }
      *(uint *)(ppppuVar13 + 1) = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
      *(uint *)((long)ppppuVar13 + 0xc) = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
      *ppppuVar13 = (undefined8 ***)(puVar9 + 0x10);
      if ((int)(uint)local_1c0 < (int)local_1c0._4_4_) {
        local_1b8[(int)(uint)local_1c0] = ppppuVar13;
        local_1c0._0_4_ = (uint)local_1c0 + 1;
        iVar19 = local_1c0._4_4_;
      }
      else {
        iVar19 = local_1c0._4_4_;
      }
    }
    ppppuVar13 = local_1b0;
    fVar48 = (float)((local_1e0._4_4_ - local_1f0._4_4_) + 1) * -5.0;
    fVar43 = fVar43 + fVar42 + fVar48 * fVar46;
    fVar41 = fVar41 + fVar44 + fVar48 * fVar49;
    if ((int)(uint)local_1c0 < iVar19) {
      if (local_1b0 != (undefined8 ****)0x0) {
        local_1b0 = (undefined8 ****)*local_1b0;
      }
      *(uint *)(ppppuVar13 + 1) = (int)((float)(int)fVar43 / 5.0) - (uint)(fVar43 < 0.0);
      *(uint *)((long)ppppuVar13 + 0xc) = (int)((float)(int)fVar41 / 5.0) - (uint)(fVar41 < 0.0);
      *ppppuVar13 = (undefined8 ***)(puVar9 + 0x10);
      if ((int)(uint)local_1c0 < (int)local_1c0._4_4_) {
        local_1b8[(int)(uint)local_1c0] = ppppuVar13;
        local_1c0._0_4_ = (uint)local_1c0 + 1;
      }
    }
    if ((uint)local_1c0 == 0) {
      local_22c = 0;
      local_258 = 0;
      bVar14 = false;
      local_250 = 0;
      local_248 = 0;
    }
    else {
      bVar14 = false;
      lVar35 = (long)(int)(uint)local_1c0 << 3;
      local_22c = 0;
      local_250 = 0;
      local_248 = 0;
      local_258 = 0;
      plVar38 = (long *)local_1b8;
      do {
        iVar17 = *(int *)(*plVar38 + 8);
        iVar21 = *(int *)(*plVar38 + 0xc);
        local_1f0 = 0;
        local_200 = *(undefined **)PTR_DAT_04bb37e0;
        local_1e8 = (undefined *)0x0;
        local_1e0 = 0;
        local_1d4 = 0;
        local_1d8 = *PTR_DAT_04bb32e0;
        if (7 < local_1d8) {
          local_1d8 = 0xff;
        }
        local_1f8 = puVar9 + 0x10;
        local_1d0 = puVar9 + 0x10;
        local_1c8 = iVar17;
        iStack_1c4 = iVar21;
        local_ac[0] = FUN_01ae98d0(&local_e0);
        iVar19 = FUN_0148bf70(&local_100,&local_200,&local_c8,local_ac,&local_1d0,&local_e0,param_2)
        ;
        if (iVar19 == 9) {
          if (*(char *)(param_2 + 9) != '\0') {
            fVar43 = (float)local_b8 * 0.5;
            fVar41 = (float)iStack_b4 * 0.5;
            uVar16 = 0;
            if (fVar43 != (float)(int)fVar43) {
              uVar16 = (uint)(fVar43 < 0.0);
            }
            uVar26 = 0;
            if (fVar41 != (float)(int)fVar41) {
              uVar26 = (uint)(fVar41 < 0.0);
            }
            lVar37 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
            cVar30 = '\0';
            if (lVar37 != 0) {
              lVar37 = *(long *)(lVar37 + 0xb0);
              cVar30 = '\0';
              if (lVar37 != 0) {
                uVar18 = ((int)fVar43 - uVar16) - *(int *)(lVar37 + 0x28);
                uVar32 = *(uint *)(lVar37 + 0x18);
                uVar33 = ((int)fVar41 - uVar26) - *(int *)(lVar37 + 0x2c);
                if ((uVar18 < uVar32 && uVar33 <= *(uint *)(lVar37 + 0x1c)) &&
                    (uVar32 <= uVar18 || *(uint *)(lVar37 + 0x1c) != uVar33)) {
                  uVar18 = uVar18 + uVar32 * uVar33;
LAB_0148b5f4:
                  if (*(uint *)(lVar37 + 0x30) <= uVar18) {
                    uVar18 = 0;
                  }
                  puVar36 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)(int)uVar18 * 0x68);
                }
                else if (*(char *)(lVar37 + 0x88) == '\0') {
                  puVar36 = &DAT_051a50f0;
                }
                else {
                  uVar16 = ((int)fVar43 - uVar16) - *(int *)(lVar37 + 0x98);
                  uVar26 = ((int)fVar41 - uVar26) - *(int *)(lVar37 + 0x9c);
                  puVar36 = &DAT_051a50f0;
                  if (uVar16 < *(uint *)(lVar37 + 0xa0) && uVar26 < *(uint *)(lVar37 + 0xa4)) {
                    uVar18 = uVar16 + *(uint *)(lVar37 + 0xa0) * uVar26 + *(int *)(lVar37 + 0x8c);
                    goto LAB_0148b5f4;
                  }
                }
                cVar30 = *(char *)(puVar36 + 2);
              }
            }
            local_ac[0] = 0;
            fVar41 = (float)iVar17 * 0.5;
            uVar16 = 0;
            if (fVar41 != (float)(int)fVar41) {
              uVar16 = (uint)(fVar41 < 0.0);
            }
            fVar43 = (float)iVar21 * 0.5;
            uVar26 = 0;
            if (fVar43 != (float)(int)fVar43) {
              uVar26 = (uint)(fVar43 < 0.0);
            }
            lVar37 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
            cVar25 = '\0';
            if (lVar37 != 0) {
              lVar37 = *(long *)(lVar37 + 0xb0);
              cVar25 = '\0';
              if (lVar37 != 0) {
                uVar18 = ((int)fVar41 - uVar16) - *(int *)(lVar37 + 0x28);
                uVar32 = *(uint *)(lVar37 + 0x18);
                uVar33 = ((int)fVar43 - uVar26) - *(int *)(lVar37 + 0x2c);
                if ((uVar18 < uVar32 && uVar33 <= *(uint *)(lVar37 + 0x1c)) &&
                    (uVar32 <= uVar18 || *(uint *)(lVar37 + 0x1c) != uVar33)) {
                  uVar18 = uVar18 + uVar32 * uVar33;
LAB_0148b71c:
                  if (*(uint *)(lVar37 + 0x30) <= uVar18) {
                    uVar18 = 0;
                  }
                  puVar36 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)(int)uVar18 * 0x68);
                }
                else {
                  if (*(char *)(lVar37 + 0x88) != '\0') {
                    uVar16 = ((int)fVar41 - uVar16) - *(int *)(lVar37 + 0x98);
                    if (uVar16 < *(uint *)(lVar37 + 0xa0)) {
                      uVar26 = ((int)fVar43 - uVar26) - *(int *)(lVar37 + 0x9c);
                      puVar36 = &DAT_051a50f0;
                      if (uVar26 < *(uint *)(lVar37 + 0xa4)) {
                        uVar18 = uVar16 + *(uint *)(lVar37 + 0xa0) * uVar26 +
                                 *(int *)(lVar37 + 0x8c);
                        goto LAB_0148b71c;
                      }
                      goto LAB_0148b740;
                    }
                  }
                  puVar36 = &DAT_051a50f0;
                }
LAB_0148b740:
                cVar25 = *(char *)(puVar36 + 2);
              }
            }
            if (cVar30 != cVar25) {
              if (!bVar14) {
                bVar14 = true;
                local_23c = local_200._4_4_;
                local_22c = (int)local_1f0;
                local_250 = CONCAT44((int)local_1e0,local_1e8._4_4_);
                local_248 = CONCAT44(local_1f0._4_4_,local_1e0._4_4_);
                bVar40 = local_1d8;
                if (7 < local_1d8) {
                  bVar40 = 0xff;
                }
                local_258 = CONCAT44((int)local_1e8,local_1d4);
                uVar15 = local_200._2_1_;
                uVar6 = (short)local_200;
                uVar5 = local_200._3_1_;
              }
              goto LAB_0148b460;
            }
          }
          bVar3 = false;
          *param_1 = (float)local_200;
          param_1[1] = local_200._4_4_;
          *(undefined **)(param_1 + 6) = local_1e8;
          param_1[4] = (int)local_1f0;
          param_1[5] = local_1f0._4_4_;
          param_1[8] = (int)local_1e0;
          param_1[9] = local_1e0._4_4_;
          bVar31 = local_1d8;
          if (7 < local_1d8) {
            bVar31 = 0xff;
          }
          *(byte *)(param_1 + 10) = bVar31;
          param_1[0xb] = local_1d4;
          goto LAB_0148b818;
        }
LAB_0148b460:
        plVar38 = plVar38 + 1;
        lVar35 = lVar35 + -8;
      } while (lVar35 != 0);
      bVar3 = true;
LAB_0148b818:
      if (0 < (int)(uint)local_1c0) {
        lVar35 = 0;
        do {
          (**(code **)*local_1b8[lVar35])();
          lVar35 = lVar35 + 1;
        } while (lVar35 < (int)(uint)local_1c0);
      }
      if (!bVar3) {
        return 9;
      }
    }
  }
  local_1c0._4_4_ = 0;
  local_1b8 = (undefined8 **)0x0;
  local_198 = &local_190;
  local_1a8 = (undefined8 ****)&local_1a0;
  local_190 = &local_188;
  local_188 = (undefined8 *)0x0;
  if (local_180 == (undefined8 **)0x0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 4;
    local_1c0._4_4_ = 4;
    local_1b8 = local_180;
  }
  local_1c0._0_4_ = 0;
  iVar17 = param_2[6];
  local_1a0._4_4_ = (undefined4)((ulong)&local_198 >> 0x20);
  local_1b0 = local_1a8;
  ppppuVar13 = &local_198;
  if (iVar17 - 2U < 4) {
    if (local_180 == (undefined8 **)0x0) goto LAB_0148b994;
    iVar21 = iVar17 + -2;
    if (2 < iVar17 - 3U) {
      iVar21 = 0;
    }
    local_1a0 = (undefined8 ****)CONCAT44(local_1a0._4_4_,iVar21);
    *local_1b8 = local_1a8;
    local_1b0 = &local_198;
  }
  else if (param_2[8] == 2) {
    if (local_180 == (undefined8 **)0x0) goto LAB_0148b994;
    local_1a0 = (undefined8 ****)CONCAT44(local_1a0._4_4_,param_2[5]);
    *local_1b8 = local_1a8;
    local_1b0 = &local_198;
  }
  else {
    bVar3 = local_180 != (undefined8 **)0x0;
    if (bVar3) {
      local_1a0 = (undefined8 ****)CONCAT44(local_1a0._4_4_,param_2[5]);
      *local_1b8 = local_1a8;
      uVar16 = local_1c0._4_4_;
      local_1b0 = &local_198;
      ppppuVar13 = local_1a0;
    }
    local_1a0 = ppppuVar13;
    ppppuVar12 = local_1b0;
    local_1c0._0_4_ = (uint)bVar3;
    uVar18 = -(param_2[5] + 1);
    uVar26 = param_2[5] + 1 & 3;
    if (-1 < (int)uVar18) {
      uVar26 = -(uVar18 & 3);
    }
    ppppuVar13 = local_1a0;
    if (uVar16 <= bVar3) goto LAB_0148b994;
    if (local_1b0 != (undefined8 ****)0x0) {
      local_1b0 = (undefined8 ****)*local_1b0;
    }
    *(uint *)ppppuVar12 = uVar26;
    ppppuVar13 = local_1a0;
    if (local_1c0._4_4_ <= (uint)local_1c0) goto LAB_0148b994;
    local_1b8[(int)(uint)local_1c0] = ppppuVar12;
  }
  local_1c0._0_4_ = (uint)local_1c0 + 1;
  ppppuVar13 = local_1a0;
LAB_0148b994:
  local_1a0 = ppppuVar13;
  local_210 = 0;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  do {
    if ((uint)local_1c0 != 0) {
      lVar35 = (long)(int)(uint)local_1c0 << 3;
      fVar41 = SQRT((float)(local_210 + 1U));
      uVar16 = (uint)fVar41;
      if (fVar41 != (float)(int)fVar41) {
        uVar16 = uVar16 + 1;
      }
      uVar26 = uVar16 & 0xfffffffe;
      uVar18 = uVar16 >> 1;
      iVar17 = (uVar16 | 1) * (uVar16 | 1) - (local_210 + 1U);
      if (uVar16 < 2) {
        uVar26 = 1;
      }
      uVar16 = uVar18;
      if ((int)(uVar26 * 4) <= iVar17) {
        uVar16 = 0;
      }
      ppuVar39 = local_1b8;
      do {
        uVar32 = *(uint *)(PTR_DAT_04bb2e10 + 8);
        uVar33 = *(uint *)(PTR_DAT_04bb2e10 + 0xc);
        if (local_210 != 0) {
          iVar21 = 0;
          if (uVar26 != 0) {
            iVar21 = iVar17 / (int)uVar26;
          }
          iVar21 = iVar17 - iVar21 * uVar26;
          uVar28 = iVar21 - uVar18;
          uVar34 = uVar18 - iVar21;
          uVar27 = uVar28;
          if ((int)(uVar26 * 4) <= iVar17) {
            uVar27 = 0;
          }
          uVar4 = -uVar18;
          if ((int)(uVar26 * 3) <= iVar17) {
            uVar4 = uVar27;
            uVar28 = uVar16;
          }
          if (iVar17 < (int)(uVar26 * 2)) {
            uVar28 = -uVar18;
            uVar4 = uVar34;
          }
          if (iVar17 < (int)uVar26) {
            uVar4 = uVar18;
            uVar28 = uVar34;
          }
          if (*(uint *)*local_1b8 < 4) {
            uVar32 = -uVar4;
            uVar33 = uVar28;
            switch(*(uint *)*local_1b8) {
            case 1:
              uVar32 = uVar28;
              uVar33 = uVar4;
              break;
            case 2:
              uVar32 = uVar4;
              uVar33 = -uVar28;
              break;
            case 3:
              uVar32 = -uVar28;
              uVar33 = -uVar4;
            }
          }
        }
        local_1f0 = 0;
        local_1d8 = *PTR_DAT_04bb32e0;
        local_1e8 = (undefined *)0x0;
        local_1e0 = 0;
        local_1d4 = 0;
        local_200 = *(undefined **)PTR_DAT_04bb37e0;
        if (7 < local_1d8) {
          local_1d8 = 0xff;
        }
        local_120 = (undefined *)CONCAT44(iStack_b4 + uVar33,local_b8 + uVar32);
        local_1f8 = puVar2;
        local_128 = puVar2;
        iVar21 = FUN_0148bf70(&local_100,&local_200,&local_c8,*ppuVar39,&local_128,&local_e0,param_2
                             );
        local_140 = (undefined *)CONCAT44(local_140._4_4_,iVar21);
        if (iVar21 == 9) {
          if (*(char *)(param_2 + 9) == '\0') goto LAB_0148bee0;
          fVar43 = (float)local_b8 * 0.5;
          fVar41 = (float)iStack_b4 * 0.5;
          uVar27 = 0;
          if (fVar43 != (float)(int)fVar43) {
            uVar27 = (uint)(fVar43 < 0.0);
          }
          uVar28 = 0;
          if (fVar41 != (float)(int)fVar41) {
            uVar28 = (uint)(fVar41 < 0.0);
          }
          lVar37 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          iVar21 = 0;
          if (lVar37 != 0) {
            lVar37 = *(long *)(lVar37 + 0xb0);
            iVar21 = 0;
            if (lVar37 != 0) {
              uVar34 = ((int)fVar43 - uVar27) - *(int *)(lVar37 + 0x28);
              uVar4 = *(uint *)(lVar37 + 0x18);
              uVar8 = ((int)fVar41 - uVar28) - *(int *)(lVar37 + 0x2c);
              if ((uVar34 < uVar4 && uVar8 <= *(uint *)(lVar37 + 0x1c)) &&
                  (uVar4 <= uVar34 || *(uint *)(lVar37 + 0x1c) != uVar8)) {
                uVar34 = uVar34 + uVar4 * uVar8;
LAB_0148bcdc:
                if (*(uint *)(lVar37 + 0x30) <= uVar34) {
                  uVar34 = 0;
                }
                puVar36 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)(int)uVar34 * 0x68);
              }
              else if (*(char *)(lVar37 + 0x88) == '\0') {
                puVar36 = &DAT_051a50f0;
              }
              else {
                uVar27 = ((int)fVar43 - uVar27) - *(int *)(lVar37 + 0x98);
                uVar28 = ((int)fVar41 - uVar28) - *(int *)(lVar37 + 0x9c);
                puVar36 = &DAT_051a50f0;
                if (uVar27 < *(uint *)(lVar37 + 0xa0) && uVar28 < *(uint *)(lVar37 + 0xa4)) {
                  uVar34 = uVar27 + *(uint *)(lVar37 + 0xa0) * uVar28 + *(int *)(lVar37 + 0x8c);
                  goto LAB_0148bcdc;
                }
              }
              iVar21 = (int)*(char *)(puVar36 + 2);
            }
          }
          local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,iVar21);
          fVar41 = (float)(int)(local_b8 + uVar32) * 0.5;
          uVar32 = 0;
          if (fVar41 != (float)(int)fVar41) {
            uVar32 = (uint)(fVar41 < 0.0);
          }
          fVar43 = (float)(int)(iStack_b4 + uVar33) * 0.5;
          uVar33 = 0;
          if (fVar43 != (float)(int)fVar43) {
            uVar33 = (uint)(fVar43 < 0.0);
          }
          lVar37 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          local_ac[0] = 0;
          if (lVar37 != 0) {
            lVar37 = *(long *)(lVar37 + 0xb0);
            local_ac[0] = 0;
            if (lVar37 != 0) {
              uVar27 = ((int)fVar41 - uVar32) - *(int *)(lVar37 + 0x28);
              uVar28 = *(uint *)(lVar37 + 0x18);
              uVar34 = ((int)fVar43 - uVar33) - *(int *)(lVar37 + 0x2c);
              if ((uVar27 < uVar28 && uVar34 <= *(uint *)(lVar37 + 0x1c)) &&
                  (uVar28 <= uVar27 || *(uint *)(lVar37 + 0x1c) != uVar34)) {
                uVar27 = uVar27 + uVar28 * uVar34;
LAB_0148be0c:
                if (*(uint *)(lVar37 + 0x30) <= uVar27) {
                  uVar27 = 0;
                }
                puVar36 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)(int)uVar27 * 0x68);
              }
              else {
                if (*(char *)(lVar37 + 0x88) != '\0') {
                  uVar32 = ((int)fVar41 - uVar32) - *(int *)(lVar37 + 0x98);
                  if (uVar32 < *(uint *)(lVar37 + 0xa0)) {
                    uVar33 = ((int)fVar43 - uVar33) - *(int *)(lVar37 + 0x9c);
                    puVar36 = &DAT_051a50f0;
                    if (uVar33 < *(uint *)(lVar37 + 0xa4)) {
                      uVar27 = uVar32 + *(uint *)(lVar37 + 0xa0) * uVar33 + *(int *)(lVar37 + 0x8c);
                      goto LAB_0148be0c;
                    }
                    goto LAB_0148be30;
                  }
                }
                puVar36 = &DAT_051a50f0;
              }
LAB_0148be30:
              local_ac[0] = (int)*(char *)(puVar36 + 2);
            }
          }
          if (iVar21 == local_ac[0]) {
LAB_0148bee0:
            *param_1 = (float)local_200;
            param_1[1] = local_200._4_4_;
            *(undefined **)(param_1 + 6) = local_1e8;
            param_1[4] = (int)local_1f0;
            param_1[5] = local_1f0._4_4_;
            param_1[8] = (int)local_1e0;
            param_1[9] = local_1e0._4_4_;
            if (7 < local_1d8) {
              local_1d8 = 0xff;
            }
            *(byte *)(param_1 + 10) = local_1d8;
            param_1[0xb] = local_1d4;
            return 9;
          }
          if (bVar14) {
            bVar14 = true;
          }
          else {
            local_23c = local_200._4_4_;
            local_22c = (int)local_1f0;
            local_250 = CONCAT44((int)local_1e0,local_1e8._4_4_);
            local_248 = CONCAT44(local_1f0._4_4_,local_1e0._4_4_);
            bVar40 = local_1d8;
            if (7 < local_1d8) {
              bVar40 = 0xff;
            }
            bVar14 = true;
            local_258 = CONCAT44((int)local_1e8,local_1d4);
            uVar15 = local_200._2_1_;
            uVar6 = (short)local_200;
            uVar5 = local_200._3_1_;
          }
        }
        ppuVar39 = ppuVar39 + 1;
        lVar35 = lVar35 + -8;
      } while (lVar35 != 0);
    }
    local_210 = local_210 + 1;
    if (local_210 == 0x1000) {
      if (bVar14) {
        *(undefined2 *)param_1 = uVar6;
        *(undefined1 *)((long)param_1 + 2) = uVar15;
        *(undefined1 *)((long)param_1 + 3) = uVar5;
        param_1[1] = local_23c;
        param_1[4] = local_22c;
        param_1[5] = local_248._4_4_;
        param_1[6] = local_258._4_4_;
        param_1[7] = (undefined4)local_250;
        param_1[8] = local_250._4_4_;
        param_1[9] = (undefined4)local_248;
        if (7 < bVar40) {
          bVar40 = 0xff;
        }
        *(byte *)(param_1 + 10) = bVar40;
        param_1[0xb] = (undefined4)local_258;
        return 9;
      }
      return 1;
    }
  } while( true );
}

