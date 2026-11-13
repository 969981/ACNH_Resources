
/* WARNING: Removing unreachable block (ram,0x00d04140) */
/* WARNING: Removing unreachable block (ram,0x00d04150) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00d03ca0(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined8 *******pppppppuVar13;
  bool bVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint *puVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  long *plVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  undefined8 *puVar35;
  short sVar36;
  float fVar37;
  float fVar38;
  uint local_9da0;
  uint uStack_9d9c;
  undefined4 local_9d64;
  undefined **local_9d60;
  undefined8 *local_9d58;
  undefined8 local_9d50;
  undefined8 *local_9d48;
  undefined8 local_9d40;
  undefined8 uStack_9d38;
  undefined *local_9d30;
  undefined8 uStack_9d28;
  undefined1 local_9d20;
  ulong local_9d18;
  long lStack_9d10;
  undefined8 local_9d08;
  undefined2 local_9d00;
  undefined2 local_9cfe;
  undefined1 local_9cfc [12];
  ulong local_9cf0;
  undefined1 *local_9ce8;
  undefined8 local_9ce0;
  undefined ***apppuStack_9cd8 [3];
  undefined1 local_9cc0 [8];
  undefined1 auStack_9cb8 [8];
  undefined8 local_9cb0 [3];
  undefined1 local_9c98 [8];
  undefined1 auStack_9c90 [8];
  undefined8 local_9c88 [3];
  undefined1 local_9c70 [38368];
  undefined **local_690;
  undefined8 uStack_688;
  undefined1 *local_680;
  undefined8 uStack_678;
  undefined4 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined1 auStack_648 [128];
  undefined1 auStack_5c8 [968];
  undefined **local_200;
  undefined8 local_1f8;
  undefined8 *puStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined4 local_164;
  float local_15c [4];
  undefined4 local_14c;
  float local_148;
  float local_144;
  undefined4 local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 *******local_128;
  undefined8 *******local_120;
  undefined8 *******local_118;
  undefined8 *******local_110;
  undefined8 ******local_108;
  undefined8 *****local_100;
  undefined8 ****local_f8;
  undefined8 ***local_f0;
  undefined8 **local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [10];
  
  lVar32 = *(long *)PTR_DAT_04bb4e28;
  if (*(long *)PTR_DAT_04bb27f8 == 0 && lVar32 == 0) {
    return;
  }
  local_118 = &local_110;
  local_130 = (undefined8 *)0x0;
  local_110 = &local_108;
  local_128 = &local_118;
  local_108 = &local_100;
  local_138 = 0;
  local_100 = &local_f8;
  local_f8 = &local_f0;
  local_d8 = 0;
  local_f0 = &local_e8;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  if (local_d0 != (undefined8 *)0x0) {
    local_138 = 0x900000000;
    local_130 = local_d0;
  }
  local_120 = local_128;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar28 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar28 == 0)) {
    sVar36 = *(short *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
  }
  else if ((*(long **)(lVar28 + 0x60) == (long *)0x0) ||
          (puVar16 = (undefined8 *)**(long **)(lVar28 + 0x60), puVar16 == (undefined8 *)0x0)) {
    sVar36 = *(short *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40) + 2);
  }
  else {
    uVar17 = (**(code **)*puVar16)();
    sVar36 = *(short *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40) + 2);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar28 + 0x60) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 8), puVar16 != (undefined8 *)0x0)) {
      (**(code **)*puVar16)();
    }
  }
  if (*(int *)(lVar32 + 0xe0) != 0) {
    plVar22 = *(long **)(lVar32 + 0xe8);
    lVar32 = (long)*(int *)(lVar32 + 0xe0) << 3;
    do {
      pppppppuVar13 = local_128;
      lVar28 = *plVar22;
      if ((((*(ushort *)(lVar28 + 0x114) & 0x21) == 0) && (*(short *)(lVar28 + 0x38) != sVar36)) &&
         (iVar15 = *(int *)(lVar28 + 8), iVar15 != 0)) {
        if ((int)local_138 < local_138._4_4_) {
          if (local_128 != (undefined8 *******)0x0) {
            local_128 = (undefined8 *******)*local_128;
            iVar15 = *(int *)(lVar28 + 8);
          }
          *(int *)pppppppuVar13 = iVar15;
          if ((int)local_138 < local_138._4_4_) {
            local_130[(int)local_138] = pppppppuVar13;
            local_138 = CONCAT44(local_138._4_4_,(int)local_138 + 1);
          }
        }
      }
      plVar22 = plVar22 + 1;
      lVar32 = lVar32 + -8;
    } while (lVar32 != 0);
  }
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar32 = *(long *)PTR_DAT_04bb2720, lVar32 != 0)) &&
     (*(long *)(lVar32 + 0x330) != 0)) {
    puVar16 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar32 + 0x338));
    iVar15 = FUN_006bd550(*puVar16,0);
    if (((iVar15 == 0x758f7eaf) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
       ((lVar32 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar32 != 0 &&
        (*(int *)(lVar32 + 0x244) != 0)))) {
      lVar32 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar32 == 0) {
        uVar24 = 0;
        uVar21 = 0;
        uVar29 = 0x10;
        uVar25 = 0x10;
      }
      else {
        uVar24 = *(uint *)(lVar32 + 0xd88);
        uVar21 = *(uint *)(lVar32 + 0xd8c);
        uVar25 = *(uint *)(lVar32 + 0xd98);
        uVar29 = *(uint *)(lVar32 + 0xd9c);
      }
      uVar31 = uVar24;
      if ((int)uVar25 <= (int)uVar24) {
        uVar31 = uVar25;
      }
      if ((int)uVar24 <= (int)uVar25) {
        uVar24 = uVar25;
      }
      uVar25 = uVar21;
      if ((int)uVar29 <= (int)uVar21) {
        uVar25 = uVar29;
      }
      if ((int)uVar21 <= (int)uVar29) {
        uVar21 = uVar29;
      }
      goto LAB_00d03f48;
    }
  }
  lVar32 = *(long *)PTR_DAT_04bb59d8;
  uVar31 = *(uint *)(lVar32 + 0x28);
  uVar25 = *(uint *)(lVar32 + 0x2c);
  uVar24 = *(uint *)(lVar32 + 0x38);
  uVar21 = *(uint *)(lVar32 + 0x3c);
LAB_00d03f48:
  local_9cfc._0_8_ = 0x1f0000001f;
  local_9ce8 = auStack_9cb8;
  local_15c[1] = 0.0;
  local_9cf0 = 0x3c1;
  local_14c = 0;
  local_140 = 0;
  local_9ce0 = 0;
  apppuStack_9cd8[0] = (undefined ***)0x0;
  local_9cc0[0] = 0;
  local_15c[0] = (float)(int)uVar31 * 5.0 + 5.0;
  local_15c[2] = (float)(int)uVar25 * 5.0 + 5.0;
  local_13c = local_15c[2] + 10.0;
  local_15c[3] = local_15c[0] + 10.0;
  lVar32 = 0x50;
  while( true ) {
    pppuVar4 = (undefined ***)((long)apppuStack_9cd8 + lVar32 + -8);
    *(undefined4 *)(local_9cfc + lVar32 + -9) = 0;
    *(undefined4 *)(local_9cfc + lVar32 + -0xc) = 0;
    *(undefined8 *)(local_9cfc + lVar32 + 0xc) = 0;
    *(undefined1 *)((long)apppuStack_9cd8 + lVar32 + -0x10) = 0;
    *(undefined8 *)(local_9cfc + lVar32 + -4) = 0;
    *(undefined8 *)(local_9cfc + lVar32 + 4) = 0;
    if (pppuVar4 == &local_690) break;
    *(undefined4 *)((long)apppuStack_9cd8 + lVar32 + -5) = 0;
    *(undefined4 *)pppuVar4 = 0;
    *(undefined8 *)((long)apppuStack_9cd8 + lVar32 + 0x10) = 0;
    local_9cc0[lVar32] = 0;
    *(undefined4 *)(auStack_9cb8 + lVar32) = 0;
    *(undefined4 *)(auStack_9cb8 + lVar32 + 3) = 0;
    *(undefined8 *)((long)local_9cb0 + lVar32 + 0x10) = 0;
    local_9c98[lVar32] = 0;
    *(undefined4 *)(auStack_9c90 + lVar32) = 0;
    *(undefined4 *)(auStack_9c90 + lVar32 + 3) = 0;
    local_9c70[lVar32] = 0;
    *(undefined8 *)((long)local_9c88 + lVar32) = 0;
    *(undefined8 *)((long)apppuStack_9cd8 + lVar32) = 0;
    *(undefined8 *)((long)apppuStack_9cd8 + lVar32 + 8) = 0;
    *(undefined8 *)((long)local_9cb0 + lVar32) = 0;
    *(undefined8 *)((long)local_9cb0 + lVar32 + 8) = 0;
    *(undefined8 *)((long)local_9c88 + lVar32 + 8) = 0;
    *(undefined8 *)((long)local_9c88 + lVar32 + 0x10) = 0;
    lVar32 = lVar32 + 0xa0;
  }
  apppuStack_9cd8[1] = (undefined ***)0x0;
  local_670 = 0x1f;
  local_680 = auStack_648;
  local_668 = 0;
  uStack_660 = 0;
  local_9d00 = (undefined2)uVar24;
  local_9cfe = (undefined2)uVar21;
  local_658 = 0;
  uStack_650 = 0;
  puStack_1f0 = &local_1dc;
  local_200 = &PTR_LAB_0494b200;
  uStack_678 = 0x1fffffffff;
  local_1f8 = 0x1f000003c1;
  local_1e4 = 0x1f0000001f;
  uVar8 = (short)uVar31;
  if ((uVar24 & 0xffff) <= (uVar31 & 0xffff)) {
    uVar8 = local_9d00;
  }
  local_690 = &PTR_LAB_0494b1e0;
  uStack_688 = 0x1f000003c1;
  uVar9 = (short)uVar25;
  if ((uVar21 & 0xffff) <= (uVar25 & 0xffff)) {
    uVar9 = local_9cfe;
  }
  local_9d08 = CONCAT44(CONCAT22((short)uVar25,(short)uVar31),CONCAT22(uVar9,uVar8));
  apppuStack_9cd8[2] = &local_690;
  local_148 = local_15c[2];
  local_144 = local_15c[0];
  memset(auStack_5c8,2,0x3c1);
  local_1dc = 0;
  local_1d4 = 0;
  local_1cc = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_194 = 0;
  local_18c = 0;
  local_184 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 0;
  local_164 = 0;
  local_1e8 = 0;
  FUN_035a4230(&local_9d08);
  local_9d50 = &local_9d18;
  local_9d18 = *(ulong *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_9d48 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
  local_9d20 = 0;
  local_9d40 = PTR_DAT_04bb2010 + 0x10;
  uStack_9d38 = 0;
  uStack_9d28 = 0;
  local_9d58 = &local_9d08;
  lStack_9d10 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_9d60 = &PTR_FUN_0494b1c8;
  local_9d30 = local_9d40;
  if (local_9cf0 != 0) {
    uVar33 = (uint)(ushort)local_9d08;
    uVar17 = 0;
    uVar29 = (uint)local_9d08._2_2_;
    uVar34 = (uint)(ushort)local_9d08;
    iVar15 = local_9cfc._0_4_ + uVar34;
    uVar23 = local_9cf0;
    do {
      iVar11 = uVar33 - (ushort)local_9d08;
      if (-1 < iVar11) {
        if (iVar11 < (int)local_9cfc._0_4_) {
          iVar12 = uVar29 - local_9d08._2_2_;
          if (-1 < iVar12) {
            if ((iVar12 < (int)local_9cfc._4_4_) && (local_9ce8 != (undefined1 *)0x0)) {
              (*(code *)*local_9d60)
                        (&local_9d60,local_9ce8 + (long)(iVar11 + local_9cfc._0_4_ * iVar12) * 0x28)
              ;
              uVar23 = local_9cf0;
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
      if (uVar33 + 1 == iVar15) {
        uVar29 = uVar29 + 1;
        uVar33 = uVar34;
      }
      else {
        uVar33 = uVar33 + 1;
      }
    } while (uVar17 < uVar23);
  }
  if (param_1 != (float *)0x0) {
    FUN_035a4bec(&local_9d08,
                 (int)((float)(int)(*param_1 + -2.5) / 5.0) - (uint)(*param_1 + -2.5 < 0.0) & 0xffff
                 ,(int)((float)(int)(param_1[2] + -2.5) / 5.0) - (uint)(param_1[2] + -2.5 < 0.0) &
                  0xffff);
    FUN_035a56c0(&local_9d08,0);
  }
  if (param_2 != (float *)0x0) {
    FUN_035a4bec(&local_9d08,
                 (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0) & 0xffff
                 ,(int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0) &
                  0xffff);
    FUN_035a56c0(&local_9d08,0);
  }
  if (param_3 != (float *)0x0) {
    FUN_035a4bec(&local_9d08,
                 (int)((float)(int)(*param_3 + -2.5) / 5.0) - (uint)(*param_3 + -2.5 < 0.0) & 0xffff
                 ,(int)((float)(int)(param_3[2] + -2.5) / 5.0) - (uint)(param_3[2] + -2.5 < 0.0) &
                  0xffff);
    FUN_035a56c0(&local_9d08,0);
  }
  FUN_035a56c0(&local_9d08,0);
  if ((int)local_138 != 0) {
    uVar21 = uVar21 - 1;
    uVar29 = 0;
    uVar24 = uVar24 - 1;
    puVar16 = local_130 + (int)local_138;
    uVar33 = uVar31;
    if ((int)uVar24 <= (int)uVar31) {
      uVar33 = uVar24;
    }
    if ((int)uVar31 <= (int)uVar24) {
      uVar31 = uVar24;
    }
    uVar24 = uVar25;
    if ((int)uVar21 <= (int)uVar25) {
      uVar24 = uVar21;
    }
    if ((int)uVar25 <= (int)uVar21) {
      uVar25 = uVar21;
    }
    puVar5 = PTR_DAT_04bb3750 + 0x10;
    ppuVar6 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    puVar7 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
    puVar35 = local_130;
    plVar22 = (long *)PTR_DAT_04bb27c0;
    do {
      lVar32 = *plVar22;
      if (lVar32 != 0) {
        uVar21 = *(uint *)*puVar35;
        if ((((uVar21 == 0) ||
             (plVar30 = *(long **)(*(long *)(*(long *)(lVar32 + 0x1c0) + 8) +
                                  ((ulong)(uVar21 >> 0x11) & 0x7ff8)), plVar30 == (long *)0x0)) ||
            ((*(uint *)(plVar30 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar30 + 0x46) != uVar21)) {
          plVar30 = (long *)0x0;
        }
        if (*(int *)(lVar32 + 0x288) == 1 || *(int *)(lVar32 + 0x288) == -1) {
          plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar32 = *plVar22;
          iVar15 = (**(code **)(*plVar18 + 0x60))();
          if (iVar15 < 0x11) {
            uVar21 = 1;
          }
          else {
            if (4 < *(uint *)(lVar32 + 0x5e8)) goto LAB_00d04590;
            uVar21 = 0x1aU >> (ulong)(*(uint *)(lVar32 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_00d04590:
          uVar21 = 0;
        }
        if (plVar30 != (long *)0x0) {
          lVar32 = plVar30[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar15 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = puVar5;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar17 = (**(code **)(*plVar30 + 0x20))(plVar30,PTR_DAT_04bb37d0);
          uVar34 = 0;
          if ((int)lVar32 == 1) {
            uVar34 = uVar21;
          }
          if ((((uVar17 & 1) != 0) && (uVar34 != 0)) && ((int)plVar30[0xea] == 0)) {
            lVar32 = plVar30[0xd];
            if (lVar32 != 0) {
              fVar37 = *(float *)(lVar32 + 0x278) + -2.5;
              fVar38 = *(float *)(lVar32 + 0x280) + -2.5;
              iVar11 = ((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) -
                       (uint)(ushort)local_9d08;
              iVar12 = ((int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0) & 0xffff) -
                       (uint)local_9d08._2_2_;
              iVar15 = iVar12 * local_9cfc._0_4_;
              if (((((byte)local_9ce8[(long)(iVar15 + iVar11) * 0x28 + 6] < 5 &&
                     (1 << (ulong)((byte)local_9ce8[(long)(iVar15 + iVar11) * 0x28 + 6] & 0x1f) &
                     0x13U) != 0) &&
                   ((byte)local_9ce8[(long)(iVar15 + iVar11 + 1) * 0x28 + 6] < 5 &&
                    (1 << (ulong)((byte)local_9ce8[(long)(iVar15 + iVar11 + 1) * 0x28 + 6] & 0x1f) &
                    0x13U) != 0)) &&
                  (iVar15 = local_9cfc._0_4_ + local_9cfc._0_4_ * iVar12,
                  (byte)local_9ce8[(long)(iVar15 + iVar11) * 0x28 + 6] < 5 &&
                  (1 << (ulong)((byte)local_9ce8[(long)(iVar15 + iVar11) * 0x28 + 6] & 0x1f) & 0x13U
                  ) != 0)) &&
                 ((byte)local_9ce8[(long)(iVar15 + iVar11 + 1) * 0x28 + 6] < 5 &&
                  (1 << (ulong)((byte)local_9ce8[(long)(iVar15 + iVar11 + 1) * 0x28 + 6] & 0x1f) &
                  0x13U) != 0)) {
                FUN_035a4bec(&local_9d08);
                FUN_035a56c0(&local_9d08,0);
                goto LAB_00d044e0;
              }
            }
            if (uVar25 + 1 == uVar24) {
LAB_00d0494c:
              if (2 < (int)uVar29) goto LAB_00d044e0;
              uVar17 = (ulong)uVar29;
              bVar14 = 2 < uVar29;
              uVar29 = uVar29 + 1;
              pfVar10 = local_15c + uVar17 * 3;
              if (bVar14) {
                pfVar10 = local_15c;
              }
              fVar37 = *pfVar10;
              local_9d60 = *(undefined ***)pfVar10;
              fVar38 = pfVar10[2];
            }
            else {
              fVar37 = -3.4028235e+38;
              bVar14 = false;
              local_9da0 = 0;
              uStack_9d9c = 0;
              uVar21 = uVar24;
              uVar34 = uVar33;
              do {
                uVar2 = uVar34 + 1;
                uVar3 = uVar21 + 1;
                iVar15 = uVar2 - (ushort)local_9d08;
                if (-1 < iVar15) {
                  if (iVar15 < (int)local_9cfc._0_4_) {
                    iVar15 = uVar3 - local_9d08._2_2_;
                    if (-1 < iVar15) {
                      if (iVar15 < (int)local_9cfc._4_4_) {
                        iVar15 = uVar34 - (ushort)local_9d08;
                        if (-1 < iVar15) {
                          if (iVar15 < (int)local_9cfc._0_4_) {
                            iVar15 = uVar21 - local_9d08._2_2_;
                            if (-1 < iVar15) {
                              if (iVar15 < (int)local_9cfc._4_4_) {
                                local_9d50 = (ulong *)CONCAT44(uVar21,uVar34);
                                local_9d40 = (undefined *)CONCAT44(uVar3,uVar2);
                                uVar26 = uVar21;
                                uVar27 = uVar34;
                                do {
                                  local_9d60 = ppuVar6;
                                  local_9d58 = puVar7;
                                  local_9d48 = puVar7;
                                  if (4 < (byte)local_9ce8
                                                [(long)(int)((uVar27 - (ushort)local_9d08) +
                                                            (uVar26 - local_9d08._2_2_) *
                                                            local_9cfc._0_4_) * 0x28 + 6] ||
                                      (1 << (ulong)((byte)local_9ce8
                                                          [(long)(int)((uVar27 - (ushort)local_9d08)
                                                                      + (uVar26 - local_9d08._2_2_)
                                                                        * local_9cfc._0_4_) * 0x28 +
                                                           6] & 0x1f) & 0x13U) == 0)
                                  goto LAB_00d04914;
                                  if ((int)uVar34 < (int)uVar27) {
                                    uVar26 = uVar26 + 1;
                                    uVar27 = uVar34;
                                  }
                                  else {
                                    uVar27 = uVar27 + 1;
                                  }
                                } while ((uVar34 != uVar27) || (uVar21 + 2 != uVar26));
                                if ((*(long *)PTR_DAT_04bb5ce0 == 0) ||
                                   ((lVar32 = *(long *)PTR_DAT_04bb2720, lVar32 == 0 ||
                                    (*(long *)(lVar32 + 0x330) == 0)))) {
LAB_00d04890:
                                  if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
                                     (lVar32 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),
                                     lVar32 != 0)) {
                                    uVar17 = FUN_009721a0(lVar32,&local_9d60,0);
                                    goto joined_r0x00d048b4;
                                  }
                                }
                                else {
                                  puVar19 = (undefined8 *)
                                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                                      (*(long **)PTR_DAT_04bb2640,
                                                       *(undefined4 *)(lVar32 + 0x338));
                                  iVar15 = FUN_006bd550(*puVar19,0);
                                  if ((iVar15 != 0x758f7eaf) ||
                                     (((*(long *)PTR_DAT_04bb2720 == 0 ||
                                       (lVar32 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330),
                                       lVar32 == 0)) || (*(int *)(lVar32 + 0x244) == 0))))
                                  goto LAB_00d04890;
                                  local_9d18 = local_9d18 & 0xffffffff00000000;
                                  uVar17 = FUN_014903e0(&local_9d60,&local_9d18);
joined_r0x00d048b4:
                                  if ((uVar17 & 1) != 0) goto LAB_00d04914;
                                }
                                puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)
                                                                       PTR_DAT_04bb39d8);
                                uVar26 = *puVar20 ^ *puVar20 << 0xb;
                                uVar27 = puVar20[3];
                                *puVar20 = puVar20[1];
                                puVar20[1] = puVar20[2];
                                uVar26 = uVar26 >> 8 ^ uVar27 >> 0x13 ^ uVar26 ^ uVar27;
                                puVar20[2] = uVar27;
                                puVar20[3] = uVar26;
                                fVar38 = (float)(uVar26 >> 9 | 0x3f800000) + -1.0;
                                if (fVar37 < fVar38) {
                                  bVar14 = true;
                                  fVar37 = fVar38;
                                  local_9da0 = uVar34;
                                  uStack_9d9c = uVar21;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_00d04914:
                bVar1 = (int)uVar31 <= (int)uVar34;
                uVar34 = uVar2;
                if (bVar1) {
                  uVar21 = uVar3;
                  uVar34 = uVar33;
                }
              } while ((uVar33 != uVar34) || (uVar25 + 1 != uVar21));
              plVar22 = (long *)PTR_DAT_04bb27c0;
              if (!bVar14) goto LAB_00d0494c;
              fVar37 = (float)(int)local_9da0 * 5.0 + 5.0;
              fVar38 = (float)(int)uStack_9d9c * 5.0 + 5.0;
              local_9d60 = (undefined **)CONCAT44(local_9d60._4_4_,fVar37);
            }
            local_9d58 = (undefined8 *)CONCAT44(local_9d58._4_4_,fVar38);
            FUN_035a4bec(&local_9d08,
                         (int)((float)(int)(fVar37 + -2.5) / 5.0) - (uint)(fVar37 + -2.5 < 0.0) &
                         0xffff,(int)((float)(int)(fVar38 + -2.5) / 5.0) -
                                (uint)(fVar38 + -2.5 < 0.0) & 0xffff);
            FUN_035a56c0(&local_9d08,0);
            local_9d64 = 0;
            FUN_01e39778(plVar30,&local_9d60,&local_9d64,0);
          }
        }
      }
LAB_00d044e0:
      puVar35 = puVar35 + 1;
    } while (puVar35 != puVar16);
  }
  return;
}

