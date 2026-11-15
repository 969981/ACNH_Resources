
void FUN_021dafb0(uint *param_1,int *param_2,byte *param_3,ulong param_4,byte param_5,uint param_6)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined1 *puVar21;
  short sVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  undefined8 uVar28;
  uint uVar29;
  int iVar30;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined1 uStack_b0;
  byte bStack_af;
  undefined4 uStack_ae;
  undefined2 uStack_aa;
  undefined4 local_84;
  undefined *local_80;
  long local_78;
  undefined2 local_70;
  uint local_68;
  uint local_64;
  
  uVar7 = *param_1;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar7);
  pbVar4 = *(byte **)PTR_DAT_04bb4760 + (ulong)uVar7 * 0x15;
  if (0x6c < uVar7) {
    pbVar4 = *(byte **)PTR_DAT_04bb4760;
  }
  lVar15 = FUN_0265c3e0(uVar7);
  uVar8 = *param_1;
  if (9 < uVar8) {
    return;
  }
  lVar24 = *(long *)PTR_DAT_04bbaed0;
  if (((&DAT_053fee41)[(ulong)uVar8 * 0xba0] == '\0' || lVar15 == 0) || lVar24 == 0) {
    return;
  }
  local_70 = 0;
  local_80 = PTR_DAT_04bc35d0 + 0x10;
  lVar20 = *(long *)(lVar15 + 0x28);
  local_78 = lVar15;
  if (lVar20 == 0) {
    local_80 = PTR_DAT_04bb67a0 + 0x10;
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      local_80 = PTR_DAT_04bb67a0 + 0x10;
    }
    else {
      uVar12 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      lVar20 = *(long *)(lVar15 + 0x28);
      local_70 = CONCAT11(uVar12,(char)local_70) & 0x1ff;
      local_80 = PTR_DAT_04bb67a0 + 0x10;
      if (lVar20 == 0) goto LAB_021db124;
    }
    plVar16 = *(long **)(lVar20 + 0x20);
    if (plVar16 != (long *)0x0) {
      local_c0 = *(undefined **)(lVar15 + 8);
      uStack_b8 = (undefined6)*(undefined8 *)(lVar15 + 0x10);
      local_b2 = (undefined2)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x30);
      uStack_b0 = 0x30;
      bStack_af = 0x32;
      uStack_ae = 1;
      uStack_aa = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_c0);
    }
  }
LAB_021db124:
  uVar23 = *(undefined4 *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x10764);
  uVar1 = (uint)pbVar4[4] | (pbVar4[5] & 3) << 8;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfffffc00;
  }
  lVar15 = **(long **)PTR_DAT_04bb27d0;
  bVar13 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar13 == 0xffffffffffffffff) {
LAB_021db190:
    bVar11 = true;
  }
  else {
    pbVar26 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x80;
    if (7 < bVar13) {
      pbVar26 = (byte *)(lVar15 + 0x48);
    }
    if ((*pbVar26 >> 3 & 1) == 0) goto LAB_021db190;
    bVar11 = *(byte *)(lVar15 + 0x472) == bVar13;
  }
  local_84 = uVar23;
  if ((*param_2 != 0) && (FUN_021a00e0(&DAT_053fe348,*param_1), *param_2 == 1)) {
    lVar15 = (ulong)uVar8 * 0xba0;
    (&DAT_053fe830)[(ulong)uVar8 * 0x2e8] = 0;
    *(undefined2 *)(&DAT_053fe834 + lVar15) = 0;
    (&DAT_053fe83a)[lVar15] = 0;
    (&DAT_053fe83c)[lVar15] = 0;
    *(undefined4 *)(&DAT_053febe0 + lVar15) = 0xffffffff;
    *(undefined4 *)(&DAT_053fe836 + lVar15) = 0x101;
    (&DAT_053febe4)[lVar15] = 0xff;
    FUN_0219be30(&DAT_053fe348 + (ulong)uVar8 * 0xba0);
    local_64 = 0;
    local_c0._6_2_ = (ushort)((ulong)local_c0 >> 0x30) & 0xff00;
    local_68 = CONCAT31((int3)(local_68 >> 8),(&DAT_053fee40)[lVar15]) & 0xffff00ff;
    local_c0 = (undefined *)CONCAT26(local_c0._6_2_,0xff0000000000);
    if (-1 < DAT_053d0d10) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&local_c0,&local_68,8,0);
    }
  }
  uVar29 = 0xffffffff;
  switch(*param_2) {
  case 0:
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar22 = 0;
      puVar19 = DAT_055c1b60;
      do {
        if (*(int *)(puVar19 + -1) == 0x6622bd46) goto LAB_021db668;
        puVar19 = (undefined8 *)puVar19[1];
        sVar22 = sVar22 + 1;
      } while (puVar19 != &DAT_055c1b58);
    }
