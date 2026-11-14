
/* WARNING: Type propagation algorithm not settling */

bool FUN_01b6b2d0(long *param_1,ushort *param_2,uint *param_3,uint *param_4,byte *param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  char cVar17;
  byte bVar18;
  ulong uVar19;
  uint uVar20;
  short *psVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  ulong uVar26;
  int *piVar27;
  ushort *puVar28;
  ulong uVar29;
  long *plVar30;
  bool bVar31;
  undefined8 *******pppppppuVar32;
  undefined **local_8c0;
  long local_8b8;
  ushort local_8b0;
  undefined ***local_8a8;
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
  
  puVar2 = PTR_DAT_04bc0610;
  puVar16 = PTR_DAT_04bc0608;
  if (*param_3 == 0) {
    return false;
  }
  cVar17 = *PTR_DAT_04bc0608;
  do {
    if (cVar17 == '\0') {
      cVar17 = '\x01';
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
      *puVar16 = 1;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar6 = *(uint *)(puVar2 + 4);
      if (-1 < (int)uVar6) {
        if ((short *)((ulong)uVar6 + (long)param_3) == (short *)0x0) {
          return false;
        }
        if (*(short *)((ulong)uVar6 + (long)param_3) == 0) {
          return false;
        }
        bVar18 = *param_5;
        local_8a8 = (undefined ***)0x0;
        if (7 < bVar18) {
          bVar18 = 0xff;
        }
        local_888 = CONCAT71(local_888._1_7_,bVar18);
        lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_888,1);
        if (lVar10 != 0) {
          lVar13 = lVar10 + 0x194b0;
          if (*(long *)(lVar10 + 0x194b8) == 0) {
            lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          local_8b8 = lVar13 + 0x8538;
          local_8c0 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
          local_8b0 = 1;
          if (*(long **)(lVar13 + 0x8560) == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            puVar11 = (undefined8 *)**(long **)(lVar13 + 0x8560);
            uVar5 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar11)();
            }
          }
          local_8b0 = CONCAT11(uVar5,(undefined1)local_8b0) & 0x1ff;
          local_8c0 = &PTR_FUN_04a38ac0;
          local_8a8 = &local_8c0;
        }
        if ((((param_4 == (uint *)0x0) || (2 < *param_4)) || (2 < param_4[1])) ||
           ((2 < param_4[2] || (2 < param_4[3])))) goto LAB_01b6b6a0;
        local_888 = CONCAT44(local_888._4_4_,2);
        if (((*param_4 != 2) && ((param_4[1] != 2 && (param_4[2] != 2)))) && (param_4[3] != 2))
        goto LAB_01b6b6a0;
        _local_898 = CONCAT44(uStack_894,1);
        if ((((*param_4 != 1) && (param_4[1] != 1)) && (param_4[2] != 1)) && (param_4[3] != 1))
        goto LAB_01b6b6a0;
        uVar6 = FUN_01b5c228(param_4);
        uVar7 = FUN_01b5c36c(param_4);
        bVar31 = false;
        if ((uVar6 == 0xffffffff) || (uVar7 == 0xffffffff)) goto LAB_01b6c444;
        lVar13 = *param_1;
        uVar26 = 0;
        uVar19 = 0;
        lVar10 = lVar13 + 0x280;
        goto LAB_01b6b5f4;
      }
      if (uVar6 != 0xffffffff) {
        return false;
      }
    }
    puVar25 = (uint *)(ulong)*param_3;
    if (*param_3 == 0) {
      return false;
    }
    if (param_3 == puVar25) {
      return false;
    }
    lVar10 = 0xc;
    if (*(char *)((long)param_3 + (10 - (long)puVar25)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)param_3 + (lVar10 - (long)puVar25);
    if (lVar10 == 0) {
      return false;
    }
    uVar26 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar25));
    *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
    if (uVar26 == 0) {
      return false;
    }
    piVar27 = (int *)(lVar10 + 4);
    while (piVar27[-1] != 0x175969e1) {
      piVar27 = piVar27 + 2;
      uVar26 = uVar26 - 1;
      if (uVar26 == 0) {
        return false;
      }
    }
    iVar8 = 0;
    if (*piVar27 != -1) {
      iVar8 = *piVar27;
    }
    *(int *)(puVar2 + 4) = iVar8;
    if (*param_3 == 0) {
      return false;
    }
  } while( true );
  while (iVar8 = iVar8 + 1, iVar8 != 0x80) {
LAB_01b6b680:
    psVar21 = (short *)(*param_1 + 0x280 + (long)iVar8 * 10);
    if (*psVar21 == -1) {
      bVar31 = true;
      *(undefined8 *)psVar21 = local_888;
      psVar21[4] = (short)local_880;
      goto LAB_01b6c444;
    }
  }
  goto LAB_01b6c428;
  while( true ) {
    uVar26 = uVar19 + 1;
    uVar19 = uVar26 & 0xffffffff;
    if ((int)uVar26 == 0x80) break;
LAB_01b6b5f4:
    puVar28 = (ushort *)(lVar10 + (long)(int)uVar19 * 10);
    if ((*puVar28 != 0xffff && *puVar28 == *param_2) &&
       ((3 < uVar6 ||
        (*(ushort *)(lVar10 + (long)(int)uVar19 * 10 + (ulong)uVar6 * 2 + 2) ==
         param_2[(ulong)uVar6 + 1])))) {
      local_888 = *(undefined8 *)puVar28;
      local_880 = (undefined8 *)CONCAT62(local_880._2_6_,puVar28[4]);
      if (uVar7 < 4) {
        lVar10 = (ulong)uVar7 * 2;
        uVar6 = (uint)*(ushort *)((long)&local_888 + lVar10 + 2) + (uint)param_2[(ulong)uVar7 + 1];
        if (0xfffe < uVar6) {
          uVar6 = 0xffff;
        }
        *(short *)((long)&local_888 + lVar10 + 2) = (short)uVar6;
      }
      FUN_0280ff90(lVar13,uVar26);
      iVar8 = 0;
      goto LAB_01b6b680;
    }
  }
