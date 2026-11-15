
void FUN_01e61d30(long param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  long *plVar6;
  ushort uVar7;
  short sVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  int *piVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  long *plVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined *puVar30;
  long *plVar31;
  char cVar32;
  uint *puVar33;
  long lVar34;
  int iVar35;
  undefined *local_b60;
  undefined8 local_b58;
  undefined4 local_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 local_b44;
  undefined *local_b40;
  undefined *puStack_b38;
  undefined8 local_b30;
  undefined *puStack_b28;
  undefined8 local_b20;
  undefined4 local_b18;
  undefined4 local_b14;
  undefined4 uStack_b10;
  undefined1 local_b0c;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined1 local_af8;
  undefined4 local_af4;
  undefined *local_af0;
  char *local_ae8;
  undefined8 ******local_ae0;
  undefined8 ******ppppppuStack_ad8;
  undefined8 ******local_ad0;
  undefined *puStack_ac8;
  undefined4 local_ac0;
  undefined4 uStack_abc;
  undefined *local_ab8;
  undefined4 local_ab0;
  undefined4 uStack_aac;
  undefined5 local_aa8;
  undefined3 uStack_aa3;
  undefined5 uStack_aa0;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 ******local_a60 [11];
  undefined4 local_a04;
  undefined8 ******local_9f0 [14];
  undefined8 ******local_980 [14];
  undefined8 ******local_910 [14];
  undefined8 ******local_8a0 [14];
  undefined8 ******local_830 [14];
  undefined8 ******local_7c0 [14];
  undefined8 ******local_750 [14];
  undefined8 ******local_6e0 [14];
  undefined8 ******local_670 [14];
  undefined8 ******local_600 [14];
  undefined8 ******local_590 [14];
  undefined8 ******local_520 [14];
  undefined8 ******local_4b0 [14];
  undefined8 *****local_440 [14];
  undefined8 ****local_3d0 [14];
  undefined8 ***local_360 [14];
  undefined8 **local_2f0 [14];
  undefined8 *local_280 [14];
  undefined8 local_210 [14];
  char local_1a0 [171];
  undefined1 uStack_f5;
  byte local_f4 [4];
  undefined *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  int local_7c [3];
  
  uVar14 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if ((uVar14 & 1) == 0) {
    return;
  }
  piVar17 = (int *)(param_1 + 0x10a30);
  uVar7 = *(ushort *)(param_1 + 0x12570);
  *(ushort *)(param_1 + 0x12570) = uVar7 & 0xdbbf;
  if ((((uVar7 >> 0xc & 1) != 0) &&
      (*(ushort *)(param_1 + 0x12570) = uVar7 & 0xcbbf, (uVar7 & 1) != 0)) &&
     (*(int *)(param_1 + 0x125ec) != 4)) {
    FUN_02192850(param_1 + 0xef00,0,0);
  }
  piVar1 = (int *)(param_1 + 0x126f0);
  lVar34 = param_1 + 0xaf38;
  sVar8 = *(short *)PTR_DAT_04bb6298;
  piVar4 = (int *)(param_1 + 0x77b0);
  if (sVar8 == -1) {
LAB_01e61f54:
    bVar11 = false;
  }
  else {
    local_af0 = (undefined *)CONCAT44(local_af0._4_4_,1);
    puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar16 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar16 >> 1 & 1) == 0) goto LAB_01e61f54;
    if (*(long *)(param_1 + 8) == 0) {
      bVar11 = *(int *)PTR_DAT_04bc15a0 == 1;
    }
    else {
      uVar24 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      if ((uVar24 < 10) && ((&DAT_053fee41)[(ulong)uVar24 * 0xba0] != '\0')) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          if ((int)(&DAT_053fe898)[(ulong)uVar24 * 0x2e8] < 1) goto LAB_01e61f00;
          uVar14 = (ulong)uVar24;
          iVar13 = (&DAT_053fe898)[(ulong)uVar24 * 0x2e8] + (&DAT_053fe894)[uVar14 * 0x2e8] + -1;
          iVar12 = 0;
          if ((int)(&DAT_053fe890)[uVar14 * 0x2e8] <= iVar13) {
            iVar12 = (&DAT_053fe890)[uVar14 * 0x2e8];
          }
          puVar16 = (uint *)((&DAT_053fe888)[uVar14 * 0x174] + (long)(iVar13 - iVar12) * 0x14 + 8);
          goto LAB_01e61f08;
        }
        uVar28 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar24 * 0x28 + 0xe23) & 3;
      }
      else {
LAB_01e61f00:
        puVar16 = (uint *)PTR_DAT_04bc15a0;
LAB_01e61f08:
        uVar28 = *puVar16;
      }
      bVar11 = uVar28 == 1;
      if ((!bVar11) && (uVar24 < 10)) {
        if (((&DAT_053fee41)[(ulong)uVar24 * 0xba0] == '\0') ||
           (((&DAT_053fede8)[(ulong)uVar24 * 0x174] == 0 ||
            (*(int *)((&DAT_053fede8)[(ulong)uVar24 * 0x174] + 4) != 1)))) goto LAB_01e61f54;
        bVar11 = true;
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0x125ec);
  if (0 < iVar12) {
    if (*(int *)(param_1 + 0x125ec) < 4) {
      if ((*(int *)(param_1 + 0xafc4) != 3) && ((*(ushort *)(param_1 + 0x12570) & 1) != 0))
      goto LAB_01e62708;
      piVar5 = (int *)(param_1 + 0xef10);
      FUN_01e63a90(param_1,1,0,iVar12 == 2);
      uVar24 = (uint)*(ushort *)(param_1 + 0x12570);
      if (bVar11) {
        uVar24 = *(ushort *)(param_1 + 0x12570) & 0xfffffffe | 0x400;
        *(short *)(param_1 + 0x12570) = (short)uVar24;
      }
      iVar12 = *(int *)(param_1 + 0xafc4);
      if (uVar24 >> 0xf == 0) {
        if (iVar12 - 8U < 2) goto LAB_01e62034;
        if (iVar12 == 3) goto LAB_01e62020;
        if (*(byte *)(param_1 + 0x132d8) < 8) {
          local_af0 = PTR_DAT_04bb2020 + 0x10;
          local_ae8 = "StoodUpFlag";
          iVar12 = FUN_0265ced0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),param_1 + 0x132d8,
                                &local_af0);
          if (iVar12 == 0) {
            iVar12 = *(int *)(param_1 + 0xafc4);
            goto LAB_01e62018;
          }
        }
      }
      else {
LAB_01e62018:
        if (iVar12 == 3) {
LAB_01e62020:
          uVar20 = *(undefined4 *)PTR_DAT_04bb3238;
          *(undefined4 *)(param_1 + 0x7d74) = uVar20;
          *(undefined4 *)(param_1 + 0x7d6c) = uVar20;
        }
LAB_01e62034:
        if (0 < *piVar5) {
          lVar21 = 0;
          puVar30 = PTR_DAT_04bbc1a0 + 0x10;
          do {
            puVar29 = *(undefined8 **)(*(long *)(param_1 + 0xef18) + lVar21 * 8);
            lVar21 = lVar21 + 1;
            puVar29[0xf] = puVar30;
            *puVar29 = *(undefined8 *)(param_1 + 0xef20);
            *(undefined8 **)(param_1 + 0xef20) = puVar29;
          } while (lVar21 < *piVar5);
        }
        *piVar5 = 0;
        if (0 < *piVar17) {
          lVar21 = 0;
          puVar30 = PTR_DAT_04bbc1a0 + 0x10;
          do {
            puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x10a38) + lVar21 * 8);
            lVar21 = lVar21 + 1;
            puVar29[0xf] = puVar30;
            *puVar29 = *(undefined8 *)(param_1 + 0x10a40);
            *(undefined8 **)(param_1 + 0x10a40) = puVar29;
          } while (lVar21 < *piVar17);
        }
        *piVar17 = 0;
        *(undefined8 *)(param_1 + 0x12550) = 0;
        *(undefined8 *)(param_1 + 0x12558) = 0;
        *(undefined8 *)(param_1 + 0x12560) = 0;
      }
      uVar7 = *(ushort *)(param_1 + 0x12570);
      if (*(byte *)(param_1 + 0x7d69) < 8) {
        pbVar2 = (byte *)(param_1 + 0x7d69);
        local_f0._0_4_ = 9;
        if ((*(int *)(param_1 + 0xb01c) == 1) && (*(int *)(param_1 + 0xafc4) == 9)) {
LAB_01e621f4:
          if (*(int *)(param_1 + 0xafc4) == 10) {
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,6);
            puVar30 = PTR_DAT_04bb2020;
LAB_01e622d0:
            if (*(int *)(param_1 + 0xafc4) == (int)local_f0) {
              local_ae8 = "SitBenchFlag";
              local_af0 = puVar30 + 0x10;
              iVar12 = FUN_0265ced0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),pbVar2,
                                    &local_af0);
              if (iVar12 != 1) goto LAB_01e623e4;
              local_ae8 = "SitBenchFlag";
              local_af0 = puVar30 + 0x10;
              FUN_0265d4e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),pbVar2,&local_af0,0,1);
              local_ac0 = *(undefined4 *)(param_1 + 0xafe8);
              local_af0 = PTR_DAT_04bc1558 + 0x10;
              uStack_abc = *(undefined4 *)(param_1 + 0xafec);
              local_ad0 = (undefined8 ******)(PTR_DAT_04bbc1a0 + 0x10);
              local_ae8 = *(char **)(param_1 + 0xafc0);
              local_ae0 = *(undefined8 *******)(param_1 + 45000);
              ppppppuStack_ad8 = *(undefined8 *******)(param_1 + 0xafd0);
              uStack_aac = *(undefined4 *)(param_1 + 0xaffc);
              puStack_ac8 = PTR_DAT_04bb2010 + 0x10;
              local_ab0 = *(undefined4 *)(param_1 + 0xaff8);
              local_aa8 = (undefined5)*(undefined8 *)(param_1 + 0xb000);
              uStack_a94 = *(undefined4 *)(param_1 + 0xb014);
              uStack_aa3 = (undefined3)*(undefined8 *)(param_1 + 0xb005);
              uStack_aa0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xb005) >> 0x18);
              local_a98 = *(undefined4 *)(param_1 + 0xb010);
              local_a90 = *(undefined8 *)(param_1 + 0xb018);
              local_a88 = *(undefined8 *)(param_1 + 0xb020);
              local_ab8 = puStack_ac8;
              FUN_0209bf8c(lVar34,&local_af0);
              FUN_01e67ee0(param_1,&local_af0,0,0,0);
            }
            else {
LAB_01e623e4:
              if (*(int *)(param_1 + 0x12718) == 1) goto LAB_01e623f8;
              FUN_01e26938(&local_af0);
              local_f0 = (undefined *)CONCAT44(local_f0._4_4_,2);
              FUN_01e26d20(&local_af0,&local_f0);
              local_a98 = *(undefined4 *)(param_1 + 0x1271c);
              uStack_a94 = *(undefined4 *)(param_1 + 0x12720);
              FUN_0209bf8c(lVar34,&local_af0);
              FUN_01e67ee0(param_1,&local_af0,0,0,0);
              iVar12 = *(int *)(param_1 + 0x12718);
              *(undefined4 *)(param_1 + 0x12718) = 1;
              puVar30 = PTR_DAT_04bb37e0;
              *(undefined2 *)(param_1 + 0x1271c) = *(undefined2 *)PTR_DAT_04bb37e0;
              *(undefined *)(param_1 + 0x1271e) = puVar30[2];
              *(undefined *)(param_1 + 0x1271f) = puVar30[3];
              *(undefined4 *)(param_1 + 0x12720) = *(undefined4 *)(puVar30 + 4);
              if (iVar12 != 1) goto LAB_01e624b0;
            }
            goto LAB_01e623fc;
          }