LAB_021db664:
    sVar22 = -1;
LAB_021db668:
    uVar29 = (uint)sVar22;
    break;
  case 1:
    local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
    uVar17 = FUN_02b67a30(&local_c0,*param_1);
    if ((uVar17 & 1) != 0) {
      if ((uint)local_c0 < 10) {
        puVar19 = *(undefined8 **)
                   (PTR_s_NpcHouse0_04bb7e48 + ((ulong)local_c0 & 0xffffffff) * 8 + 0x68);
      }
      else {
        puVar19 = &DAT_0407ebb1;
      }
      iVar14 = FUN_006bd550(puVar19,0);
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar22 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == iVar14) goto LAB_021db668;
          puVar19 = (undefined8 *)puVar19[1];
          sVar22 = sVar22 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      goto LAB_021db664;
    }
    break;
  case 2:
    if ((&DAT_053fede8)[(ulong)uVar8 * 0x174] == 0) goto switchD_021db284_default;
    uVar5 = *(uint *)((&DAT_053fede8)[(ulong)uVar8 * 0x174] + 4);
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar5);
    if (0x11 < uVar5) break;
    uVar6 = 1 << (ulong)(uVar5 & 0x1f);
    if ((uVar6 & 0x60) == 0) {
      if ((uVar6 & 0xc000) != 0) {
        lVar15 = FUN_0265afd0();
        if (lVar15 != 0) {
          uStack_b8 = (undefined6)lVar15;
          local_b2 = (undefined2)((ulong)lVar15 >> 0x30);
          uStack_b0 = 1;
          if (*(long **)(lVar15 + 0x28) == (long *)0x0) {
            bVar13 = 0;
          }
          else {
            puVar19 = (undefined8 *)**(long **)(lVar15 + 0x28);
            bVar13 = 0;
            if (puVar19 != (undefined8 *)0x0) {
              bVar13 = (**(code **)*puVar19)();
            }
          }
          bStack_af = bVar13 & 1;
          local_c0 = PTR_DAT_04bb4dc8 + 0x10;
          bVar13 = *(byte *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1e335c);
          FUN_02640184(&local_c0);
          if ((long)(char)bVar13 != 0xffffffffffffffff) {
            if (bVar13 < 10) {
              puVar19 = *(undefined8 **)
                         (PTR_s_NpcHouse0_04bb7e48 + ((long)(char)bVar13 & 0xffffffffU) * 8 + 0x68);
            }
            else {
              puVar19 = &DAT_0407ebb1;
            }
            iVar14 = FUN_006bd550(puVar19,0);
            if (DAT_055c1b60 != &DAT_055c1b58) {
              sVar22 = 0;
              puVar19 = DAT_055c1b60;
              do {
                if (*(int *)(puVar19 + -1) == iVar14) goto LAB_021db668;
                puVar19 = (undefined8 *)puVar19[1];
                sVar22 = sVar22 + 1;
              } while (puVar19 != &DAT_055c1b58);
            }
            goto LAB_021db664;
          }
        }
        goto LAB_021dc08c;
      }
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x30000U) == 0) break;
      uVar8 = *param_1;
      if ((DAT_05407608 == uVar8) || (DAT_0540760c == uVar8)) {
        if (DAT_05407608 != 0xffffffff) goto LAB_021dbf78;
      }
      else if ((DAT_05407608 != 0xffffffff) && (DAT_05407610 == uVar8)) {
LAB_021dbf78:
        local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
        uVar17 = FUN_02b67a30(&local_c0);
        if ((uVar17 & 1) != 0) {
          if ((uint)local_c0 < 10) {
            puVar19 = *(undefined8 **)
                       (PTR_s_NpcHouse0_04bb7e48 + ((ulong)local_c0 & 0xffffffff) * 8 + 0x68);
          }
          else {
            puVar19 = &DAT_0407ebb1;
          }
          iVar14 = FUN_006bd550(puVar19,0);
          if (DAT_055c1b60 != &DAT_055c1b58) {
            sVar22 = 0;
            puVar19 = DAT_055c1b60;
            do {
              if (*(int *)(puVar19 + -1) == iVar14) goto LAB_021db668;
              puVar19 = (undefined8 *)puVar19[1];
              sVar22 = sVar22 + 1;
            } while (puVar19 != &DAT_055c1b58);
          }
          goto LAB_021db664;
        }
      }
