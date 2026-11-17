
void FUN_02d5ee50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  short sVar21;
  undefined4 uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  uint *puVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  short *psVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  bool bVar39;
  long *plVar40;
  uint *puVar41;
  undefined8 uVar42;
  int *local_178;
  uint local_158;
  uint local_14c;
  undefined1 local_148 [16];
  short local_138 [2];
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined2 *local_c8;
  undefined4 local_c0;
  undefined2 local_bc [15];
  undefined2 local_9e;
  undefined1 uStack_91;
  undefined1 *local_90 [2];
  
  puVar1 = PTR_DAT_04bb2230;
  pcVar4 = (char *)(param_1 + 0x26dc);
  if ((*(long *)(param_1 + 0x1680) != 0) &&
     ((plVar19 = *(long **)(**(long **)(*(long *)(param_1 + 0x1680) + 0x3f8) + 0x1b0),
      plVar19 == (long *)0x0 || (uVar20 = (**(code **)(*plVar19 + 0x48))(), (uVar20 & 1) != 0)))) {
    puVar2 = PTR_DAT_04bb3170;
    lVar23 = *(long *)puVar1;
    sVar21 = *(short *)PTR_DAT_04bb3170;
    if (sVar21 == *(short *)(lVar23 + 0x500)) {
      bVar16 = false;
    }
    else {
      FUN_007ef010(local_148,lVar23 + 0x500);
      bVar16 = local_148._0_2_ == *(short *)(param_1 + 0x1668);
      lVar23 = *(long *)puVar1;
      sVar21 = *(short *)puVar2;
    }
    if (*pcVar4 != '\0') {
      bVar16 = true;
    }
    *pcVar4 = bVar16;
    *(bool *)(param_1 + 0x26dd) =
         sVar21 != *(short *)(lVar23 + 0x500) || *(char *)(param_1 + 0x26dd) != '\0';
  }
  auVar12._8_8_ = local_148._8_8_;
  auVar12._0_8_ = local_148._0_8_;
  auVar11._8_8_ = local_148._8_8_;
  auVar11._0_8_ = local_148._0_8_;
  cVar7 = *pcVar4;
  bVar16 = (*(uint *)(param_1 + 0x1f0) & *(uint *)(param_1 + 500)) != 0xffffffff;
  uVar6 = *(uint *)(param_1 + 0x1b0);
  lVar23 = *(long *)puVar1;
  uVar31 = *(uint *)(lVar23 + 0x504);
  if (uVar31 == 0xffffffff) {
LAB_02d5f118:
    bVar39 = false;
LAB_02d5f11c:
    if ((cVar7 == '\0') || (*(long *)(param_1 + 0x1680) == 0)) goto LAB_02d5f380;
    lVar23 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570);
  }
  else {
    uVar30 = *(uint *)(lVar23 + 0x508);
    local_148 = auVar11;
    if (uVar30 == 0xffffffff) goto LAB_02d5f118;
    cVar8 = *(char *)(lVar23 + 0x50c);
    local_148 = auVar12;
    if (cVar8 != '\0' && *(int *)(param_1 + 0x241c) == 1) goto LAB_02d5f118;
    uVar32 = *(uint *)(param_1 + 0x1578);
    iVar17 = -1;
    if ((-1 < (int)uVar32) && ((int)uVar32 < *(int *)(param_1 + 0x1560))) {
      lVar23 = param_1 + 0x1550;
      uVar34 = uVar32 + 1 & 3;
      if (2 < uVar32) {
        uVar32 = uVar32 + 1 & 0xfffffffc;
        do {
          uVar32 = uVar32 - 4;
          lVar23 = *(long *)(*(long *)(*(long *)(*(long *)(lVar23 + 8) + 8) + 8) + 8);
        } while (uVar32 != 0);
      }
      for (; uVar34 != 0; uVar34 = uVar34 - 1) {
        lVar23 = *(long *)(lVar23 + 8);
      }
      iVar17 = -1;
      if ((lVar23 != 0) && (lVar23 = lVar23 - *(int *)(param_1 + 0x1564), lVar23 != 0)) {
        iVar17 = *(int *)(lVar23 + 0x270);
      }
    }
    if ((bool)cVar8 != (iVar17 == 0x53)) {
      local_14c = 0x52;
      if (cVar8 != '\0') {
        local_14c = 0x53;
      }
      local_148 = FUN_02642d30();
      uVar20 = local_148._8_8_ & 0xffffffff;
      if (uVar20 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00d72dc0();
      }
      local_90[0] = &uStack_91;
      lVar23 = (*(code *)(&PTR_LAB_04a88330)[uVar20])(local_90,local_148);
      if (lVar23 != 0) {
        if (local_14c == 0x52) {
          if ((uVar31 < *(uint *)(param_1 + 0x1750)) && (uVar30 < *(uint *)(param_1 + 0x1750))) {
            lVar26 = *(long *)(param_1 + 0x1758);
            lVar23 = 0x1758;
            goto LAB_02d5f0f8;
          }
        }
        else if (((local_14c == 0x53) && (uVar31 < *(uint *)(param_1 + 0x1db0))) &&
                (uVar30 < *(uint *)(param_1 + 0x1db0))) {
          lVar26 = *(long *)(param_1 + 0x1db8);
          lVar23 = 0x1db8;
LAB_02d5f0f8:
          puVar37 = (undefined8 *)(lVar26 + (long)(int)uVar30 * 8);
          uVar42 = *puVar37;
          *puVar37 = *(undefined8 *)(lVar26 + (long)(int)uVar31 * 8);
          *(undefined8 *)(*(long *)(param_1 + lVar23) + (long)(int)uVar31 * 8) = uVar42;
        }
      }
      goto LAB_02d5f118;
    }
    if ((uVar6 & 0xfffffffe) != 0x18 && (bVar16 || 1 < uVar6)) {
      FUN_02d5fe90(param_1,uVar31,uVar30);
    }
    lVar23 = *(long *)(param_1 + 0x1680);
    if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x570), lVar26 == 0)) {
LAB_02d5f360:
      bVar39 = true;
      goto LAB_02d5f11c;
    }
    if (*(uint *)(lVar26 + 0x298) < 2) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(int *)(lVar26 + 0x444) + *(int *)(lVar26 + 0x2e8) * *(int *)(lVar26 + 0x440);
    }
    if ((uVar32 != uVar31) && (uVar32 != uVar30)) goto LAB_02d5f360;
    bVar39 = true;
    lVar23 = *(long *)(lVar23 + 0x570);
  }
  if (lVar23 == 0) goto LAB_02d5f380;
  if (*(uint *)(lVar23 + 0x298) < 2) {
    iVar17 = 0;
  }
  else {
    iVar17 = *(int *)(lVar23 + 0x444) + *(int *)(lVar23 + 0x2e8) * *(int *)(lVar23 + 0x440);
  }
  if (iVar17 < *(int *)(lVar23 + 0x3d4)) {
    iVar18 = *(int *)(lVar23 + 0x2e8);
    iVar33 = 0;
    if (iVar18 != 0) {
      iVar33 = iVar17 / iVar18;
    }
    iVar35 = *(int *)(lVar23 + 0x430) - *(int *)(lVar23 + 0x438);
    if ((*(byte *)(lVar23 + 1000) >> 1 & 1) != 0) {
      uVar30 = *(uint *)(lVar23 + 0x434);
      uVar31 = 0;
      if ((int)uVar30 < iVar35) {
        uVar31 = ~uVar30;
      }
      if (iVar35 < 0) {
        uVar31 = uVar30 + 1;
      }
      iVar35 = uVar31 + iVar35;
    }
    uVar31 = (iVar17 - iVar33 * iVar18) + (iVar33 - iVar35) * iVar18;
    uVar30 = *(uint *)(lVar23 + 0x208);
    bVar13 = (int)uVar31 < 0;
    bVar14 = (int)uVar30 <= (int)uVar31;
    if (bVar13 || bVar14) {
      uVar31 = 0xffffffff;
    }
    if ((((bVar13 || bVar14) || (int)uVar30 <= (int)uVar31) || uVar30 < uVar31) ||
        ((!bVar13 && !bVar14) && (int)uVar31 < (int)uVar30) && uVar30 == uVar31) goto LAB_02d5f1d8;
    puVar37 = *(undefined8 **)(*(long *)(lVar23 + 0x210) + (ulong)uVar31 * 8);
  }
  else {
LAB_02d5f1d8:
    puVar37 = (undefined8 *)0x0;
  }
  if ((*PTR_DAT_04bc4d98 & 1) == 0) {
    iVar18 = __cxa_guard_acquire(PTR_DAT_04bc4d98);
    if (iVar18 != 0) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
  }
  if (puVar37 != (undefined8 *)0x0) {
    uVar20 = (**(code **)*puVar37)(puVar37,PTR_DAT_04bc4d90);
    puVar2 = PTR_DAT_04bb3170;
    if ((uVar20 & 1) != 0) {
      lVar23 = *(long *)(param_1 + 0x1660);
      if (lVar23 != 0) {
        local_148._0_8_ = 0;
        uVar42 = puVar37[0x3a];
        local_148._8_8_ = *(undefined8 *)PTR_DAT_04bb37e0;
        FUN_007ef010(local_138,PTR_DAT_04bb3170);
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        local_108 = PTR_DAT_04bc5058 + 0x10;
        local_134 = 0xffffffff;
        local_e8 = 0xffffffff;
        local_c8 = local_bc;
        local_118 = 0;
        uStack_110 = 0;
        local_9e = 0;
        local_c0 = 0x10;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = PTR_DAT_04bbd6c0 + 0x10;
        local_bc[0] = 0;
        if (*(short *)(param_1 + 0x1668) != *(short *)puVar2) {
          local_138[0] = *(short *)(param_1 + 0x1668);
        }
        local_148._0_8_ = uVar42;
        FUN_03111440(lVar23,local_148);
      }
      if ((!bVar39) && (*(int *)(param_1 + 0x26e0) < *(int *)(param_1 + 0x26e4))) {
        puVar24 = *(undefined8 **)(param_1 + 0x26f0);
        if (puVar24 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x26f0) = *puVar24;
        }
        puVar24[1] = 0;
        puVar24[2] = 0;
        *puVar24 = 0;
        *(undefined2 *)(puVar24 + 1) = *(undefined2 *)PTR_DAT_04bb3170;
        *(undefined4 *)((long)puVar24 + 0xc) = 0xffffffff;
        if (*(int *)(param_1 + 0x26e0) < *(int *)(param_1 + 0x26e4)) {
          *(undefined8 **)(*(long *)(param_1 + 0x26e8) + (long)*(int *)(param_1 + 0x26e0) * 8) =
               puVar24;
          *(int *)(param_1 + 0x26e0) = *(int *)(param_1 + 0x26e0) + 1;
        }
        *puVar24 = puVar37;
        uVar9 = *(undefined2 *)(param_1 + 0x1668);
        *(int *)((long)puVar24 + 0xc) = iVar17;
        *(undefined1 *)(puVar24 + 2) = 0;
        *(undefined2 *)(puVar24 + 1) = uVar9;
      }
    }
  }
