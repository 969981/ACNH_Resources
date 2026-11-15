
/* WARNING: Removing unreachable block (ram,0x02423de0) */
/* WARNING: Removing unreachable block (ram,0x02424088) */

void FUN_02423b10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  char *__src;
  undefined8 *puVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  char *pcVar23;
  undefined4 uVar24;
  float fVar25;
  byte local_1e0;
  undefined1 uStack_1df;
  undefined2 uStack_1de;
  undefined4 uStack_1dc;
  undefined2 uStack_1d8;
  undefined1 uStack_1d6;
  undefined1 uStack_1d5;
  undefined2 uStack_1d4;
  undefined1 uStack_1d2;
  undefined1 uStack_1d1;
  long local_1d0;
  char *local_180;
  int local_178;
  undefined8 *local_128;
  int local_120;
  undefined1 local_d8;
  undefined1 local_b4;
  byte local_90 [4];
  byte local_8c [4];
  undefined8 local_88;
  undefined2 local_80 [2];
  uint local_7c;
  
  uVar7 = *(ushort *)(param_1 + 0x1954);
  bVar6 = *(byte *)(param_1 + 0x1953);
  if (7 < bVar6) {
    bVar6 = 0;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar12 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar21 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar21 + 0x278) * 999.99994);
    iVar13 = (int)(*(float *)(lVar21 + 0x27c) * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar13;
    fVar25 = *(float *)(lVar21 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar25 * 999.99994);
    uVar12 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar12;
  pbVar3 = (byte *)(param_1 + 0x1ee8);
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar24 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar17 + 0x2ec) = uVar24;
    *(undefined1 *)((long)puVar17 + 0x2e5) = 1;
  }
  if ((uVar7 >> 1 & 1) == 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
    if ((*(ushort *)(param_1 + 0x1954) >> 8 & 1) == 0) {
      local_8c[0] = *pbVar3;
      if (7 < local_8c[0]) {
        local_8c[0] = 0xff;
      }
      FUN_024232e0(local_8c,param_1 + 0x18e0);
    }
    FUN_023203ac(param_1,0,0);
    local_1e0 = 0;
    uStack_1df = 0;
    uStack_1de = 0;
    uStack_1dc = CONCAT31(uStack_1dc._1_3_,1);
    uStack_1d8 = 6;
    uStack_1d6 = 0;
    uStack_1d5 = 0;
    uStack_1d2 = 0;
    uStack_1d4 = 0;
    FUN_02321e44(&local_88,param_1,&local_1e0);
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_023752f4(param_1,bVar6,6);
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      if (bVar6 == 1) {
        FUN_0231b68c();
      }
      else {
        FUN_023164ec(param_1,6);
      }
    }
    FUN_02421f40(param_1);
    if ((uVar7 >> 9 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
    plVar22 = *(long **)(param_1 + 0x60);
    if (plVar22 == (long *)0x0) {
      return;
    }
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,PTR_DAT_04bb3798);
    if ((uVar14 & 1) == 0) {
      return;
    }
    lVar21 = plVar22[0x1835];
    uStack_1d6 = (undefined1)plVar22[0x1836];
    uStack_1d4 = *(undefined2 *)((long)plVar22 + 0xc1b2);
    uStack_1d2 = 1;
    local_1d0 = CONCAT26(local_1d0._6_2_,0x10000000000);
    local_1e0 = *pbVar3;
    uStack_1de = (undefined2)lVar21;
    uStack_1dc = (undefined4)((ulong)lVar21 >> 0x10);
    uStack_1d8 = (undefined2)((ulong)lVar21 >> 0x30);
    if (7 < local_1e0) {
      local_1e0 = 0xff;
    }
    FUN_0254212c(&local_1e0);
    return;
  }
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar17 = &DAT_05240280;
      lVar21 = DAT_052413b8;
      goto joined_r0x024248dc;
    }
    puVar17 = &DAT_05240280;
    lVar21 = DAT_052413b8;
    if (DAT_052413b8 != 0) goto LAB_02423cdc;
