
undefined8 FUN_01f1b330(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  bool bVar32;
  uint uVar33;
  long *plVar34;
  undefined8 uVar35;
  float fVar36;
  ulong uVar37;
  long lVar38;
  uint local_794;
  undefined8 local_770;
  uint local_768;
  uint local_764;
  undefined4 local_734;
  undefined4 uStack_730;
  float local_72c;
  undefined4 local_728;
  float local_724;
  undefined *local_720;
  undefined8 uStack_718;
  undefined1 *local_710;
  undefined8 uStack_708;
  undefined4 local_700;
  undefined1 auStack_6fc [128];
  byte local_67c [4];
  undefined8 local_678;
  undefined4 local_670;
  undefined4 local_66c;
  long local_668;
  uint local_68;
  
  lVar26 = *(long *)PTR_DAT_04bb46b0;
  if (lVar26 == 0) {
LAB_01f1b3b4:
    lVar26 = 0;
  }
  else {
    puVar27 = *(undefined8 **)(lVar26 + 0x10);
    if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
      lVar20 = (**(code **)(*(long *)*puVar27 + 0x38))();
      lVar26 = 0;
      if (lVar20 != 0) {
        lVar26 = lVar20 + 0x70;
      }
    }
    else {
      if ((puVar27 == (undefined8 *)0x0) || ((long *)puVar27[0x26] == (long *)0x0))
      goto LAB_01f1b3b4;
      lVar26 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
    }
  }
  lVar20 = *(long *)PTR_DAT_04bb39b0;
  pbVar28 = PTR_DAT_04bb32e0;
  if (lVar20 == 0) {
LAB_01f1b418:
    if (*pbVar28 < 8) goto LAB_01f1b490;
LAB_01f1b424:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f1b488:
      pbVar28 = PTR_DAT_04bb5038;
      goto LAB_01f1b490;
    }
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar20 + 0x473);
    pbVar28 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar2 = (uint *)(lVar20 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar28 = (byte *)(lVar20 + 0x471);
      }
    }
    local_67c[0] = *pbVar28;
    if (7 < local_67c[0]) goto LAB_01f1b488;
  }
  else {
    if (*(int *)(lVar20 + 0x15c) != 0) {
      pbVar28 = (byte *)(lVar20 + 0x158);
    }
    if (7 < *pbVar28) {
      if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar28 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f1b418;
      }
      goto LAB_01f1b424;
    }
