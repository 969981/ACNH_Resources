
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008af9d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined1 *puVar24;
  int *piVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  short *psVar28;
  uint *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_b0;
  long local_a8;
  int local_a0;
  byte local_9c [12];
  byte local_88 [4];
  byte local_84 [4];
  
  plVar1 = (long *)(param_1 + 0x37f18);
  if (*(int *)(param_1 + 0x358) < 2) {
    uVar16 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((uVar16 & 1) == 0) {
      *(code **)(param_1 + 0x37f28) = FUN_008cb1ac;
      *(undefined8 *)(param_1 + 0x37f30) = 0;
      *plVar1 = (long)&PTR_LAB_04925b80;
      *(long *)(param_1 + 0x37f20) = param_1 + 0x31650;
      puVar24 = &LAB_008cb5b0;
      goto LAB_008afa80;
    }
  }
  else {
    uVar16 = (**(code **)(*(long *)(param_1 + 0x37f38) + 0x10))();
    if ((uVar16 & 1) == 0) {
      puVar24 = &LAB_008cb7c4;
LAB_008afa80:
      *(undefined1 **)(param_1 + 0x37f48) = puVar24;
      *(undefined8 *)(param_1 + 0x37f50) = 0;
      *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04925bd0;
      *(long *)(param_1 + 0x37f40) = param_1 + 0x31650;
    }
  }
  if ((*(int *)(param_1 + 0x358) == 1) &&
     (lVar17 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x360) + 0x28))(), lVar17 != 0)) {
    fVar31 = 0.0;
    *(undefined4 *)(param_1 + 0x316a8) = 0;
    fVar30 = *(float *)(param_1 + 0x316a4) + *(float *)(param_1 + 0x316c8) * 0.2;
    fVar32 = *(float *)(param_1 + 0x316ac) + *(float *)(param_1 + 0x316d0) * 0.2;
    *(float *)(param_1 + 0x316a4) = fVar30;
    *(float *)(param_1 + 0x316ac) = fVar32;
    fVar33 = SQRT(fVar30 * fVar30 + 0.0 + fVar32 * fVar32);
    if (5.0 < fVar33) {
      fVar33 = 5.0 / fVar33;
      *(float *)(param_1 + 0x316a4) = fVar30 * fVar33;
      *(float *)(param_1 + 0x316a8) = fVar33 * 0.0;
      *(float *)(param_1 + 0x316ac) = fVar32 * fVar33;
    }
    *(undefined4 *)(param_1 + 0x316a0) = 0;
    pfVar18 = (float *)FUN_0252d9bc(0);
    fVar32 = 0.0;
    fVar30 = 0.0;
    if (pfVar18 != (float *)0x0) {
      lVar17 = *(long *)(param_1 + 0x31700);
      uVar12 = *(uint *)(lVar17 + 0x307fc);
      if (uVar12 < *(uint *)(lVar17 + 0x300e8)) {
        lVar17 = *(long *)(*(long *)(lVar17 + 0x300f0) + (long)(int)uVar12 * 8);
      }
      else {
        lVar17 = 0;
      }
      local_f0._0_4_ = uVar12;
      pfVar19 = (float *)(**(code **)(*(long *)(lVar17 + 0x60) + 0xf0))();
      local_f0 = (undefined *)((ulong)local_f0._4_4_ << 0x20);
      lVar20 = *(long *)PTR_DAT_04bb27c8;
      fVar30 = (pfVar18[2] + pfVar18[1] * 0.0 + *pfVar18 * 0.0) - (*pfVar19 + 0.0);
      fVar33 = 0.0;
      if (0.0 <= fVar30) {
        fVar33 = fVar30;
      }
      if (((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) && (*(char *)(lVar20 + 0x11c8) == '\0')
         ) {
        FUN_0093ae60(lVar20 + 0x28,pfVar18,&local_f0);
      }
      fVar30 = *(float *)(param_1 + 0x316bc);
      fVar35 = *(float *)(param_1 + 0x316c0);
      fVar36 = *(float *)(param_1 + 0x316c4);
      if ((fVar33 < 0.0) || (0x2d < (uint)local_f0)) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = 0.0;
        if ((1L << ((ulong)local_f0 & 0x3f) & 0x220020001010U) != 0) {
          pfVar18 = (float *)(**(code **)(*(long *)(lVar17 + 0x90) + 0xf0))();
          fVar31 = 1.0;
          if (fVar33 / *pfVar18 <= 1.0) {
            fVar31 = fVar33 / *pfVar18;
          }
          pfVar18 = (float *)(**(code **)(*(long *)(lVar17 + 0xc0) + 0xf0))((long *)(lVar17 + 0xc0))
          ;
          fVar32 = fVar31 * *pfVar18 * 0.0;
          fVar31 = fVar31 * *pfVar18;
        }
      }
      if (*(char *)(*(long *)(param_1 + 0x31700) + 0x37fb1) == '\0') {
        fVar33 = (fVar30 - fVar32) * 0.125;
        fVar32 = (fVar35 - fVar32) * 0.125;
        fVar31 = (fVar36 - fVar31) * 0.125;
        fVar34 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + fVar31 * fVar31);
        if (2.0 < fVar34) {
          if (0.0 < fVar34) {
            fVar34 = 1.0 / fVar34;
            fVar33 = fVar33 * fVar34;
            fVar32 = fVar32 * fVar34;
            fVar31 = fVar31 * fVar34;
          }
          fVar33 = fVar33 + fVar33;
          fVar32 = fVar32 + fVar32;
          fVar31 = fVar31 + fVar31;
        }
        fVar30 = fVar30 - fVar33;
        fVar32 = fVar35 - fVar32;
        fVar31 = fVar36 - fVar31;
      }
      else {
        fVar30 = fVar32;
      }
    }
    *(float *)(param_1 + 0x316bc) = fVar30;
    *(float *)(param_1 + 0x316c0) = fVar32;
    *(float *)(param_1 + 0x316c4) = fVar31;
  }
  bVar11 = FUN_008caea4(param_1);
  bVar6 = bVar11 & 1;
  if (*(byte *)(param_1 + 0x37fb3) == bVar6) {
    *(undefined4 *)(param_1 + 0x38018) = 0;
  }
  else {
    iVar15 = 0x1e;
    if ((bVar6 & *(byte *)(param_1 + 0x37fb3) == 0) == 0) {
      iVar15 = 6;
    }
    iVar14 = *(int *)(param_1 + 0x38018);
    *(int *)(param_1 + 0x38018) = iVar14 + 1;
    if (iVar15 <= iVar14) {
      *(byte *)(param_1 + 0x37fb3) = bVar6;
    }
  }
  if ((bVar11 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x3095c) = 10;
  }
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  if (lVar17 == 0) {
LAB_008afdcc:
    if (*pbVar21 < 8) goto LAB_008afe44;
LAB_008afdd8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008afe3c:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_008afe44;
    }
    lVar17 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar17 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar29 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar29 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar29 & 8) != 0) {
        pbVar21 = (byte *)(lVar17 + 0x471);
      }
    }
    local_84[0] = *pbVar21;
    if (7 < local_84[0]) goto LAB_008afe3c;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar21) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008afdcc;
      }
      goto LAB_008afdd8;
    }