LAB_01b6b6a0:
  iVar12 = 0;
  iVar8 = 0;
  do {
    uVar1 = *(ushort *)(*param_1 + 0x280 + (long)iVar8 * 10);
    if (uVar1 == 0xffff) break;
    iVar8 = iVar8 + 1;
    if (uVar1 == *param_2) {
      iVar12 = iVar12 + 1;
    }
  } while (iVar8 != 0x80);
  if (*param_3 == 0) {
LAB_01b6b7c0:
    uVar6 = 0;
  }
  else {
    cVar17 = *puVar16;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar16 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar2 + 4);
        if (-1 < (int)uVar6) {
          if ((ushort *)((ulong)uVar6 + (long)param_3) == (ushort *)0x0) goto LAB_01b6b7c0;
          uVar6 = (uint)*(ushort *)((ulong)uVar6 + (long)param_3);
          goto LAB_01b6b7c4;
        }
        if (uVar6 != 0xffffffff) goto LAB_01b6b7c0;
      }
      puVar25 = (uint *)(ulong)*param_3;
      uVar6 = 0;
      if ((*param_3 == 0) || (param_3 == puVar25)) goto LAB_01b6b7c4;
      lVar10 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar25)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)param_3 + (lVar10 - (long)puVar25);
      if (lVar10 == 0) goto LAB_01b6b7c0;
      uVar26 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar25));
      *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
      uVar6 = 0;
      if (uVar26 == 0) goto LAB_01b6b7c4;
      piVar27 = (int *)(lVar10 + 4);
      while (piVar27[-1] != 0x175969e1) {
        piVar27 = piVar27 + 2;
        uVar26 = uVar26 - 1;
        if (uVar26 == 0) {
          uVar6 = 0;
          goto LAB_01b6b7c4;
        }
      }
      iVar8 = 0;
      if (*piVar27 != -1) {
        iVar8 = *piVar27;
      }
      *(int *)(puVar2 + 4) = iVar8;
    } while (*param_3 != 0);
    uVar6 = 0;
  }