LAB_01e62210:
          puVar30 = PTR_DAT_04bb2020;
          local_f0._0_4_ = 10;
          puVar3 = PTR_DAT_04bb2020 + 0x10;
          local_ae8 = "OrderQuest";
          local_af0 = puVar3;
          iVar12 = FUN_0265ced0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),pbVar2,&local_af0);
          if (iVar12 != 1) {
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,6);
            if (*(int *)(param_1 + 0xb01c) == 1) goto LAB_01e622d0;
            goto LAB_01e623e4;
          }
          local_ae8 = "OrderQuest";
          local_af0 = puVar3;
          FUN_0265d4e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),pbVar2,&local_af0,0,1);
          FUN_01e26938(&local_af0);
          uVar20 = 10;
        }
        else {
          puVar30 = PTR_DAT_04bb2020 + 0x10;
          local_ae8 = "StandingUpFlag";
          local_af0 = puVar30;
          iVar12 = FUN_0265ced0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),pbVar2,&local_af0);
          if (iVar12 != 1) {
            if (*(int *)(param_1 + 0xb01c) == 1) goto LAB_01e621f4;
            goto LAB_01e62210;
          }
          local_ae8 = "StandingUpFlag";
          local_af0 = puVar30;
          FUN_0265d4e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),pbVar2,&local_af0,0,1);
          bVar23 = *pbVar2;
          if (7 < bVar23) {
            bVar23 = 0xff;
          }
          *(byte *)(param_1 + 0x132d8) = bVar23;
          FUN_01e26938(&local_af0);
          uVar20 = 9;
        }
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar20);
        FUN_01e26d20(&local_af0,&local_f0);
        FUN_0209bf8c(lVar34,&local_af0);
        FUN_01e67ee0(param_1,&local_af0,0,0,0);
