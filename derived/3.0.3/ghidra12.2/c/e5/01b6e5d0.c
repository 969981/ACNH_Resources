
/* WARNING: Type propagation algorithm not settling */

bool FUN_01b6e5d0(long *param_1,ushort *param_2,uint *param_3,uint *param_4,undefined8 param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  short *psVar18;
  uint uVar19;
  undefined8 uVar20;
  char cVar21;
  ulong uVar22;
  uint *puVar23;
  long *plVar24;
  int *piVar25;
  ushort *puVar26;
  ulong uVar27;
  undefined8 *******pppppppuVar28;
  uint local_89c;
  uint local_898;
  uint uStack_894;
  uint local_890;
  uint local_88c;
  undefined8 local_888;
  undefined8 *local_880;
  undefined8 *******local_878;
  undefined8 *******local_870;
  undefined8 *******local_868;
  undefined8 *******local_860;
  undefined8 *******local_858;
  undefined8 *******local_850;
  undefined8 *******local_848;
  undefined8 *******local_840;
  undefined8 *******local_838;
  undefined8 *******local_830;
  undefined8 *******local_828;
  undefined8 *******local_820;
  undefined8 *******local_818;
  undefined8 *******local_810;
  undefined8 *******local_808;
  undefined8 *******local_800;
  undefined8 *******local_7f8;
  undefined8 *******local_7f0;
  undefined8 *******local_7e8;
  undefined8 *******local_7e0;
  undefined8 *******local_7d8;
  undefined8 *******local_7d0;
  undefined8 *******local_7c8;
  undefined8 *******local_7c0;
  undefined8 *******local_7b8;
  undefined8 *******local_7b0;
  undefined8 *******local_7a8;
  undefined8 *******local_7a0;
  undefined8 *******local_798;
  undefined8 *******local_790;
  undefined8 *******local_788;
  undefined8 *******local_780;
  undefined8 *******local_778;
  undefined8 *******local_770;
  undefined8 *******local_768;
  undefined8 *******local_760;
  undefined8 *******local_758;
  undefined8 *******local_750;
  undefined8 *******local_748;
  undefined8 *******local_740;
  undefined8 *******local_738;
  undefined8 *******local_730;
  undefined8 *******local_728;
  undefined8 *******local_720;
  undefined8 *******local_718;
  undefined8 *******local_710;
  undefined8 *******local_708;
  undefined8 *******local_700;
  undefined8 *******local_6f8;
  undefined8 *******local_6f0;
  undefined8 *******local_6e8;
  undefined8 *******local_6e0;
  undefined8 *******local_6d8;
  undefined8 *******local_6d0;
  undefined8 *******local_6c8;
  undefined8 *******local_6c0;
  undefined8 *******local_6b8;
  undefined8 *******local_6b0;
  undefined8 *******local_6a8;
  undefined8 *******local_6a0;
  undefined8 *******local_698;
  undefined8 *******local_690;
  undefined8 *******local_688;
  undefined8 *******local_680;
  undefined8 *******local_678;
  undefined8 *******local_670;
  undefined8 *******local_668;
  undefined8 *******local_660;
  undefined8 *******local_658;
  undefined8 *******local_650;
  undefined8 *******local_648;
  undefined8 *******local_640;
  undefined8 *******local_638;
  undefined8 *******local_630;
  undefined8 *******local_628;
  undefined8 *******local_620;
  undefined8 *******local_618;
  undefined8 *******local_610;
  undefined8 *******local_608;
  undefined8 *******local_600;
  undefined8 *******local_5f8;
  undefined8 *******local_5f0;
  undefined8 *******local_5e8;
  undefined8 *******local_5e0;
  undefined8 *******local_5d8;
  undefined8 *******local_5d0;
  undefined8 *******local_5c8;
  undefined8 *******local_5c0;
  undefined8 *******local_5b8;
  undefined8 *******local_5b0;
  undefined8 *******local_5a8;
  undefined8 *******local_5a0;
  undefined8 *******local_598;
  undefined8 *******local_590;
  undefined8 *******local_588;
  undefined8 *******local_580;
  undefined8 *******local_578;
  undefined8 *******local_570;
  undefined8 *******local_568;
  undefined8 *******local_560;
  undefined8 *******local_558;
  undefined8 *******local_550;
  undefined8 *******local_548;
  undefined8 *******local_540;
  undefined8 *******local_538;
  undefined8 *******local_530;
  undefined8 *******local_528;
  undefined8 *******local_520;
  undefined8 *******local_518;
  undefined8 *******local_510;
  undefined8 *******local_508;
  undefined8 *******local_500;
  undefined8 *******local_4f8;
  undefined8 *******local_4f0;
  undefined8 *******local_4e8;
  undefined8 *******local_4e0;
  undefined8 *******local_4d8;
  undefined8 *******local_4d0;
  undefined8 *******local_4c8;
  undefined8 *******local_4c0;
  undefined8 *******local_4b8;
  undefined8 *******local_4b0;
  undefined8 *******local_4a8;
  undefined8 ******local_4a0;
  undefined8 *****local_498;
  undefined8 ****local_490;
  undefined8 ***local_488;
  undefined8 **local_480;
  undefined8 *local_478;
  undefined8 local_470;
  undefined8 local_468 [129];
  
  if ((((param_4 != (uint *)0x0) && (*param_4 < 3)) && (param_4[1] < 3)) &&
     ((param_4[2] < 3 && (param_4[3] < 3)))) {
    local_888 = CONCAT44(local_888._4_4_,2);
    if (((*param_4 == 2) || ((param_4[1] == 2 || (param_4[2] == 2)))) || (param_4[3] == 2)) {
      _local_898 = CONCAT44(uStack_894,1);
      if ((((*param_4 == 1) || (param_4[1] == 1)) || (param_4[2] == 1)) || (param_4[3] == 1)) {
        uVar6 = FUN_01b5c228(param_4);
        uVar7 = FUN_01b5c36c(param_4);
        if (uVar6 == 0xffffffff) {
          return false;
        }
        if (uVar7 == 0xffffffff) {
          return false;
        }
        lVar14 = *param_1;
        uVar19 = 0;
        do {
          puVar26 = (ushort *)(lVar14 + 0x280 + (long)(int)uVar19 * 10);
          if ((*puVar26 != 0xffff && *puVar26 == *param_2) &&
             ((3 < uVar6 ||
              (*(ushort *)(lVar14 + 0x280 + (long)(int)uVar19 * 10 + (ulong)uVar6 * 2 + 2) ==
               param_2[(ulong)uVar6 + 1])))) {
            uVar20 = *(undefined8 *)puVar26;
            local_880 = (undefined8 *)CONCAT62(local_880._2_6_,puVar26[4]);
            if (uVar7 < 4) {
              lVar15 = (ulong)uVar7 * 2;
              uVar6 = (uint)*(ushort *)((long)&local_888 + lVar15 + 2) +
                      (uint)param_2[(ulong)uVar7 + 1];
              if (0xfffe < uVar6) {
                uVar6 = 0xffff;
              }
              *(short *)((long)&local_888 + lVar15 + 2) = (short)uVar6;
            }
            if (0x7f < uVar19) goto LAB_01b6e944;
            uVar12 = (ulong)uVar19;
            psVar18 = (short *)(lVar14 + (ulong)uVar19 * 10 + 0x280);
            goto LAB_01b6e908;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80);
      }
    }
  }
  puVar3 = PTR_DAT_04bc0648;
  puVar2 = PTR_DAT_04bc0640;
  iVar11 = 0;
  iVar8 = 0;
  do {
    uVar1 = *(ushort *)(*param_1 + 0x280 + (long)iVar8 * 10);
    if (uVar1 == 0xffff) break;
    iVar8 = iVar8 + 1;
    if (uVar1 == *param_2) {
      iVar11 = iVar11 + 1;
    }
  } while (iVar8 != 0x80);
  if (*param_3 == 0) {
LAB_01b6e998:
    uVar6 = 0;
  }
  else {
    cVar21 = *PTR_DAT_04bc0640;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar3 + 0x18);
        if (-1 < (int)uVar6) {
          if ((ushort *)((ulong)uVar6 + (long)param_3) == (ushort *)0x0) goto LAB_01b6e998;
          uVar6 = (uint)*(ushort *)((ulong)uVar6 + (long)param_3);
          goto LAB_01b6e99c;
        }
        if (uVar6 != 0xffffffff) goto LAB_01b6e998;
      }
      puVar23 = (uint *)(ulong)*param_3;
      uVar6 = 0;
      if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b6e99c;
      lVar14 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)param_3 + (lVar14 - (long)puVar23);
      if (lVar14 == 0) goto LAB_01b6e998;
      uVar12 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
      *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
      uVar6 = 0;
      if (uVar12 == 0) goto LAB_01b6e99c;
      piVar25 = (int *)(lVar14 + 4);
      while (piVar25[-1] != 0x175969e1) {
        piVar25 = piVar25 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar6 = 0;
          goto LAB_01b6e99c;
        }
      }
      iVar8 = 0;
      if (*piVar25 != -1) {
        iVar8 = *piVar25;
      }
      *(int *)(puVar3 + 0x18) = iVar8;
    } while (*param_3 != 0);
    uVar6 = 0;
  }
