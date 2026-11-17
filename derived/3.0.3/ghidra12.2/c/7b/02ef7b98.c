
/* WARNING: Type propagation algorithm not settling */

void FUN_02ef7b98(long param_1,uint param_2,byte *param_3,uint param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  byte bVar22;
  ushort *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  char *__dest;
  undefined1 *puVar26;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  uint local_54;
  uint local_34;
  
  puVar2 = PTR_DAT_04bb27f8;
  if (*(int *)(param_1 + 0x1f0) != -1 || *(int *)(param_1 + 500) != -1) {
    return;
  }
  lVar19 = *(long *)PTR_DAT_04bb27f8;
  if (lVar19 == 0) goto LAB_02ef7d5c;
  puVar23 = *(ushort **)PTR_DAT_04bc3a48;
  if ((puVar23 == (ushort *)0x0) || ((*puVar23 & 1) == 0)) {
    if (*(int *)(lVar19 + 0x14) != 4) {
      if ((*(int *)(lVar19 + 0x14) != 5) || (param_2 != 0x3d)) goto LAB_02ef7c3c;
LAB_02ef7c34:
      local_54 = 0x72;
      goto LAB_02ef7e14;
    }
    if (param_2 == 0x3d) goto LAB_02ef7c34;
LAB_02ef7c3c:
    if ((puVar23 != (ushort *)0x0) && ((*puVar23 & 1) != 0)) goto LAB_02ef7cc4;
    if ((*(int *)(lVar19 + 0x14) != 4) &&
       ((*(int *)(lVar19 + 0x14) != 5 && (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)))) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,0x1a);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar14 >> 0x1a & 1) != 0) && ((param_2 & 0xfffffffe) == 0x6e)) {
        local_54 = 0x70;
        goto LAB_02ef7e14;
      }
    }
    if ((((puVar23 == (ushort *)0x0) || ((*puVar23 & 1) == 0)) &&
        ((*(int *)(lVar19 + 0x14) == 4 || (*(int *)(lVar19 + 0x14) == 5)))) &&
       (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 != -1)) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar14 >> 1 & 1) == 0) || (param_2 != 0x79)) goto LAB_02ef7d5c;
      local_54 = 0x80;
LAB_02ef7d88:
      uVar11 = local_54;
    }
    else {
LAB_02ef7d5c:
      local_54 = param_2;
      uVar11 = param_2;
      if (param_2 == 10) {
        if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
          local_54 = 0xb;
          goto LAB_02ef7e14;
        }
        uVar15 = FUN_022040b0();
        if ((uVar15 & 1) != 0) {
          local_54 = 0xb;
          goto LAB_02ef7d88;
        }
        uVar11 = 10;
      }
    }
    puVar7 = PTR_DAT_04bb4938;
    puVar6 = PTR_DAT_04bb2720;
    if (*(long *)PTR_DAT_04bb4938 != 0) {
      lVar19 = *(long *)PTR_DAT_04bb2720;
      iVar12 = 0;
      if (lVar19 != 0) {
        if (*(long *)(lVar19 + 0x330) == 0) {
          iVar12 = 0;
        }
        else {
          puVar25 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
          iVar10 = FUN_006bd550(*puVar25,0);
          iVar12 = 0;
          if (iVar10 == 0x758f7eaf) {
            iVar12 = 0;
            if (*(long *)puVar6 != 0) {
              lVar19 = *(long *)(*(long *)puVar6 + 0x330);
              iVar12 = 0;
              if (lVar19 != 0) {
                iVar12 = *(int *)(lVar19 + 0x244);
              }
            }
          }
        }
      }
      if (((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar12) && (*(long *)puVar7 != 0)) &&
         (*(int *)(*(long *)puVar7 + 0x98) != 0)) {
        if (uVar11 == 0x45) {
          local_54 = 0xdb;
        }
        else {
          if (uVar11 != 0x3d) goto LAB_02ef7e5c;
          local_54 = 0xdc;
        }
        goto LAB_02ef7e14;
      }
    }