LAB_021dc08c:
      FUN_020e9ac0(pbVar4,uVar1);
      lVar15 = FUN_0135d92c(&local_80);
      *(undefined4 *)(lVar15 + 0x10764) = uVar23;
      if ((param_6 & 1) != 0) {
        FUN_020f0330(*param_1,&local_84,uVar1,param_5 & 1);
      }
      FUN_020ea498(*(undefined8 *)PTR_DAT_04bb4760,uVar7,0,0);
      goto switchD_021db284_default;
    }
    if ((param_4 & 1) == 0) {
      lVar15 = 0xafc;
      if (!bVar11) {
        lVar15 = 0xb00;
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar22 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == *(int *)(&DAT_053fe348 + lVar15 + (ulong)uVar8 * 0xba0)) {
            if (sVar22 != -1) {
              uVar29 = (uint)sVar22;
              goto switchD_021db284_caseD_7;
            }
            break;
          }
          puVar19 = (undefined8 *)puVar19[1];
          sVar22 = sVar22 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      goto switchD_021db284_default;
    }
    uVar29 = (uint)*(short *)PTR_DAT_04bb6298;
    lVar15 = FUN_029156e0();
    uVar23 = *(undefined4 *)(lVar15 + 0x38);
    if (bVar11) goto LAB_021db4f0;
    goto LAB_021db5f8;
  case 3:
    if ((param_4 & 1) == 0) {
      local_68 = 0;
      if (((param_3 == (byte *)0x0) || (7 < *param_3)) ||
         (uVar17 = FUN_02b5f380(&local_68,param_3), (uVar17 & 1) == 0))
      goto switchD_021db284_default;
      FUN_006d8678(&local_c0,"PlayerHouse%d",local_68);
      (**(code **)(local_c0 + 0x18))(&local_c0);
      iVar14 = FUN_006bd550(CONCAT26(local_b2,uStack_b8),0);
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar22 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == iVar14) goto LAB_021db668;
          puVar19 = (undefined8 *)puVar19[1];
          sVar22 = sVar22 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      goto LAB_021db664;
    }
    uVar29 = (uint)*(short *)PTR_DAT_04bb6298;
    break;
  case 4:
    if ((param_4 & 1) != 0) goto LAB_021db468;
    lVar15 = *(long *)PTR_DAT_04bb4828;
    if (lVar15 == 0) break;
    iVar14 = 0x244db4da;
    uVar17 = FUN_01c27a50(lVar15,0xdf6636fe);
    bVar2 = (uVar17 & 1) == 0;
    if (!bVar2) {
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = puVar18[3];
      uVar29 = *puVar18 ^ *puVar18 << 0xb;
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar5;
      puVar18[3] = uVar29 >> 8 ^ uVar5 >> 0x13 ^ uVar29 ^ uVar5;
      iVar14 = -0x2099c902;
    }
    uVar29 = (uint)!bVar2;
    uVar17 = FUN_01c27a50(lVar15,0x6148bcad);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = 0x6148bcad;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0xfe96ade4);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = -0x169521c;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0x3fce6459);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = 0x3fce6459;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0x3b3bf38a);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = 0x3b3bf38a;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0xea021025);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = -0x15fdefdb;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0x17f77b87);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = 0x17f77b87;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0xf19cdbad);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = -0xe632453;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0xf7c314c3);
    if ((uVar17 & 1) != 0) {
      uVar29 = uVar29 + 1;
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      if (((ulong)uVar5 * (ulong)uVar29 & 0xffffffff00000000) == 0) {
        iVar14 = -0x83ceb3d;
      }
    }
    uVar17 = FUN_01c27a50(lVar15,0xb8855020);
    if ((uVar17 & 1) == 0) {
LAB_021dbf18:
      iVar30 = iVar14;
      if (iVar14 == 0x244db4da) {
        uVar29 = 0xffffffff;
        break;
      }
    }
    else {
      puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar5 = *puVar18 ^ *puVar18 << 0xb;
      uVar6 = puVar18[3];
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      uVar5 = uVar5 >> 8 ^ uVar6 >> 0x13 ^ uVar5 ^ uVar6;
      puVar18[2] = uVar6;
      puVar18[3] = uVar5;
      iVar30 = -0x477aafe0;
      if (((ulong)uVar5 * (ulong)(uVar29 + 1) & 0xffffffff00000000) != 0) goto LAB_021dbf18;
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar22 = 0;
      puVar19 = DAT_055c1b60;
      do {
        if (*(int *)(puVar19 + -1) == iVar30) goto LAB_021dc010;
        puVar19 = (undefined8 *)puVar19[1];
        sVar22 = sVar22 + 1;
      } while (puVar19 != &DAT_055c1b58);
    }
    sVar22 = -1;
