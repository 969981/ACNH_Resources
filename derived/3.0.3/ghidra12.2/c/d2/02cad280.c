
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02cad280(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *******pppppppuVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  float *pfVar12;
  undefined4 *puVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined *puVar24;
  long *plVar25;
  long *plVar26;
  int iVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 *******local_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******local_150;
  undefined8 *******local_148;
  undefined8 ******local_140;
  undefined8 *****local_138;
  undefined8 ****local_130;
  undefined8 ***local_128;
  undefined8 **local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108 [9];
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  
  puVar24 = PTR_DAT_04bb2200;
  lVar20 = *(long *)PTR_DAT_04bb2200;
  if ((lVar20 == 0) || (lVar16 = *(long *)(lVar20 + 0x78), lVar16 == 0)) {
    plVar25 = *(long **)(*(long *)(param_1 + 0x4f0) + 0x1d0);
    local_168._0_4_ = 9.80909e-45;
    puVar24 = PTR_DAT_04bc0cb8 + 0x10;
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0x810) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0xb30) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0xe50) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0x1170) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0x1490) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0x17b0) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168._0_4_ = 9.80909e-45;
    plVar25 = *(long **)(*(long *)(param_1 + 0x1ad0) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,7);
    plVar25 = *(long **)(*(long *)(param_1 + 0x1df0) + 0x1d0);
    local_170 = puVar24;
    (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
    (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    return 1;
  }
  fVar34 = *(float *)(lVar16 + 0x58);
  uVar35 = *(undefined4 *)(lVar16 + 0x50);
  fVar36 = *(float *)(lVar16 + 0x54);
  fVar31 = 57600.0 / (*(float *)(lVar16 + 0x40) * 6.2831855) + fVar36;
  fVar29 = atan2f(fVar31,fVar34);
  fVar29 = 1.5707964 - fVar29;
  fVar30 = cosf(fVar29);
  if (fVar30 == 0.0) {
    fVar30 = 0.001;
  }
  else {
    fVar30 = cosf(fVar29);
  }
  lVar16 = *(long *)(*(long *)puVar24 + 0x78);
  fVar33 = *(float *)(lVar16 + 0x3c);
  local_c0 = CONCAT44(fVar36 * (1.0 - fVar33) +
                      fVar33 * (fVar31 / fVar30 + -57600.0 / (*(float *)(lVar16 + 0x40) * 6.2831855)
                               ),uVar35);
  local_b8 = CONCAT44(local_b8._4_4_,
                      fVar33 * ((fVar29 / (*(float *)(lVar16 + 0x40) * 0.017453292)) * 160.0 -
                               *(float *)(lVar16 + 0x38)) + (1.0 - fVar33) * fVar34);
  FUN_01664580(*(long *)puVar24,&local_170,&local_a4,&local_c0,0);
  fVar31 = local_170._4_4_;
  local_170 = (undefined *)((ulong)(uint)local_170._4_4_ << 0x20);
  fVar29 = (fVar31 / 360.0) * 540.0;
  fVar31 = -((fVar31 / 360.0) * 540.0);
  if (0.0 <= local_a4) {
    fVar31 = fVar29;
  }
  if ((*(long *)(lVar20 + 0x58) == 0) || (**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) == 0)) {
    puVar22 = (undefined8 *)0x0;
  }
  else {
    puVar22 = *(undefined8 **)(**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) + 0x78);
  }
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar9 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  puVar2 = PTR_DAT_04bb2150;
  puVar24 = PTR_DAT_04bb2150;
  if (puVar22 != (undefined8 *)0x0) {
    uVar10 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bb6200);
    puVar24 = (undefined *)((long)puVar22 + 0x44);
    if ((uVar10 & 1) == 0) {
      puVar24 = puVar2;
    }
  }
  fVar30 = (float)FUN_015e9ef4(puVar24);
  lVar20 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar20 == 0) {
    bVar14 = *PTR_DAT_04bb32e0;
joined_r0x02cad72c:
    if (7 < bVar14) {
LAB_02cad730:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar20 = **(long **)PTR_DAT_04bb27d0;
        bVar14 = *(byte *)(lVar20 + 0x473);
        pbVar17 = PTR_DAT_04bb5038;
        if ((long)(char)bVar14 != 0xffffffffffffffff) {
          puVar11 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
          if (7 < bVar14) {
            puVar11 = (uint *)(lVar20 + 0x48);
          }
          if ((*puVar11 & 8) != 0) {
            pbVar17 = (byte *)(lVar20 + 0x471);
          }
        }
        bVar14 = *pbVar17;
        if (bVar14 < 8) goto LAB_02cad79c;
      }
      pbVar17 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar20 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar20 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar14 = *pbVar17;
        goto joined_r0x02cad72c;
      }
      goto LAB_02cad730;
    }
  }
  bVar14 = *pbVar17;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