LAB_01b6b7c4:
  if ((int)uVar6 <= iVar12) {
    if (*param_3 == 0) {
LAB_01b6b974:
      uVar6 = 0;
    }
    else {
      cVar17 = *puVar16;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar16 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar2 + 0x24);
          if (-1 < (int)uVar6) {
            if (((byte *)((ulong)uVar6 + (long)param_3) == (byte *)0x0) ||
               (bVar18 = *(byte *)((ulong)uVar6 + (long)param_3), uVar6 = (uint)bVar18, 4 < bVar18))
            goto LAB_01b6b974;
            goto LAB_01b6b978;
          }
          if (uVar6 != 0xffffffff) goto LAB_01b6b974;
        }
        puVar25 = (uint *)(ulong)*param_3;
        uVar6 = 0;
        if ((*param_3 == 0) || (param_3 == puVar25)) goto LAB_01b6b978;
        lVar10 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar25)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)param_3 + (lVar10 - (long)puVar25);
        if (lVar10 == 0) goto LAB_01b6b974;
        uVar26 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar25));
        *(undefined4 *)(puVar2 + 0x24) = 0xfffffffe;
        uVar6 = 0;
        if (uVar26 == 0) goto LAB_01b6b978;
        piVar27 = (int *)(lVar10 + 4);
        while (piVar27[-1] != 0x638d595d) {
          piVar27 = piVar27 + 2;
          uVar26 = uVar26 - 1;
          if (uVar26 == 0) {
            uVar6 = 0;
            goto LAB_01b6b978;
          }
        }
        iVar8 = 0;
        if (*piVar27 != -1) {
          iVar8 = *piVar27;
        }
        *(int *)(puVar2 + 0x24) = iVar8;
      } while (*param_3 != 0);
      uVar6 = 0;
    }
LAB_01b6b978:
    local_888 = CONCAT44(local_888._4_4_,uVar6);
    iVar8 = FUN_01b6db30(&local_888,param_4,param_2,0xffffffff,&local_8c0);
    puVar3 = PTR_DAT_04bc0620;
    puVar2 = PTR_DAT_04bc0618;
    puVar16 = PTR_DAT_04bb49a0;
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
    local_818 = &local_810;
    local_810 = &local_808;
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
    local_6b0 = &local_6a8;
    local_6a0 = &local_698;
    local_690 = &local_688;
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
    local_6b8 = &local_6b0;
    local_568 = &local_560;
    local_560 = &local_558;
    local_6a8 = &local_6a0;
    local_558 = &local_550;
    local_550 = &local_548;
    local_698 = &local_690;
    local_548 = &local_540;
    local_540 = &local_538;
    local_688 = &local_680;
    local_538 = &local_530;
    local_530 = &local_528;
    local_868 = &local_860;
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
    lVar10 = *param_1;
    uVar26 = 0;
    uVar19 = 0;
    puVar25 = (uint *)PTR_DAT_04bc0638;
    puVar24 = (uint *)PTR_DAT_04bc0630;
    puVar23 = (uint *)PTR_DAT_04bc0628;
    local_870 = local_878;
    do {
      pppppppuVar32 = local_878;
      puVar28 = (ushort *)(lVar10 + 0x280 + (long)(int)uVar19 * 10);
      uVar1 = *puVar28;
      if (uVar1 == 0xffff) break;
      if (uVar1 == *param_2) {
        lVar13 = *(long *)puVar16;
        if (*(long *)(lVar13 + 0x230) == 0) {
LAB_01b6be40:
          puVar14 = (uint *)0x0;
        }
        else {
          if ((int)(uint)uVar1 < *(int *)(lVar13 + 0x220)) goto LAB_01b6be40;
          uVar6 = (uint)uVar1 - *(int *)(lVar13 + 0x220);
          if ((int)*(uint *)(lVar13 + 0x228) <= (int)uVar6) goto LAB_01b6be40;
          if (*(uint *)(lVar13 + 0x228) <= uVar6) {
            uVar6 = 0;
          }
          puVar14 = *(uint **)(*(long *)(lVar13 + 0x230) + (long)(int)uVar6 * 8);
        }
        if ((int)local_888 < local_888._4_4_) {
          if (local_878 != (undefined8 *******)0x0) {
            local_878 = (undefined8 *******)*local_878;
          }
          *pppppppuVar32 = (undefined8 ******)0x0;
          if ((int)local_888 < local_888._4_4_) {
            local_880[(int)local_888] = pppppppuVar32;
            local_888 = CONCAT44(local_888._4_4_,(int)local_888 + 1);
          }
        }
        else {
          pppppppuVar32 = (undefined8 *******)0x0;
        }
        *(int *)pppppppuVar32 = (int)uVar26;
        if (puVar14 == (uint *)0x0) {
          *(undefined4 *)((long)pppppppuVar32 + 4) = 0xffffffff;
        }
        else {
          uVar7 = 0;
          uVar6 = *puVar14;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar22 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            uVar7 = 0;
            if (*puVar22 != 0) {
              uVar6 = puVar22[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar22 + lVar13 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar13 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar6);
                  }
                  if (*puVar22 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < *(uint *)puVar2) &&
                     (uVar7 = (uint)*(ushort *)(*(long *)(puVar2 + 8) + (long)(int)uVar7 * 2),
                     uVar7 < 0x12)) goto LAB_01b6bf20;
                }
              }
              uVar7 = 0;
            }
          }