LAB_02ef7e5c:
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 != -1) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,0x20);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((puVar14[1] & 1) != 0) &&
          (local_80 = (undefined *)CONCAT44(local_80._4_4_,1), (*puVar14 >> 1 & 1) != 0)) &&
         (uVar11 == 0)) {
        if (*(byte *)(param_1 + 0x1f8) < 8) {
          uVar11 = FUN_02582d8c(param_1 + 0x1f8,1);
          puVar6 = PTR_DAT_04bb4fb8;
          if (((uVar11 < 8) &&
              (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0')) &&
             ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0' &&
              ((uVar11 = FUN_02582d8c(param_1 + 0x1f8,1), uVar11 < 8 &&
               (*(char *)(*(long *)puVar6 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0')))))) {
            iVar12 = *(int *)(*(long *)puVar6 + (ulong)uVar11 * 0x13f0 + 0x13b8);
            if (iVar12 == 2) {
              local_54 = 0xe9;
            }
            else {
              if (iVar12 != 1) goto LAB_02ef7f84;
              local_54 = 0xed;
            }
            goto LAB_02ef7e14;
          }
        }
LAB_02ef7f84:
        uVar11 = 0;
      }
    }
  }
  else {
LAB_02ef7cc4:
    if ((param_2 & 0xfffffffe) != 0x6e) goto LAB_02ef7d5c;
    local_54 = 0x71;
LAB_02ef7e14:
    uVar11 = local_54;
  }
  puVar6 = PTR_DAT_04bb2020;
  if (0 < *(int *)(param_1 + 0xf90)) {
    return;
  }
  if ((DAT_056b6f18 != 0) && (*(int *)(DAT_056b6f18 + 0x588) != 0)) {
    if (uVar11 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x588) != 3) {
      return;
    }
  }
  local_34 = uVar11;
  switch(uVar11) {
  case 0:
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "PlayerPocketUIEnable";
    iVar12 = FUN_0274bce0(param_3,&local_80);
    if (iVar12 == 0) {
      return;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x17);
    uVar15 = FUN_0290cbcc(&local_80);
    if ((uVar15 & 1) != 0) {
      local_80 = puVar6 + 0x10;
      local_78 = "PlayerPocketUIEnableInCommuneIsland";
      iVar12 = FUN_0274bce0(param_3,&local_80);
      if (iVar12 == 0) {
        return;
      }
    }
    if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      return;
    }
    goto switchD_02ef8000_caseD_3;
  case 1:
    uVar15 = FUN_02efccd4(param_3);
    if ((uVar15 & 1) == 0) {
      return;
    }
    if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      return;
    }
    if ((*(long *)puVar2 != 0) && ((*(byte *)(*(long *)puVar2 + 0x1a71) >> 1 & 1) != 0)) {
      return;
    }
    goto switchD_02ef8000_caseD_3;
  case 2:
    local_78 = "EnableEmoticonUI";
    goto LAB_02ef82f4;
  default:
    goto switchD_02ef8000_caseD_3;
  case 4:
    uVar15 = FUN_0339bcb0(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x6d,PTR_DAT_04bb32e0);
    if ((uVar15 & 1) == 0) {
      return;
    }
    puVar14 = (uint *)FUN_03398a5c(*(undefined8 *)PTR_DAT_04bc7368,param_3);
    local_80._0_4_ = 0x12;
    if ((*puVar14 >> 0x12 & 1) != 0) {
      return;
    }
    uVar15 = FUN_03396650(param_3);
    if ((uVar15 & 1) != 0) {
      return;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x11);
    uVar13 = *puVar14 >> 0x11 & 1;
joined_r0x02ef810c:
    if (uVar13 != 0) {
      return;
    }
    goto switchD_02ef8000_caseD_3;
  case 10:
  case 0xc:
    local_78 = "PlayerMainUImenuEnable";
    goto LAB_02ef82f4;
  case 0xb:
    uVar15 = FUN_022040b0();
    if ((uVar15 & 1) != 0) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "JuneBrideCeremonyDemoAfterNow";
      local_80 = puVar2;
      iVar12 = FUN_02743000(&local_80);
      if (iVar12 == 0) {
        local_78 = "AlwJuneBrideDayCount";
        local_80 = puVar2;
        iVar12 = FUN_0274bce0(param_1 + 0x1f8,&local_80);
        if (iVar12 == 5) {
          return;
        }
        uVar15 = FUN_02e542c0(param_1 + 0x1f8,0);
        break;
      }
    }
    goto switchD_02ef8000_caseD_3;
  case 0x24:
  case 0x70:
  case 0x71:
  case 0x92:
  case 0xef:
    goto switchD_02ef8000_caseD_24;
  case 0x25:
    uVar15 = FUN_0180c600();
    break;
  case 0x3c:
    uVar15 = FUN_02efcdd0();
    if ((uVar15 & 1) == 0) {
      return;
    }
    local_78 = "EquipLicenseHelmet";
LAB_02ef82f4:
    local_80 = PTR_DAT_04bb2020 + 0x10;
    uVar13 = FUN_0274bce0(param_3,&local_80);
joined_r0x02ef8614:
    if (uVar13 == 0) {
      return;
    }
    goto switchD_02ef8000_caseD_3;
  case 0x3d:
    uVar15 = FUN_02915598(param_3);
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar13 = FUN_0266c940(param_3);
    if (uVar13 < 2) {
      return;
    }
    uVar15 = FUN_033f9c20(param_3);
    break;
  case 0x45:
    uVar15 = FUN_02ef436c(param_1 + 0xea0);
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar15 = FUN_02efcd68(param_3);
    break;
  case 0x5b:
    uVar15 = FUN_02ef436c(param_1 + 0xea0);
    if ((uVar15 & 1) == 0) {
      return;
    }
    if ((*(long *)PTR_DAT_04bb5ce0 != 0) && (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) != '\0'))
    {
      iVar12 = FUN_02202f80();
      if (iVar12 == 0) {
        return;
      }
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "JuneBrideCeremonyDemoAfterNow";
      uVar13 = FUN_02743000(&local_80);
      goto joined_r0x02ef810c;
    }
    goto switchD_02ef8000_caseD_3;
  case 0x6e:
  case 0x6f:
    uVar15 = FUN_033fa3b0();
    goto joined_r0x02ef80ac;
  case 0x72:
  case 0x77:
    uVar15 = FUN_033fa3b0();
    break;
  case 0x78:
    uVar15 = FUN_02538bb0(param_1 + 0x1f8);
    if ((uVar15 & 1) == 0) {
      return;
    }
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "WHEREAREN_Unlock_DustCloth_02";
    iVar12 = FUN_0274bce0(param_1 + 0x1f8,&local_80);
    if (iVar12 == 0) {
      return;
    }
    uVar15 = FUN_02efcee0();
    break;
  case 0x79:
    uVar15 = FUN_033febf0();
    break;
  case 0x80:
    uVar15 = FUN_033fa3b0();
    if ((uVar15 & 1) == 0) {
      return;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    uVar15 = FUN_0290cbcc(&local_80);
    break;
  case 0x84:
    uVar15 = FUN_033fac10();
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar15 = FUN_033fabc0();
    if ((uVar15 & 1) != 0) {
      uVar15 = FUN_033fad40();
      break;
    }
    goto switchD_02ef8000_caseD_3;
  case 0xdb:
    uVar15 = FUN_033fb260();
joined_r0x02ef80ac:
    if ((uVar15 & 1) == 0) {
      return;
    }
switchD_02ef8000_caseD_24:
    uVar15 = FUN_02ef436c(param_1 + 0xea0);
    break;
  case 0xdc:
    uVar15 = FUN_033fb260();
    break;
  case 0xdf:
    uVar15 = FUN_033fb130();
    if ((uVar15 & 1) == 0) {
      return;
    }
    uVar15 = FUN_033fabc0();
    if ((uVar15 & 1) == 0) goto switchD_02ef8000_caseD_3;
    lVar19 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x148);
    if (lVar19 == 0) {
      return;
    }
    if ((*(uint *)(lVar19 + 0xfc) >> 1 & 1) != 0) goto switchD_02ef8000_caseD_3;
    uVar13 = *(uint *)(lVar19 + 0xfc) & 1;
    goto joined_r0x02ef8614;
  }
  if ((uVar15 & 1) == 0) {
    return;
  }