LAB_02cad79c:
  iVar9 = 0;
  if ((bVar14 & 0xf8) != 0) {
    bVar14 = 0xff;
  }
  lVar20 = param_1 + 0x220;
  puVar24 = PTR_DAT_04bc0cb8 + 0x10;
  do {
    lVar21 = lVar20 + (long)iVar9 * 800;
    lVar16 = *(long *)(lVar21 + 0x2e0);
    *(undefined8 *)(lVar16 + 0x88) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(lVar16 + 0x90) = 0xff7fffffff7fffff;
    plVar25 = *(long **)(*(long *)(lVar21 + 0x2d0) + 0x1d0);
    if ((*(byte *)(lVar21 + 0x30c) >> 1 & 1) == 0) {
      local_168 = (undefined8 *)CONCAT44(local_168._4_4_,7);
      local_170 = puVar24;
      (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
      (**(code **)(plVar25[3] + 0x88))(plVar25[1],0);
    }
    else {
      if (((DAT_056659a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_056659a8), iVar8 != 0)) {
        DAT_056659a0 = 0x7fc00000;
        __cxa_guard_release(&DAT_056659a8);
      }
      plVar1 = (long *)(lVar21 + 0x2e0);
      plVar26 = *(long **)(*(long *)(lVar21 + 0x2d0) + 0x1d0);
      local_170 = PTR_DAT_04bc0cb8 + 0x10;
      local_168 = (undefined8 *)CONCAT44(local_168._4_4_,0x29);
      (**(code **)(*plVar26 + 0x20))(plVar26,&local_170);
      (**(code **)(plVar26[3] + 0x2b0))(&local_a4,plVar26[1]);
      lVar16 = *plVar1;
      *(float *)(lVar16 + 0xc0) = local_9c;
      *(ulong *)(lVar16 + 0xb8) = CONCAT44(fStack_a0,local_a4);
      lVar16 = lVar20 + (long)iVar9 * 800;
      if (NAN(*(float *)(lVar16 + 0x2e8))) {
        *(undefined4 *)(*plVar1 + 0xa8) = 1;
        lVar16 = lVar20 + (long)iVar9 * 800;
        bVar4 = *(byte *)(lVar16 + 0x2f4);
        bVar6 = bVar4;
        if (7 < bVar4) {
          bVar6 = 0xff;
        }
        if (bVar6 != bVar14) {
          bVar5 = *PTR_DAT_04bb32e0;
          if (7 < bVar5) {
            bVar5 = 0xff;
          }
          if (bVar6 == bVar5) goto LAB_02cad98c;
          uVar15 = *(uint *)(lVar20 + (long)iVar9 * 800 + 0x310);
          if (uVar15 == 0xffffffff) {
LAB_02cadb0c:
            bVar5 = bVar14;
            if (bVar4 != 0) {
              bVar5 = bVar6;
            }
            plVar26 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x130) +
                                (long)((char)bVar5 + -1) * 8);
            goto LAB_02cadb30;
          }
          if (*(uint *)(param_1 + 0x1ea0) <= uVar15) {
            uVar15 = 0;
          }
          if (*(char *)(*(long *)(param_1 + 0x1ea8) +
                       (-(ulong)(uVar15 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar15 << 4)) == '\0'
             ) goto LAB_02cadb0c;
          lVar19 = *(long *)(param_1 + 0x1ea8) + (long)(int)uVar15 * 0x10;
          local_170 = *(undefined **)(lVar19 + 4);
          local_168 = (undefined8 *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar19 + 0xc));
          pfVar12 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x6b8) + 0xf0))
                                       (*(long *)(param_1 + 0x210) + 0x6b8);
          puVar22 = &local_170;
          bVar6 = *(byte *)(lVar16 + 0x2f4);
          if (7 < bVar6) {
            bVar6 = 0xff;
          }
          uVar15 = (uint)(char)bVar6;
          if (*(uint *)(param_1 + 0x1eb0) <= uVar15) {
            uVar15 = 0;
          }
          lVar16 = *(long *)(param_1 + 0x1eb8) + (long)(int)uVar15 * 8;
          local_170 = (undefined *)CONCAT44(*pfVar12 + local_170._4_4_,(float)local_170);
          fVar34 = local_168._0_4_ - fVar29;
          fVar36 = SQRT((fVar29 - local_168._0_4_) * (fVar29 - local_168._0_4_) +
                        (fVar30 - (float)local_170) * (fVar30 - (float)local_170));
          uVar35 = (undefined4)local_b8;
          goto LAB_02cad8ec;
        }