LAB_01b6e99c:
  puVar3 = PTR_DAT_04bc0648;
  puVar2 = PTR_DAT_04bc0640;
  if (iVar11 < (int)uVar6) {
    lVar14 = *param_1;
    if (*(short *)(lVar14 + 0x776) != -1) {
      if (*param_3 != 0) {
        cVar21 = *PTR_DAT_04bc0640;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar3 + 0x28);
            if (-1 < (int)uVar6) {
              if ((undefined1 *)((ulong)uVar6 + (long)param_3) != (undefined1 *)0x0) {
                uVar10 = *(undefined1 *)((ulong)uVar6 + (long)param_3);
                goto LAB_01b6f51c;
              }
              break;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar23 = (uint *)(ulong)*param_3;
          uVar10 = 0;
          if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b6f51c;
          lVar14 = 0xc;
          if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)param_3 + (lVar14 - (long)puVar23);
          if (lVar14 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
          *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar25 = (int *)(lVar14 + 4);
          while (piVar25[-1] != 0x572a8fe9) {
            piVar25 = piVar25 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_01b6f518;
          }
          iVar8 = 0;
          if (*piVar25 != -1) {
            iVar8 = *piVar25;
          }
          *(int *)(puVar3 + 0x28) = iVar8;
          if (*param_3 == 0) break;
        } while( true );
      }
LAB_01b6f518:
      uVar10 = 0;
LAB_01b6f51c:
      uVar6 = FUN_01b6d0c0(param_1,uVar10,param_5);
      if (uVar6 == 0xffffffff) {
        return false;
      }
      lVar14 = *param_1;
      if (uVar6 < 0x80) {
        uVar12 = (ulong)uVar6;
        psVar18 = (short *)(lVar14 + (ulong)uVar6 * 10 + 0x280);
        do {
          if (*psVar18 == -1) break;
          if ((uVar12 < 0x7f) && (psVar18[5] != -1)) {
            *(undefined8 *)psVar18 = *(undefined8 *)(psVar18 + 5);
            psVar18[4] = psVar18[9];
          }
          else {
            *psVar18 = -1;
            psVar18[1] = 0;
            psVar18[2] = 0;
            psVar18[3] = 0;
            psVar18[4] = 0;
          }
          uVar12 = uVar12 + 1;
          psVar18 = psVar18 + 5;
        } while (uVar12 != 0x80);
        lVar14 = *param_1;
      }
    }
    iVar8 = 0;
    while (psVar18 = (short *)(lVar14 + 0x280 + (long)iVar8 * 10), *psVar18 != -1) {
      iVar8 = iVar8 + 1;
      if (iVar8 == 0x80) {
        return true;
      }
    }
    uVar20 = *(undefined8 *)param_2;
    bVar5 = true;
    goto LAB_01b6f5e0;
  }
  uVar6 = *param_3;
  uVar7 = 0;
  if ((uVar6 != 0) && (param_3 != (uint *)(ulong)uVar6)) {
    puVar23 = (uint *)((long)param_3 - (long)(ulong)uVar6);
    uVar7 = 0;
    if (*puVar23 != 0) {
      uVar6 = puVar23[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar23 + lVar14 + (ulong)(ushort)puVar23[2] * 8;
        if (lVar14 != 0) {
          uVar7 = 0;
          if ((ulong)uVar6 != 0) {
            uVar7 = (uint)((ulong)((long)param_3 - lVar14) / (ulong)uVar6);
          }
          if (*puVar23 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc0638) &&
             (uVar1 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar7 * 2),
             uVar7 = (uint)uVar1, uVar1 < 5)) goto LAB_01b6eb14;
        }
      }
      uVar7 = 0;
    }
  }
