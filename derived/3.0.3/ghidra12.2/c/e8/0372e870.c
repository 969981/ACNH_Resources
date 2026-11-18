
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0372e870(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  float *pfVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  int iVar22;
  short *psVar23;
  undefined8 *puVar24;
  uint uVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  long local_e8;
  undefined8 *puStack_e0;
  long *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  int local_64;
  
  local_64 = param_2;
  uVar15 = FUN_0372e2d0(param_1,param_2);
  if ((uVar15 & 1) == 0) {
    return;
  }
  uVar13 = FUN_0372dfb0(param_1,param_2);
  puVar7 = PTR_DAT_04bbc1a0;
  puVar6 = PTR_DAT_04bb2010;
  local_80 = 0;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  lVar19 = *(long *)PTR_DAT_04bb2720;
  local_78 = puStack_88;
  if (lVar19 == 0) {
    puVar24 = &DAT_055c04a0;
  }
  else {
    puVar24 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar14 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar24 + 7) == -0x17df00c3) {
    lVar19 = *(long *)PTR_DAT_04bb59d8;
    if (lVar19 != 0) {
      local_80 = *(undefined8 *)(lVar19 + 0x50);
      local_70 = *(undefined8 *)(lVar19 + 0x60);
    }
  }
  else {
    FUN_01811430(&local_90);
  }
  local_b8 = puVar7 + 0x10;
  puStack_b0 = puVar6 + 0x10;
  local_a8 = 0;
  local_c0 = 0.0;
  local_c8 = 0;
  local_98 = 0;
  local_a0 = puStack_b0;
  pfVar16 = (float *)FUN_0252d9bc(0);
  puVar6 = PTR_DAT_04bb4718;
  if (pfVar16 == (float *)0x0) goto LAB_0372ece0;
  local_c8 = *(undefined8 *)pfVar16;
  local_c0 = pfVar16[2];
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_0372ea24:
    if (*pbVar20 < 8) goto LAB_0372ea90;
LAB_0372ea30:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0372ea88:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_0372ea90;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar12 = *(byte *)(lVar19 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar12 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
      if (7 < bVar12) {
        puVar3 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar20 = (byte *)(lVar19 + 0x471);
      }
    }
    uVar25 = (uint)*pbVar20;
    if (7 < *pbVar20) goto LAB_0372ea88;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0372ea24;
      }
      goto LAB_0372ea30;
    }
