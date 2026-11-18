
/* WARNING: Removing unreachable block (ram,0x035aaab4) */
/* WARNING: Removing unreachable block (ram,0x035aa87c) */
/* WARNING: Removing unreachable block (ram,0x035aa824) */
/* WARNING: Removing unreachable block (ram,0x035aac7c) */
/* WARNING: Removing unreachable block (ram,0x035aa98c) */
/* WARNING: Removing unreachable block (ram,0x035aa97c) */
/* WARNING: Removing unreachable block (ram,0x035aac8c) */
/* WARNING: Removing unreachable block (ram,0x035aaaac) */
/* WARNING: Removing unreachable block (ram,0x035aabc4) */
/* WARNING: Removing unreachable block (ram,0x035aabb4) */

bool FUN_035aa640(uint param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined2 *puVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  char cVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  float fVar28;
  undefined **local_5630;
  undefined1 *puStack_5628;
  undefined8 *local_5620;
  undefined *puStack_5618;
  undefined8 *local_5610;
  undefined8 uStack_5608;
  undefined8 *local_5600;
  undefined8 uStack_55f8;
  undefined1 local_55f0;
  undefined1 local_55e8 [4];
  undefined4 uStack_55e4;
  undefined2 local_55e0;
  undefined2 local_55de;
  undefined1 local_55dc [12];
  ulong local_55d0;
  undefined1 *local_55c8;
  undefined8 local_55c0;
  undefined **appuStack_55b8 [3];
  undefined1 local_55a0 [8];
  undefined1 auStack_5598 [8];
  undefined8 local_5590 [3];
  undefined1 local_5578 [8];
  undefined1 local_5570 [8];
  undefined8 local_5568 [3];
  undefined1 local_5550 [8];
  undefined1 local_5548 [8];
  undefined8 local_5540 [3];
  undefined1 local_5528 [8];
  undefined1 auStack_5520 [8];
  undefined8 local_5518 [3];
  undefined1 local_5500 [8];
  undefined1 local_54f8 [8];
  undefined8 local_54f0 [3];
  undefined1 local_54d8 [8];
  undefined *local_54d0 [2600];
  undefined *local_390;
  undefined8 local_388;
  undefined1 *local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [72];
  undefined1 auStack_300 [528];
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  undefined8 local_88;
  long lStack_80;
  
  puVar11 = PTR_DAT_04bb27a8;
  uVar26 = param_1 - 2;
  uVar24 = param_2 - 2;
  uVar25 = (param_1 & 0xffff) - 5;
  uVar6 = (param_2 & 0xffff) - 5;
  iVar18 = -1;
  do {
    iVar27 = 0;
    iVar3 = iVar18 + param_1;
    iVar1 = iVar3 + 1;
    fVar28 = (float)iVar3 * 0.5;
    uVar13 = 0;
    if (fVar28 != (float)(int)fVar28) {
      uVar13 = (uint)(fVar28 < 0.0);
    }
    iVar7 = (int)fVar28 - uVar13;
    fVar28 = (float)iVar1 * 0.5;
    uVar13 = 0;
    if (fVar28 != (float)(int)fVar28) {
      uVar13 = (uint)(fVar28 < 0.0);
    }
    iVar8 = (int)fVar28 - uVar13;
    do {
      iVar4 = (param_2 - 1) + iVar27;
      uVar13 = FUN_035aa210(iVar3,iVar4,param_3);
      if ((param_4 & 1) == 0) {
        if (((uVar13 & 1) != 0) && (uVar21 = FUN_035aa210(iVar1,iVar4,param_3), (uVar21 & 1) != 0))
        {
          uVar21 = FUN_035aa210(iVar3,param_2 + iVar27,param_3);
          if (((uVar21 & 1) != 0) &&
             (uVar21 = FUN_035aa210(iVar1,param_2 + iVar27,param_3), (uVar21 & 1) != 0)) {
            return true;
          }
        }
      }
      else {
        _local_55e8 = CONCAT44(uStack_55e4,1);
        fVar28 = (float)iVar4 * 0.5;
        uVar19 = 0;
        if (fVar28 != (float)(int)fVar28) {
          uVar19 = (uint)(fVar28 < 0.0);
        }
        iVar9 = (int)fVar28 - uVar19;
        cVar22 = '\0';
        if (*(long *)(*(long *)puVar11 + 0x38) != 0) {
          lVar20 = *(long *)(*(long *)(*(long *)puVar11 + 0x38) + 0xb0);
          cVar22 = '\0';
          if (lVar20 != 0) {
            uVar19 = iVar7 - *(int *)(lVar20 + 0x28);
            if ((uVar19 < *(uint *)(lVar20 + 0x18)) &&
               (uVar10 = iVar9 - *(int *)(lVar20 + 0x2c), uVar10 < *(uint *)(lVar20 + 0x1c))) {
              uVar19 = uVar19 + *(uint *)(lVar20 + 0x18) * uVar10;
LAB_035aa914:
              if (*(uint *)(lVar20 + 0x30) <= uVar19) {
                uVar19 = 0;
              }
              puVar23 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar19 * 0x68);
            }
            else {
              if (*(char *)(lVar20 + 0x88) != '\0') {
                uVar19 = iVar7 - *(int *)(lVar20 + 0x98);
                if (uVar19 < *(uint *)(lVar20 + 0xa0)) {
                  uVar10 = iVar9 - *(int *)(lVar20 + 0x9c);
                  puVar23 = &DAT_051a50f0;
                  if (uVar10 < *(uint *)(lVar20 + 0xa4)) {
                    uVar19 = uVar19 + *(uint *)(lVar20 + 0xa0) * uVar10 + *(int *)(lVar20 + 0x8c);
                    goto LAB_035aa914;
                  }
                  goto LAB_035aa938;
                }
              }
              puVar23 = &DAT_051a50f0;
            }
LAB_035aa938:
            cVar22 = *(char *)(puVar23 + 2);
          }
        }
        if (cVar22 != '\x03' && ((uVar13 ^ 0xffffffff) & 1) == 0) {
          uVar13 = FUN_035aa210(iVar1,iVar4,param_3);
          _local_55e8 = CONCAT44(uStack_55e4,1);
          if (*(long *)(*(long *)puVar11 + 0x38) == 0) {
            cVar22 = '\0';
          }
          else {
            lVar20 = *(long *)(*(long *)(*(long *)puVar11 + 0x38) + 0xb0);
            cVar22 = '\0';
            if (lVar20 != 0) {
              uVar19 = iVar8 - *(int *)(lVar20 + 0x28);
              if ((uVar19 < *(uint *)(lVar20 + 0x18)) &&
                 (uVar10 = iVar9 - *(int *)(lVar20 + 0x2c), uVar10 < *(uint *)(lVar20 + 0x1c))) {
                uVar19 = uVar19 + *(uint *)(lVar20 + 0x18) * uVar10;
LAB_035aaa1c:
                if (*(uint *)(lVar20 + 0x30) <= uVar19) {
                  uVar19 = 0;
                }
                puVar23 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar19 * 0x68);
              }
              else {
                if (*(char *)(lVar20 + 0x88) != '\0') {
                  uVar19 = iVar8 - *(int *)(lVar20 + 0x98);
                  if (uVar19 < *(uint *)(lVar20 + 0xa0)) {
                    uVar10 = iVar9 - *(int *)(lVar20 + 0x9c);
                    puVar23 = &DAT_051a50f0;
                    if (uVar10 < *(uint *)(lVar20 + 0xa4)) {
                      uVar19 = uVar19 + *(uint *)(lVar20 + 0xa0) * uVar10 + *(int *)(lVar20 + 0x8c);
                      goto LAB_035aaa1c;
                    }
                    goto LAB_035aaa40;
                  }
                }
                puVar23 = &DAT_051a50f0;
              }
LAB_035aaa40:
              cVar22 = *(char *)(puVar23 + 2);
            }
          }
          if (cVar22 != '\x03' && ((uVar13 ^ 0xffffffff) & 1) == 0) {
            iVar4 = param_2 + iVar27;
            bVar12 = FUN_035aa210(iVar3,iVar4,param_3);
            _local_55e8 = CONCAT44(uStack_55e4,1);
            fVar28 = (float)iVar4 * 0.5;
            uVar13 = 0;
            if (fVar28 != (float)(int)fVar28) {
              uVar13 = (uint)(fVar28 < 0.0);
            }
            iVar9 = (int)fVar28 - uVar13;
            cVar22 = '\0';
            if (*(long *)(*(long *)puVar11 + 0x38) != 0) {
              lVar20 = *(long *)(*(long *)(*(long *)puVar11 + 0x38) + 0xb0);
              cVar22 = '\0';
              if (lVar20 != 0) {
                uVar13 = iVar7 - *(int *)(lVar20 + 0x28);
                if ((uVar13 < *(uint *)(lVar20 + 0x18)) &&
                   (uVar19 = iVar9 - *(int *)(lVar20 + 0x2c), uVar19 < *(uint *)(lVar20 + 0x1c))) {
                  uVar13 = uVar13 + *(uint *)(lVar20 + 0x18) * uVar19;
LAB_035aab4c:
                  if (*(uint *)(lVar20 + 0x30) <= uVar13) {
                    uVar13 = 0;
                  }
                  puVar23 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar13 * 0x68);
                }
                else {
                  if (*(char *)(lVar20 + 0x88) != '\0') {
                    uVar13 = iVar7 - *(int *)(lVar20 + 0x98);
                    if (uVar13 < *(uint *)(lVar20 + 0xa0)) {
                      uVar19 = iVar9 - *(int *)(lVar20 + 0x9c);
                      puVar23 = &DAT_051a50f0;
                      if (uVar19 < *(uint *)(lVar20 + 0xa4)) {
                        uVar13 = uVar13 + *(uint *)(lVar20 + 0xa0) * uVar19 +
                                 *(int *)(lVar20 + 0x8c);
                        goto LAB_035aab4c;
                      }
                      goto LAB_035aab70;
                    }
                  }
                  puVar23 = &DAT_051a50f0;
                }
LAB_035aab70:
                cVar22 = *(char *)(puVar23 + 2);
              }
            }
            if ((bVar12 & cVar22 != '\x03') != 0) {
              bVar12 = FUN_035aa210(iVar1,iVar4,param_3);
              _local_55e8 = CONCAT44(uStack_55e4,1);
              lVar20 = *(long *)(*(long *)puVar11 + 0x38);
              if (lVar20 == 0) {
                cVar22 = '\0';
              }
              else {
                lVar20 = *(long *)(lVar20 + 0xb0);
                cVar22 = '\0';
                if (lVar20 != 0) {
                  uVar13 = iVar8 - *(int *)(lVar20 + 0x28);
                  if ((uVar13 < *(uint *)(lVar20 + 0x18)) &&
                     (uVar19 = iVar9 - *(int *)(lVar20 + 0x2c), uVar19 < *(uint *)(lVar20 + 0x1c)))
                  {
                    uVar13 = uVar13 + *(uint *)(lVar20 + 0x18) * uVar19;
LAB_035aac54:
                    if (*(uint *)(lVar20 + 0x30) <= uVar13) {
                      uVar13 = 0;
                    }
                    puVar23 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar13 * 0x68);
                  }
                  else {
                    if (*(char *)(lVar20 + 0x88) != '\0') {
                      uVar13 = iVar8 - *(int *)(lVar20 + 0x98);
                      if (uVar13 < *(uint *)(lVar20 + 0xa0)) {
                        uVar19 = iVar9 - *(int *)(lVar20 + 0x9c);
                        puVar23 = &DAT_051a50f0;
                        if (uVar19 < *(uint *)(lVar20 + 0xa4)) {
                          uVar13 = uVar13 + *(uint *)(lVar20 + 0xa0) * uVar19 +
                                   *(int *)(lVar20 + 0x8c);
                          goto LAB_035aac54;
                        }
                        goto LAB_035aa7ac;
                      }
                    }
                    puVar23 = &DAT_051a50f0;
                  }
LAB_035aa7ac:
                  cVar22 = *(char *)(puVar23 + 2);
                }
              }
              if ((bVar12 & cVar22 != '\x03') != 0) {
                local_88 = *(undefined8 *)(*(long *)puVar11 + 0x1f8);
                local_55a0[0] = 0;
                appuStack_55b8[1] = (undefined **)0x0;
                lStack_80 = *(long *)PTR_DAT_04bb27c8 + 0x28;
                local_55d0 = 0x20d;
                local_55dc._0_8_ = 0x1500000019;
                lVar20 = 0x50;
                do {
                  *(undefined4 *)(local_55e8 + lVar20 + 3) = 0;
                  ppuVar2 = (undefined **)((long)local_54d0 + lVar20);
                  *(undefined4 *)(local_55e8 + lVar20) = 0;
                  *(undefined8 *)(local_55dc + lVar20 + -4) = 0;
                  *(undefined8 *)(local_55dc + lVar20 + 4) = 0;
                  *(undefined8 *)(local_55dc + lVar20 + 0xc) = 0;
                  *(undefined1 *)((long)appuStack_55b8 + lVar20 + -0x10) = 0;
                  *(undefined4 *)((long)appuStack_55b8 + lVar20 + -8) = 0;
                  *(undefined4 *)((long)appuStack_55b8 + lVar20 + -5) = 0;
                  *(undefined8 *)((long)appuStack_55b8 + lVar20 + 0x10) = 0;
                  local_55a0[lVar20] = 0;
                  *(undefined4 *)(auStack_5598 + lVar20) = 0;
                  *(undefined4 *)(auStack_5598 + lVar20 + 3) = 0;
                  local_5578[lVar20] = 0;
                  *(undefined8 *)((long)local_5590 + lVar20) = 0;
                  *(undefined4 *)(local_5570 + lVar20 + 3) = 0;
                  *(undefined4 *)(local_5570 + lVar20) = 0;
                  *(undefined8 *)((long)local_5568 + lVar20 + 0x10) = 0;
                  local_5550[lVar20] = 0;
                  *(undefined4 *)(local_5548 + lVar20) = 0;
                  *(undefined4 *)(local_5548 + lVar20 + 3) = 0;
                  *(undefined8 *)((long)local_5540 + lVar20 + 0x10) = 0;
                  local_5528[lVar20] = 0;
                  *(undefined4 *)(auStack_5520 + lVar20) = 0;
                  *(undefined4 *)(auStack_5520 + lVar20 + 3) = 0;
                  *(undefined8 *)((long)local_5518 + lVar20) = 0;
                  local_5500[lVar20] = 0;
                  *(undefined4 *)(local_54f8 + lVar20 + 3) = 0;
                  *(undefined4 *)(local_54f8 + lVar20) = 0;
                  local_54d8[lVar20] = 0;
                  *(undefined8 *)((long)local_54f0 + lVar20) = 0;
                  *(undefined8 *)((long)appuStack_55b8 + lVar20) = 0;
                  *(undefined8 *)((long)appuStack_55b8 + lVar20 + 8) = 0;
                  *(undefined8 *)((long)local_5590 + lVar20 + 8) = 0;
                  *(undefined8 *)((long)local_5590 + lVar20 + 0x10) = 0;
                  *(undefined8 *)((long)local_5568 + lVar20) = 0;
                  *(undefined8 *)((long)local_5568 + lVar20 + 8) = 0;
                  *(undefined8 *)((long)local_5540 + lVar20) = 0;
                  *(undefined8 *)((long)local_5540 + lVar20 + 8) = 0;
                  *(undefined8 *)((long)local_5518 + lVar20 + 8) = 0;
                  *(undefined8 *)((long)local_5518 + lVar20 + 0x10) = 0;
                  *(undefined8 *)((long)local_54f0 + lVar20 + 8) = 0;
                  *(undefined8 *)((long)local_54f0 + lVar20 + 0x10) = 0;
                  lVar20 = lVar20 + 0x118;
                } while (ppuVar2 != &local_390);
                local_368 = 0;
                uStack_360 = 0;
                local_378 = 0x19ffffffff;
                local_388 = 0x110000020d;
                local_e8 = 0x110000020d;
                local_370 = 0x15;
                local_390 = PTR_DAT_04bc1998 + 0x10;
                local_358 = 0;
                uStack_350 = 0;
                local_d4 = 0x1500000019;
                local_5620 = &local_88;
                local_f0 = &PTR_LAB_049639c8;
                puStack_5628 = local_55e8;
                puStack_5618 = PTR_DAT_04bbc1a0 + 0x10;
                local_55f0 = 0;
                local_5610 = &DAT_048f9750;
                uStack_5608 = 0;
                local_5600 = &DAT_048f9750;
                uStack_55f8 = 0;
                local_55e0 = (undefined2)(param_1 + 2);
                local_55de = (undefined2)(param_2 + 2);
                local_5630 = &PTR_FUN_04a5eca8;
                uVar13 = param_1 + 2 & 0xffff;
                uVar19 = param_2 + 2 & 0xffff;
                uVar10 = uVar25;
                if ((int)uVar13 <= (int)uVar25) {
                  uVar10 = uVar13;
                }
                uVar13 = uVar26;
                if ((int)(uVar26 & 0xffff) <= (int)uVar25) {
                  uVar13 = uVar10;
                }
                uVar25 = uVar6;
                if ((int)uVar19 <= (int)uVar6) {
                  uVar25 = uVar19;
                }
                uVar19 = uVar24;
                if ((int)(uVar24 & 0xffff) <= (int)uVar6) {
                  uVar19 = uVar25;
                }
                _local_55e8 = CONCAT44(CONCAT22((short)uVar24,(short)uVar26),
                                       CONCAT22((short)uVar19,(short)uVar13));
                local_55c8 = auStack_5598;
                appuStack_55b8[2] = &local_390;
                local_380 = auStack_348;
                local_e0 = &local_cc;
                memset(auStack_300,2,0x20d);
                local_cc = 0;
                uStack_c4 = 0;
                local_8c = 0;
                local_d8 = 0;
                local_bc = 0;
                uStack_b4 = 0;
                local_ac = 0;
                uStack_a4 = 0;
                local_9c = 0;
                uStack_94 = 0;
                local_55c0 = 0;
                appuStack_55b8[0] = (undefined **)0x0;
                if (local_55d0 != 0) {
                  uVar13 = uVar13 & 0xffff;
                  uVar19 = uVar19 & 0xffff;
                  uVar21 = 0;
                  uVar24 = uVar13;
                  uVar26 = uVar19;
                  do {
                    iVar18 = uVar24 - (ushort)local_55e8._0_2_;
                    if ((((-1 < iVar18) && (iVar18 < (int)local_55dc._0_4_)) &&
                        (iVar1 = uVar26 - (ushort)local_55e8._2_2_, -1 < iVar1)) &&
                       ((iVar1 < (int)local_55dc._4_4_ && (local_55c8 != (undefined1 *)0x0)))) {
                      puVar16 = (undefined2 *)
                                (local_55c8 + (long)(iVar18 + local_55dc._0_4_ * iVar1) * 0x28);
                      *puVar16 = (short)uVar24;
                      puVar16[1] = (short)uVar26;
                      *(undefined1 *)(puVar16 + 3) = 0;
                      *(undefined8 *)(puVar16 + 4) = 0;
                      *(undefined8 *)(puVar16 + 8) = 0;
                      *(undefined8 *)(puVar16 + 0xc) = 0;
                      *(undefined1 *)(puVar16 + 0x10) = 0;
                      bVar12 = 0x6e;
                      pbVar14 = (byte *)(puVar16 + 2);
                      pbVar14[0] = 0xff;
                      pbVar14[1] = 0;
                      if ((uVar24 == uVar13) ||
                         (bVar12 = 0x9d, uVar24 == (local_55dc._0_4_ + uVar13) - 1)) {
                        *pbVar14 = bVar12;
                      }
                      else {
                        bVar12 = 0xff;
                      }
                      bVar17 = 0xab;
                      if ((uVar26 == uVar19) ||
                         (bVar17 = 0x57, uVar26 == (uVar19 + local_55dc._4_4_) - 1)) {
                        *pbVar14 = bVar17 & bVar12;
                      }
                    }
                    uVar21 = uVar21 + 1;
                    if (uVar24 + 1 == local_55dc._0_4_ + uVar13) {
                      uVar26 = uVar26 + 1;
                      uVar24 = uVar13;
                    }
                    else {
                      uVar24 = uVar24 + 1;
                    }
                  } while (uVar21 < local_55d0);
                  if (local_55d0 != 0) {
                    uVar24 = (uint)(ushort)local_55e8._0_2_;
                    uVar21 = 0;
                    uVar26 = (uint)(ushort)local_55e8._2_2_;
                    uVar25 = (uint)(ushort)local_55e8._0_2_;
                    iVar18 = local_55dc._0_4_ + uVar25;
                    uVar15 = local_55d0;
                    do {
                      iVar1 = uVar24 - (ushort)local_55e8._0_2_;
                      if ((-1 < iVar1) && (iVar1 < (int)local_55dc._0_4_)) {
                        iVar27 = uVar26 - (ushort)local_55e8._2_2_;
                        if ((-1 < iVar27) &&
                           ((iVar27 < (int)local_55dc._4_4_ && (local_55c8 != (undefined1 *)0x0))))
                        {
                          (*(code *)*local_5630)
                                    (&local_5630,
                                     local_55c8 + (long)(iVar1 + local_55dc._0_4_ * iVar27) * 0x28);
                          uVar15 = local_55d0;
                        }
                      }
                      uVar21 = uVar21 + 1;
                      if (uVar24 + 1 == iVar18) {
                        uVar26 = uVar26 + 1;
                        uVar24 = uVar25;
                      }
                      else {
                        uVar24 = uVar24 + 1;
                      }
                    } while (uVar21 < uVar15);
                  }
                }
                FUN_035a56c0(local_55e8,0);
                FUN_035a81f0(local_55e8,param_1,param_2,0);
                return 1 < *(int *)(appuStack_55b8[2] + 3);
              }
            }
          }
        }
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 != 2);
    bVar5 = iVar18 == 0;
    iVar18 = iVar18 + 1;
    if (bVar5) {
      return false;
    }
  } while( true );
}