LAB_01b6eb14:
  local_888 = CONCAT44(local_888._4_4_,uVar7);
  iVar8 = FUN_01b6db30(&local_888,param_4,param_2,0xffffffff,param_5);
  puVar4 = PTR_DAT_04bc0620;
  puVar3 = PTR_DAT_04bc0618;
  puVar2 = PTR_DAT_04bb49a0;
  local_860 = &local_858;
  local_858 = &local_850;
  local_850 = &local_848;
  local_848 = &local_840;
  local_878 = &local_868;
  local_470 = 0;
  local_840 = &local_838;
  local_838 = &local_830;
  local_830 = &local_828;
  local_828 = &local_820;
  local_820 = &local_818;
  local_810 = &local_808;
  local_818 = &local_810;
  local_808 = &local_800;
  local_800 = &local_7f8;
  local_7f8 = &local_7f0;
  local_7f0 = &local_7e8;
  local_7e8 = &local_7e0;
  local_7e0 = &local_7d8;
  local_7d8 = &local_7d0;
  local_7d0 = &local_7c8;
  local_7c8 = &local_7c0;
  local_7c0 = &local_7b8;
  local_7b8 = &local_7b0;
  local_7b0 = &local_7a8;
  local_7a8 = &local_7a0;
  local_7a0 = &local_798;
  local_798 = &local_790;
  local_790 = &local_788;
  local_788 = &local_780;
  local_780 = &local_778;
  local_778 = &local_770;
  local_770 = &local_768;
  local_768 = &local_760;
  local_760 = &local_758;
  local_758 = &local_750;
  local_750 = &local_748;
  local_748 = &local_740;
  local_740 = &local_738;
  local_738 = &local_730;
  local_730 = &local_728;
  local_728 = &local_720;
  local_720 = &local_718;
  local_718 = &local_710;
  local_710 = &local_708;
  local_708 = &local_700;
  local_700 = &local_6f8;
  local_6f8 = &local_6f0;
  local_6f0 = &local_6e8;
  local_6e8 = &local_6e0;
  local_6e0 = &local_6d8;
  local_6d8 = &local_6d0;
  local_6d0 = &local_6c8;
  local_6c8 = &local_6c0;
  local_6c0 = &local_6b8;
  local_6b8 = &local_6b0;
  local_6b0 = &local_6a8;
  local_6a8 = &local_6a0;
  local_6a0 = &local_698;
  local_698 = &local_690;
  local_690 = &local_688;
  local_688 = &local_680;
  local_868 = &local_860;
  local_680 = &local_678;
  local_678 = &local_670;
  local_670 = &local_668;
  local_668 = &local_660;
  local_660 = &local_658;
  local_658 = &local_650;
  local_650 = &local_648;
  local_648 = &local_640;
  local_640 = &local_638;
  local_638 = &local_630;
  local_630 = &local_628;
  local_628 = &local_620;
  local_620 = &local_618;
  local_618 = &local_610;
  local_610 = &local_608;
  local_608 = &local_600;
  local_600 = &local_5f8;
  local_5f8 = &local_5f0;
  local_5f0 = &local_5e8;
  local_5e8 = &local_5e0;
  local_5e0 = &local_5d8;
  local_5d8 = &local_5d0;
  local_5d0 = &local_5c8;
  local_5c8 = &local_5c0;
  local_5c0 = &local_5b8;
  local_5b8 = &local_5b0;
  local_5b0 = &local_5a8;
  local_5a8 = &local_5a0;
  local_5a0 = &local_598;
  local_598 = &local_590;
  local_590 = &local_588;
  local_588 = &local_580;
  local_580 = &local_578;
  local_578 = &local_570;
  local_570 = &local_568;
  local_568 = &local_560;
  local_560 = &local_558;
  local_558 = &local_550;
  local_550 = &local_548;
  local_548 = &local_540;
  local_540 = &local_538;
  local_538 = &local_530;
  local_530 = &local_528;
  local_528 = &local_520;
  local_520 = &local_518;
  local_518 = &local_510;
  local_510 = &local_508;
  local_508 = &local_500;
  local_500 = &local_4f8;
  local_4f8 = &local_4f0;
  local_4f0 = &local_4e8;
  local_4e8 = &local_4e0;
  local_4e0 = &local_4d8;
  local_4d8 = &local_4d0;
  local_4d0 = &local_4c8;
  local_4c8 = &local_4c0;
  local_4c0 = &local_4b8;
  local_4b8 = &local_4b0;
  local_4b0 = &local_4a8;
  local_4a8 = &local_4a0;
  local_4a0 = &local_498;
  local_498 = &local_490;
  local_490 = &local_488;
  local_488 = &local_480;
  local_480 = &local_478;
  local_478 = &local_470;
  local_888 = 0;
  local_880 = (undefined8 *)0x0;
  if (local_468 != (undefined8 *)0x0) {
    local_888 = 0x8000000000;
    local_880 = local_468;
  }
  lVar14 = *param_1;
  uVar12 = 0;
  uVar27 = 0;
  puVar23 = (uint *)PTR_DAT_04bc0630;
  puVar17 = (uint *)PTR_DAT_04bc0628;
  local_870 = local_878;
  do {
    pppppppuVar28 = local_878;
    puVar26 = (ushort *)(lVar14 + 0x280 + (long)(int)uVar27 * 10);
    uVar1 = *puVar26;
    if (uVar1 == 0xffff) break;
    if (uVar1 == *param_2) {
      lVar15 = *(long *)puVar2;
      if (*(long *)(lVar15 + 0x230) == 0) {
LAB_01b6efc0:
        puVar13 = (uint *)0x0;
      }
      else {
        if ((int)(uint)uVar1 < *(int *)(lVar15 + 0x220)) goto LAB_01b6efc0;
        uVar6 = (uint)uVar1 - *(int *)(lVar15 + 0x220);
        if ((int)*(uint *)(lVar15 + 0x228) <= (int)uVar6) goto LAB_01b6efc0;
        if (*(uint *)(lVar15 + 0x228) <= uVar6) {
          uVar6 = 0;
        }
        puVar13 = *(uint **)(*(long *)(lVar15 + 0x230) + (long)(int)uVar6 * 8);
      }
      if ((int)local_888 < local_888._4_4_) {
        if (local_878 != (undefined8 *******)0x0) {
          local_878 = (undefined8 *******)*local_878;
        }
        *pppppppuVar28 = (undefined8 ******)0x0;
        if ((int)local_888 < local_888._4_4_) {
          local_880[(int)local_888] = pppppppuVar28;
          local_888 = CONCAT44(local_888._4_4_,(int)local_888 + 1);
        }
        *(int *)pppppppuVar28 = (int)uVar12;
      }
      else {
        pppppppuVar28 = (undefined8 *******)0x0;
        uRam0000000000000000 = (int)uVar12;
      }
      if (puVar13 == (uint *)0x0) {
        *(undefined4 *)((long)pppppppuVar28 + 4) = 0xffffffff;
      }
      else {
        uVar7 = 0;
        uVar6 = *puVar13;
        if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
          puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
          uVar7 = 0;
          if (*puVar16 != 0) {
            uVar6 = puVar16[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar7 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
                }
                if (*puVar16 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)puVar3) &&
                   (uVar7 = (uint)*(ushort *)(*(long *)(puVar3 + 8) + (long)(int)uVar7 * 2),
                   uVar7 < 0x12)) goto LAB_01b6f098;
              }
            }
            uVar7 = 0;
          }
        }