LAB_02423d34:
    local_88 = (ulong)local_88._4_4_ << 0x20;
  }
  else {
    lVar21 = puVar17[0x227];
joined_r0x024248dc:
    if (lVar21 == 0) goto LAB_02423d34;
LAB_02423cdc:
    local_88 = CONCAT44(local_88._4_4_,*(uint *)(puVar17 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_1e0 = 0x26;
    uStack_1df = 0;
    uStack_1de = 0;
    uVar14 = FUN_03850890(lVar21,0x26,0,*(uint *)(puVar17 + 0x2d3) >> 1 & 1);
    if ((uVar14 & 1) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      if ((*(ushort *)(param_1 + 0x1954) >> 8 & 1) == 0) {
        local_90[0] = *pbVar3;
        if (7 < local_90[0]) {
          local_90[0] = 0xff;
        }
        FUN_024232e0(local_90,param_1 + 0x18e0);
      }
      FUN_023203ac(param_1,0,0);
      local_1e0 = 0;
      uStack_1df = 0;
      uStack_1de = 0;
      uStack_1dc = CONCAT31(uStack_1dc._1_3_,1);
      uStack_1d8 = 6;
      uStack_1d6 = 0;
      uStack_1d5 = 0;
      uStack_1d2 = 0;
      uStack_1d4 = 0;
      FUN_02321e44(&local_88,param_1,&local_1e0);
      FUN_02421f40(param_1);
      if ((((uVar7 >> 9 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) &&
         (plVar22 = *(long **)(param_1 + 0x60), plVar22 != (long *)0x0)) {
        if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar13 != 0)) {
          *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37a0);
        }
        uVar14 = (**(code **)(*plVar22 + 0x10))(plVar22,PTR_DAT_04bb3798);
        if ((uVar14 & 1) != 0) {
          lVar21 = plVar22[0x1835];
          uStack_1d6 = (undefined1)plVar22[0x1836];
          uStack_1d4 = *(undefined2 *)((long)plVar22 + 0xc1b2);
          uStack_1d2 = 1;
          local_1d0 = CONCAT26(local_1d0._6_2_,0x10000000000);
          local_1e0 = *pbVar3;
          uStack_1de = (undefined2)lVar21;
          uStack_1dc = (undefined4)((ulong)lVar21 >> 0x10);
          uStack_1d8 = (undefined2)((ulong)lVar21 >> 0x30);
          if (7 < local_1e0) {
            local_1e0 = 0xff;
          }
          FUN_0254212c(&local_1e0);
        }
      }
    }
  }
  uVar8 = *(ushort *)(param_1 + 0x1951);
  lVar21 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar21 + 0x13b0) + 0xf0))(lVar21 + 0x13b0);
  fVar25 = *pfVar15;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_88 = CONCAT44(local_88._4_4_,10);
    local_1e0 = 10;
    uStack_1df = 0;
    uStack_1de = 0;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02423f90;
  }
  else {
LAB_02423f90:
    iVar13 = (uint)uVar8 * 0x10000;
    plVar22 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar22 = *(long **)(param_1 + 0x4c8);
    }
    lVar21 = (**(code **)(*plVar22 + 0x148))();
    iVar20 = iVar13 - *(int *)(lVar21 + 4);
    if (0xb60b5e < iVar20 + 0x5b05afU) {
      iVar9 = 0x15555560;
      iVar13 = -0x15555560;
      iVar20 = (int)(fVar25 * (float)iVar20);
      if (iVar20 < 1) {
        iVar9 = -0x5b05b0;
      }
      else {
        iVar13 = 0x5b05b0;
      }
      iVar4 = iVar20;
      if (iVar9 <= iVar20) {
        iVar4 = iVar9;
      }
      if (iVar13 <= iVar20) {
        iVar13 = iVar4;
      }
      iVar13 = iVar13 + *(int *)(lVar21 + 4);
    }
    *(int *)(lVar21 + 4) = iVar13;
  }
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar13 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar13 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  lVar21 = puVar17[0x227];
  if (lVar21 == 0) {
    if ((uVar7 & 0x31) != 0) {
      uVar12 = 0;
      goto LAB_02424094;
    }
    local_88 = (ulong)local_88._4_4_ << 0x20;
    local_1e0 = 0;
LAB_024240f8:
    uStack_1de = 0;
    uStack_1df = 0;
  }
  else {
    local_1e0 = 1;
    uStack_1df = 0;
    uStack_1de = 0;
    uVar12 = *(uint *)(puVar17 + 0x2d3) >> 1 & 1;
    if ((uVar7 & 0x31) == 0) {
      local_88 = CONCAT44(local_88._4_4_,*(uint *)(puVar17 + 0x2d3) >> 1) & 0xffffffff00000001;
      local_1e0 = (byte)uVar12;
      uStack_1df = 0;
      uStack_1de = 0;
      if (lVar21 == 0) goto LAB_024240f8;
      uVar16 = FUN_03850368(lVar21,uVar12);
      uVar14 = local_88;
      if ((((uVar16 & 1) != 0) || (puVar17[0x227] == 0)) ||
         (uVar16 = FUN_03850368(puVar17[0x227],local_88 & 0xffffffff), (uVar16 & 1) != 0))
      goto LAB_024240fc;
      uVar14 = FUN_0384fca4(puVar17[0x227],uVar14 & 0xffffffff);
    }
    else {
LAB_02424094:
      uVar14 = FUN_0170a6d0(puVar17,uVar12);
    }
    if ((uVar14 & 1) == 0) {
      return;
    }
  }