LAB_01b6bf20:
          uVar20 = 0;
          uVar6 = *puVar14;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar22 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            if ((*puVar22 == 0) ||
               ((uVar6 = puVar22[1], uVar6 == 0 || ((ulong)(ushort)puVar22[2] == 0)))) {
LAB_01b6bfa4:
              uVar20 = 0;
            }
            else {
              lVar13 = 0xc;
              if (*(char *)((long)puVar22 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar22 + lVar13 + (ulong)(ushort)puVar22[2] * 8;
              uVar20 = 0;
              if (lVar13 != 0) {
                uVar20 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar20 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar6);
                }
                if (*puVar22 <= uVar20) {
                  uVar20 = 0xffffffff;
                }
                if ((*(uint *)puVar3 <= uVar20) ||
                   (uVar1 = *(ushort *)(*(long *)(puVar3 + 8) + (long)(int)uVar20 * 2),
                   uVar20 = (uint)uVar1, 0x11 < uVar1)) goto LAB_01b6bfa4;
              }
            }
          }
          _local_898 = CONCAT44(uVar20,uVar7);
          uVar7 = 0;
          uVar6 = *puVar14;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar22 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            uVar7 = 0;
            if (*puVar22 != 0) {
              uVar6 = puVar22[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar22 + lVar13 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar13 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar6);
                  }
                  if (*puVar22 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < *puVar23) &&
                     (uVar7 = (uint)*(ushort *)(*(long *)(puVar23 + 2) + (long)(int)uVar7 * 2),
                     uVar7 < 0x12)) goto LAB_01b6c030;
                }
              }
              uVar7 = 0;
            }
          }
LAB_01b6c030:
          uVar20 = 0;
          uVar6 = *puVar14;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar23 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            if ((*puVar23 == 0) ||
               ((uVar6 = puVar23[1], uVar6 == 0 || ((ulong)(ushort)puVar23[2] == 0)))) {
LAB_01b6c0b4:
              uVar20 = 0;
            }
            else {
              lVar13 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar23 + lVar13 + (ulong)(ushort)puVar23[2] * 8;
              uVar20 = 0;
              if (lVar13 != 0) {
                uVar20 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar20 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar6);
                }
                if (*puVar23 <= uVar20) {
                  uVar20 = 0xffffffff;
                }
                if ((*puVar24 <= uVar20) ||
                   (uVar1 = *(ushort *)(*(long *)(puVar24 + 2) + (long)(int)uVar20 * 2),
                   uVar20 = (uint)uVar1, 0x11 < uVar1)) goto LAB_01b6c0b4;
              }
            }
          }
          _local_890 = CONCAT44(uVar20,uVar7);
          local_89c = 0;
          uVar6 = *puVar14;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar24 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            local_89c = 0;
            if (*puVar24 != 0) {
              uVar6 = puVar24[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar24 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar24 + lVar13 + (ulong)(ushort)puVar24[2] * 8;
                if (lVar13 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar6);
                  }
                  if (*puVar24 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < *puVar25) &&
                     (local_89c = (uint)*(ushort *)(*(long *)(puVar25 + 2) + (long)(int)uVar7 * 2),
                     local_89c < 5)) goto LAB_01b6bda4;
                }
              }
              local_89c = 0;
            }
          }