LAB_01b6f098:
        uVar19 = 0;
        uVar6 = *puVar13;
        if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
          puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
          if ((*puVar16 == 0) ||
             ((uVar6 = puVar16[1], uVar6 == 0 || ((ulong)(ushort)puVar16[2] == 0)))) {
LAB_01b6f11c:
            uVar19 = 0;
          }
          else {
            lVar15 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
            uVar19 = 0;
            if (lVar15 != 0) {
              uVar19 = 0;
              if ((ulong)uVar6 != 0) {
                uVar19 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
              }
              if (*puVar16 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if ((*(uint *)puVar4 <= uVar19) ||
                 (uVar1 = *(ushort *)(*(long *)(puVar4 + 8) + (long)(int)uVar19 * 2),
                 uVar19 = (uint)uVar1, 0x11 < uVar1)) goto LAB_01b6f11c;
            }
          }
        }
        _local_898 = CONCAT44(uVar19,uVar7);
        uVar7 = 0;
        uVar6 = *puVar13;
        if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
          puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
          uVar7 = 0;
          if (*puVar16 != 0) {
            uVar6 = puVar16[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar16 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
              if (lVar15 != 0) {
                uVar7 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
                }
                if (*puVar16 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *puVar17) &&
                   (uVar7 = (uint)*(ushort *)(*(long *)(puVar17 + 2) + (long)(int)uVar7 * 2),
                   uVar7 < 0x12)) goto LAB_01b6f1a8;
              }
            }
            uVar7 = 0;
          }
        }