LAB_008afe44:
    local_84[0] = *pbVar21;
    if (7 < local_84[0]) {
      local_84[0] = 0xff;
    }
  }
  plVar2 = (long *)(param_1 + 0x30708);
  local_88[0] = local_84[0];
  if (7 < local_84[0]) {
    local_88[0] = 0xff;
  }
  uVar12 = FUN_033f99e0();
  puVar8 = PTR_DAT_04bb2020;
  if (((*(int *)(param_1 + 0x410) == 0) && (uVar16 = FUN_00a738a0(local_88,0), (uVar16 & 1) == 0))
     || (uVar13 = FUN_00a738a0(local_88,0), (uVar12 & uVar13 & 1) != 0)) {
    if (*(int *)(param_1 + 0x3095c) < 1) {
      uVar16 = FUN_0251dab4();
      if ((uVar16 & 1) != 0) {
        iVar15 = *(int *)(param_1 + 0x30964);
        iVar14 = FUN_008cd7bc(param_1);
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar14);
        if (iVar15 != iVar14) {
          *(undefined4 *)(param_1 + 0x3095c) = 10;
          *(int *)(param_1 + 0x30964) = iVar14;
          uStack_e8 = 0x405bfe8;
          if (iVar14 <= iVar15) {
            uStack_e8 = 0x40c466d;
          }
          local_f0 = puVar8 + 0x10;
          local_e4 = 0;
          FUN_03844960(param_1 + 0x37fc8,&local_f0,0);
        }
      }
    }
    else {
      *(int *)(param_1 + 0x3095c) = *(int *)(param_1 + 0x3095c) + -1;
    }
  }
  local_9c[0] = local_84[0];
  if (7 < local_84[0]) {
    local_9c[0] = 0xff;
  }
  if (*(char *)(param_1 + 0x315c8) == '\0') {
    if (*(int *)(param_1 + 0x315b8) < 1) goto LAB_008b00e8;
    iVar14 = *(int *)(param_1 + 0x315b8) + *(int *)(param_1 + 0x315b4) + -1;
    iVar15 = 0;
    if (*(int *)(param_1 + 0x315b0) <= iVar14) {
      iVar15 = *(int *)(param_1 + 0x315b0);
    }
    if (*(int *)(*(long *)(param_1 + 0x315a8) + (long)(iVar14 - iVar15) * 4) == 1)
    goto LAB_008b00e8;
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_054f0960);
        puVar27 = &DAT_054f0958;
        if (iVar15 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar27 = &DAT_054f0958;
      }
    }
    else {
      puVar27 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if (local_84[0] < 8) {
        puVar27 = puVar27 + local_84[0];
      }
    }
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x20);
    if ((*(uint *)((long)puVar27 + 4) & 1) != 0) goto LAB_008b00e8;
  }
  uVar12 = FUN_02582d8c(local_9c,1);
  puVar4 = PTR_DAT_04bb4fb8;
  puVar8 = PTR_DAT_04bb3960;
  if ((7 < uVar12) ||
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d4) == '\0'))
  goto LAB_008b00e8;
  uVar12 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d8);
  uVar16 = (ulong)uVar12;
  if ((((int)uVar12 < 0) ||
      ((lVar17 = *(long *)PTR_DAT_04bb3960, lVar17 == 0 ||
       (uVar13 = FUN_02582d8c(local_9c,1), 7 < uVar13)))) ||
     (*(char *)(*(long *)puVar4 + (ulong)uVar13 * 0x13f0 + 0x13d4) == '\0')) goto LAB_008b00e8;
  uVar13 = *(uint *)(*(long *)puVar4 + (ulong)uVar13 * 0x13f0 + 0x13d8);
  uVar22 = (ulong)uVar13;
  if (((int)uVar13 < 0) || (*(long *)puVar8 == 0)) goto LAB_008b00e8;
  if (3 < uVar13) {
    uVar22 = 0;
  }
  lVar20 = *(long *)(*(long *)puVar8 + uVar22 * 8 + 0xf5b20);
  if (lVar20 == 0) goto LAB_008b00e8;
  if (3 < uVar12) {
    uVar16 = 0;
  }
  uVar12 = *(uint *)(lVar17 + uVar16 * 4 + 0xf5b40);
  if (uVar12 < 3) {
LAB_008b0590:
    fVar32 = *(float *)(lVar20 + 0x98);
    fVar31 = *(float *)(lVar20 + 0x9c);
    fVar30 = 0.0;
    fVar33 = SQRT(fVar31 * fVar31 + fVar32 * fVar32);
    if (DAT_04ced028 < fVar33) {
      if (DAT_04ced02c <= fVar33) {
        fVar30 = 1.0;
      }
      else {
        fVar30 = (fVar33 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
      }
    }
    if (0.0 < fVar33) {
      fVar32 = (fVar30 / fVar33) * fVar32;
      fVar31 = (fVar30 / fVar33) * fVar31;
    }
    if ((fVar32 == 0.0) && (fVar31 == 0.0)) goto LAB_008b060c;
LAB_008b0618:
    if (uVar12 < 3) {
LAB_008b075c:
      fVar32 = *(float *)(lVar20 + 0x98);
      fVar31 = *(float *)(lVar20 + 0x9c);
      fVar30 = 0.0;
      fVar33 = SQRT(fVar31 * fVar31 + fVar32 * fVar32);
      if (DAT_04ced028 < fVar33) {
        if (DAT_04ced02c <= fVar33) {
          fVar30 = 1.0;
        }
        else {
          fVar30 = (fVar33 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
        }
      }
      if (0.0 < fVar33) {
        fVar32 = (fVar30 / fVar33) * fVar32;
        fVar31 = (fVar30 / fVar33) * fVar31;
      }
      if (((fVar32 != 0.0) || (fVar31 != 0.0)) && (uVar16 = FUN_033f99e0(), (uVar16 & 1) != 0))
      goto LAB_008b07e0;
    }
    else if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0))
    {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(&DAT_054f0960);
          puVar29 = (uint *)&DAT_054f0958;
          if (iVar15 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar29 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar29 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (local_84[0] < 8) {
          puVar29 = puVar29 + (ulong)local_84[0] * 2;
        }
      }
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x19);
      if ((*puVar29 >> 0x19 & 1) == 0) goto LAB_008b075c;
    }
    else if (*(int *)(param_1 + 0x30808) != 3) goto LAB_008b075c;
    *(undefined4 *)(param_1 + 0x30958) = 0;
    if (*(int *)(param_1 + 0x30964) == 0) {
      *(undefined4 *)(param_1 + 0x30964) = 1;
    }
  }
  else {
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(&DAT_054f0960);
          puVar29 = (uint *)&DAT_054f0958;
          if (iVar15 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar29 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar29 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (local_84[0] < 8) {
          puVar29 = puVar29 + (ulong)local_84[0] * 2;
        }
      }
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x19);
      if ((*puVar29 >> 0x19 & 1) == 0) goto LAB_008b0590;
    }
    else if (*(int *)(param_1 + 0x30808) != 3) goto LAB_008b0590;