LAB_021dc010:
    uVar29 = (uint)sVar22;
    if (bVar11) {
      (&DAT_053fee44)[(ulong)uVar8 * 0x2e8] = iVar30;
    }
    else {
      (&DAT_053fee48)[(ulong)uVar8 * 0x2e8] = iVar30;
    }
    break;
  case 5:
    if ((param_4 & 1) != 0) goto LAB_021db468;
    uVar23 = 0x8a17f484;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar22 = 0;
      puVar19 = DAT_055c1b60;
      do {
        if (*(int *)(puVar19 + -1) == -0x75e80b7c) goto joined_r0x021db5f4;
        puVar19 = (undefined8 *)puVar19[1];
        sVar22 = sVar22 + 1;
      } while (puVar19 != &DAT_055c1b58);
    }
LAB_021db5ec:
    sVar22 = -1;
    goto joined_r0x021db5f4;
  case 6:
    if ((param_4 & 1) == 0) {
      uVar23 = 0x91e12aa0;
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar22 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == -0x6e1ed560) goto joined_r0x021db5f4;
          puVar19 = (undefined8 *)puVar19[1];
          sVar22 = sVar22 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      goto LAB_021db5ec;
    }
LAB_021db468:
    sVar22 = *(short *)PTR_DAT_04bb6298;
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar14 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    uVar23 = *(undefined4 *)(puVar19 + 7);
joined_r0x021db5f4:
    uVar29 = (uint)sVar22;
    if (bVar11) {
LAB_021db4f0:
      (&DAT_053fee44)[(ulong)uVar8 * 0x2e8] = uVar23;
    }
    else {
LAB_021db5f8:
      (&DAT_053fee48)[(ulong)uVar8 * 0x2e8] = uVar23;
    }
    break;
  case 7:
    break;
  default:
switchD_021db284_default:
    puVar9 = PTR_DAT_04bc35d0;
    goto LAB_021dc0f8;
  }