LAB_02d5f380:
  local_178 = (int *)(param_1 + 0x26e0);
  if (*(char *)(param_1 + 0x26dd) != '\0') {
    FUN_007ef010(local_148,*(long *)puVar1 + 0x500);
    if (*(int *)(param_1 + 0x26e0) < *(int *)(param_1 + 0x26e4)) {
      puVar37 = *(undefined8 **)(param_1 + 0x26f0);
      if (puVar37 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x26f0) = *puVar37;
      }
      puVar37[1] = 0;
      puVar37[2] = 0;
      *puVar37 = 0;
      *(undefined2 *)(puVar37 + 1) = *(undefined2 *)PTR_DAT_04bb3170;
      *(undefined4 *)((long)puVar37 + 0xc) = 0xffffffff;
      if (*(int *)(param_1 + 0x26e0) < *(int *)(param_1 + 0x26e4)) {
        *(undefined8 **)(*(long *)(param_1 + 0x26e8) + (long)*(int *)(param_1 + 0x26e0) * 8) =
             puVar37;
        *(int *)(param_1 + 0x26e0) = *(int *)(param_1 + 0x26e0) + 1;
      }
      *puVar37 = 0;
      *(undefined4 *)((long)puVar37 + 0xc) = 0xffffffff;
      *(undefined1 *)(puVar37 + 2) = 0;
      *(undefined2 *)(puVar37 + 1) = local_148._0_2_;
    }
    uVar31 = *(uint *)(param_1 + 0x2980);
    uVar20 = (ulong)uVar31;
    if (0 < (int)uVar31) {
      puVar37 = *(undefined8 **)(param_1 + 0x2988);
      do {
        if (local_148._0_2_ == *(short *)*puVar37) goto LAB_02d5f498;
        puVar37 = puVar37 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if ((int)uVar31 < *(int *)(param_1 + 0x2984)) {
      puVar37 = *(undefined8 **)(param_1 + 0x2990);
      if (puVar37 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x2990) = *puVar37;
      }
      FUN_007ef010(puVar37,local_148);
      if (*(int *)(param_1 + 0x2980) < *(int *)(param_1 + 0x2984)) {
        *(undefined8 **)(*(long *)(param_1 + 0x2988) + (long)*(int *)(param_1 + 0x2980) * 8) =
             puVar37;
        *(int *)(param_1 + 0x2980) = *(int *)(param_1 + 0x2980) + 1;
      }
    }
  }
