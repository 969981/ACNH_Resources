
void FUN_025bc8d0(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *****pppppuVar14;
  bool bVar15;
  int iVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  char *pcVar22;
  byte bVar23;
  ulong uVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  int *piVar31;
  int iVar32;
  char cVar33;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  byte local_114 [4];
  undefined4 local_110;
  undefined2 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined8 *****local_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 *****local_e8;
  undefined8 *****local_e0;
  undefined8 *****local_d8;
  undefined8 ****local_d0;
  undefined8 ***local_c8;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [9];
  
  local_130 = 0x4400000043;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_130 + (long)*(int *)(param_1 + 0x28) * 4));
  puVar11 = PTR_DAT_04bb2268;
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_108 = (undefined *)CONCAT71(local_108._1_7_,*(byte *)(param_1 + 0x18));
    lVar18 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_108,1);
joined_r0x025bc968:
    if (lVar18 != 0) {
      local_108._4_4_ = (int)((ulong)local_108 >> 0x20);
      local_108 = (undefined *)CONCAT44(local_108._4_4_,2);
      if ((*(ulong *)(*(long *)puVar11 + 0xb8) >> 2 & 1) == 0) {
        lVar21 = lVar18 + 0x194b0;
        if (*(long *)(lVar18 + 0x194b8) == 0) {
          lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        if (*(long **)(lVar21 + 0x2a840) == (long *)0x0) {
          uVar24 = 0;
        }
        else {
          puVar19 = (undefined8 *)**(long **)(lVar21 + 0x2a840);
          uVar24 = 0;
          if (puVar19 != (undefined8 *)0x0) {
            uVar24 = (**(code **)*puVar19)();
          }
        }
        puVar1 = (undefined4 *)(*(long *)(lVar21 + 0x2a828) + *(long *)(lVar21 + 0x2a820));
        uVar26 = *(uint *)((long)&local_130 + (long)*(int *)(param_1 + 0x28) * 4);
        puVar2 = puVar1 + uVar26;
        if (0xff < uVar26) {
          puVar2 = puVar1;
        }
        uVar17 = *puVar2;
        if ((((uVar24 & 1) != 0) && (*(long *)(lVar21 + 0x2a840) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar21 + 0x2a840) + 8),
           puVar19 != (undefined8 *)0x0)) {
          (**(code **)*puVar19)();
        }
        *(undefined4 *)(*(long *)puVar11 + 0xc0) = uVar17;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x1c) != -1) && (*(long *)PTR_DAT_04bb46b0 != 0)) {
    lVar18 = FUN_026eec4c();
    goto joined_r0x025bc968;
  }
  puVar12 = PTR_DAT_04bb27d0;
  puVar10 = PTR_DAT_04bb2020;
  plVar20 = *(long **)PTR_DAT_04bb27d0;
  lVar18 = *plVar20;
  bVar23 = *(byte *)(lVar18 + 0x473);
  if ((long)(char)bVar23 == 0xffffffffffffffff) {
LAB_025bca60:
    bVar15 = true;
  }
  else {
    pbVar3 = (byte *)(lVar18 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x80;
    if (7 < bVar23) {
      pbVar3 = (byte *)(lVar18 + 0x48);
    }
    if ((*pbVar3 >> 3 & 1) == 0) goto LAB_025bca60;
    bVar15 = *(byte *)(lVar18 + 0x472) == bVar23;
  }
  local_108 = PTR_DAT_04bb2020 + 0x10;
  local_100 = "IsHost";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_108,bVar15);
    plVar20 = *(long **)puVar12;
  }
  lVar18 = plVar20[2];
  iVar16 = *(int *)(lVar18 + 0x380);
  pcVar22 = PTR_DAT_04bc1220;
  if ((iVar16 == 0xf || iVar16 == 0x18) ||
     ((iVar16 == 0x26 && (*(int *)(lVar18 + 0x388) == 0x18 || *(int *)(lVar18 + 0x388) == 0xf)))) {
    lVar21 = *plVar20;
    bVar23 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar23 != 0xffffffffffffffff) {
      uVar24 = (long)(char)bVar23 & 0xffffffff;
      puVar4 = (uint *)(lVar21 + 0x48) + uVar24 * 0x20;
      if (7 < bVar23) {
        puVar4 = (uint *)(lVar21 + 0x48);
      }
      pcVar5 = PTR_DAT_04bc1220;
      if ((*puVar4 & 8) != 0) {
        pcVar5 = (char *)(lVar21 + 0x473);
      }
      cVar33 = *pcVar5;
      goto LAB_025bcb34;
    }
    cVar33 = *PTR_DAT_04bc1220;
  }
  else {
    lVar21 = *plVar20;
    cVar33 = *(char *)(lVar18 + 0xaa5);
    bVar23 = *(byte *)(lVar21 + 0x473);
    if ((long)(char)bVar23 != 0xffffffffffffffff) {
      uVar24 = (long)(char)bVar23 & 0xffffffff;
LAB_025bcb34:
      puVar4 = (uint *)(lVar21 + 0x48) + uVar24 * 0x20;
      if (7 < bVar23) {
        puVar4 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pcVar22 = (char *)(lVar21 + 0x473);
      }
    }
  }
  cVar6 = *pcVar22;
  local_100 = "IsNewCommer";
  if (*(long *)(param_1 + 8) != 0) {
    local_108 = puVar10 + 0x10;
    FUN_026054d0(*(long *)(param_1 + 8),&local_108,cVar33 == cVar6);
    local_100 = "Is12Session";
    if (*(long *)(param_1 + 8) != 0) {
      local_108 = puVar10 + 0x10;
      FUN_026054d0(*(long *)(param_1 + 8),&local_108,0);
    }
  }
  if (((*(int *)(param_1 + 0x28) == 1) &&
      (lVar18 = *(long *)PTR_DAT_04bb3728, *(int *)(lVar18 + 0xb0) == 1)) &&
     (*(char *)(lVar18 + 0xa0) != '\0')) {
    iVar16 = *(int *)(lVar18 + 0x5c);
    iVar32 = *(int *)(lVar18 + 0x60);
    local_100 = "DataId";
    if (*(long *)(param_1 + 8) != 0) {
      local_108 = puVar10 + 0x10;
      FUN_02605660(*(long *)(param_1 + 8),&local_108,*(undefined8 *)(lVar18 + 0x98));
      local_100 = "FieldSize";
      if (*(long *)(param_1 + 8) != 0) {
        local_108 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_108,(long)iVar16);
        local_108 = puVar10 + 0x10;
        local_100 = "OutsidePattern";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_026054d0(*(long *)(param_1 + 8),&local_108,(long)iVar32);
        }
      }
    }
  }
  local_108 = puVar10 + 0x10;
  local_100 = "LandTransferMsec";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_108,
                 (long)(int)*(undefined8 *)(*(long *)(*(long *)puVar12 + 0x10) + 0x418));
  }
  FUN_02603730(param_1);
  plVar20 = (long *)PTR_DAT_04bcb7d8;
  lVar18 = *(long *)PTR_DAT_04bcb7d8;
  nn::os::LockMutex((MutexType *)(lVar18 + 0xd0));
  puVar13 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 == 0) {
    uVar17 = 0;
  }
  else {
    FUN_00223668(&local_108,*(undefined8 *)PTR_DAT_04bcb8c0);
    if (((int)local_108 == 0) && (iVar16 = FUN_0029b330(*(undefined8 *)puVar13), iVar16 == 3)) {
      uVar17 = FUN_0029becc(*(undefined8 *)puVar13);
    }
    else {
      uVar17 = *(undefined4 *)
                (*(long *)puVar13 + (ulong)*(byte *)(*(long *)puVar13 + 0x162) * 4 + 0x180);
    }
  }
  local_108 = puVar10 + 0x10;
  local_100 = "SessionID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_108,uVar17);
  }
  nn::os::UnlockMutex((MutexType *)(lVar18 + 0xd0));
  if (*(int *)(param_1 + 0x28) == 1) {
    if (((*(long *)(param_1 + 8) != 0) &&
        (lVar18 = *(long *)(*(long *)(param_1 + 8) + 8), lVar18 != 0)) &&
       ((*(uint *)(lVar18 + 0x38) & 1) != 0)) {
      iVar16 = *(int *)(lVar18 + 0x44) + 3;
      *(int *)(lVar18 + 0x44) = iVar16;
      local_108 = (undefined *)CONCAT44((int)((ulong)local_108 >> 0x20),6);
      if (iVar16 <= (int)((*(uint *)(*(long *)PTR_DAT_04bc3578 + 0xb0) >> 6 & 1) +
                         *(int *)(lVar18 + 0x40))) {
        nn::prepo::AddInternetConnectionStatus
                  (*(PlayReport **)(lVar18 + 0x30),"NetworkInterface","LinkLevel","FrequencyBand");
      }
    }
    local_108 = (undefined *)0x0;
    local_100 = (char *)0x0;
    local_e8 = &local_e0;
    local_e0 = &local_d8;
    local_f8 = &local_e8;
    local_d8 = &local_d0;
    local_d0 = &local_c8;
    local_c8 = &local_c0;
    local_c0 = &local_b8;
    local_b8 = &local_b0;
    local_b0 = 0;
    if (local_a8 != (undefined8 *)0x0) {
      local_108 = (undefined *)0x800000000;
      local_100 = (char *)local_a8;
    }
    pppppuStack_f0 = local_f8;
    FUN_02507c6c(local_114,2,1,0,0);
    puVar13 = PTR_DAT_04bb5038;
    local_128 = (undefined *)CONCAT44(local_110,(int)local_128);
    bVar23 = 0xff;
    if (local_114[0] < 8) {
      bVar23 = local_114[0];
    }
    local_128 = (undefined *)CONCAT71(local_128._1_7_,bVar23);
    local_120 = (char *)CONCAT62(local_120._2_6_,local_10c);
    if (local_114[0] < 8) {
      do {
        pppppuVar14 = local_f8;
        if ((int)local_108 < local_108._4_4_) {
          if (local_f8 != (undefined8 *****)0x0) {
            local_f8 = (undefined8 *****)*local_f8;
          }
          *(undefined4 *)pppppuVar14 = 0;
          if ((int)local_108 < local_108._4_4_) {
            *(undefined8 ******)((long)local_100 + (long)(int)local_108 * 8) = pppppuVar14;
            local_108 = (undefined *)CONCAT44(local_108._4_4_,(int)local_108 + 1);
          }
          uVar17 = FUN_01df8b30(&local_128);
          *(undefined4 *)pppppuVar14 = uVar17;
          local_114[0] = (byte)local_128;
          if (7 < (byte)local_128) break;
        }
        uVar24 = (ulong)local_114[0];
        do {
          if (uVar24 == 7) goto LAB_025bce5c;
          uVar24 = uVar24 + 1;
          uVar29 = FUN_02507924(&local_128,puVar13 + uVar24);
        } while ((uVar29 & 1) == 0);
        local_114[0] = puVar13[uVar24];
        if (7 < local_114[0]) break;
        local_128 = (undefined *)CONCAT71(local_128._1_7_,local_114[0]);
      } while( true );
    }
LAB_025bce5c:
    iVar16 = (int)local_108;
    if (0 < (int)local_108) {
      if ((int)local_108 == 1) {
        puVar19 = (undefined8 *)((long)local_100 + 8);
LAB_025bd078:
        iVar32 = 0;
        pcVar22 = local_100;
        do {
          puVar25 = (undefined8 *)((long)pcVar22 + 8);
          iVar32 = **(int **)pcVar22 + iVar32;
          pcVar22 = (char *)puVar25;
        } while (puVar25 != puVar19);
      }
      else {
        uVar26 = (int)local_108 - 1;
        uVar27 = 0;
        do {
          if ((int)uVar26 <= (int)uVar27) break;
          piVar28 = *(int **)((long)local_100 + (ulong)uVar27 * 8);
          uVar24 = (ulong)uVar27;
          if ((uVar26 - uVar27 & 1) == 0) {
            piVar31 = piVar28;
            uVar29 = uVar24;
          }
          else {
            uVar29 = uVar24 + 1;
            piVar31 = *(int **)((long)local_100 + uVar29 * 8);
            if (*piVar31 < *piVar28) {
              *(int **)((long)local_100 + uVar29 * 8) = piVar28;
              *(int **)((long)local_100 + uVar24 * 8) = piVar31;
              piVar31 = piVar28;
            }
          }
          uVar30 = (ulong)uVar26;
          uVar26 = uVar27;
          if (~uVar24 + uVar30 != 0) {
            puVar19 = (undefined8 *)((long)local_100 + (uVar29 + 1) * 8);
            do {
              piVar28 = (int *)*puVar19;
              if (*piVar28 < *piVar31) {
                puVar19[-1] = piVar28;
                *puVar19 = piVar31;
                uVar26 = (uint)uVar29;
              }
              else {
                piVar31 = piVar28;
              }
              piVar28 = (int *)puVar19[1];
              if (*piVar28 < *piVar31) {
                uVar26 = (uint)uVar29 + 1;
                *puVar19 = piVar28;
                puVar19[1] = piVar31;
              }
              else {
                piVar31 = piVar28;
              }
              uVar29 = uVar29 + 2;
              puVar19 = puVar19 + 2;
            } while (uVar30 != uVar29);
          }
          if ((int)uVar26 <= (int)uVar27) break;
          piVar28 = *(int **)((long)local_100 + (ulong)uVar26 * 8);
          uVar29 = (ulong)uVar26;
          uVar27 = uVar26;
          do {
            piVar31 = *(int **)((long)local_100 + (uVar29 - 1) * 8);
            if (*piVar28 < *piVar31) {
              uVar27 = (uint)uVar29;
              *(int **)((long)local_100 + (uVar29 - 1) * 8) = piVar28;
              *(int **)((long)local_100 + uVar29 * 8) = piVar31;
            }
            else {
              piVar28 = piVar31;
            }
            uVar29 = uVar29 - 1;
          } while ((long)uVar24 < (long)uVar29);
        } while (uVar27 != uVar26);
        if ((int)local_108 != 0) {
          puVar19 = (undefined8 *)((long)local_100 + (long)(int)local_108 * 8);
          goto LAB_025bd078;
        }
        iVar32 = 0;
      }
      iVar7 = **(int **)local_100;
      iVar8 = **(int **)((long)local_100 + (ulong)((int)local_108 - 1U) * 8);
      iVar9 = **(int **)((long)local_100 + (ulong)((int)local_108 - 1U >> 1) * 8);
      local_120 = "RttCount";
      if (*(long *)(param_1 + 8) == 0) {
LAB_025bd170:
        local_128 = puVar10 + 0x10;
      }
      else {
        local_128 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_128,(ulong)local_108 & 0xffffffff);
        local_120 = "RttMin";
        if (*(long *)(param_1 + 8) == 0) goto LAB_025bd170;
        local_128 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_128,(long)iVar7);
        local_120 = "RttMax";
        if (*(long *)(param_1 + 8) == 0) goto LAB_025bd170;
        local_128 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_128,(long)iVar8);
        local_120 = "RttAve";
        if (*(long *)(param_1 + 8) == 0) goto LAB_025bd170;
        iVar7 = 0;
        if (iVar16 != 0) {
          iVar7 = iVar32 / iVar16;
        }
        local_128 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_128,(long)iVar7);
        local_128 = puVar10 + 0x10;
        local_120 = "RttMid";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_026054d0(*(long *)(param_1 + 8),&local_128,(long)iVar9);
        }
      }
      plVar20 = (long *)PTR_DAT_04bcb7d8;
    }
    if (cVar33 == cVar6) {
      local_100 = "BitRateTestResult";
      local_128 = (undefined *)
                  CONCAT44(local_128._4_4_,*(undefined4 *)(*(long *)(*plVar20 + 0x28) + 0x1dc));
      if (*(long *)(param_1 + 8) != 0) {
        local_108 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_108,
                     (long)*(int *)(*(long *)(*plVar20 + 0x28) + 0x1d8));
        local_100 = "BitRateTestError";
        if (*(long *)(param_1 + 8) != 0) {
          local_108 = puVar10 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_108,(long)(int)local_128);
          lVar18 = *(long *)(param_1 + 8);
          lVar21 = (long)(int)local_128;
          if (lVar18 != 0) goto LAB_025bd260;
        }
      }
    }
    else {
      local_100 = "BitRateTestResult";
      if (*(long *)(param_1 + 8) != 0) {
        local_108 = puVar10 + 0x10;
        FUN_026054d0(*(long *)(param_1 + 8),&local_108,0xffffffffffffffff);
        local_100 = "BitRateTestError";
        if (*(long *)(param_1 + 8) != 0) {
          local_108 = puVar10 + 0x10;
          FUN_026054d0(*(long *)(param_1 + 8),&local_108,0);
          lVar18 = *(long *)(param_1 + 8);
          if (lVar18 != 0) {
            lVar21 = -1;
LAB_025bd260:
            local_100 = "BitRateTestErrorDesc";
            local_108 = puVar10 + 0x10;
            FUN_026054d0(lVar18,&local_108,lVar21);
          }
        }
      }
    }
  }
  if (*(uint *)(*(long *)puVar12 + 0x80) < 2) {
    lVar18 = *(long *)(param_1 + 8);
    if (lVar18 == 0) goto LAB_025bd2dc;
    lVar21 = -1;
  }
  else {
    local_128 = (undefined *)CONCAT44(local_128._4_4_,*(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c));
    lVar21 = (long)*(int *)(*(long *)PTR_DAT_04bbaed0 + 0x3c);
    lVar18 = *(long *)(param_1 + 8);
    if (lVar18 == 0) goto LAB_025bd2dc;
  }
  local_100 = "MultiPlaySession";
  local_108 = puVar10 + 0x10;
  FUN_026054d0(lVar18,&local_108,lVar21);
LAB_025bd2dc:
  *(ulong *)(*(long *)puVar11 + 0xb8) = *(ulong *)(*(long *)puVar11 + 0xb8) | 4;
  return;
}