switchD_02ef8000_caseD_3:
  if (uVar11 == 0xb) {
    uVar15 = FUN_033faa90();
    if ((uVar15 & 1) == 0) {
      if (*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = (**(ushort **)PTR_DAT_04bc3a48 & 1) << 2;
      }
    }
    else {
      iVar12 = 2;
    }
    if (local_54 == param_2) {
      if (*(long *)PTR_DAT_04bb2230 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      }
      if (*(char *)(lVar19 + 0x1f38) == '\0') {
        bVar9 = 1;
      }
      else {
        bVar9 = (**(code **)(*(long *)(lVar19 + 0x1f30) + 0x18))(lVar19 + 0x1f30);
        *(char *)(lVar19 + 0x1f38) = '\0';
      }
      *(byte *)(lVar19 + 0x1f39) = bVar9 & 1;
      if (*(char *)(lVar19 + 0x1f3a) != '\0') {
        iVar12 = *(int *)(lVar19 + 0x1f3c);
      }
    }
    else {
      uVar15 = FUN_022040b0();
      if ((uVar15 & 1) != 0) {
        iVar12 = 1;
      }
    }
    uVar15 = FUN_033faf50();
    if (*(int *)(param_1 + 0x588) != 0) {
      return;
    }
    bVar9 = *param_3;
    *(undefined8 *)(param_1 + 0x5cc) = 0;
    iVar10 = 7;
    if ((uVar15 & 1) == 0) {
      iVar10 = iVar12;
    }
    *(int *)(param_1 + 0x5d4) = iVar10;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x5c8) = bVar9;
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    FUN_03ebb160(param_1 + 0x580,1);
    return;
  }
  if (uVar11 == 0xef) {
    plVar24 = *(long **)PTR_DAT_04bb27d0;
    local_34 = uVar11;
    if (((plVar24 == (long *)0x0) || ((int)plVar24[0x10] != 3)) || (*(byte *)(*plVar24 + 0x476) < 2)
       ) goto LAB_02ef8434;
    uVar18 = 0x87;
LAB_02ef8430:
    *(undefined4 *)(param_1 + 0xf08) = uVar18;
  }
  else {
    local_34 = uVar11;
    if (uVar11 == 0x45) {
      sVar5 = *(short *)PTR_DAT_04bb6298;
      if (sVar5 != -1) {
        local_80 = (undefined *)CONCAT44(local_80._4_4_,6);
        puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar14 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar14 >> 6 & 1) == 0) || (DAT_05453f6c == -1)) goto LAB_02ef83a0;