LAB_02cad98c:
        lVar16 = *(long *)(lVar20 + (long)iVar9 * 800 + 0x318);
        if (((lVar16 != 0) && (*(long *)(lVar16 + 0xe0) == *(long *)(lVar16 + 0xe8))) &&
           (lVar16 = FUN_0252d9bc(0), lVar16 != 0)) {
          puVar22 = (undefined8 *)FUN_0252d9bc(0);
          local_170 = (undefined *)*puVar22;
          local_168 = (undefined8 *)CONCAT44(local_168._4_4_,*(undefined4 *)(puVar22 + 1));
          pfVar12 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x6b8) + 0xf0))
                                       (*(long *)(param_1 + 0x210) + 0x6b8);
          fVar34 = *pfVar12;
          pfVar12 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x448) + 0xf0))
                                       (*(long *)(param_1 + 0x210) + 0x448);
          puVar22 = &local_170;
          fVar36 = 0.0;
          local_170 = (undefined *)CONCAT44(local_170._4_4_ + fVar34 + *pfVar12,(float)local_170);
          fVar34 = 0.0;
          goto LAB_02cad8e0;
        }
        plVar26 = *(long **)(*(long *)(*(long *)(param_1 + 0x210) + 0x130) +
                             (long)*(int *)(*(long *)(param_1 + 0x210) + 0x128) * 8 + -8);