LAB_008b060c:
    uVar16 = FUN_0251d1e0(local_84);
    if ((uVar16 & 1) != 0) goto LAB_008b0618;
    lVar17 = *(long *)PTR_DAT_04bb4718;
    if ((lVar17 == 0) || (uVar16 = (ulong)local_84[0], 7 < uVar16)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar28 = &DAT_054f0c08;
        if (iVar15 != 0) {
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
        psVar28 = &DAT_054f0c08;
      }
    }
    else {
      psVar28 = (short *)(lVar17 + uVar16 * 0xd0 +
                          (ulong)(*(uint *)(lVar17 + uVar16 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((((char)psVar28[0x32] != '\0') && (*psVar28 == *(short *)PTR_DAT_04bb6298)) &&
        (*(uint *)(psVar28 + 2) < 0x149)) &&
       ((uVar13 = *(uint *)(psVar28 + 2) - 0xf7, uVar13 < 5 && (uVar13 != 1)))) goto LAB_008b0618;
LAB_008b07e0:
    iVar15 = *(int *)(param_1 + 0x30958);
    if (0x256 < iVar15) {
      iVar15 = 599;
    }
    *(int *)(param_1 + 0x30958) = iVar15 + 1;
  }
LAB_008b00e8:
  if ((-1 < *(int *)(param_1 + 0x30958)) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    *(undefined8 *)(param_1 + 0x30970) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x30978) = 0xff7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x30980) = 0xff7fffffff7fffff;
  }
  puVar8 = PTR_DAT_04bb2020;
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    bVar10 = false;
    cVar5 = *(char *)(param_1 + 0x37fb3);
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bb2720;
    if (lVar17 == 0) {
      puVar27 = &DAT_055c04a0;
    }
    else {
      puVar27 = &DAT_055c04a0;
      if (*(long *)(lVar17 + 0x330) != 0) {
        puVar27 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
        iVar15 = FUN_006bd550(*puVar27,0);
        puVar27 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar15 != 0x758f7eaf) {
          puVar27 = &DAT_055c04a0;
        }
      }
    }
    bVar10 = *(int *)(puVar27 + 7) == -0x17df00c3;
    cVar5 = *(char *)(param_1 + 0x37fb3);
  }
  if (cVar5 == '\0') {
    if (*(uint *)(param_1 + 0x410) == 0x1e) {
      iVar15 = 0x43;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x30964);
      if ((*(uint *)(param_1 + 0x410) & 0xfffffffe) == 0x1a) {
        piVar25 = &DAT_04ced1d0;
        puVar7 = &DAT_04ced1d0;
        bVar9 = 5 < uVar12;
      }
      else {
        piVar25 = &DAT_04ced1c0;
        puVar7 = &DAT_04ced1c0;
        bVar9 = 3 < uVar12;
      }
      piVar3 = puVar7 + uVar12;
      if (bVar9) {
        piVar3 = piVar25;
      }
      iVar15 = *piVar3;
    }
  }
  else {
    iVar15 = 5;
  }
  local_b0 = puVar8 + 0x10;
  local_a8 = *(long *)(PTR_PTR_04bb2238 + 8);
  local_a0 = iVar15;
  if (bVar10) {
    uVar12 = *(uint *)(param_1 + 0x30964);
    if ((*(uint *)(param_1 + 0x410) & 0xfffffffe) == 0x1a) {
      puVar26 = &DAT_04ced348;
      puVar27 = &DAT_04ced348 + (ulong)uVar12 * 2;
      bVar9 = 5 < uVar12;
    }
    else {
      puVar26 = &DAT_04ced308;
      puVar27 = &DAT_04ced308 + (ulong)uVar12 * 2;
      bVar9 = 3 < uVar12;
    }
    if (bVar9) {
      puVar27 = puVar26;
    }
    lVar17 = puVar27[1];
    local_a8 = lVar17;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    if (*(long *)(param_1 + 0x30710) == lVar17) {
      return;
    }
    uVar16 = 0;
    bVar9 = true;
    do {
      cVar5 = *(char *)(*(long *)(param_1 + 0x30710) + uVar16);
      if (cVar5 != *(char *)(lVar17 + uVar16)) break;
      if (cVar5 == '\0') {
        if (bVar9) {
          return;
        }
        break;
      }
      bVar9 = uVar16 < 0x80000;
      uVar16 = uVar16 + 1;
    } while (uVar16 != 0x80001);
    uVar16 = FUN_008c8080(&local_b0);
    if ((uVar16 & 1) == 0) {
      return;
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0x307e8);
    if (iVar14 == iVar15) {
      return;
    }
    local_f0._4_4_ = (uint)((ulong)local_f0 >> 0x20);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar14);
    if (iVar14 < 0) {
      return;
    }
    if (5 < iVar14) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x37fba) = 1;
  if (1 < *(int *)(param_1 + 0x358)) {
    if (*(int *)(param_1 + 0x30964) == 0) {
      *(undefined8 *)(param_1 + 0x37f30) = 0;
      *(long *)(param_1 + 0x37f20) = param_1;
      *(undefined1 **)(param_1 + 0x37f28) = &LAB_008cb714;
      ppuVar23 = &PTR_LAB_04925c20;
    }
    else {
      ppuVar23 = &PTR_LAB_04925c70;
    }
    *plVar1 = (long)ppuVar23;
  }
  if (bVar10) {
    puVar4 = PTR_s_cDefault_04bb5888;
    if (*(char *)(param_1 + 0x37fb3) != '\0') {
      puVar4 = PTR_s_cDefault_04bb5888 + 10;
    }
    local_f0 = puVar8 + 0x10;
    uStack_e8 = SUB84(puVar4,0);
    local_e4 = (undefined4)((ulong)puVar4 >> 0x20);
    FUN_008bf770(param_1,&local_b0,&local_f0);
  }
  else {
    FUN_008c4aa0(param_1,iVar15,*(undefined1 *)(param_1 + 0x37fb3));
  }
  local_f0 = *(undefined **)(param_1 + 0x30910);
  local_cc = *(undefined8 *)(param_1 + 0x30934);
  local_c4 = *(undefined8 *)(param_1 + 0x3093c);
  local_bc = *(undefined8 *)(param_1 + 0x30944);
  local_b4 = *(undefined4 *)(param_1 + 0x3094c);
  local_dc = *(undefined8 *)(param_1 + 0x30924);
  local_e4 = (undefined4)*(undefined8 *)(param_1 + 0x3091c);
  uStack_e0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3091c) >> 0x20);
  local_d4 = *(undefined8 *)(param_1 + 0x3092c);
  local_108 = *(undefined8 *)(param_1 + 0x30988);
  local_100 = *(undefined8 *)(param_1 + 0x30990);
  uStack_f8 = *(undefined8 *)(param_1 + 0x30998);
  FUN_008cb7e4(param_1,&local_108,*(undefined4 *)(param_1 + 0x307e8),&local_f0,
               1 < *(int *)(param_1 + 0x358));
  if ((*(int *)(param_1 + 0x307e8) == 1) && (uVar16 = FUN_008cbab0(), (uVar16 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x315e8) = 0x5b05b08;
  }
  else {
    *(undefined4 *)(param_1 + 0x315e8) = 0;
  }
  return;
}