LAB_024240fc:
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar21 == 0) || (*(int *)(lVar21 + 0x15c) == 0)) {
LAB_0242415c:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_1e0 = (byte)puVar1;
    uStack_1df = (undefined1)((ulong)puVar1 >> 8);
    uStack_1de = (undefined2)((ulong)puVar1 >> 0x10);
    uStack_1dc = (undefined4)((ulong)puVar1 >> 0x20);
    uStack_1d8 = 0x8862;
    uStack_1d6 = 6;
    uStack_1d5 = 4;
    uStack_1d4 = 0;
    uStack_1d2 = 0;
    uStack_1d1 = 0;
    iVar13 = FUN_0274bce0(pbVar3,&local_1e0);
    puVar1 = PTR_DAT_04bb43c0;
    if ((iVar13 == 0) && (*(char *)(param_1 + 0x1948) != '\0')) {
      uVar14 = 0;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        local_88 = 0xfffe;
        FUN_0277d4ac(&local_88);
        if ((uVar14 < 8) && (uVar14 < *(byte *)(param_1 + 0x1948))) {
          local_1e0 = 0xfe;
          uStack_1df = 0xff;
          uStack_1de = 0;
          uStack_1dc = 0;
          FUN_0277d4ac(&local_1e0);
          local_88 = *(ulong *)(param_1 + 0x1900 + uVar14 * 9);
          if (((uint)local_88 & 0xffff) != 0xfffe) {
            lVar21 = *(long *)puVar1;
            uStack_1d4 = (undefined2)(local_88 >> 0x20);
            uStack_1d2 = (undefined1)(local_88 >> 0x30);
            uStack_1d1 = (undefined1)(local_88 >> 0x38);
            local_1d0 = 0;
            local_1e0 = (byte)puVar2;
            uStack_1df = (undefined1)((ulong)puVar2 >> 8);
            uStack_1de = (undefined2)((ulong)puVar2 >> 0x10);
            uStack_1dc = (undefined4)((ulong)puVar2 >> 0x20);
            uStack_1d8 = (short)local_88;
            uStack_1d6 = (char)(local_88 >> 0x10);
            uStack_1d5 = (char)(local_88 >> 0x18);
            uVar12 = FUN_0277d6c4(&uStack_1d8);
            if (*(long *)puVar1 != 0) {
              lVar21 = *(long *)(lVar21 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                lVar21 = *(long *)PTR_DAT_04bc0428;
                uVar12 = FUN_0277d6c4(&local_88);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
                   (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8),
                   lVar21 != 0)) {
                  local_1d0 = lVar21;
                }
              }
            }
            local_80[0] = 0;
            FUN_01adab50(&local_1e0,local_80);
            uVar12 = 0;
            do {
              local_7c = uVar12;
              if ((local_7c != 0) && (local_7c < 0xe)) {
                uVar12 = local_7c + 7;
                if (-1 < (int)local_7c) {
                  uVar12 = local_7c;
                }
                if (((uint)((int)uVar12 >> 3) < 2) &&
                   ((*(byte *)((long)local_80 + (ulong)(uint)((int)uVar12 >> 3)) >>
                     (ulong)(local_7c & 7) & 1) != 0)) {
                  if ((local_7c == 9) && (iVar13 = FUN_01ad78cc(&local_1e0), iVar13 == 0x43)) {
                    FUN_0257a010(&local_1e0);
                    if (local_128 != &DAT_0407ebb1) {
                      iVar13 = 0;
                      if (local_120 < 1) {
                        iVar13 = local_120 + -1;
                      }
                      memset(local_128,0,(long)iVar13);
                      *(undefined1 *)((long)local_128 + (long)iVar13) = 0;
                    }
                    pcVar23 = (char *)CONCAT17(uStack_1d1,
                                               CONCAT16(uStack_1d2,
                                                        CONCAT24(uStack_1d4,
                                                                 CONCAT13(uStack_1d5,
                                                                          CONCAT12(uStack_1d6,
                                                                                   uStack_1d8)))));
                    local_b4 = 0;
                    if (pcVar23 != "System_WherearenDustCloth") {
                      iVar13 = 0x19;
                      if ((int)local_1d0 < 0x1a) {
                        iVar13 = (int)local_1d0 + -1;
                      }
                      memcpy(pcVar23,"System_WherearenDustCloth",(long)iVar13);
                      pcVar23[iVar13] = '\0';
                    }
                    if (local_180 == "TipsDialog") goto LAB_024247e8;
                    __src = "TipsDialog";
                    bVar10 = SBORROW4(local_178,10);
                    iVar13 = local_178 + -10;
                    bVar11 = local_178 == 10;
                    iVar20 = 10;
                    pcVar23 = local_180;
                    goto LAB_024247d0;
                  }
                  break;
                }
              }
              uVar12 = local_7c + 1;
            } while (local_7c + 1 != 0xe);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(byte *)(param_1 + 0x1948));
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar21 + 0x158);
    }
    bVar19 = *pbVar3;
    bVar18 = *pbVar5;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    if (bVar18 == bVar19) goto LAB_0242415c;
  }
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar21 != 0) && (*(int *)(lVar21 + 0x15c) != 0)) {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar21 + 0x158);
    }
    bVar19 = *pbVar3;
    bVar18 = *pbVar5;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    if (bVar18 != bVar19) goto LAB_02424200;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_1e0 = (byte)puVar1;
  uStack_1df = (undefined1)((ulong)puVar1 >> 8);
  uStack_1de = (undefined2)((ulong)puVar1 >> 0x10);
  uStack_1dc = (undefined4)((ulong)puVar1 >> 0x20);
  uStack_1d8 = 0x69f4;
  uStack_1d6 = 0xb;
  uStack_1d5 = 4;
  uStack_1d4 = 0;
  uStack_1d2 = 0;
  uStack_1d1 = 0;
  iVar13 = FUN_0274bce0(pbVar3,&local_1e0);
  puVar1 = PTR_DAT_04bb43c0;
  if (iVar13 != 0) goto LAB_02424200;
  if (*(long *)PTR_DAT_04bb27d0 != 0) {
    if (*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) == 0) goto LAB_02424200;
    local_1e0 = 0;
    uStack_1df = 0;
    uStack_1de = 0;
    if ((*(uint *)(PTR_DAT_04bc1240 + 8) & 1) == 0) goto LAB_02424200;
  }
  if (*(char *)(param_1 + 0x1948) != '\0') {
    uVar14 = 0;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    do {
      local_88 = 0xfffe;
      FUN_0277d4ac(&local_88);
      if ((uVar14 < 8) && (uVar14 < *(byte *)(param_1 + 0x1948))) {
        local_1e0 = 0xfe;
        uStack_1df = 0xff;
        uStack_1de = 0;
        uStack_1dc = 0;
        FUN_0277d4ac(&local_1e0);
        local_88 = *(ulong *)(param_1 + 0x1900 + uVar14 * 9);
        if (((uint)local_88 & 0xffff) != 0xfffe) {
          lVar21 = *(long *)puVar1;
          local_1e0 = (byte)puVar2;
          uStack_1df = (undefined1)((ulong)puVar2 >> 8);
          uStack_1de = (undefined2)((ulong)puVar2 >> 0x10);
          uStack_1dc = (undefined4)((ulong)puVar2 >> 0x20);
          uStack_1d4 = (undefined2)(local_88 >> 0x20);
          uStack_1d2 = (undefined1)(local_88 >> 0x30);
          uStack_1d1 = (undefined1)(local_88 >> 0x38);
          local_1d0 = 0;
          uStack_1d8 = (short)local_88;
          uStack_1d6 = (char)(local_88 >> 0x10);
          uStack_1d5 = (char)(local_88 >> 0x18);
          uVar12 = FUN_0277d6c4(&uStack_1d8);
          if (*(long *)puVar1 != 0) {
            lVar21 = *(long *)(lVar21 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar21 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_88);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar21 + 0x1d8)) &&
                 (lVar21 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8), lVar21 != 0
                 )) {
                local_1d0 = lVar21;
              }
            }
          }
          local_80[0] = 0;
          FUN_01adab50(&local_1e0,local_80);
          uVar12 = 0;
          do {
            local_7c = uVar12;
            if ((local_7c != 0) && (local_7c < 0xe)) {
              uVar12 = local_7c + 7;
              if (-1 < (int)local_7c) {
                uVar12 = local_7c;
              }
              if (((uint)((int)uVar12 >> 3) < 2) &&
                 ((*(byte *)((long)local_80 + (ulong)(uint)((int)uVar12 >> 3)) >>
                   (ulong)(local_7c & 7) & 1) != 0)) {
                if ((local_7c == 9) && (iVar13 = FUN_01ad78cc(&local_1e0), iVar13 == 0x43)) {
                  FUN_0257a010(&local_1e0);
                  if (local_128 != &DAT_0407ebb1) {
                    iVar13 = 0;
                    if (local_120 < 1) {
                      iVar13 = local_120 + -1;
                    }
                    memset(local_128,0,(long)iVar13);
                    *(undefined1 *)((long)local_128 + (long)iVar13) = 0;
                  }
                  pcVar23 = (char *)CONCAT17(uStack_1d1,
                                             CONCAT16(uStack_1d2,
                                                      CONCAT24(uStack_1d4,
                                                               CONCAT13(uStack_1d5,
                                                                        CONCAT12(uStack_1d6,
                                                                                 uStack_1d8)))));
                  local_b4 = 0;
                  if (pcVar23 != "System_WherearenDustCloth") {
                    iVar13 = 0x19;
                    if ((int)local_1d0 < 0x1a) {
                      iVar13 = (int)local_1d0 + -1;
                    }
                    memcpy(pcVar23,"System_WherearenDustCloth",(long)iVar13);
                    pcVar23[iVar13] = '\0';
                  }
                  if (local_180 != "ChkGateOpen") {
                    __src = "ChkGateOpen";
                    bVar10 = SBORROW4(local_178,0xb);
                    iVar13 = local_178 + -0xb;
                    bVar11 = local_178 == 0xb;
                    iVar20 = 0xb;
                    pcVar23 = local_180;
LAB_024247d0:
                    if (bVar11 || iVar13 < 0 != bVar10) {
                      iVar20 = local_178 + -1;
                    }
                    memcpy(pcVar23,__src,(long)iVar20);
                    pcVar23[iVar20] = '\0';
                  }
LAB_024247e8:
                  local_d8 = 0;
                  FUN_024480f0(param_1,&local_1e0);
                  return;
                }
                break;
              }
            }
            uVar12 = local_7c + 1;
          } while (local_7c + 1 != 0xe);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(byte *)(param_1 + 0x1948));
  }
LAB_02424200:
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4(param_1,bVar6,6);
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar6 == 1) {
      FUN_0231b68c();
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