LAB_02cadb30:
        puVar11 = (uint *)(**(code **)(*plVar26 + 0xf0))();
        local_b0 = *puVar11;
        uStack_ac = puVar11[1];
        local_a8 = 0;
        puVar2 = PTR_DAT_04bc0cb8 + 0x10;
        local_168._0_4_ = 1.12104e-44;
        local_170 = puVar2;
        (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
        (**(code **)(plVar25[3] + 0x98))(plVar25[1],&local_b0);
        puVar11 = (uint *)(**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0xc0) + 0xf0))();
        local_b0 = *puVar11;
        local_168 = (undefined8 *)CONCAT44(local_168._4_4_,10);
        local_170 = puVar2;
        uStack_ac = local_b0;
        (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
        (**(code **)(plVar25[3] + 0xb8))(plVar25[1],&local_b0);
      }
      else {
        puVar22 = (undefined8 *)(lVar16 + 0x2e8);
        fVar36 = fVar30 - *(float *)(lVar16 + 0x2e8);
        fVar34 = *(float *)(lVar16 + 0x2f0) - fVar29;
        fVar33 = fVar29 - *(float *)(lVar16 + 0x2f0);
        fVar36 = SQRT(fVar33 * fVar33 + fVar36 * fVar36);
LAB_02cad8e0:
        lVar16 = 0;
        uVar35 = (undefined4)local_b8;
LAB_02cad8ec:
        FUN_02cb5238(fVar34,fVar36,uVar35,fVar31,param_1,plVar25,puVar22,lVar16);
        *(undefined4 *)(*plVar1 + 0xa8) = 2;
      }
      FUN_03442a7c(*plVar1,**(undefined8 **)(*(long *)(lVar21 + 0x2d0) + 0x210));
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 9);
  *(undefined4 *)(*(long *)(param_1 + 0x1e48) + 0x30) = 0x1e;
  FUN_034406d0(*(undefined8 *)(param_1 + 0x1e48));
  iVar9 = 0;
  puVar24 = PTR_DAT_04bc0cb8 + 0x10;
  puVar2 = PTR_DAT_04bc4f00 + 0x10;
  puVar3 = PTR_DAT_04bc4e68 + 0x10;
  do {
    lVar16 = lVar20 + (long)iVar9 * 800;
    uVar15 = *(uint *)(lVar16 + 0x30c);
    if ((uVar15 >> 1 & 1) != 0) {
      lVar21 = lVar20 + (long)iVar9 * 800;
      plVar25 = *(long **)(*(long *)(lVar21 + 0x2d0) + 0x1d0);
      if (((uVar15 >> 2 & 1) == 0) ||
         (((*(long *)PTR_DAT_04bb2808 != 0 &&
           (lVar19 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar19 != 0)) &&
          (1 < *(uint *)(lVar19 + 0x1b0))))) {
        puVar11 = (uint *)(lVar16 + 0x30c);
        local_168._0_4_ = 1.12104e-44;
        lVar16 = *(long *)(lVar20 + (long)iVar9 * 800 + 0x2e0);
        fStack_a0 = (*(float *)(lVar16 + 200) - *(float *)(lVar16 + 0x94)) +
                    *(float *)(lVar16 + 0xa4);
        local_a4 = (*(float *)(lVar16 + 0xc4) - *(float *)(lVar16 + 0x90)) +
                   *(float *)(lVar16 + 0xa0);
        local_9c = *(float *)(lVar16 + 0xcc) + 0.0;
        local_170 = puVar24;
        (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
        (**(code **)(plVar25[3] + 0x98))(plVar25[1],&local_a4);
        local_168 = (undefined8 *)CONCAT44(local_168._4_4_,7);
        local_170 = puVar24;
        (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
        (**(code **)(plVar25[3] + 0x88))(plVar25[1],1);
        *puVar11 = *puVar11 | 4;
      }
      else {
        lVar16 = *(long *)(lVar20 + (long)iVar9 * 800 + 0x2e0);
        pfVar12 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x688) + 0xf0))
                                     (*(long *)(param_1 + 0x210) + 0x688);
        fVar31 = *pfVar12;
        local_a4 = (*(float *)(lVar16 + 0xc4) - *(float *)(lVar16 + 0x90)) +
                   *(float *)(lVar16 + 0xa0);
        fStack_a0 = (*(float *)(lVar16 + 200) - *(float *)(lVar16 + 0x94)) +
                    *(float *)(lVar16 + 0xa4);
        local_9c = *(float *)(lVar16 + 0xcc) + 0.0;
        fVar30 = local_9c - *(float *)(lVar16 + 0xc0);
        fVar36 = local_a4 - *(float *)(lVar16 + 0xb8);
        fVar34 = fStack_a0 - *(float *)(lVar16 + 0xbc);
        fVar29 = SQRT(fVar34 * fVar34 + fVar36 * fVar36 + fVar30 * fVar30);
        if (fVar31 < fVar29) {
          fVar29 = 1.0 / fVar29;
          local_a4 = *(float *)(lVar16 + 0xb8) + fVar36 * fVar29 * fVar31;
          fStack_a0 = *(float *)(lVar16 + 0xbc) + fVar34 * fVar29 * fVar31;
          local_9c = *(float *)(lVar16 + 0xc0) + fVar30 * fVar29 * fVar31;
        }
        local_168 = (undefined8 *)CONCAT44(local_168._4_4_,8);
        local_170 = PTR_DAT_04bc0cb8 + 0x10;
        (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
        (**(code **)(plVar25[3] + 0x98))(plVar25[1],&local_a4);
      }
      plVar25 = (long *)(lVar21 + 0x2d0);
      lVar16 = *plVar25;
      lVar16 = *(long *)(*(long *)(lVar16 + 0x210) + (ulong)(2 < *(uint *)(lVar16 + 0x208)) * 0x10);
      if (lVar16 != 0) {
        if ((DAT_056658d0 == 0) || (lVar21 = *(long *)(DAT_056658d0 + 0x210), lVar21 == 0)) {
          local_c0 = 0x4248000042200000;
          local_b8 = 0x4170000041200000;
        }
        else {
          puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar21 + 0x758) + 0xf0))(lVar21 + 0x758);
          local_c0._4_4_ = *puVar13;
          puVar13 = (undefined4 *)
                    (**(code **)(*(long *)(*(long *)(DAT_056658d0 + 0x210) + 0x788) + 0xf0))
                              (*(long *)(DAT_056658d0 + 0x210) + 0x788);
          local_c0._0_4_ = *puVar13;
          puVar13 = (undefined4 *)
                    (**(code **)(*(long *)(*(long *)(DAT_056658d0 + 0x210) + 0x7b8) + 0xf0))
                              (*(long *)(DAT_056658d0 + 0x210) + 0x7b8);
          local_b8 = CONCAT44(*puVar13,(undefined4)local_b8);
          puVar13 = (undefined4 *)
                    (**(code **)(*(long *)(*(long *)(DAT_056658d0 + 0x210) + 0x7e8) + 0xf0))
                              (*(long *)(DAT_056658d0 + 0x210) + 0x7e8);
          local_c0 = CONCAT44(local_c0._4_4_,*puVar13);
        }
        lVar21 = lVar20 + (long)iVar9 * 800;
        FUN_03442c78(&local_b0,*(undefined8 *)(lVar21 + 0x2e0),lVar16,&local_a4,&local_c0);
        if ((((7 < *(byte *)(lVar21 + 0x2f4)) &&
             (lVar16 = *(long *)(lVar20 + (long)iVar9 * 800 + 0x318), lVar16 != 0)) &&
            (*(long *)(lVar16 + 0xe0) == *(long *)(lVar16 + 0xe8))) ||
           (*(int *)(lVar20 + (long)iVar9 * 800 + 0x310) != -1)) {
          local_b0 = CONCAT22(local_b0._2_2_,1);
        }
        lVar16 = *plVar25;
        plVar25 = *(long **)(*(long *)(lVar16 + 0x230) +
                            (ulong)(2 < *(uint *)(lVar16 + 0x228)) * 0x10);
        if (plVar25 != (long *)0x0) {
          local_168 = (undefined8 *)CONCAT44(local_168._4_4_,3);
          local_170 = puVar2;
          (**(code **)(*plVar25 + 0x20))(plVar25,&local_170);
          uVar10 = (**(code **)(plVar25[3] + 0x50))(plVar25[1]);
          if ((uVar10 & 1) == 0) {
            uVar15 = local_b0 >> 8 & 0xff;
            if (((local_b0 & 0xff) == 0) || (uVar15 == 0)) {
              if (((local_b0 & 0xff) != 0) && (uVar15 == 0)) {
                local_170 = PTR_DAT_04bc4f00 + 0x10;
                local_168 = (undefined8 *)CONCAT44(local_168._4_4_,0xc);
                (**(code **)(*plVar25 + 0x20))(plVar25,&local_170);
                uVar10 = (**(code **)(plVar25[3] + 0xe0))(plVar25[1]);
                if ((uVar10 & 1) == 0) {
                  local_168 = (undefined8 *)((ulong)local_168 & 0xffffffff00000000);
                  local_170 = PTR_DAT_04bc4e68 + 0x10;
                  (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
                  uVar32 = 0x3f800000;
                  goto LAB_02cadc30;
                }
              }
            }
            else {
              local_170 = PTR_DAT_04bc4f00 + 0x10;
              local_168 = (undefined8 *)CONCAT44(local_168._4_4_,0xb);
              (**(code **)(*plVar25 + 0x20))(plVar25,&local_170);
              uVar10 = (**(code **)(plVar25[3] + 0xd0))(plVar25[1]);
              if ((uVar10 & 1) == 0) {
                local_168 = (undefined8 *)((ulong)local_168 & 0xffffffff00000000);
                local_170 = puVar3;
                (**(code **)(*plVar25 + 0x18))(plVar25,&local_170);
                uVar32 = 0xbf800000;
LAB_02cadc30:
                (**(code **)(plVar25[3] + 0x188))(uVar32,plVar25[1],0);
              }
            }
          }
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 9);
  local_170 = (undefined *)0x0;
  local_168 = (undefined8 *)0x0;
  local_150 = &local_148;
  local_148 = &local_140;
  local_160 = &local_150;
  local_140 = &local_138;
  local_138 = &local_130;
  local_110 = 0;
  local_130 = &local_128;
  local_128 = &local_120;
  local_120 = &local_118;
  local_118 = &local_110;
  if (local_108 != (undefined8 *)0x0) {
    local_170 = (undefined *)0x900000000;
    local_168 = local_108;
  }
  iVar18 = 0;
  iVar9 = 0;
  iVar23 = 0;
  iVar8 = 0;
  pppppppuStack_158 = local_160;
  do {
    pppppppuVar7 = local_160;
    puVar22 = local_168;
    if ((*(byte *)(lVar20 + (long)iVar8 * 800 + 0x30c) >> 1 & 1) != 0) {
      if (iVar23 == 0) {
        iVar27 = 0;
        puVar28 = local_168;
LAB_02cae210:
        lVar16 = (long)iVar23;
        iVar23 = iVar27;
        if (puVar28 != puVar22 + lVar16) goto LAB_02cae0f0;
      }
      else {
        lVar16 = 0;
        lVar21 = 0;
        do {
          lVar19 = lVar20 + (ulong)**(uint **)((long)local_168 + lVar16) * 800;
          if (8 < **(uint **)((long)local_168 + lVar16)) {
            lVar19 = lVar20;
          }
          if (*(int *)(lVar20 + (long)iVar8 * 800 + 0x304) < *(int *)(lVar19 + 0x304)) {
            puVar28 = (undefined8 *)((long)local_168 + lVar16);
            iVar27 = (int)lVar21;
            if ((iVar23 < iVar27) || ((int)local_170._4_4_ <= iVar23)) {
              iVar27 = iVar23;
            }
            else {
              if (local_160 != (undefined8 *******)0x0) {
                local_160 = (undefined8 *******)*local_160;
              }
              *(int *)pppppppuVar7 = iVar8;
              if (((int)(float)local_170 < iVar27) ||
                 ((int)local_170._4_4_ <= (int)(float)local_170)) {
                iVar9 = (int)(float)local_170;
                iVar18 = (int)(float)local_170;
                iVar27 = (int)(float)local_170;
              }
              else {
                if (iVar27 < (int)(float)local_170) {
                  memmove((void *)((long)local_168 + lVar16 + 8),(void *)((long)local_168 + lVar16),
                          (long)(((int)(float)local_170 - iVar27) * 8));
                }
                local_168[lVar21] = pppppppuVar7;
                iVar9 = (int)(float)local_170 + 1;
                local_170 = (undefined *)CONCAT44(local_170._4_4_,iVar9);
                iVar18 = iVar9;
                iVar27 = iVar9;
              }
            }
            goto LAB_02cae210;
          }
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + 1;
        } while ((long)iVar23 * 8 != lVar16);
      }
      pppppppuVar7 = local_160;
      iVar23 = iVar9;
      if (iVar9 < (int)local_170._4_4_) {
        if (local_160 != (undefined8 *******)0x0) {
          local_160 = (undefined8 *******)*local_160;
        }
        *(int *)pppppppuVar7 = iVar8;
        iVar23 = (int)(float)local_170;
        iVar9 = (int)(float)local_170;
        iVar18 = (int)(float)local_170;
        if ((int)(float)local_170 < (int)local_170._4_4_) {
          local_168[(int)(float)local_170] = pppppppuVar7;
          iVar9 = (int)(float)local_170 + 1;
          local_170 = (undefined *)CONCAT44(local_170._4_4_,iVar9);
          iVar23 = iVar9;
          iVar18 = iVar9;
        }
      }
    }
LAB_02cae0f0:
    iVar8 = iVar8 + 1;
    if (iVar8 == 9) {
      if (iVar18 != 0) {
        iVar9 = 1;
        lVar16 = (long)iVar18 << 3;
        puVar22 = local_168;
        do {
          lVar21 = lVar20 + (ulong)*(uint *)*puVar22 * 800;
          if (8 < *(uint *)*puVar22) {
            lVar21 = lVar20;
          }
          if (-1 < *(int *)(lVar21 + 0x304)) {
            *(int *)(lVar21 + 0x304) = iVar9;
            iVar9 = iVar9 + 1;
          }
          puVar22 = puVar22 + 1;
          lVar16 = lVar16 + -8;
        } while (lVar16 != 0);
      }
      puVar22 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      if (puVar22 == (undefined8 *)0x0) {
        puVar22 = (undefined8 *)0x0;
      }
      else {
        uVar10 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4e58);
        if ((uVar10 & 1) == 0) {
          puVar22 = (undefined8 *)0x0;
        }
      }
      if ((float)local_170 != 0.0) {
        lVar16 = (long)(int)(float)local_170;
        do {
          lVar16 = lVar16 + -1;
          lVar21 = lVar20 + (ulong)*(uint *)local_168[lVar16] * 800;
          if (8 < *(uint *)local_168[lVar16]) {
            lVar21 = lVar20;
          }
          lVar21 = *(long *)(lVar21 + 0x2d0);
          plVar25 = (long *)(*(int *)((long)puVar22 + 0x4c) + lVar21);
          if (*plVar25 != 0) {
            *(long *)(*plVar25 + 8) = plVar25[1];
          }
          if ((long *)plVar25[1] != (long *)0x0) {
            *(long *)plVar25[1] = *plVar25;
          }
          *plVar25 = 0;
          plVar25[1] = 0;
          plVar25 = (long *)(*(int *)((long)puVar22 + 0x4c) + lVar21);
          *(int *)(puVar22 + 9) = *(int *)(puVar22 + 9) + -1;
          lVar21 = puVar22[7];
          puVar22[7] = plVar25;
          *plVar25 = lVar21;
          plVar25[1] = (long)(puVar22 + 7);
          if (lVar21 != 0) {
            *(long **)(lVar21 + 8) = plVar25;
          }
          *(int *)(puVar22 + 9) = *(int *)(puVar22 + 9) + 1;
        } while (lVar16 != 0);
      }
      *(undefined1 *)(param_1 + 0x1e50) = 0;
      return 1;
    }
  } while( true );
}