LAB_01e623fc:
        if ((*(ushort *)(param_1 + 0x12570) >> 4 & 1) != 0) {
          *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) & 0xffef;
          local_af0 = (undefined *)CONCAT44(local_af0._4_4_,1);
          FUN_01e6a930(param_1,&local_af0,0xffffffff);
        }
      }
      else {
LAB_01e623f8:
        if ((uVar7 & 1) == 0) goto LAB_01e623fc;
LAB_01e624b0:
        uVar24 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        if ((uVar24 < 10) && ((&DAT_053fee41)[(ulong)uVar24 * 0xba0] != '\0')) {
          iVar12 = (&DAT_053fe830)[(ulong)uVar24 * 0x2e8];
          local_af0 = (undefined *)CONCAT44(local_af0._4_4_,iVar12);
          if (iVar12 == 0) goto LAB_01e62520;
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar12);
          if (iVar12 == *(int *)(param_1 + 0xb024)) goto LAB_01e62520;
          FUN_01e26938(&local_af0);
          uVar20 = (&DAT_053fe830)[(ulong)uVar24 * 0x2e8];
LAB_01e626a8:
          local_a88 = CONCAT44(uVar20,(undefined4)local_a88);
          FUN_0209bf8c(lVar34,&local_af0);
          ppuVar18 = &local_af0;
LAB_01e626e8:
          uVar27 = 1;
          uVar19 = 0;
LAB_01e626f4:
          FUN_01e67ee0(param_1,ppuVar18,uVar27,0,uVar19);
        }
        else {
LAB_01e62520:
          if (*(int *)(param_1 + 0x125ec) == 3) {
            FUN_01e61c78(&local_af0,param_1);
            FUN_0209bf8c(lVar34,&local_af0);
            uVar27 = 0;
LAB_01e62688:
            ppuVar18 = (undefined **)(param_1 + 0xb028);
            uVar19 = 1;
            goto LAB_01e626f4;
          }
          if (*(int *)(param_1 + 0xb024) == 0) {
            if (*(int *)(param_1 + 0xb08c) != 3) {
              iVar12 = *(int *)(param_1 + 0xb030);
              iVar13 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
              local_af0 = (undefined *)CONCAT44(local_af0._4_4_,iVar13);
              if (iVar12 == iVar13) goto LAB_01e62560;
            }
            FUN_01e61c78(&local_af0,param_1);
            FUN_0209bf8c(lVar34,&local_af0);
            uVar27 = 1;
            goto LAB_01e62688;
          }
LAB_01e62560:
          if (*piVar5 < 1) {
            if (*(int *)(param_1 + 0xb024) != 0) {
              FUN_01e26938(&local_af0);
              uVar20 = *(undefined4 *)(param_1 + 0xb024);
              goto LAB_01e626a8;
            }
            ppuVar18 = (undefined **)(param_1 + 0xb028);
            FUN_0209bf8c(lVar34,ppuVar18);
            goto LAB_01e626e8;
          }
          uVar27 = 0;
          uVar24 = (uint)*(ushort *)(param_1 + 0x12570);
          if (((*(ushort *)(param_1 + 0x12570) >> 2 & 1) == 0) &&
             (*(char *)(param_1 + 0xb360) == '\0')) {
            FUN_01e63f1c(&local_af0);
            local_a04 = 0x1e;
            local_a88 = CONCAT62(local_a88._2_6_,0x101);
            uVar27 = 1;
            local_af0 = (undefined *)CONCAT44(local_af0._4_4_,1);
            local_a90 = CONCAT44(2,(undefined4)local_a90);
            puVar9 = (undefined4 *)(param_1 + 0x1255c);
            if (*piVar17 < 1) {
              piVar17 = piVar5;
              puVar9 = (undefined4 *)(param_1 + 0x12558);
            }
            FUN_02192440(piVar17,*puVar9,&local_af0);
            uVar24 = (uint)*(ushort *)(param_1 + 0x12570);
          }
          if ((uVar24 >> 4 & 1) != 0) {
            *(ushort *)(param_1 + 0x12570) = (ushort)uVar24 & 0xffef;
            local_af0 = (undefined *)CONCAT44(local_af0._4_4_,2);
            FUN_01e6a930(param_1,&local_af0,uVar27);
          }
          FUN_02192850(param_1 + 0xef00,1,0);
        }
      }
      *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) & 0x7ffb;
    }
    else {
      if (iVar12 != 4) goto LAB_01e6270c;
      if ((*(ushort *)(param_1 + 0x12570) & 1) != 0) {
        FUN_01e63a90(param_1,0,0,0);
      }
    }