LAB_01b6bda4:
          uVar9 = FUN_01b6db30(&local_89c,&local_898,puVar28,uVar26,&local_8c0);
          *(undefined4 *)((long)pppppppuVar32 + 4) = uVar9;
          puVar25 = (uint *)PTR_DAT_04bc0638;
          puVar24 = (uint *)PTR_DAT_04bc0630;
          puVar23 = (uint *)PTR_DAT_04bc0628;
        }
      }
      uVar26 = uVar19 + 1;
      uVar19 = uVar26 & 0xffffffff;
    } while ((int)uVar26 != 0x80);
    if (1 < (int)local_888) {
      uVar7 = 0;
      uVar6 = (int)local_888 - 1;
      do {
        if ((int)uVar6 <= (int)uVar7) break;
        lVar10 = local_880[uVar7];
        uVar26 = (ulong)uVar7;
        if ((uVar6 - uVar7 & 1) == 0) {
          lVar13 = lVar10;
          uVar19 = uVar26;
        }
        else {
          uVar19 = uVar26 + 1;
          lVar13 = local_880[uVar19];
          if (*(int *)(lVar13 + 4) < *(int *)(lVar10 + 4)) {
            local_880[uVar19] = lVar10;
            local_880[uVar26] = lVar13;
            lVar13 = lVar10;
          }
        }
        uVar29 = (ulong)uVar6;
        uVar6 = uVar7;
        if (~uVar26 + uVar29 != 0) {
          plVar30 = local_880 + uVar19 + 1;
          do {
            lVar10 = *plVar30;
            if (*(int *)(lVar10 + 4) < *(int *)(lVar13 + 4)) {
              plVar30[-1] = lVar10;
              *plVar30 = lVar13;
              uVar6 = (uint)uVar19;
            }
            else {
              lVar13 = lVar10;
            }
            lVar10 = plVar30[1];
            if (*(int *)(lVar10 + 4) < *(int *)(lVar13 + 4)) {
              uVar6 = (uint)uVar19 + 1;
              *plVar30 = lVar10;
              plVar30[1] = lVar13;
            }
            else {
              lVar13 = lVar10;
            }
            uVar19 = uVar19 + 2;
            plVar30 = plVar30 + 2;
          } while (uVar29 != uVar19);
        }
        if ((int)uVar6 <= (int)uVar7) break;
        lVar10 = local_880[uVar6];
        uVar19 = (ulong)uVar6;
        uVar7 = uVar6;
        do {
          lVar13 = local_880[uVar19 - 1];
          if (*(int *)(lVar10 + 4) < *(int *)(lVar13 + 4)) {
            uVar7 = (uint)uVar19;
            local_880[uVar19 - 1] = lVar10;
            local_880[uVar19] = lVar13;
          }
          else {
            lVar10 = lVar13;
          }
          uVar19 = uVar19 - 1;
        } while ((long)uVar26 < (long)uVar19);
      } while (uVar7 != uVar6);
    }
    if ((int)local_888 == 0) {
      puVar25 = (uint *)0x0;
    }
    else {
      puVar25 = (uint *)*local_880;
    }
    bVar31 = (int)puVar25[1] < iVar8;
    if ((int)puVar25[1] < iVar8) {
      uVar26 = (ulong)*puVar25;
      lVar10 = *param_1;
      if (*puVar25 < 0x80) {
        psVar21 = (short *)(lVar10 + uVar26 * 10 + 0x280);
        do {
          if (*psVar21 == -1) break;
          if ((uVar26 < 0x7f) && (psVar21[5] != -1)) {
            *(undefined8 *)psVar21 = *(undefined8 *)(psVar21 + 5);
            psVar21[4] = psVar21[9];
          }
          else {
            *psVar21 = -1;
            psVar21[1] = 0;
            psVar21[2] = 0;
            psVar21[3] = 0;
            psVar21[4] = 0;
          }
          uVar26 = uVar26 + 1;
          psVar21 = psVar21 + 5;
        } while (uVar26 != 0x80);
        lVar10 = *param_1;
      }
      iVar8 = 0;
      do {
        psVar21 = (short *)(lVar10 + 0x280 + (long)iVar8 * 10);
        if (*psVar21 == -1) {
          uVar15 = *(undefined8 *)param_2;
          goto LAB_01b6c438;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x80);
    }
    goto LAB_01b6c444;
  }
  lVar10 = *param_1;
  if (*(short *)(lVar10 + 0x776) != -1) {
    if (*param_3 != 0) {
      cVar17 = *puVar16;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar16 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar2 + 0x20);
          if (-1 < (int)uVar6) {
            if ((undefined1 *)((ulong)uVar6 + (long)param_3) != (undefined1 *)0x0) {
              uVar5 = *(undefined1 *)((ulong)uVar6 + (long)param_3);
              goto LAB_01b6c374;
            }
            break;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar25 = (uint *)(ulong)*param_3;
        uVar5 = 0;
        if ((*param_3 == 0) || (param_3 == puVar25)) goto LAB_01b6c374;
        lVar10 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar25)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)param_3 + (lVar10 - (long)puVar25);
        if (lVar10 == 0) break;
        uVar26 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar25));
        *(undefined4 *)(puVar2 + 0x20) = 0xfffffffe;
        if (uVar26 == 0) break;
        piVar27 = (int *)(lVar10 + 4);
        while (piVar27[-1] != 0x572a8fe9) {
          piVar27 = piVar27 + 2;
          uVar26 = uVar26 - 1;
          if (uVar26 == 0) goto LAB_01b6c370;
        }
        iVar8 = 0;
        if (*piVar27 != -1) {
          iVar8 = *piVar27;
        }
        *(int *)(puVar2 + 0x20) = iVar8;
        if (*param_3 == 0) break;
      } while( true );
    }