LAB_01f1b490:
    local_67c[0] = *pbVar28;
    if (7 < local_67c[0]) {
      local_67c[0] = 0xff;
    }
  }
  lVar20 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_67c,1);
  puVar13 = PTR_DAT_04bb27c0;
  lVar29 = *(long *)PTR_DAT_04bb27c0;
  if (lVar29 == 0) {
    plVar34 = (long *)0x0;
    uVar37 = 0;
joined_r0x01f1b588:
    bVar15 = false;
  }
  else {
    uVar17 = *(uint *)PTR_DAT_04bb3958;
    if ((((uVar17 == 0) ||
         (plVar34 = *(long **)(*(long *)(*(long *)(lVar29 + 0x1c0) + 8) +
                              ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar34 == (long *)0x0)) ||
        ((*(uint *)(plVar34 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar34 + 0x46) != uVar17)) {
      plVar34 = (long *)0x0;
    }
    if ((*(int *)(lVar29 + 0x288) == 1) || (*(int *)(lVar29 + 0x288) == -1)) {
      plVar21 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar29 = *(long *)puVar13;
      iVar16 = (**(code **)(*plVar21 + 0x60))();
      if (iVar16 < 0x11) {
        uVar37 = 1;
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar29 + 0x5e8)) goto LAB_01f1b590;
        uVar37 = 0x101000100 >> (((ulong)*(uint *)(lVar29 + 0x5e8) & 7) << 3);
        uVar17 = (uint)uVar37;
      }
    }
    else {
LAB_01f1b590:
      uVar37 = 0;
      uVar17 = 0;
    }
    if (plVar34 == (long *)0x0) goto joined_r0x01f1b588;
    bVar15 = (int)plVar34[0x2a] == 1;
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar16 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar37 = (**(code **)(*plVar34 + 0x20))(plVar34,PTR_DAT_04bb3928);
    if ((uVar37 & 1) == 0) {
      uVar17 = 0;
    }
    uVar37 = (ulong)uVar17;
  }
  if (lVar26 == 0) {
    return 0;
  }
  if (lVar20 == 0) {
    return 0;
  }
  if (plVar34 == (long *)0x0) {
    return 0;
  }
  if (!bVar15) {
    return 0;
  }
  if ((uVar37 & 0xff) == 0) {
    return 0;
  }
  if ((*(long **)(lVar26 + 0xe7290) == (long *)0x0) ||
     (puVar27 = (undefined8 *)**(long **)(lVar26 + 0xe7290), puVar27 == (undefined8 *)0x0)) {
    local_68 = 0;
  }
  else {
    local_68 = (**(code **)*puVar27)();
  }
  lVar29 = *(long *)(lVar26 + 0xe7270);
  lVar4 = *(long *)(lVar26 + 0xe7278);
  puVar2 = (uint *)(plVar34 + 0xb0b);
  if ((*(long **)(lVar20 + 0x17bb0) == (long *)0x0) ||
     (puVar27 = (undefined8 *)**(long **)(lVar20 + 0x17bb0), puVar27 == (undefined8 *)0x0)) {
    local_764 = 0;
  }
  else {
    local_764 = (**(code **)*puVar27)();
  }
  lVar3 = *(long *)(lVar20 + 0x17b90);
  lVar5 = *(long *)(lVar20 + 0x17b98);
  if ((*(long **)(lVar26 + 0x1a0da0) == (long *)0x0) ||
     (puVar27 = (undefined8 *)**(long **)(lVar26 + 0x1a0da0), puVar27 == (undefined8 *)0x0)) {
    local_768 = 0;
  }
  else {
    local_768 = (**(code **)*puVar27)();
  }
  lVar31 = *(long *)(param_1 + 8);
  local_710 = auStack_6fc;
  uStack_708 = 0x1fffffffff;
  local_700 = 0x1f;
  local_720 = PTR_DAT_04bb7f30 + 0x10;
  uStack_718 = 0x1f000003c1;
  local_678 = (undefined *)CONCAT44(local_678._4_4_,*(undefined4 *)(lVar31 + 0x230));
  FUN_021454d0(&local_720,&local_678,*puVar2 & 0xffff,*puVar2 >> 0x10);
  fVar6 = *(float *)(param_1 + 0xaf38);
  lVar22 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
  if (lVar22 == 0) {
    uVar18 = 0;
  }
  else {
    if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
       (puVar27 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar27 == (undefined8 *)0x0)) {
      uVar17 = 1;
    }
    else {
      uVar17 = (**(code **)*puVar27)();
      uVar17 = uVar17 ^ 1;
    }
    uVar18 = FUN_020fd7d8(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8));
    if ((((uVar17 & 1) == 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
       (puVar27 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar27 != (undefined8 *)0x0)) {
      (**(code **)*puVar27)();
    }
  }
  local_678 = (undefined *)(CONCAT44(local_678._4_4_,uVar18) & 0xffffffff000000ff);
  if ((uint)local_678 < 8) {
    iVar16 = *(int *)(&DAT_04058760 + (long)(int)(uint)local_678 * 4);
  }
  else {
    iVar16 = 1;
  }
  local_72c = 0.0;
  FUN_0291e130(&local_678,&local_72c,0);
  fVar14 = local_72c;
  puVar13 = PTR_DAT_04bb43c0;
  if (local_72c != 0.0) {
    local_794 = 0;
    local_770 = 0;
    fVar36 = 0.0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      if (fVar36 != fVar6) {
        FUN_0289b680(&local_734,*(long *)(lVar26 + 0x1a0d88) + *(long *)(lVar26 + 0x1a0d80),
                     &local_72c,fVar36);
        lVar38 = *(long *)puVar13;
        uVar17 = FUN_0277d6c4(&local_734);
        lVar22 = *(long *)puVar13;
        if (lVar22 != 0) {
          lVar38 = *(long *)(lVar38 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar38 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
            local_668 = 0;
            local_670 = local_734;
            local_66c = uStack_730;
            local_678 = puVar1;
            uVar17 = FUN_0277d6c4(&local_670);
            if (*(long *)puVar13 != 0) {
              lVar22 = *(long *)(lVar22 + 0x57e58);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar22 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                lVar22 = *(long *)PTR_DAT_04bc0428;
                uVar17 = FUN_0277d6c4(&local_734);
                uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if (uVar17 < *(uint *)(lVar22 + 0x1d8)) {
                  lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar17 * 8);
                  if (lVar22 != 0) {
                    local_668 = lVar22;
                  }
                }
              }
            }
            iVar19 = FUN_01ae58b0(&local_678);
            if (iVar19 != iVar16) {
              lVar22 = *(long *)puVar13;
              uVar17 = FUN_0277d6c4(&local_734);
              if (*(long *)puVar13 != 0) {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if (((uVar17 < *(uint *)(lVar22 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
                   (iVar19 = FUN_02076ca0(&local_734,lVar4 + lVar29,lVar5 + lVar3), iVar19 < 0x17))
                {
                  bVar32 = false;
                  bVar15 = false;
                  uVar17 = 0;
                  uVar7 = *puVar2;
                  iVar19 = (int)((float)(int)local_72c / 5.0) - (uint)(local_72c < 0.0);
                  uVar11 = iVar19 - 2;
                  iVar12 = (int)((float)(int)local_724 / 5.0) - (uint)(local_724 < 0.0);
                  uVar30 = iVar12 - 2;
                  uVar33 = uVar11;
                  do {
                    uVar8 = (ushort)*puVar2;
                    if (((((uint)uVar8 <= (uVar33 & 0xffff)) &&
                         ((uVar33 & 0xffff) <=
                          (((uint)uVar8 + (uint)*(ushort *)((long)plVar34 + 0x5864)) - 1 & 0xffff)))
                        && ((uVar9 = *(ushort *)((long)plVar34 + 0x585a),
                            (uint)uVar9 <= (uVar30 & 0xffff) &&
                            (((uVar30 & 0xffff) <=
                              (((uint)uVar9 + (uint)*(ushort *)(plVar34 + 0xb0d)) - 1 & 0xffff) &&
                             (uVar25 = (uVar33 - uVar8) +
                                       *(int *)(plVar34[0xb13] + 0x1c) * (uVar30 - uVar9),
                             (*(uint *)(*(long *)(plVar34[0xb13] + 0x10) +
                                       (long)((int)uVar25 >> 5) * 4) >> (ulong)(uVar25 & 0x1f) & 1)
                             != 0)))))) &&
                       (uVar25 = (uVar33 - (uVar7 & 0xffff)) +
                                 uStack_708._4_4_ * (uVar30 - (uVar7 >> 0x10)),
                       (*(uint *)(local_710 + (long)((int)uVar25 >> 5) * 4) >>
                        (ulong)(uVar25 & 0x1f) & 1) == 0)) {
                      if (bVar15) {
                        uVar24 = *(uint *)(lVar31 + 0x288);
                        uVar18 = *(undefined4 *)(lVar31 + 0x28c);
                        uVar23 = *(uint *)(lVar31 + 0x290);
                        uVar25 = *(uint *)(lVar31 + 0x294);
                      }
                      else {
                        local_794 = local_794 + 1;
                        uVar23 = *(uint *)(lVar31 + 0x294);
                        uVar24 = *(uint *)(lVar31 + 0x28c);
                        uVar18 = *(undefined4 *)(lVar31 + 0x290);
                        uVar25 = *(uint *)(lVar31 + 0x288) ^ *(uint *)(lVar31 + 0x288) << 0xb;
                        *(uint *)(lVar31 + 0x288) = uVar24;
                        *(undefined4 *)(lVar31 + 0x28c) = uVar18;
                        *(uint *)(lVar31 + 0x290) = uVar23;
                        uVar25 = uVar25 >> 8 ^ uVar23 >> 0x13 ^ uVar25 ^ uVar23;
                        *(uint *)(lVar31 + 0x294) = uVar25;
                        if (((ulong)uVar25 * (ulong)local_794 & 0xffffffff00000000) != 0)
                        goto LAB_01f1b844;
                        bVar32 = true;
                      }
                      uVar24 = uVar24 ^ uVar24 << 0xb;
                      uVar17 = uVar17 + 1;
                      *(undefined4 *)(lVar31 + 0x288) = uVar18;
                      *(uint *)(lVar31 + 0x28c) = uVar23;
                      *(uint *)(lVar31 + 0x290) = uVar25;
                      uVar25 = uVar25 >> 0x13 ^ uVar24 >> 8 ^ uVar25 ^ uVar24;
                      *(uint *)(lVar31 + 0x294) = uVar25;
                      bVar15 = ((ulong)uVar25 * (ulong)uVar17 & 0xffffffff00000000) == 0;
                      uVar25 = (uint)local_770;
                      if (bVar15) {
                        uVar25 = uVar30;
                      }
                      if (bVar15) {
                        local_770._4_4_ = uVar33;
                      }
                      local_770 = CONCAT44(local_770._4_4_,uVar25);
                      bVar15 = true;
                    }
                    if ((int)uVar33 < iVar19 + 2) {
                      uVar33 = uVar33 + 1;
                    }
                    else {
                      uVar30 = uVar30 + 1;
                      uVar33 = uVar11;
                    }
                  } while ((uVar11 != uVar33) || (iVar12 + 3U != uVar30));
                  if (bVar32) {
                    *(float *)(param_1 + 0xaf38) = fVar36;
                    *(undefined4 *)(param_1 + 0xaf3c) = local_734;
                    *(undefined4 *)(param_1 + 0xaf40) = uStack_730;
                    *(float *)(param_1 + 0xaf64) = local_724;
                    *(float *)(param_1 + 0xaf5c) = local_72c;
                    *(undefined4 *)(param_1 + 0xaf60) = local_728;
                  }
                }
              }
            }
          }
        }
      }
LAB_01f1b844:
      fVar36 = (float)((int)fVar36 + 1);
    } while (fVar36 != fVar14);
    if (local_770._4_4_ != 0) {
      *(float *)(param_1 + 0x56ec) = (float)(int)local_770._4_4_ * 5.0;
      *(float *)(param_1 + 0x56f4) = (float)(int)(uint)local_770 * 5.0;
      uVar18 = FUN_006f0400(*(float *)(param_1 + 0xaf5c) - (float)(int)local_770._4_4_ * 5.0,
                            *(float *)(param_1 + 0xaf64) - (float)(int)(uint)local_770 * 5.0);
      *(undefined4 *)(param_1 + 0xaf50) = uVar18;
      if ((((local_768 & 1) != 0) && (*(long *)(lVar26 + 0x1a0da0) != 0)) &&
         (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x1a0da0) + 8), puVar27 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar27)();
      }
      if ((((local_764 & 1) != 0) && (*(long *)(lVar20 + 0x17bb0) != 0)) &&
         (puVar27 = *(undefined8 **)(*(long *)(lVar20 + 0x17bb0) + 8), puVar27 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar27)();
      }
      if (((local_68 & 1) == 0) || (*(long *)(lVar26 + 0xe7290) == 0)) {
        return 1;
      }
      puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0xe7290) + 8);
      uVar35 = 1;
      goto joined_r0x01f1bcb4;
    }
  }
  if ((((local_768 & 1) != 0) && (*(long *)(lVar26 + 0x1a0da0) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x1a0da0) + 8), puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  if ((((local_764 & 1) != 0) && (*(long *)(lVar20 + 0x17bb0) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(lVar20 + 0x17bb0) + 8), puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  if (((local_68 & 1) == 0) || (*(long *)(lVar26 + 0xe7290) == 0)) {
    return 0;
  }
  puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0xe7290) + 8);
  uVar35 = 0;
joined_r0x01f1bcb4:
  if (puVar27 != (undefined8 *)0x0) {
    (**(code **)*puVar27)();
  }
  return uVar35;
}