LAB_01e62708:
    *(undefined4 *)(param_1 + 0x125ec) = 0;
  }
LAB_01e6270c:
  if (((*(ushort *)(param_1 + 0x12570) & 1) == 0) ||
     (bVar11 || (*(byte *)(param_1 + 0xad5a) & 2) != 0)) {
    *(undefined4 *)(param_1 + 0x1274c) = 0;
    goto LAB_01e62e24;
  }
  *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) & 0xf7ff;
  if ((((*(int *)(param_1 + 0x1274c) != 0) &&
       (uVar14 = FUN_0212ef10(param_1 + 0xaa50), (uVar14 & 1) == 0)) &&
      (*(int *)(param_1 + 0xafc4) != 4)) &&
     ((*(int *)(param_1 + 0x77f4) != 0x4f && (*piVar4 != 0x4f)))) goto LAB_01e628f4;
  local_af0 = (undefined *)CONCAT44(local_af0._4_4_,6);
  iVar12 = *(int *)(param_1 + 0xb01c);
  if (((iVar12 == 1) &&
      ((*(int *)(param_1 + 0xafc4) == 6 &&
       (*(int *)(param_1 + 0xb0a4) <= *(int *)(param_1 + 0xb09c))))) &&
     (*(int *)(param_1 + 0x126f8) == 0)) {
    uVar14 = FUN_01e7b914(param_1);
    if ((uVar14 & 1) != 0) {
      *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) | 0x2000;
      goto LAB_01e628f4;
    }
    iVar12 = *(int *)(param_1 + 0xb01c);
  }
  if (iVar12 == 1) {
    iVar12 = *(int *)(param_1 + 0xb0a8);
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        if ((*(int *)(param_1 + 0xb0b0) == 2) ||
           ((*(char *)(param_1 + 0xb0ac) == '\0' && (0x707 < *(int *)(param_1 + 0xb0a0)))))
        goto LAB_01e628f4;
      }
      else if (iVar12 == 0) {
        if ((*(int *)(param_1 + 0xb0a4) <= *(int *)(param_1 + 0xb09c)) ||
           (*(int *)(param_1 + 0xb0b0) == 2)) goto LAB_01e628f4;
        if (*(char *)(param_1 + 0xb0ac) == '\0') {
          iVar12 = *(int *)(param_1 + 0xb0a4) * 2;
          if (iVar12 < 0x709) {
            iVar12 = 0x708;
          }
          if (iVar12 <= *(int *)(param_1 + 0xb0a0)) goto LAB_01e628f4;
        }
      }
      goto LAB_01e62888;
    }
    if (*(int *)(param_1 + 0xb0b0) != 2) {
      if (*(char *)(param_1 + 0xb0ac) == '\0') {
        iVar12 = *(int *)(param_1 + 0xb0a4) * 2;
        if (iVar12 < 0x709) {
          iVar12 = 0x708;
        }
        if (iVar12 <= *(int *)(param_1 + 0xb0a0)) goto LAB_01e628f4;
      }
      goto LAB_01e62888;
    }