LAB_02ef83dc:
        uVar18 = 4;
        goto LAB_02ef8430;
      }
LAB_02ef83a0:
      if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
        bVar9 = *param_3;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar9);
        uVar15 = FUN_02669430(&local_80);
        if ((uVar15 & 1) != 0) goto LAB_02ef83dc;
      }
    }
  }
LAB_02ef8434:
  lVar19 = param_1 + 0x1f0;
  if (*(int *)(param_1 + 0xf08) != 0) {
    uVar15 = FUN_02ef7758(0xffffffff,param_3);
    if ((uVar15 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xf08) = 0;
      return;
    }
    if ((*(int *)(param_1 + 0x210) == -1) && (7 < *(byte *)(param_1 + 0x214))) {
      lVar20 = param_1 + 0x210;
    }
    else if ((*(int *)(param_1 + 0x224) == -1) && (7 < *(byte *)(param_1 + 0x228))) {
      lVar20 = param_1 + 0x224;
    }
    else if ((*(int *)(param_1 + 0x238) == -1) && (7 < *(byte *)(param_1 + 0x23c))) {
      lVar20 = param_1 + 0x238;
    }
    else {
      lVar20 = param_1 + 0x24c;
    }
    bVar9 = *param_3;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(lVar20 + 4) = bVar9;
    if (*(int *)(lVar19 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
      *(undefined4 *)(lVar19 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 7;
      return;
    }
    return;
  }
  if (((param_4 & 1) == 0) && (uVar15 = FUN_02ef7758(uVar11,param_3), (uVar15 & 1) == 0)) {
    return;
  }
  if ((int)uVar11 < 0x79) {
    if (uVar11 == 0x3c) {
      if (*(long **)(param_1 + 0x260) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x260) + 0x110))();
        lVar20 = *(long *)(param_1 + 0x260);
        goto LAB_02ef86c8;
      }
    }
    else if ((uVar11 == 0x78) && (*(long *)(param_1 + 0xf10) != 0)) {
      FUN_02f06d18(1);
      lVar20 = *(long *)(param_1 + 0xf10);
LAB_02ef86c8:
      plVar24 = *(long **)(lVar20 + 0x1b0);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x30))(plVar24,0);
      }
    }
  }
  else if (uVar11 == 0x79) {
    local_78 = (char *)CONCAT62(local_78._2_6_,0x100);
    local_78 = (char *)((ulong)local_78 & 0xffffffff);
    local_80 = PTR_DAT_04bb8d28 + 0x10;
    FUN_0339272c(1,&local_80);
  }
  else if ((uVar11 == 0x84) || (uVar11 == 0xdf)) {
    FUN_02f06d18(2);
  }
  if ((*(int *)(param_1 + 0x210) == -1) && (7 < *(byte *)(param_1 + 0x214))) {
    puVar14 = (uint *)(param_1 + 0x210);
  }
  else if ((*(int *)(param_1 + 0x224) == -1) && (7 < *(byte *)(param_1 + 0x228))) {
    puVar14 = (uint *)(param_1 + 0x224);
  }
  else if ((*(int *)(param_1 + 0x238) == -1) && (7 < *(byte *)(param_1 + 0x23c))) {
    puVar14 = (uint *)(param_1 + 0x238);
  }
  else {
    puVar14 = (uint *)0x0;
    if (7 < *(byte *)(param_1 + 0x250) && *(int *)(param_1 + 0x24c) == -1) {
      puVar14 = (uint *)(param_1 + 0x24c);
    }
  }
  bVar9 = *param_3;
  *puVar14 = uVar11;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(puVar14 + 1) = bVar9;
  puVar14[3] = 1;
  if ((*(int *)(param_1 + 0x1b0) == 3) &&
     (*(int *)(lVar19 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1)) {
    *(undefined4 *)(lVar19 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 1;
  }
  if ((uVar11 | 4) == 0xed) {
    puVar25 = (undefined8 *)0x0;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    uStack_62 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    local_78 = &DAT_040a7bc0;
    if ((*(byte *)(param_1 + 0xf98) & 1) != 0) {
      lVar19 = *(long *)(param_1 + 4000);
      if (lVar19 == 0) {
        puVar25 = (undefined8 *)0x0;
      }
      else {
        puVar25 = *(undefined8 **)(lVar19 + 0x18);
        if ((*(byte *)(lVar19 + 8) & 10) != 2) {
          puVar25 = (undefined8 *)0x0;
        }
      }
    }
    if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd3a0);
    }
    uVar15 = (**(code **)*puVar25)(puVar25,PTR_DAT_04bbd398);
    if ((uVar15 & 1) == 0) {
      puVar25 = (undefined8 *)0x0;
    }
    iVar12 = *(int *)(puVar25 + 0x38);
    iVar10 = *(int *)(puVar25 + 0x37);
    if (iVar12 < iVar10) {
      *(int *)(puVar25 + 0x38) = iVar12 + 1;
      if (puVar25[0x36] != 0) {
        iVar12 = *(int *)((long)puVar25 + 0x1bc) + iVar12;
        iVar3 = 0;
        if (iVar10 <= iVar12) {
          iVar3 = iVar10;
        }
        puVar26 = (undefined1 *)(puVar25[0x36] + (long)(iVar12 - iVar3) * 0xb0);
        *puVar26 = uStack_5b;
        puVar26[1] = uStack_5c;
        *(undefined8 *)(puVar26 + 8) = local_70;
        *(undefined4 *)(puVar26 + 0x10) = local_68;
        *(uint *)(puVar26 + 0x14) = CONCAT22(uStack_62,local_64);
        *(undefined4 *)(puVar26 + 0x18) = uStack_60;
        (**(code **)(local_80 + 0x18))(&local_80);
        __dest = *(char **)(puVar26 + 0x20);
        if (__dest != local_78) {
          lVar19 = 0;
          do {
            pcVar1 = local_78 + lVar19;
            lVar19 = lVar19 + 1;
          } while (*pcVar1 != '\0');
          uVar11 = (int)lVar19 - 1;
          if (*(int *)(puVar26 + 0x2c) <= (int)uVar11) {
            uVar11 = *(int *)(puVar26 + 0x2c) - 1;
          }
          if ((int)uVar11 < 1) {
            uVar11 = 0;
          }
          else {
            memcpy(__dest,local_78,(ulong)uVar11);
            __dest = __dest + uVar11;
          }
          *__dest = '\0';
          *(uint *)(puVar26 + 0x28) = uVar11;
        }
      }
    }
    uVar11 = local_54;
  }
  if (uVar11 == 10) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "BootPhone";
    local_80 = puVar2;
    FUN_0279a9f0(param_3,&local_80,1);
    local_78 = "BootPhoneBeginner";
    local_80 = puVar2;
    FUN_0279a9f0(param_3,&local_80,1);
  }
  puVar25 = *(undefined8 **)PTR_DAT_04bb48c8;
  if (*(char *)(puVar25 + 1) == '\0') {
    uVar16 = nn::oe::GetProgramTotalActiveTime();
    *puVar25 = uVar16;
    *(undefined1 *)(puVar25 + 1) = 1;
  }
  else {
    uVar16 = *puVar25;
  }
  *(undefined8 *)(param_1 + 0xf00) = uVar16;
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_02ef8a20:
    if (*pbVar21 < 8) goto LAB_02ef8a8c;