LAB_01b6f1a8:
        uVar19 = 0;
        uVar6 = *puVar13;
        if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
          puVar17 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
          if ((*puVar17 == 0) ||
             ((uVar6 = puVar17[1], uVar6 == 0 || ((ulong)(ushort)puVar17[2] == 0)))) {
LAB_01b6f22c:
            uVar19 = 0;
          }
          else {
            lVar15 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
            uVar19 = 0;
            if (lVar15 != 0) {
              uVar19 = 0;
              if ((ulong)uVar6 != 0) {
                uVar19 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
              }
              if (*puVar17 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if ((*puVar23 <= uVar19) ||
                 (uVar1 = *(ushort *)(*(long *)(puVar23 + 2) + (long)(int)uVar19 * 2),
                 uVar19 = (uint)uVar1, 0x11 < uVar1)) goto LAB_01b6f22c;
            }
          }
        }
        _local_890 = CONCAT44(uVar19,uVar7);
        local_89c = 0;
        uVar6 = *puVar13;
        if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
          puVar23 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
          local_89c = 0;
          if (*puVar23 != 0) {
            uVar6 = puVar23[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar23 + lVar15 + (ulong)(ushort)puVar23[2] * 8;
              if (lVar15 != 0) {
                uVar7 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
                }
                if (*puVar23 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < *(uint *)PTR_DAT_04bc0638) &&
                   (local_89c = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar7 * 2),
                   local_89c < 5)) goto LAB_01b6ef2c;
              }
            }
            local_89c = 0;
          }
        }