LAB_0372ea90:
    uVar25 = (uint)*pbVar20;
    if (7 < uVar25) {
      uVar25 = 0xff;
    }
  }
  lVar19 = *(long *)PTR_DAT_04bb4718;
  if ((lVar19 == 0) || (7 < uVar25)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar23 = &DAT_054f0c08;
      if (iVar14 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar23 = &DAT_054f0c08;
    }
  }
  else {
    psVar23 = (short *)(lVar19 + (ulong)uVar25 * 0xd0 +
                        (ulong)(*(uint *)(lVar19 + (ulong)uVar25 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  puVar7 = PTR_DAT_04bb6298;
  if (((char)psVar23[0x32] == '\0') || (*psVar23 != *(short *)PTR_DAT_04bb6298)) {
    bVar10 = false;
  }
  else {
    bVar10 = *(int *)(psVar23 + 0x30) == 7;
  }
  bVar12 = FUN_0245bbd8(pfVar16);
  lVar19 = *(long *)puVar6;
  if ((lVar19 == 0) || (7 < uVar25)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar23 = &DAT_054f0c08;
      if (iVar14 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar23 = &DAT_054f0c08;
    }
  }
  else {
    psVar23 = (short *)(lVar19 + (ulong)uVar25 * 0xd0 +
                        (ulong)(*(uint *)(lVar19 + (ulong)uVar25 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((((char)psVar23[0x32] == '\0') || (*psVar23 != *(short *)puVar7)) ||
      (0x148 < *(uint *)(psVar23 + 2))) || (*(uint *)(psVar23 + 2) != 0xf3)) {
    lVar19 = *(long *)puVar6;
    if ((lVar19 == 0) || (7 < uVar25)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar23 = &DAT_054f0c08;
        if (iVar14 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar23 = &DAT_054f0c08;
      }
    }
    else {
      psVar23 = (short *)(lVar19 + (ulong)uVar25 * 0xd0 +
                          (ulong)(*(uint *)(lVar19 + (ulong)uVar25 * 4 + 0xd68) & 1) * 0x68 + 0x6e8)
      ;
    }
    if ((((char)psVar23[0x32] == '\0') || (*psVar23 != *(short *)puVar7)) ||
       (uVar25 = *(uint *)(psVar23 + 2), 0x148 < uVar25)) {
      uVar25 = 0;
    }
    bVar11 = uVar25 == 0xf2;
  }
  else {
    bVar11 = true;
  }
  fVar28 = *pfVar16;
  if ((byte)(bVar10 | bVar12 & bVar11) == 1) {
    iVar14 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
    iVar22 = (int)((float)(int)pfVar16[2] / 5.0) - (uint)(pfVar16[2] < 0.0);
    local_a8 = CONCAT44(iVar22,iVar14);
  }
  else {
    iVar14 = (int)((float)(int)(fVar28 + -2.5) / 5.0) - (uint)(fVar28 + -2.5 < 0.0);
    iVar22 = (int)((float)(int)(pfVar16[2] + -2.5) / 5.0) - (uint)(pfVar16[2] + -2.5 < 0.0);
    local_a8 = CONCAT44(iVar22,iVar14);
    iVar14 = iVar14 + 1;
    iVar22 = iVar22 + 1;
  }
  local_98 = CONCAT44(iVar22,iVar14);
LAB_0372ece0:
  puVar8 = PTR_DAT_04bb6718;
  puVar7 = PTR_DAT_04bb6710;
  puVar6 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar26 = *(long **)(param_1 + 0xe8);
    lVar19 = (long)*(int *)(param_1 + 0xe0) << 3;
    puVar1 = PTR_DAT_04bb6718 + 0x10;
    puVar2 = PTR_DAT_04bb3750 + 0x10;
    do {
      uVar4 = *(ushort *)(*plVar26 + 0x114);
      if ((((uVar4 & 1) == 0) &&
          ((((uVar4 >> 5 & 1) == 0 || (local_64 != 1)) && ((uVar4 & 0x20) != 0 || local_64 != 0))))
         && (uVar25 = *(uint *)(*plVar26 + 8), uVar25 != 0)) {
        lVar21 = *(long *)puVar6;
        local_d8 = (long *)0x0;
        local_d0 = 0x100;
        if (lVar21 == 0) {
LAB_0372ee84:
          uVar25 = 0;
          local_d0._0_2_ = (ushort)(byte)local_d0;
        }
        else {
          plVar27 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                              ((ulong)(uVar25 >> 0x11) & 0x7ff8));
          if (((plVar27 == (long *)0x0) || ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) ||
             (*(uint *)(plVar27 + 0x46) != uVar25)) {
            plVar27 = (long *)0x0;
          }
          local_d8 = plVar27;
          if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
            plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar21 = *(long *)puVar6;
            iVar14 = (**(code **)(*plVar17 + 0x60))();
            if ((0x10 < iVar14) &&
               ((uVar25 = *(uint *)(lVar21 + 0x5e8), 4 < uVar25 ||
                ((1 << (ulong)(uVar25 & 0x1f) & 0x1aU) == 0)))) goto LAB_0372ee24;
            uVar25 = 1;
            uVar5 = local_d0;
          }
          else {
LAB_0372ee24:
            uVar25 = 0;
            local_d0._0_2_ = (ushort)(byte)local_d0;
            uVar5 = local_d0;
          }
          local_d0 = uVar5;
          if (plVar27 != (long *)0x0) {
            local_d0 = CONCAT31((int3)(uVar5 >> 8),(int)plVar27[0x2a] == 1);
            uVar9 = local_d0;
            local_d0._3_1_ = (undefined1)(uVar5 >> 0x18);
            local_d0._0_2_ = (ushort)uVar9;
            local_d0 = CONCAT13(local_d0._3_1_,
                                CONCAT12((char)(*(uint *)(plVar27 + 0x49) >> 4),(ushort)local_d0)) &
                       0xff01ffff;
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar15 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0);
            if ((uVar15 & 1) == 0) goto LAB_0372ee84;
            uVar25 = local_d0 >> 8 & 0xff;
          }
        }
        if (((local_d8 != (long *)0x0) && ((byte)local_d0 != '\0')) && (uVar25 != 0)) {
          plVar27 = (long *)local_d8[0x77];
          local_e8 = param_1;
          puStack_e0 = &local_c8;
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            *(undefined **)PTR_DAT_04bb6708 = puVar1;
            __cxa_guard_release(puVar7);
          }
          if ((plVar27 == (long *)0x0) ||
             (uVar15 = (**(code **)*plVar27)(plVar27,PTR_DAT_04bb6708), (uVar15 & 1) == 0)) {
            plVar27 = (long *)local_d8[0x77];
            if (((*PTR_DAT_04bc2458 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_04bc2458), iVar14 != 0)) {
              *(undefined **)PTR_DAT_04bc2450 = puVar8 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc2458);
            }
            if ((plVar27 != (long *)0x0) &&
               (uVar15 = (**(code **)*plVar27)(plVar27,PTR_DAT_04bc2450), (uVar15 & 1) != 0)) {
              if ((uVar13 & 1) == 0) {
                FUN_0372f1e0(&local_e8,&local_d8,&local_b8,&local_90);
                uVar15 = FUN_01ff20a4(plVar27);
                if ((uVar15 & 1) != 0) {
                  lVar21 = *plVar27;
                  uVar18 = 0x3f;
                  goto LAB_0372efec;
                }
              }
              else {
                FUN_01ff1fcc(plVar27);
              }
            }
          }
          else {
            if ((uVar13 & 1) != 0) {
              FUN_01fa7d80(plVar27);
              goto LAB_0372ed34;
            }
            FUN_0372f1e0(&local_e8,&local_d8,&local_b8,&local_90);
            iVar14 = *(int *)((long)plVar27 + 0x77f4);
            iVar22 = (int)plVar27[0xef6];
            if (iVar14 == 0x10) {
              bVar10 = false;
LAB_0372efcc:
              if ((*(ushort *)((long)plVar27 + 0xaf64) & 0x40) == 0) {
                bVar10 = true;
              }
              if ((iVar22 != 0x4b) && (bVar10)) goto LAB_0372ed34;
            }
            else {
              bVar10 = iVar22 != 0x10 && (iVar14 != 0x4c && iVar22 != 0x4c);
              if (iVar14 != 0x4b) goto LAB_0372efcc;
            }
            lVar21 = *plVar27;
            uVar18 = 0x4c;
LAB_0372efec:
            (**(code **)(lVar21 + 0x38))(plVar27,uVar18,0,0);
          }
        }
      }
LAB_0372ed34:
      plVar26 = plVar26 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
  return;
}