LAB_02ef8a2c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02ef8a84:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_02ef8a8c;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar19 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar4 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar21 = (byte *)(lVar19 + 0x471);
      }
    }
    bVar9 = *pbVar21;
    if (7 < bVar9) goto LAB_02ef8a84;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar21) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02ef8a20;
      }
      goto LAB_02ef8a2c;
    }
LAB_02ef8a8c:
    bVar9 = *pbVar21;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
  }
  bVar22 = (byte)puVar14[1];
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (7 < bVar22) {
    bVar22 = 0xff;
  }
  if (bVar9 != bVar22) {
    return;
  }
  if (*(int *)(param_1 + 0x434) != 0) {
    return;
  }
  local_34 = *puVar14;
  if (local_34 == 0) {
    uVar18 = 2;
LAB_02ef8b28:
    *(undefined4 *)(param_1 + 0x434) = uVar18;
  }
  else {
    if (local_34 == 0x3b) {
LAB_02ef8c08:
      *(undefined4 *)(param_1 + 0x434) = 0;
      return;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,local_34);
    if ((int)local_34 < 0x6e) {
      if ((local_34 - 0x24 < 0x38) &&
         ((1L << ((ulong)(local_34 - 0x24) & 0x3f) & 0x80000200000001U) != 0)) goto LAB_02ef8c08;
    }
    else if (((local_34 - 0x6e < 0x25) &&
             ((1L << ((ulong)(local_34 - 0x6e) & 0x3f) & 0x100000000fU) != 0)) ||
            ((local_34 == 0xef || (local_34 == 0xdb)))) goto LAB_02ef8c08;
    if (local_34 == 10) goto LAB_02ef8c08;
    if (local_34 == 0xe6) {
      uVar18 = 3;
      goto LAB_02ef8b28;
    }
    uVar15 = FUN_033f9750(&local_34);
    if ((uVar15 & 1) != 0) goto LAB_02ef8c08;
    bVar8 = DAT_0574d71c != local_34;
    *(uint *)(param_1 + 0x434) = (uint)bVar8;
    if (!bVar8) {
      return;
    }
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 == 0) {
    return;
  }
  uVar11 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar11 == 0) ||
       (plVar24 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar24 == (long *)0x0)) ||
      ((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar24 + 0x46) != uVar11)) {
    plVar24 = (long *)0x0;
  }
  if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar2;
    iVar12 = (**(code **)(*plVar17 + 0x60))();
    if (iVar12 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_02ef8bd8;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02ef8bd8:
    uVar11 = 0;
  }
  if (plVar24 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb3280 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar13 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb3278);
  puVar2 = PTR_DAT_04bb2720;
  if ((uVar11 & uVar13) != 1) {
    return;
  }
  iVar12 = *(int *)(param_1 + 0x434);
  if (iVar12 == 2) {
    bVar9 = (byte)puVar14[1];
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar9);
    FUN_008fc9e0(plVar24,&local_80);
    return;
  }
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    lVar19 = *(long *)PTR_DAT_04bb2720;
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x330) != 0)) {
      puVar25 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar12 = FUN_006bd550(*puVar25,0);
      if ((iVar12 == 0x758f7eaf) &&
         (((*(long *)puVar2 != 0 && (lVar19 = *(long *)(*(long *)puVar2 + 0x330), lVar19 != 0)) &&
          (*(int *)(lVar19 + 0x244) != 0)))) goto LAB_02ef8d48;
    }
    iVar12 = *(int *)(param_1 + 0x434);
  }
  if (iVar12 == 3) {
    bVar9 = (byte)puVar14[1];
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar9);
    FUN_008fd3f0(plVar24,&local_80);
    return;
  }
LAB_02ef8d48:
  uVar15 = FUN_0180ade0();
  if (((uVar15 & 1) == 0) || (*(int *)(param_1 + 0x434) != 3)) {
    FUN_0090172c(plVar24);
  }
  return;
}