LAB_02d5f498:
  if ((*(long *)(param_1 + 0x1680) != 0) &&
     (lVar23 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570), lVar23 != 0)) {
    iVar17 = *(int *)(lVar23 + 0x2f8);
    if (0 < iVar17) {
      iVar18 = 0;
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      psVar36 = (short *)PTR_DAT_04bb3170;
      do {
        iVar35 = *(int *)(lVar23 + 0x2e8);
        iVar33 = *(int *)(lVar23 + 0x430) - *(int *)(lVar23 + 0x438);
        iVar10 = 0;
        if (iVar35 != 0) {
          iVar10 = iVar18 / iVar35;
        }
        if ((*(byte *)(lVar23 + 1000) >> 1 & 1) == 0) {
          iVar33 = iVar33 + iVar10;
        }
        else {
          uVar30 = *(uint *)(lVar23 + 0x434);
          uVar31 = 0;
          if ((int)uVar30 < iVar33) {
            uVar31 = ~uVar30;
          }
          if (iVar33 < 0) {
            uVar31 = uVar30 + 1;
          }
          iVar3 = iVar33 + iVar10 + uVar31;
          iVar33 = *(int *)(lVar23 + 0x3d0);
          iVar5 = 0;
          if (iVar33 <= iVar3) {
            iVar5 = iVar33;
          }
          if (-1 < iVar3) {
            iVar33 = -iVar5;
          }
          iVar33 = iVar33 + iVar3;
        }
        uVar30 = (iVar18 - iVar10 * iVar35) + iVar33 * iVar35;
        bVar14 = (int)uVar30 < 0;
        bVar39 = *(int *)(lVar23 + 0x3cc) <= (int)uVar30;
        uVar31 = uVar30;
        if (bVar14 || bVar39) {
          uVar31 = 0xffffffff;
        }
        if (*(int *)(param_1 + 0x26e0) != 0) {
          puVar37 = *(undefined8 **)(param_1 + 0x26e8);
          puVar24 = puVar37 + *(int *)(param_1 + 0x26e0);
          do {
            plVar19 = (long *)*puVar37;
            if ((*(int *)((long)plVar19 + 0xc) < 0) || (*plVar19 == 0)) {
              sVar21 = *psVar36;
              local_90[0] = (undefined1 *)CONCAT62(local_90[0]._2_6_,sVar21);
              uVar32 = *(uint *)(param_1 + 0x1578);
              if (((int)uVar32 < 0) || (*(int *)(param_1 + 0x1560) <= (int)uVar32)) {
joined_r0x02d5f714:
                local_148._0_8_ = CONCAT44(local_148._4_4_,0xffffffff);
                iVar17 = -1;
                if (bVar14 || bVar39) goto LAB_02d5f720;
LAB_02d5f69c:
                if (local_148._0_4_ != 0x53) {
                  if ((local_148._0_4_ == 0x52) &&
                     (plVar40 = (long *)(param_1 + 0x1758), (int)uVar30 < *(int *)(param_1 + 0x1750)
                     )) goto LAB_02d5f6d4;
                  goto LAB_02d5f720;
                }
                plVar40 = (long *)(param_1 + 0x1db8);
                if (*(int *)(param_1 + 0x1db0) <= (int)uVar30) goto LAB_02d5f720;
LAB_02d5f6d4:
                iVar33 = **(int **)(*plVar40 + (ulong)uVar31 * 8);
                if (iVar33 == -1) goto LAB_02d5f720;
                FUN_0344d0c0(local_90,iVar33,iVar17 == 0x53);
                psVar36 = (short *)PTR_DAT_04bb3170;
                sVar21 = (short)local_90[0];
              }
              else {
                lVar26 = param_1 + 0x1550;
                if (6 < uVar32) {
                  uVar34 = uVar32 + 1 & 0xfffffff8;
                  do {
                    uVar34 = uVar34 - 8;
                    lVar26 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(lVar26 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                      + 8);
                  } while (uVar34 != 0);
                }
                for (uVar32 = uVar32 + 1 & 7; uVar32 != 0; uVar32 = uVar32 - 1) {
                  lVar26 = *(long *)(lVar26 + 8);
                }
                if ((lVar26 == 0) || (lVar26 = lVar26 - *(int *)(param_1 + 0x1564), lVar26 == 0))
                goto joined_r0x02d5f714;
                iVar17 = *(int *)(lVar26 + 0x270);
                local_148._0_4_ = iVar17;
                if (!bVar14 && !bVar39) goto LAB_02d5f69c;
LAB_02d5f720:
                local_90[0] = (undefined1 *)CONCAT62(local_90[0]._2_6_,sVar21);
              }
              if (sVar21 == (short)plVar19[1]) {
                if ((int)uVar31 < *(int *)(lVar23 + 0x3d4)) {
                  iVar17 = *(int *)(lVar23 + 0x430) - *(int *)(lVar23 + 0x438);
                  if ((*(byte *)(lVar23 + 1000) >> 1 & 1) != 0) {
                    uVar34 = *(uint *)(lVar23 + 0x434);
                    uVar32 = 0;
                    if ((int)uVar34 < iVar17) {
                      uVar32 = ~uVar34;
                    }
                    if (iVar17 < 0) {
                      uVar32 = uVar34 + 1;
                    }
                    iVar17 = uVar32 + iVar17;
                  }
                  iVar33 = *(int *)(lVar23 + 0x2e8);
                  iVar35 = 0;
                  if (iVar33 != 0) {
                    iVar35 = (int)uVar31 / iVar33;
                  }
                  uVar34 = *(uint *)(lVar23 + 0x208);
                  uVar32 = (uVar31 - iVar35 * iVar33) + (iVar35 - iVar17) * iVar33;
                  bVar15 = (int)uVar32 < 0;
                  bVar13 = (int)uVar34 <= (int)uVar32;
                  if (bVar15 || bVar13) {
                    uVar32 = 0xffffffff;
                  }
                  if ((((bVar15 || bVar13) || (int)uVar34 <= (int)uVar32) || uVar34 < uVar32) ||
                      ((!bVar15 && !bVar13) && (int)uVar32 < (int)uVar34) && uVar34 == uVar32)
                  goto LAB_02d5f7a8;
                  puVar38 = *(undefined8 **)(*(long *)(lVar23 + 0x210) + (ulong)uVar32 * 8);
                }
                else {
LAB_02d5f7a8:
                  puVar38 = (undefined8 *)0x0;
                }
                if ((*PTR_DAT_04bc4d98 & 1) == 0) {
                  iVar17 = __cxa_guard_acquire(PTR_DAT_04bc4d98);
                  psVar36 = (short *)PTR_DAT_04bb3170;
                  if (iVar17 != 0) {
                    *(undefined **)PTR_DAT_04bc4d90 = puVar1;
                    __cxa_guard_release(PTR_DAT_04bc4d98);
                    psVar36 = (short *)PTR_DAT_04bb3170;
                  }
                }
                if (puVar38 == (undefined8 *)0x0) {
                  puVar38 = (undefined8 *)0x0;
                }
                else {
                  uVar20 = (**(code **)*puVar38)(puVar38,PTR_DAT_04bc4d90);
                  if ((uVar20 & 1) == 0) {
                    puVar38 = (undefined8 *)0x0;
                  }
                  psVar36 = (short *)PTR_DAT_04bb3170;
                }
                *plVar19 = (long)puVar38;
                *(uint *)((long)plVar19 + 0xc) = uVar31;
                *(undefined1 *)(plVar19 + 2) = 1;
              }
            }
            puVar37 = puVar37 + 1;
          } while (puVar37 != puVar24);
          iVar17 = *(int *)(lVar23 + 0x2f8);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar17);
    }
    if (*(int *)(param_1 + 0x26e0) != 0) {
      puVar37 = *(undefined8 **)(param_1 + 0x26e8);
      puVar24 = puVar37 + *(int *)(param_1 + 0x26e0);
      local_158 = uVar6 & 0xfffffffe;
      lVar26 = param_1 + 0x250;
      puVar1 = PTR_DAT_04bc4da0 + 0x10;
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      do {
        uVar31 = *(uint *)(param_1 + 0x1578);
        if ((int)uVar31 < 0) {
LAB_02d5f960:
          iVar17 = -1;
        }
        else {
          iVar17 = -1;
          if ((int)uVar31 < *(int *)(param_1 + 0x1560)) {
            lVar25 = param_1 + 0x1550;
            if (6 < uVar31) {
              uVar30 = uVar31 + 1 & 0xfffffff8;
              do {
                uVar30 = uVar30 - 8;
                lVar25 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar25 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar30 != 0);
            }
            for (uVar31 = uVar31 + 1 & 7; uVar31 != 0; uVar31 = uVar31 - 1) {
              lVar25 = *(long *)(lVar25 + 8);
            }
            if (lVar25 == 0) goto LAB_02d5f960;
            iVar17 = -1;
            lVar25 = lVar25 - *(int *)(param_1 + 0x1564);
            if (lVar25 != 0) {
              iVar17 = *(int *)(lVar25 + 0x270);
            }
          }
        }
        plVar19 = (long *)*puVar37;
        if ((*(long *)(param_1 + 0x1680) != 0) &&
           (lVar25 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570), lVar25 != 0)) {
          uVar31 = *(uint *)((long)plVar19 + 0xc);
          if ((int)uVar31 < *(int *)(lVar25 + 0x3d4)) {
            iVar18 = *(int *)(lVar25 + 0x430) - *(int *)(lVar25 + 0x438);
            if ((*(byte *)(lVar25 + 1000) >> 1 & 1) != 0) {
              uVar32 = *(uint *)(lVar25 + 0x434);
              uVar30 = 0;
              if ((int)uVar32 < iVar18) {
                uVar30 = ~uVar32;
              }
              if (iVar18 < 0) {
                uVar30 = uVar32 + 1;
              }
              iVar18 = uVar30 + iVar18;
            }
            iVar33 = *(int *)(lVar25 + 0x2e8);
            iVar35 = 0;
            if (iVar33 != 0) {
              iVar35 = (int)uVar31 / iVar33;
            }
            uVar32 = *(uint *)(lVar25 + 0x208);
            uVar30 = (uVar31 - iVar35 * iVar33) + (iVar35 - iVar18) * iVar33;
            bVar14 = (int)uVar30 < 0;
            bVar39 = (int)uVar32 <= (int)uVar30;
            if (bVar14 || bVar39) {
              uVar30 = 0xffffffff;
            }
            if ((((bVar14 || bVar39) || (int)uVar32 <= (int)uVar30) || uVar32 < uVar30) ||
                ((!bVar14 && !bVar39) && (int)uVar30 < (int)uVar32) && uVar32 == uVar30)
            goto LAB_02d5f9f4;
            puVar38 = *(undefined8 **)(*(long *)(lVar25 + 0x210) + (ulong)uVar30 * 8);
          }
          else {
LAB_02d5f9f4:
            puVar38 = (undefined8 *)0x0;
          }
          if ((*PTR_DAT_04bc4d98 & 1) == 0) {
            iVar18 = __cxa_guard_acquire(PTR_DAT_04bc4d98);
            if (iVar18 != 0) {
              *(undefined **)PTR_DAT_04bc4d90 = puVar1;
              __cxa_guard_release(PTR_DAT_04bc4d98);
            }
          }
          if (puVar38 != (undefined8 *)0x0) {
            uVar20 = (**(code **)*puVar38)(puVar38,PTR_DAT_04bc4d90);
            if (((uVar20 & 1) != 0) &&
               (plVar40 = *(long **)(puVar38[0x5e] + (ulong)(1 < *(uint *)(puVar38 + 0x5d)) * 8),
               plVar40 != (long *)0x0)) {
              if ((*(byte *)((long)puVar38 + 0x2c3) & 1) == 0) {
                local_148._8_4_ = 0x14;
                local_148._0_8_ = puVar2;
                (**(code **)(*plVar40 + 0x18))(plVar40,local_148);
                lVar25 = plVar40[3];
                uVar42 = 0;
              }
              else {
                local_148._0_4_ = iVar17;
                local_14c = CONCAT22(local_14c._2_2_,*(undefined2 *)PTR_DAT_04bb3170);
                if ((int)uVar31 < 0) {
LAB_02d5fb38:
                  local_14c = CONCAT22(local_14c._2_2_,*(undefined2 *)PTR_DAT_04bb3170);
                  uVar42 = 0x3f800000;
                  local_90[0] = (undefined1 *)((ulong)local_90[0] & 0xffffffff00000000);
                }
                else {
                  if (iVar17 != 0x53) {
                    if ((iVar17 == 0x52) &&
                       (plVar27 = (long *)(param_1 + 0x1758),
                       (int)uVar31 < *(int *)(param_1 + 0x1750))) goto LAB_02d5fad8;
                    goto LAB_02d5fb38;
                  }
                  plVar27 = (long *)(param_1 + 0x1db8);
                  if (*(int *)(param_1 + 0x1db0) <= (int)uVar31) goto LAB_02d5fb38;
LAB_02d5fad8:
                  iVar18 = **(int **)(*plVar27 + (ulong)uVar31 * 8);
                  if (iVar18 == -1) goto LAB_02d5fb38;
                  FUN_0344d0c0(&local_14c,iVar18,iVar17 == 0x53);
                  uVar42 = 0x3f800000;
                  local_90[0] = (undefined1 *)((ulong)local_90[0] & 0xffffffff00000000);
                  if ((local_14c & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) {
                    uVar20 = FUN_02d6f230(param_1 + 0x1f8,&local_14c,local_90);
                    uVar42 = 0;
                    if ((uVar20 & 1) == 0) {
                      uVar42 = 0x3f800000;
                    }
                  }
                }
                local_148._0_8_ = PTR_DAT_04bc4f00 + 0x10;
                local_148._8_4_ = 0x14;
                (**(code **)(*plVar40 + 0x18))(plVar40,local_148);
                lVar25 = plVar40[3];
              }
              (**(code **)(lVar25 + 0x158))(uVar42,plVar40[1]);
            }
          }
        }
        if (((*plVar19 != 0) && ((short)plVar19[1] != *(short *)PTR_DAT_04bb3170)) &&
           (-1 < *(int *)((long)plVar19 + 0xc))) {
          FUN_0306cbd0(param_1);
          if (((local_158 != 0x18 && (char)plVar19[2] != '\0') && (bVar16 || 1 < uVar6)) &&
             (*(long *)(param_1 + 0x218) != 0)) {
            iVar17 = *(int *)((long)plVar19 + 0xc);
            uVar31 = 0xffffffff;
            if (iVar17 < *(int *)(lVar23 + 0x3d4)) {
              iVar18 = *(int *)(lVar23 + 0x430) - *(int *)(lVar23 + 0x438);
              if ((*(byte *)(lVar23 + 1000) >> 1 & 1) != 0) {
                uVar30 = *(uint *)(lVar23 + 0x434);
                uVar31 = 0;
                if ((int)uVar30 < iVar18) {
                  uVar31 = ~uVar30;
                }
                if (iVar18 < 0) {
                  uVar31 = uVar30 + 1;
                }
                iVar18 = uVar31 + iVar18;
              }
              iVar33 = *(int *)(lVar23 + 0x2e8);
              iVar35 = 0;
              if (iVar33 != 0) {
                iVar35 = iVar17 / iVar33;
              }
              uVar31 = (iVar17 - iVar35 * iVar33) + (iVar35 - iVar18) * iVar33;
              if (*(int *)(lVar23 + 0x208) <= (int)uVar31 || 0x7fffffff < uVar31) {
                uVar31 = 0xffffffff;
              }
            }
            if (*(uint *)(param_1 + 0x210) <= uVar31) {
              uVar31 = 0;
            }
            plVar40 = (long *)(*(long *)(param_1 + 0x218) + (long)(int)uVar31 * 0x20);
            puVar41 = (uint *)(plVar40 + 1);
            uVar31 = *puVar41;
            if ((uVar31 < 100) &&
               (puVar28 = (uint *)(lVar26 + (ulong)uVar31 * 0x30 + 0x2c), 2 < *puVar28)) {
              *puVar28 = 2;
            }
            lVar25 = lVar26 + (ulong)uVar31 * 0x30;
            if (99 < uVar31) {
              lVar25 = lVar26;
            }
            if (*(int *)(lVar25 + 0x2c) != 0) {
              iVar17 = *(int *)(lVar25 + 0x2c);
              if (iVar17 == 1) {
                if ((*(ushort *)(lVar25 + 0x10) >> 1 & 1) == 0) {
                  uVar22 = 0;
LAB_02d5fd18:
                  *(undefined4 *)(lVar25 + 0x2c) = uVar22;
                }
              }
              else if (iVar17 == 4) {
                uVar20 = FUN_01596728(lVar25);
                uVar22 = 5;
                if ((uVar20 & 1) != 0) goto LAB_02d5fd18;
              }
              else if (iVar17 == 2) {
                if ((*(ushort *)(lVar25 + 0x10) >> 1 & 1) != 0) {
                  uVar20 = FUN_015a30c0(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x100),lVar25);
                  if ((uVar20 & 1) == 0) goto LAB_02d5fd1c;
                }
                uVar22 = 1;
                goto LAB_02d5fd18;
              }
            }
LAB_02d5fd1c:
            uVar31 = 0;
            iVar17 = 0;
            do {
              piVar29 = (int *)(lVar26 + (long)iVar17 * 0x30 + 0x2c);
              if (*piVar29 == 0) {
LAB_02d5fd74:
                *(short *)(lVar26 + (long)iVar17 * 0x30 + 0x28) = (short)plVar19[1];
                *piVar29 = 3;
                if (*puVar41 != uVar31) {
                  *puVar41 = uVar31;
                  *(undefined4 *)(plVar40 + 3) = 1;
                }
                goto LAB_02d5f8a0;
              }
              piVar29 = (int *)(lVar26 + (long)(iVar17 + 1) * 0x30 + 0x2c);
              if (*piVar29 == 0) {
                uVar31 = uVar31 + 1;
                iVar17 = iVar17 + 1;
                goto LAB_02d5fd74;
              }
              uVar31 = uVar31 + 2;
              iVar17 = iVar17 + 2;
            } while (uVar31 != 100);
            if (*puVar41 != 0xffffffff) {
              *puVar41 = 0xffffffff;
            }
LAB_02d5f8a0:
            (**(code **)(*plVar40 + 0x18))(plVar40,param_1 + 0x248);
          }
        }
        puVar37 = puVar37 + 1;
      } while (puVar37 != puVar24);
    }
  }
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  if (0 < *local_178) {
    lVar23 = 0;
    puVar37 = *(undefined8 **)(param_1 + 0x26f0);
    do {
      puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x26e8) + lVar23 * 8);
      lVar23 = lVar23 + 1;
      *puVar24 = puVar37;
      *(undefined8 **)(param_1 + 0x26f0) = puVar24;
      puVar37 = puVar24;
    } while (lVar23 < *(int *)(param_1 + 0x26e0));
  }
  *local_178 = 0;
  return;
}