LAB_01b6c370:
    uVar5 = 0;
LAB_01b6c374:
    uVar6 = FUN_01b6d0c0(param_1,uVar5,&local_8c0);
    if (uVar6 == 0xffffffff) {
      bVar31 = false;
      goto LAB_01b6c444;
    }
    lVar10 = *param_1;
    if (uVar6 < 0x80) {
      uVar26 = (ulong)uVar6;
      psVar21 = (short *)(lVar10 + (ulong)uVar6 * 10 + 0x280);
      do {
        if (*psVar21 == -1) break;
        if ((uVar26 < 0x7f) && (psVar21[5] != -1)) {
          *(undefined8 *)psVar21 = *(undefined8 *)(psVar21 + 5);
          psVar21[4] = psVar21[9];
        }
        else {
          *psVar21 = -1;
          psVar21[1] = 0;
          psVar21[2] = 0;
          psVar21[3] = 0;
          psVar21[4] = 0;
        }
        uVar26 = uVar26 + 1;
        psVar21 = psVar21 + 5;
      } while (uVar26 != 0x80);
      lVar10 = *param_1;
    }
  }
  iVar8 = 0;
  do {
    psVar21 = (short *)(lVar10 + 0x280 + (long)iVar8 * 10);
    if (*psVar21 == -1) {
      uVar15 = *(undefined8 *)param_2;
      bVar31 = true;
LAB_01b6c438:
      psVar21[4] = param_2[4];
      *(undefined8 *)psVar21 = uVar15;
      goto LAB_01b6c444;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x80);
LAB_01b6c428:
  bVar31 = true;
LAB_01b6c444:
  pppuVar4 = local_8a8;
  if ((local_8a8 != (undefined ***)0x0) &&
     (*local_8a8 = (undefined **)(PTR_DAT_04bc35d0 + 0x10), *(char *)((long)pppuVar4 + 0x11) != '\0'
     )) {
    puVar16 = pppuVar4[1][5];
    if (*(char *)(pppuVar4 + 2) == '\0') {
      if (puVar16 == (undefined *)0x0) {
        return bVar31;
      }
      puVar11 = *(undefined8 **)(puVar16 + 0x18);
    }
    else {
      if (puVar16 == (undefined *)0x0) {
        return bVar31;
      }
      puVar11 = *(undefined8 **)(puVar16 + 8);
    }
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)();
    }
  }
  return bVar31;
}