switchD_021db284_caseD_7:
  lVar15 = local_78;
  puVar9 = PTR_DAT_04bc35d0;
  if (*param_2 != 0) {
    uVar8 = *param_1;
    local_68 = 0;
    if (uVar8 < 10) {
      if ((&DAT_053fee41)[(ulong)uVar8 * 0xba0] != '\0') {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          (&DAT_053fea2c)[(ulong)uVar8 * 0x2e8] = 0;
        }
        else {
          lVar20 = *(long *)PTR_DAT_04bb3968;
          lVar25 = lVar20 + 0xe18 + (ulong)uVar8 * 0x28;
          pbVar26 = (byte *)(lVar25 + 8);
          if (*pbVar26 < 100) {
            lVar27 = *(long *)(lVar25 + 0x16);
            uStack_b0 = (undefined1)((ulong)lVar27 >> 0x10);
            bStack_af = (byte)((ulong)lVar27 >> 0x18);
            uStack_ae = (undefined4)((ulong)lVar27 >> 0x20);
            uVar28 = *(undefined8 *)(lVar25 + 0x10);
            uStack_b8 = (undefined6)uVar28;
            local_b2 = (undefined2)((ulong)uVar28 >> 0x30);
            local_c0 = (undefined *)((ulong)*(undefined **)pbVar26 & 0xfffffffff3ffffff);
            if (*(undefined **)pbVar26 != local_c0 ||
                lVar27 != CONCAT44(uStack_ae,CONCAT13(bStack_af,CONCAT12(uStack_b0,local_b2)))) {
              *(undefined **)pbVar26 = local_c0;
              *(undefined8 *)(lVar25 + 0x10) = uVar28;
              *(undefined1 *)(lVar20 + 0xe18 + (ulong)uVar8 * 0x28 + 0x1e) = 1;
              *(ulong *)(lVar25 + 0x16) =
                   CONCAT44(uStack_ae,CONCAT13(bStack_af,CONCAT12(uStack_b0,local_b2)));
            }
          }
        }
      }
      uVar8 = *param_1;
      if ((uVar8 < 10) && ((&DAT_053fee41)[(ulong)uVar8 * 0xba0] != '\0')) {
        if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
          (&DAT_053fea30)[(ulong)uVar8 * 0xba0] = (&DAT_053fea30)[(ulong)uVar8 * 0xba0] & 0xfe;
        }
        else {
          lVar20 = *(long *)PTR_DAT_04bb3968;
          lVar25 = lVar20 + 0xe18 + (ulong)uVar8 * 0x28;
          pbVar26 = (byte *)(lVar25 + 8);
          if (*pbVar26 < 100) {
            lVar27 = *(long *)(lVar25 + 0x16);
            uStack_b0 = (undefined1)((ulong)lVar27 >> 0x10);
            bStack_af = (byte)((ulong)lVar27 >> 0x18);
            uStack_ae = (undefined4)((ulong)lVar27 >> 0x20);
            uVar28 = *(undefined8 *)(lVar25 + 0x10);
            local_c0 = (undefined *)((ulong)*(undefined **)pbVar26 & 0xffffffffcfffffff);
            uStack_b8 = (undefined6)uVar28;
            local_b2 = (undefined2)((ulong)uVar28 >> 0x30);
            if (*(undefined **)pbVar26 != local_c0 ||
                lVar27 != CONCAT44(uStack_ae,CONCAT13(bStack_af,CONCAT12(uStack_b0,local_b2)))) {
              *(undefined **)pbVar26 = local_c0;
              *(undefined8 *)(lVar25 + 0x10) = uVar28;
              *(undefined1 *)(lVar20 + 0xe18 + (ulong)uVar8 * 0x28 + 0x1e) = 1;
              *(ulong *)(lVar25 + 0x16) =
                   CONCAT44(uStack_ae,CONCAT13(bStack_af,CONCAT12(uStack_b0,local_b2)));
            }
          }
        }
      }
    }
  }
  puVar10 = PTR_DAT_04bb5018;
  if (uVar29 != uVar1) {
    pbVar4[4] = 0xff;
    bVar13 = *puVar10;
    pbVar4[8] = pbVar4[8] & 0xc0;
    pbVar4[0xb] = pbVar4[0xb] & 0x3f;
    pbVar4[7] = bVar13 >> 6 | 4;
    pbVar4[5] = bVar13 << 2 | 3;
    pbVar4[6] = bVar13 >> 6 | bVar13 << 2;
    pbVar4[0xc] = pbVar4[0xc] & 0xfc;
  }
  if ((*(long *)(local_78 + 0x28) != 0) &&
     (plVar16 = *(long **)(*(long *)(local_78 + 0x28) + 0x20), plVar16 != (long *)0x0)) {
    local_c0 = *(undefined **)(local_78 + 8);
    uStack_b8 = (undefined6)*(undefined8 *)(local_78 + 0x10);
    local_b2 = (undefined2)((ulong)*(undefined8 *)(local_78 + 0x10) >> 0x30);
    uStack_b0 = 0x30;
    bStack_af = 0x32;
    uStack_ae = 1;
    uStack_aa = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_c0);
  }
  *(int *)(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x10764) = *param_2;
  if ((param_6 & 1) != 0) {
    local_c0._6_2_ = (ushort)((ulong)local_c0 >> 0x30) & 0xff00;
    local_68 = CONCAT31(CONCAT21((short)uVar29,(char)*param_2),(char)*param_1);
    local_64 = CONCAT31(local_64._1_3_,param_5) & 0xffffff01;
    local_c0 = (undefined *)CONCAT26(local_c0._6_2_,0xff0000000000);
    if (-1 < DAT_053d10d0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d10d0,&local_c0,&local_68,6,0);
    }
  }
  if (uVar29 == 0xffffffff) {
LAB_021db9f4:
    uVar29 = 0xff;
    bVar13 = 0xff;
  }
  else {
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,3);
    puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar29 * 8);
    if (0xff < uVar29) {
      puVar18 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar18 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar29 = 0;
        puVar19 = DAT_055c1b60;
        do {
          if (*(int *)(puVar19 + -1) == 0x6622bd46) {
            bVar13 = (byte)(uVar29 >> 8);
            goto LAB_021dba04;
          }
          puVar19 = (undefined8 *)puVar19[1];
          uVar29 = uVar29 + 1;
        } while (puVar19 != &DAT_055c1b58);
      }
      goto LAB_021db9f4;
    }
    bVar13 = (byte)(uVar29 >> 8);
  }