LAB_01e628f4:
    local_ad0 = local_a60;
    local_ae0 = &local_ad0;
    local_a60[0] = local_9f0;
    local_9f0[0] = local_980;
    local_8a0[0] = local_830;
    local_af0 = (undefined *)0x0;
    local_ae8 = (char *)0x0;
    *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) | 0x40;
    puVar30 = PTR_DAT_04bbc1a0;
    local_980[0] = local_910;
    local_210[0] = 0;
    local_910[0] = local_8a0;
    local_830[0] = local_7c0;
    local_7c0[0] = local_750;
    local_750[0] = local_6e0;
    local_6e0[0] = local_670;
    local_670[0] = local_600;
    local_600[0] = local_590;
    local_590[0] = local_520;
    local_520[0] = local_4b0;
    local_4b0[0] = local_440;
    local_440[0] = local_3d0;
    local_3d0[0] = local_360;
    local_360[0] = local_2f0;
    local_2f0[0] = local_280;
    local_280[0] = local_210;
    if (local_1a0 != (char *)0x0) {
      local_af0 = (undefined *)0x1500000000;
      local_ae8 = local_1a0;
    }
    plVar15 = *(long **)(param_1 + 0xb378);
    if ((long *)plVar15[3] != plVar15 + 2) {
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      plVar26 = (long *)plVar15[3];
      do {
        plVar6 = (long *)plVar26[1];
        plVar31 = plVar6;
        if (*plVar26 != 0) {
          *(long **)(*plVar26 + 8) = plVar6;
          plVar31 = (long *)plVar26[1];
        }
        if (plVar31 != (long *)0x0) {
          *plVar31 = *plVar26;
        }
        *plVar26 = 0;
        plVar26[1] = 0;
        *(int *)(plVar15 + 4) = (int)plVar15[4] + -1;
        plVar26[-10] = (long)puVar3;
        plVar26[-0xb] = plVar15[5];
        plVar15[5] = (long)(plVar26 + -0xb);
        plVar26 = plVar6;
      } while (plVar6 != plVar15 + 2);
    }
    ppppppuStack_ad8 = local_ae0;
    (**(code **)(*plVar15 + 0x28))();
    FUN_02001d00(param_1 + 0xec28);
    FUN_02002e30(param_1 + 0xb370,&local_af0);
    lVar21 = FUN_0209b6b0(lVar34,&local_af0,param_1 + 0x125e8);
    if (lVar21 == 0) {
      if (*(int *)(param_1 + 0x125dc) != 3) {
        FUN_01e26fcc(param_1 + 0x12578);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x12580) = *(undefined4 *)(lVar21 + 8);
      *(undefined4 *)(param_1 + 0x12584) = *(undefined4 *)(lVar21 + 0xc);
      *(undefined4 *)(param_1 + 0x12588) = *(undefined4 *)(lVar21 + 0x10);
      *(undefined4 *)(param_1 + 0x1258c) = *(undefined4 *)(lVar21 + 0x14);
      *(undefined4 *)(param_1 + 0x12590) = *(undefined4 *)(lVar21 + 0x18);
      *(undefined4 *)(param_1 + 0x12594) = *(undefined4 *)(lVar21 + 0x1c);
      *(undefined4 *)(param_1 + 0x125a8) = *(undefined4 *)(lVar21 + 0x30);
      *(undefined4 *)(param_1 + 0x125ac) = *(undefined4 *)(lVar21 + 0x34);
      *(undefined4 *)(param_1 + 0x125b8) = *(undefined4 *)(lVar21 + 0x40);
      *(undefined4 *)(param_1 + 0x125bc) = *(undefined4 *)(lVar21 + 0x44);
      *(undefined4 *)(param_1 + 0x125c0) = *(undefined4 *)(lVar21 + 0x48);
      uVar27 = *(undefined8 *)(lVar21 + 0x4c);
      *(undefined1 *)(param_1 + 0x125cc) = *(undefined1 *)(lVar21 + 0x54);
      *(undefined8 *)(param_1 + 0x125c4) = uVar27;
      *(undefined2 *)(param_1 + 0x125d0) = *(undefined2 *)(lVar21 + 0x58);
      *(undefined1 *)(param_1 + 0x125d2) = *(undefined1 *)(lVar21 + 0x5a);
      *(undefined1 *)(param_1 + 0x125d3) = *(undefined1 *)(lVar21 + 0x5b);
      *(undefined4 *)(param_1 + 0x125d4) = *(undefined4 *)(lVar21 + 0x5c);
      *(undefined4 *)(param_1 + 0x125d8) = *(undefined4 *)(lVar21 + 0x60);
      *(undefined4 *)(param_1 + 0x125dc) = *(undefined4 *)(lVar21 + 100);
      *(undefined1 *)(param_1 + 0x125e0) = *(undefined1 *)(lVar21 + 0x68);
      *(undefined4 *)(param_1 + 0x125e4) = *(undefined4 *)(lVar21 + 0x6c);
    }
    puVar3 = PTR_DAT_04bc1558;
    local_b50 = 0;
    uStack_b4c = 0;
    uStack_b48 = 0;
    local_b44 = 0;
    local_b40 = puVar30 + 0x10;
    local_b0c = 0;
    local_b60 = PTR_DAT_04bc1558 + 0x10;
    puStack_b38 = PTR_DAT_04bb2010 + 0x10;
    local_b58 = 0;
    local_b30 = 0;
    local_b20 = 0;
    local_b18 = 0;
    local_b14 = 0xffffffff;
    uStack_b10 = 0xffffffff;
    local_b08 = 0xfffe;
    puStack_b28 = puStack_b38;
    FUN_0277d4ac(&local_b08);
    lVar22 = *(long *)(param_1 + 0x10);
    local_af8 = 0;
    local_af4 = 0;
    local_b00 = 0x3bf800000;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x14);
    if ((((*(int *)(lVar22 + 0x360) != 0x14) ||
         ((*(int *)(lVar22 + 0x4b8) != 0 && (*(int *)(lVar22 + 0x378) == 0x23)))) &&
        ((local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x16), *(int *)(lVar22 + 0x360) != 0x16 ||
         ((*(int *)(lVar22 + 0x4b8) != 0 && (*(int *)(lVar22 + 0x378) == 0x23)))))) &&
       (((local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0x18), *(int *)(lVar22 + 0x360) != 0x18 ||
         ((*(int *)(lVar22 + 0x4b8) != 0 && (*(int *)(lVar22 + 0x378) == 0x23)))) &&
        ((*(byte *)(param_1 + 0xad5a) >> 2 & 1) == 0)))) {
      if (*(int *)(param_1 + 0xb024) == 0) {
        if (*(int *)(param_1 + 0xb01c) == 0) {
          iVar12 = *(int *)(param_1 + 0xafc0);
          if (iVar12 < 0x1b) {
            if (*(long *)(param_1 + 8) == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
            }
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar12);
            if (iVar12 < 0x1b) {
              iVar12 = *(int *)(param_1 + 0xafc0);
              goto LAB_01e63020;
            }
LAB_01e63074:
            local_f0 = puVar3 + 0x10;
            local_e8 = 0;
            local_e0 = 0;
            uStack_dc = 0;
            uStack_d8 = 0;
            local_d4 = 0;
            local_d0 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_c8 = PTR_DAT_04bb2010 + 0x10;
            local_9c = 0;
            local_c0 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_a4 = 0xffffffff;
            uStack_a0 = 0xffffffff;
            local_98 = 0xfffe;
            puStack_b8 = puStack_c8;
            FUN_0277d4ac(&local_98);
            goto LAB_01e62cf0;
          }
LAB_01e63020:
          if (iVar12 == 0x1b) {
            if (*(long *)(param_1 + 8) == 0) {
              local_7c[0] = 0;
            }
            else {
              local_7c[0] = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
            }
            if (local_7c[0] != 0x1b) goto LAB_01e63074;
          }
          if (0x1b < *(int *)(param_1 + 0xafc0)) {
            if (*(long *)(param_1 + 8) == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
            }
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar12);
            if (0x1b < iVar12) goto LAB_01e62dd4;
            FUN_01e61c78(&local_f0,param_1);
            goto LAB_01e62d58;
          }
          if ((((*(int *)(param_1 + 0x1274c) != 0) &&
               (uVar14 = FUN_0212ef10(param_1 + 0xaa50), (uVar14 & 1) == 0)) &&
              ((*(int *)(param_1 + 0xb01c) != 0 || (*(int *)(param_1 + 0xafc0) < 0x1c)))) &&
             ((*(int *)(param_1 + 0x77f4) != 0x4f && (*piVar4 != 0x4f)))) goto LAB_01e638d8;
          if ((lVar21 != 0) &&
             ((*(int *)(lVar21 + 0xc) == 4 &&
              (uVar14 = FUN_0212ef10(param_1 + 0xaa50), (uVar14 & 1) == 0)))) {
            FUN_01e640c8(&local_b60,lVar21);
            uVar27 = 1;
            goto LAB_01e62d8c;
          }
          lVar22 = *(long *)(param_1 + 8);
          if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
            if ((lVar22 != 0) && (uVar24 = *(uint *)(lVar22 + 0x508), uVar24 != 0xffffffff)) {
              puVar30 = &DAT_053fe348 + (ulong)uVar24 * 0xba0;
              if (9 < uVar24) {
                puVar30 = &DAT_053fe348;
              }
              if (*(int *)(puVar30 + 0x528) == 100) {
                local_f0 = (undefined *)CONCAT44(local_f0._4_4_,0xe);
                uVar14 = FUN_0290cbcc(&local_f0);
                if ((uVar14 & 1) == 0) {
                  local_7c[0] = 5;
                  uVar14 = FUN_0290cbcc(local_7c);
                  if ((uVar14 & 1) == 0) {
                    FUN_025196e4(local_f4);
                    if (local_f4[0] < 8) {
                      FUN_025196e4(&uStack_f5);
                      uVar14 = FUN_0252f708(&uStack_f5,1,0);
                      if ((uVar14 & 1) != 0) goto LAB_01e63324;
                    }
                    FUN_01e66688(&local_f0,param_1,1,0,0);
                    if (local_90._4_4_ != 3) {
                      uVar27 = 1;
                      local_b58 = local_e8;
                      local_af8 = local_88;
                      local_b44 = local_d4;
                      local_b50 = local_e0;
                      local_af4 = local_84;
                      local_b00 = local_90;
                      uStack_b4c = uStack_dc;
                      uStack_b48 = uStack_d8;
                      local_b30 = local_c0;
                      local_b20 = local_b0;
                      local_b14 = local_a4;
                      uStack_b10 = uStack_a0;
                      local_b08 = local_98;
                      local_b0c = local_9c;
                      local_b18 = local_a8;
                      goto LAB_01e62d8c;
                    }
                  }
                }
              }
            }
LAB_01e63324:
            if ((lVar21 != 0) && (*(int *)(param_1 + 0xaf50) == 0)) {
              FUN_01e640c8(&local_b60,lVar21);
              lVar21 = *(long *)PTR_DAT_04bb3968;
              piVar17 = (int *)(**(code **)(*(long *)(lVar21 + 0x19f8) + 0xf0))(lVar21 + 0x19f8);
              iVar12 = *piVar17;
              plVar15 = (long *)(lVar21 + 0x19c8);
              piVar17 = (int *)(**(code **)(*(long *)(lVar21 + 0x19c8) + 0xf0))(plVar15);
              iVar13 = *piVar17;
              iVar25 = 0;
              if (*(long *)(param_1 + 0xb358) != 0) {
                iVar25 = *(int *)(*(long *)(param_1 + 0xb358) + 0x10);
              }
              piVar17 = (int *)(**(code **)(*plVar15 + 0xf0))(plVar15);
              lVar21 = *(long *)(param_1 + 8);
              uVar27 = 1;
              iVar35 = *piVar17;
              uVar24 = *(uint *)(lVar21 + 0x288);
              *(undefined4 *)(lVar21 + 0x288) = *(undefined4 *)(lVar21 + 0x28c);
              uVar24 = uVar24 ^ uVar24 << 0xb;
              *(undefined4 *)(lVar21 + 0x28c) = *(undefined4 *)(lVar21 + 0x290);
              uVar28 = *(uint *)(lVar21 + 0x294);
              *(uint *)(lVar21 + 0x290) = uVar28;
              uVar24 = uVar24 >> 8 ^ uVar28 >> 0x13 ^ uVar24 ^ uVar28;
              *(uint *)(lVar21 + 0x294) = uVar24;
              local_af8 = ((float)(uVar24 >> 9 | 0x3f800000) + -1.0) * 100.0 <
                          (float)(iVar25 * (iVar12 - iVar13)) / 100.0 + (float)iVar35;
              goto LAB_01e62d8c;
            }
            if (0x2c < *piVar1) {
              FUN_01e26938(&local_f0);
              local_7c[0] = 2;
              FUN_01e26d20(&local_f0,local_7c);
              goto LAB_01e63940;
            }
            goto LAB_01e62dd4;
          }
          uVar24 = *(uint *)(lVar22 + 0x508);
          if (uVar24 == 0xffffffff) {
            cVar32 = '\0';
          }
          else {
            lVar22 = *(long *)PTR_DAT_04bb3968 + 0xe18 + (ulong)uVar24 * 0x28;
            if (9 < uVar24) {
              lVar22 = *(long *)PTR_DAT_04bb3968 + 0xe18;
            }
            cVar32 = *(char *)(lVar22 + 10);
          }
          if (cVar32 == *(char *)(param_1 + 0x12572)) goto LAB_01e63324;
          *(char *)(param_1 + 0x12572) = cVar32;
          FUN_01e66688(&local_f0,param_1,0,0,0);
          if (local_90._4_4_ == 3) goto LAB_01e63324;
          uVar27 = 1;
          local_b00 = local_90;
          goto LAB_01e62d84;
        }
        if ((*(int *)(param_1 + 0xafc4) == 3) &&
           ((*(int *)(param_1 + 0x77f4) == 0x49 || (*piVar4 == 0x49)))) goto LAB_01e62dd4;
        if ((*(int *)(param_1 + 0x1274c) != 0) &&
           (uVar14 = FUN_0212ef10(param_1 + 0xaa50), (uVar14 & 1) == 0)) {
          if (*(long *)PTR_DAT_04bb3968 == 0) {
LAB_01e62ef0:
            puVar16 = (uint *)PTR_DAT_04bc2820;
          }
          else {
            puVar16 = (uint *)FUN_020045e4(*(long *)PTR_DAT_04bb3968 + 0x16ae0,
                                           *(undefined4 *)(param_1 + 0xafc4));
            if (puVar16 == (uint *)0x0) goto LAB_01e62ef0;
          }
          puVar10 = PTR_DAT_04bc1578;
          puVar30 = PTR_DAT_04bc1570;
          uVar24 = *puVar16;
          if (uVar24 != 0) {
            cVar32 = *PTR_DAT_04bc1570;
            do {
              if (cVar32 == '\0') {
                cVar32 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *puVar30 = 1;
                *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                *(undefined4 *)(puVar10 + 0x68) = 0xffffffff;
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                uVar24 = *puVar16;
              }
              else {
                uVar28 = *(uint *)(puVar10 + 0x2c);
                if (-1 < (int)uVar28) {
                  if (((byte *)((ulong)uVar28 + (long)puVar16) != (byte *)0x0) &&
                     (bVar23 = *(byte *)((ulong)uVar28 + (long)puVar16), uVar24 = (uint)bVar23,
                     bVar23 < 4)) goto LAB_01e6354c;
                  break;
                }
                if (uVar28 != 0xffffffff) break;
              }
              puVar33 = (uint *)(ulong)uVar24;
              uVar24 = 0;
              if ((puVar33 == (uint *)0x0) || (puVar16 == puVar33)) goto LAB_01e6354c;
              lVar21 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar33)) != '\0') {
                lVar21 = 0x1c;
              }
              lVar21 = (long)puVar16 + (lVar21 - (long)puVar33);
              uVar24 = 0;
              if (lVar21 == 0) goto LAB_01e6354c;
              uVar14 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar33));
              *(undefined4 *)(puVar10 + 0x2c) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar17 = (int *)(lVar21 + 4);
              while (piVar17[-1] != -0x2947dcfb) {
                piVar17 = piVar17 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_01e63548;
              }
              iVar12 = 0;
              if (*piVar17 != -1) {
                iVar12 = *piVar17;
              }
              *(int *)(puVar10 + 0x2c) = iVar12;
              uVar24 = *puVar16;
              if (uVar24 == 0) break;
            } while( true );
          }