LAB_01b6ef2c:
        uVar9 = FUN_01b6db30(&local_89c,&local_898,puVar26,uVar12,param_5);
        *(undefined4 *)((long)pppppppuVar28 + 4) = uVar9;
        puVar23 = (uint *)PTR_DAT_04bc0630;
        puVar17 = (uint *)PTR_DAT_04bc0628;
      }
    }
    uVar12 = uVar27 + 1;
    uVar27 = uVar12 & 0xffffffff;
  } while ((int)uVar12 != 0x80);
  if (1 < (int)local_888) {
    uVar7 = 0;
    uVar6 = (int)local_888 - 1;
    do {
      if ((int)uVar6 <= (int)uVar7) break;
      lVar14 = local_880[uVar7];
      uVar12 = (ulong)uVar7;
      if ((uVar6 - uVar7 & 1) == 0) {
        lVar15 = lVar14;
        uVar27 = uVar12;
      }
      else {
        uVar27 = uVar12 + 1;
        lVar15 = local_880[uVar27];
        if (*(int *)(lVar15 + 4) < *(int *)(lVar14 + 4)) {
          local_880[uVar27] = lVar14;
          local_880[uVar12] = lVar15;
          lVar15 = lVar14;
        }
      }
      uVar22 = (ulong)uVar6;
      uVar6 = uVar7;
      if (~uVar12 + uVar22 != 0) {
        plVar24 = local_880 + uVar27 + 1;
        do {
          lVar14 = *plVar24;
          if (*(int *)(lVar14 + 4) < *(int *)(lVar15 + 4)) {
            plVar24[-1] = lVar14;
            *plVar24 = lVar15;
            uVar6 = (uint)uVar27;
          }
          else {
            lVar15 = lVar14;
          }
          lVar14 = plVar24[1];
          if (*(int *)(lVar14 + 4) < *(int *)(lVar15 + 4)) {
            uVar6 = (uint)uVar27 + 1;
            *plVar24 = lVar14;
            plVar24[1] = lVar15;
          }
          else {
            lVar15 = lVar14;
          }
          uVar27 = uVar27 + 2;
          plVar24 = plVar24 + 2;
        } while (uVar22 != uVar27);
      }
      if ((int)uVar6 <= (int)uVar7) break;
      lVar14 = local_880[uVar6];
      uVar27 = (ulong)uVar6;
      uVar7 = uVar6;
      do {
        lVar15 = local_880[uVar27 - 1];
        if (*(int *)(lVar14 + 4) < *(int *)(lVar15 + 4)) {
          uVar7 = (uint)uVar27;
          local_880[uVar27 - 1] = lVar14;
          local_880[uVar27] = lVar15;
        }
        else {
          lVar14 = lVar15;
        }
        uVar27 = uVar27 - 1;
      } while ((long)uVar12 < (long)uVar27);
    } while (uVar7 != uVar6);
  }
  if ((int)local_888 == 0) {
    puVar23 = (uint *)0x0;
  }
  else {
    puVar23 = (uint *)*local_880;
  }
  bVar5 = (int)puVar23[1] < iVar8;
  if (iVar8 <= (int)puVar23[1]) {
    return bVar5;
  }
  uVar12 = (ulong)*puVar23;
  lVar14 = *param_1;
  if (*puVar23 < 0x80) {
    psVar18 = (short *)(lVar14 + uVar12 * 10 + 0x280);
    do {
      if (*psVar18 == -1) break;
      if ((uVar12 < 0x7f) && (psVar18[5] != -1)) {
        *(undefined8 *)psVar18 = *(undefined8 *)(psVar18 + 5);
        psVar18[4] = psVar18[9];
      }
      else {
        *psVar18 = -1;
        psVar18[1] = 0;
        psVar18[2] = 0;
        psVar18[3] = 0;
        psVar18[4] = 0;
      }
      uVar12 = uVar12 + 1;
      psVar18 = psVar18 + 5;
    } while (uVar12 != 0x80);
    lVar14 = *param_1;
  }
  iVar8 = 0;
  while (psVar18 = (short *)(lVar14 + 0x280 + (long)iVar8 * 10), *psVar18 != -1) {
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x80) {
      return bVar5;
    }
  }
  uVar20 = *(undefined8 *)param_2;
LAB_01b6f5e0:
  psVar18[4] = param_2[4];
  *(undefined8 *)psVar18 = uVar20;
  return bVar5;
  while( true ) {
    if ((uVar12 < 0x7f) && (psVar18[5] != -1)) {
      *(undefined8 *)psVar18 = *(undefined8 *)(psVar18 + 5);
      psVar18[4] = psVar18[9];
    }
    else {
      *psVar18 = -1;
      psVar18[1] = 0;
      psVar18[2] = 0;
      psVar18[3] = 0;
      psVar18[4] = 0;
    }
    uVar12 = uVar12 + 1;
    psVar18 = psVar18 + 5;
    if (uVar12 == 0x80) break;
LAB_01b6e908:
    if (*psVar18 == -1) break;
  }
  lVar14 = *param_1;
LAB_01b6e944:
  iVar8 = 0;
  do {
    psVar18 = (short *)(lVar14 + 0x280 + (long)iVar8 * 10);
    if (*psVar18 == -1) {
      *(undefined8 *)psVar18 = uVar20;
      psVar18[4] = (short)local_880;
      return true;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x80);
  return true;
}