LAB_021dba04:
  pbVar4[4] = (byte)uVar29;
  pbVar4[5] = pbVar4[5] & 0xfc | bVar13 & 3;
  FUN_020ea498(*(undefined8 *)PTR_DAT_04bb4760,uVar7,0,0);
  uVar7 = (uint)*pbVar4 | (pbVar4[1] & 0xf) << 8;
  if ((pbVar4[1] & 8) != 0) {
    uVar7 = uVar7 | 0xfffff000;
  }
  puVar21 = (undefined1 *)(lVar24 + (long)(int)*param_1 * 6);
  bVar13 = (byte)((uint)(int)(float)(int)uVar7 >> 8);
  *puVar21 = (char)(int)(float)(int)uVar7;
  puVar21[1] = puVar21[1] & 0xf0 | bVar13 & 0xf;
  uVar8 = (uint)(pbVar4[1] >> 4) | (uint)pbVar4[2] << 4;
  uVar7 = uVar8 | 0xfffff000;
  if (-1 < (char)pbVar4[2]) {
    uVar7 = uVar8;
  }
  puVar21[1] = bVar13 & 0xf | (byte)((int)(float)(int)uVar7 << 4);
  puVar21[2] = (char)((uint)(int)(float)(int)uVar7 >> 4);
  puVar21[3] = pbVar4[3];
  bVar13 = pbVar4[5];
  puVar21[4] = pbVar4[4];
  puVar21[5] = puVar21[5] & 0xfc | bVar13 & 3;
  local_c0 = (undefined *)(CONCAT44(local_c0._4_4_,(uint)(pbVar4[7] >> 2)) & 0xffffffff00000003);
  puVar21[5] = (byte)((uint)local_c0 << 2) | puVar21[5] & 0xf3;
  uVar7 = *param_1;
  if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
    if ((param_5 & 1) == 0) {
      FUN_021956e0();
    }
    else {
      uVar23 = 1;
      if (*param_2 == 7) {
        uVar23 = 2;
      }
      uVar3 = 0;
      if (*param_2 != 0) {
        uVar3 = uVar23;
      }
      (&DAT_053fea28)[(ulong)uVar7 * 0x2e8] = uVar3;
    }
  }
LAB_021dc0f8:
  local_80 = puVar9 + 0x10;
  if (local_70._1_1_ != '\0') {
    lVar15 = *(long *)(local_78 + 0x28);
    if ((char)local_70 == '\0') {
      if (lVar15 == 0) {
        return;
      }
      puVar19 = *(undefined8 **)(lVar15 + 0x18);
    }
    else {
      if (lVar15 == 0) {
        return;
      }
      puVar19 = *(undefined8 **)(lVar15 + 8);
    }
    if (puVar19 != (undefined8 *)0x0) {
      (**(code **)*puVar19)();
    }
  }
  return;
}