LAB_01e63548:
          uVar24 = 0;
LAB_01e6354c:
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar24);
          if (((uVar24 == 2) || (*(int *)(param_1 + 0x77f4) == 0x4f)) || (*piVar4 == 0x4f))
          goto LAB_01e63578;
LAB_01e638d8:
          FUN_01e26938(&local_f0);
          local_7c[0] = 4;
LAB_01e638e8:
          FUN_01e26d20(&local_f0,local_7c);
LAB_01e63940:
          uVar27 = 0;
          uVar20 = (undefined4)local_90;
          goto LAB_01e62d78;
        }
LAB_01e63578:
        if ((*(ushort *)(param_1 + 0x12570) >> 0xd & 1) != 0) {
          local_f0 = puVar3 + 0x10;
          local_e8 = 0;
          local_e0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          local_d4 = 0;
          local_d0 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_c8 = PTR_DAT_04bb2010 + 0x10;
          local_9c = 0;
          local_c0 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_a4 = 0xffffffff;
          uStack_a0 = 0xffffffff;
          local_98 = 0xfffe;
          puStack_b8 = puStack_c8;
          FUN_0277d4ac(&local_98);
          local_90 = 0x3bf800000;
          local_88 = 0;
          local_84 = 0;
          local_7c[0] = 8;
          FUN_01e26d20(&local_f0,local_7c);
          goto LAB_01e63940;
        }
        if (*(int *)(param_1 + 0xb01c) != 1) {
LAB_01e63810:
          if (*piVar1 < 0x2d) goto LAB_01e62dd4;
          FUN_01e26938(&local_f0);
          local_7c[0] = 2;
          goto LAB_01e638e8;
        }
        iVar12 = *(int *)(param_1 + 0xb0a8);
        if (iVar12 != 2) {
          if (iVar12 == 1) {
            if ((*(int *)(param_1 + 0xb0b0) == 2) ||
               ((*(char *)(param_1 + 0xb0ac) == '\0' && (0x707 < *(int *)(param_1 + 0xb0a0)))))
            goto LAB_01e63708;
          }
          else if (iVar12 == 0) {
            if ((*(int *)(param_1 + 0xb0a4) <= *(int *)(param_1 + 0xb09c)) ||
               (*(int *)(param_1 + 0xb0b0) == 2)) goto LAB_01e63708;
            if (*(char *)(param_1 + 0xb0ac) == '\0') {
              iVar12 = *(int *)(param_1 + 0xb0a4) * 2;
              if (iVar12 < 0x709) {
                iVar12 = 0x708;
              }
              if (iVar12 <= *(int *)(param_1 + 0xb0a0)) goto LAB_01e63708;
            }
          }
LAB_01e637ec:
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,2);
          if ((*(int *)(param_1 + 0xafc4) == 2) && (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0))
          goto LAB_01e62dd4;
          goto LAB_01e63810;
        }
        if (*(int *)(param_1 + 0xb0b0) != 2) {
          if (*(char *)(param_1 + 0xb0ac) == '\0') {
            iVar12 = *(int *)(param_1 + 0xb0a4) * 2;
            if (iVar12 < 0x709) {
              iVar12 = 0x708;
            }
            if (iVar12 <= *(int *)(param_1 + 0xb0a0)) goto LAB_01e63708;
          }
          goto LAB_01e637ec;
        }
LAB_01e63708:
        uVar24 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        if ((uVar24 < 10) && ((&DAT_053fee41)[(ulong)uVar24 * 0xba0] != '\0')) {
          uVar14 = FUN_01e7b914(param_1);
          if ((uVar14 & 1) != 0) goto LAB_01e63844;
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(&DAT_053fe830)[(ulong)uVar24 * 0x2e8]);
          if ((&DAT_053fe830)[(ulong)uVar24 * 0x2e8] == 0) goto LAB_01e638ac;
          FUN_01e26938(&local_f0);
          uVar27 = 1;
          local_b58 = local_e8;
          local_af4 = (&DAT_053fe830)[(ulong)uVar24 * 0x2e8];
          local_b44 = local_d4;
          local_b50 = local_e0;
          uStack_b4c = uStack_dc;
          uStack_b48 = uStack_d8;
          local_b30 = local_c0;
          local_b20 = local_b0;
          local_b14 = local_a4;
          uStack_b10 = uStack_a0;
          local_b08 = local_98;
          local_b0c = local_9c;
          local_b18 = local_a8;
          local_b00 = local_90;
          local_af8 = local_88;
          local_84 = local_af4;
        }
        else {
          uVar14 = FUN_01e7b914(param_1);
          if ((uVar14 & 1) != 0) {
LAB_01e63844:
            FUN_01e26938(&local_f0);
            local_7c[0] = 8;
            FUN_01e26d20(&local_f0,local_7c);
            goto LAB_01e63940;
          }
LAB_01e638ac:
          if (*(int *)(param_1 + 0xb08c) == 3) {
LAB_01e63988:
            FUN_01e61c78(&local_f0,param_1);
            local_b58 = local_e8;
            local_b44 = local_d4;
            local_b50 = local_e0;
            uStack_b4c = uStack_dc;
            uStack_b48 = uStack_d8;
            local_b30 = local_c0;
            local_b20 = local_b0;
            local_b14 = local_a4;
            uStack_b10 = uStack_a0;
            local_b08 = local_98;
            local_b0c = local_9c;
            local_b18 = local_a8;
            local_b00 = local_90;
            local_af8 = local_88;
            local_af4 = local_84;
          }
          else {
            iVar12 = *(int *)(param_1 + 0xb030);
            if (*(long *)(param_1 + 8) == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
            }
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar13);
            if (iVar12 != iVar13) goto LAB_01e63988;
            FUN_01e640c8(&local_b60,param_1 + 0xb028);
          }
          uVar27 = 1;
        }
      }
      else {
        uVar24 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        if (((uVar24 < 10) && ((&DAT_053fee41)[(ulong)uVar24 * 0xba0] != '\0')) &&
           ((&DAT_053fe830)[(ulong)uVar24 * 0x2e8] != 0)) goto LAB_01e62dd4;
        local_f0 = puVar3 + 0x10;
        local_e8 = 0;
        local_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_d4 = 0;
        local_d0 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_c8 = PTR_DAT_04bb2010 + 0x10;
        local_9c = 0;
        local_c0 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a4 = 0xffffffff;
        uStack_a0 = 0xffffffff;
        local_98 = 0xfffe;
        puStack_b8 = puStack_c8;
        FUN_0277d4ac(&local_98);
LAB_01e62cf0:
        local_90 = 0x3bf800000;
        local_88 = 0;
        local_84 = 0;
        local_7c[0] = FUN_021dcc90(*(long *)(param_1 + 8) + 0x508);
        FUN_01e26a60(&local_f0,local_7c);
LAB_01e62d58:
        uVar27 = 1;
        uVar20 = (undefined4)local_90;
LAB_01e62d78:
        local_b00 = CONCAT44(local_90._4_4_,uVar20);
LAB_01e62d84:
        local_af4 = local_84;
        local_b58 = local_e8;
        local_b50 = local_e0;
        uStack_b4c = uStack_dc;
        uStack_b48 = uStack_d8;
        local_b44 = local_d4;
        local_b30 = local_c0;
        local_b20 = local_b0;
        local_b18 = local_a8;
        local_b14 = local_a4;
        uStack_b10 = uStack_a0;
        local_b0c = local_9c;
        local_b08 = local_98;
        local_af8 = local_88;
      }
LAB_01e62d8c:
      iVar12 = *(int *)(param_1 + 0xb01c);
      bVar11 = local_b00._4_4_ == 0;
      FUN_0209bf8c(lVar34,&local_b60);
      FUN_01e67ee0(param_1,param_1 + 0xafb8,uVar27,iVar12 == 1,bVar11);
    }
LAB_01e62dd4:
    if (0 < (int)local_af0) {
      lVar34 = 0;
      do {
        (**(code **)**(undefined8 **)(local_ae8 + lVar34 * 8))();
        lVar34 = lVar34 + 1;
      } while (lVar34 < (int)local_af0);
    }
  }
  else {
LAB_01e62888:
    piVar17 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                               (*(long *)PTR_DAT_04bb3968 + 0x13f8);
    iVar12 = *piVar17;
    iVar13 = *(int *)(*(long *)(param_1 + 8) + 0x508);
    if (iVar13 == -1) {
      iVar13 = 0;
    }
    else {
      iVar13 = (int)(((float)iVar13 / 10.0) * (float)iVar12);
    }
    iVar13 = *(int *)(param_1 + 0xb098) - iVar13;
    if (-1 < iVar13) {
      iVar25 = 0;
      if (iVar12 != 0) {
        iVar25 = iVar13 / iVar12;
      }
      if (iVar13 == iVar25 * iVar12) goto LAB_01e628f4;
    }
  }
  if (*(int *)(param_1 + 0xafc4) != 4) {
    *(undefined4 *)(param_1 + 0x1274c) = 0;
  }
  FUN_02193780(param_1 + 0xef00);
LAB_01e62e24:
  if (((*(ushort *)(param_1 + 0xac52) >> 1 & 1) == 0) && (0 < *piVar1)) {
    *piVar1 = *piVar1 + -1;
  }
  *(int *)(param_1 + 0x126fc) = *(int *)(param_1 + 0x126fc) + 1;
  return;
}

