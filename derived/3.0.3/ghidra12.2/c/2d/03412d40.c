
void FUN_03412d40(long param_1,long *param_2,short *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  uint **ppuVar13;
  uint **ppuVar14;
  char cVar15;
  uint **local_1a8;
  undefined8 local_1a0;
  uint *local_198 [16];
  uint local_118;
  undefined4 uStack_114;
  uint **local_110;
  undefined *local_108;
  uint **local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  int local_6c;
  
  puVar4 = PTR_DAT_04bb43c0;
  ppuVar13 = (uint **)local_f4;
  local_75 = 0;
  local_f4[0] = 0;
  local_f8 = 0x80;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_100 = ppuVar13;
  local_6c = param_4;
  if (*param_3 == -2) {
    (**(code **)(*param_2 + 0x18))(param_2);
    ppuVar14 = (uint **)param_2[1];
    if (ppuVar13 != ppuVar14) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = 0;
      do {
        if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_03412f6c;
        lVar1 = param_2[1] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_03412f60;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_03412f68;
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
LAB_03412e08:
      lVar8 = 0;
      goto LAB_03412f6c;
    }
  }
  else {
    local_198[0] = (uint *)0x0;
    local_1a8 = (uint **)(PTR_DAT_04bc0510 + 0x10);
    local_1a0 = CONCAT44(*(undefined4 *)(param_3 + 2),CONCAT22(param_3[1],*param_3));
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_1a0);
    if (*(long *)puVar4 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_3);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
          puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8);
          if (puVar9 != (uint *)0x0) {
            local_198[0] = puVar9;
          }
        }
      }
    }
    puVar9 = local_198[0];
    __s = PTR_DAT_04bbfe90;
    puVar4 = PTR_DAT_04bbfe88;
    switch(local_6c) {
    case 0:
      FUN_01af4cc0(&local_118,&local_1a8);
      ppuVar13 = local_100;
      (**(code **)(CONCAT44(uStack_114,local_118) + 0x18))(&local_118);
      ppuVar14 = local_110;
      if (ppuVar13 != local_110) {
        (**(code **)(CONCAT44(uStack_114,local_118) + 0x18))(&local_118);
        lVar8 = 0;
        do {
          if (*(char *)((long)local_110 + lVar8) == '\0') goto LAB_03412f6c;
          if (*(char *)((long)local_110 + lVar8 + 1) == '\0') goto LAB_03412f60;
          if (*(char *)((long)local_110 + lVar8 + 2) == '\0') goto LAB_03412f68;
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        goto LAB_03412e08;
      }
      break;
    case 1:
      FUN_01af5e70(&local_1a8,&local_108);
      break;
    case 4:
      if (local_198[0] == (uint *)0x0) {
        ppuVar13 = *(uint ***)(PTR_PTR_04bb2238 + 8);
      }
      else {
        uVar5 = *local_198[0];
        if (uVar5 != 0) {
          cVar15 = *PTR_DAT_04bbfe88;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *puVar4 = 1;
              memset(__s,0xff,0x1ac);
              uVar5 = *puVar9;
            }
            else {
              uVar3 = *(uint *)(__s + 0x18c);
              if (-1 < (int)uVar3) {
                ppuVar14 = (uint **)((ulong)uVar3 + (long)puVar9);
                goto LAB_034131e8;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar5;
            ppuVar14 = (uint **)0x0;
            if ((puVar10 == (uint *)0x0) || (puVar9 == puVar10)) goto LAB_034131e8;
            lVar8 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar9 + (lVar8 - (long)puVar10);
            ppuVar14 = (uint **)0x0;
            if (lVar8 == 0) goto LAB_034131e8;
            uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
            *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
            if (uVar11 == 0) break;
            piVar12 = (int *)(lVar8 + 4);
            while (piVar12[-1] != 0x3febc642) {
              piVar12 = piVar12 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_034131e4;
            }
            iVar2 = 0;
            if (*piVar12 != -1) {
              iVar2 = *piVar12;
            }
            *(int *)(__s + 0x18c) = iVar2;
            uVar5 = *puVar9;
            if (uVar5 == 0) break;
          } while( true );
        }
LAB_034131e4:
        ppuVar14 = (uint **)0x0;
LAB_034131e8:
        ppuVar13 = *(uint ***)PTR_PTR_04bc0008;
        if (ppuVar14 != (uint **)0x0) {
          ppuVar13 = ppuVar14;
        }
      }
      if (local_100 != ppuVar13) {
        lVar8 = 0;
        do {
          if (*(char *)((long)ppuVar13 + lVar8) == '\0') goto LAB_03413a5c;
          if (*(char *)((long)ppuVar13 + lVar8 + 1) == '\0') goto LAB_03413a50;
          if (*(char *)((long)ppuVar13 + lVar8 + 2) == '\0') goto LAB_03413a58;
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
LAB_03413a48:
        lVar8 = 0;
        goto LAB_03413a5c;
      }
      break;
    case 10:
      FUN_01af6610(&local_1a8,&local_108);
      break;
    case 0xb:
      if ((*(long *)PTR_DAT_04bb46f0 == 0) ||
         (uVar11 = FUN_026222e0(*(long *)PTR_DAT_04bb46f0,&local_1a0), (uVar11 & 1) == 0)) {
        FUN_01af6a60(&local_1a8,&local_108,0);
      }
      else {
        lVar8 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
        if (((lVar8 == 0) || ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) != 2)) ||
           (*(int *)(lVar8 + 0x3e4) == 1)) {
          local_118 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
          if (1 < local_118) {
            local_118 = 0;
          }
        }
        else {
          local_118 = *(uint *)(*(long *)PTR_DAT_04bbaed0 + 0x274);
        }
        lVar8 = (ulong)(local_118 == 1) << 1;
        if (local_118 == 0) {
          lVar8 = 1;
        }
        FUN_01af6a60(&local_1a8,&local_108,lVar8);
      }
      break;
    case 0x1d:
      if (local_198[0] == (uint *)0x0) {
        ppuVar13 = *(uint ***)(PTR_PTR_04bb2238 + 8);
      }
      else {
        uVar5 = *local_198[0];
        if (uVar5 != 0) {
          cVar15 = *PTR_DAT_04bbfe88;
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *puVar4 = 1;
              memset(__s,0xff,0x1ac);
              uVar5 = *puVar9;
            }
            else {
              uVar3 = *(uint *)(__s + 0x18c);
              if (-1 < (int)uVar3) {
                ppuVar14 = (uint **)((ulong)uVar3 + (long)puVar9);
                goto LAB_0341338c;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar5;
            ppuVar14 = (uint **)0x0;
            if ((puVar10 == (uint *)0x0) || (puVar9 == puVar10)) goto LAB_0341338c;
            lVar8 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar9 + (lVar8 - (long)puVar10);
            ppuVar14 = (uint **)0x0;
            if (lVar8 == 0) goto LAB_0341338c;
            uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
            *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
            if (uVar11 == 0) break;
            piVar12 = (int *)(lVar8 + 4);
            while (piVar12[-1] != 0x3febc642) {
              piVar12 = piVar12 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_03413388;
            }
            iVar2 = 0;
            if (*piVar12 != -1) {
              iVar2 = *piVar12;
            }
            *(int *)(__s + 0x18c) = iVar2;
            uVar5 = *puVar9;
            if (uVar5 == 0) break;
          } while( true );
        }
LAB_03413388:
        ppuVar14 = (uint **)0x0;
LAB_0341338c:
        ppuVar13 = *(uint ***)PTR_PTR_04bc0008;
        if (ppuVar14 != (uint **)0x0) {
          ppuVar13 = ppuVar14;
        }
      }
      if (local_100 != ppuVar13) {
        lVar8 = 0;
        do {
          if (*(char *)((long)ppuVar13 + lVar8) == '\0') goto LAB_03413a5c;
          if (*(char *)((long)ppuVar13 + lVar8 + 1) == '\0') goto LAB_03413a50;
          if (*(char *)((long)ppuVar13 + lVar8 + 2) == '\0') goto LAB_03413a58;
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        goto LAB_03413a48;
      }
      break;
    case 0x26:
      FUN_01af7b00(&local_1a8,&local_108);
    }
  }
  goto switchD_03412eec_caseD_2;
LAB_03413a50:
  lVar8 = lVar8 + 1;
  goto LAB_03413a5c;
LAB_03413a58:
  lVar8 = lVar8 + 2;
LAB_03413a5c:
  ppuVar14 = local_100;
  iVar2 = (int)lVar8;
  if (local_f8 <= (int)lVar8) {
    iVar2 = local_f8 + -1;
  }
  memcpy(local_100,ppuVar13,(long)iVar2);
  *(char *)((long)ppuVar14 + (long)iVar2) = '\0';
  goto switchD_03412eec_caseD_2;
LAB_03412f60:
  lVar8 = lVar8 + 1;
  goto LAB_03412f6c;
LAB_03412f68:
  lVar8 = lVar8 + 2;
LAB_03412f6c:
  iVar2 = (int)lVar8;
  if (local_f8 <= (int)lVar8) {
    iVar2 = local_f8 + -1;
  }
  memcpy(ppuVar13,ppuVar14,(long)iVar2);
  *(char *)((long)ppuVar13 + (long)iVar2) = '\0';
switchD_03412eec_caseD_2:
  ppuVar14 = *(uint ***)(param_1 + 0x150);
  (**(code **)(local_108 + 0x18))(&local_108);
  ppuVar13 = local_100;
  if (ppuVar14 != local_100) {
    (**(code **)(local_108 + 0x18))(&local_108);
    lVar8 = 0;
    do {
      if (*(char *)((long)local_100 + lVar8) == '\0') goto LAB_0341300c;
      if (*(char *)((long)local_100 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0341300c;
      }
      if (*(char *)((long)local_100 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0341300c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0341300c:
    iVar2 = (int)lVar8;
    if (*(int *)(param_1 + 0x158) <= (int)lVar8) {
      iVar2 = *(int *)(param_1 + 0x158) + -1;
    }
    memcpy(ppuVar14,ppuVar13,(long)iVar2);
    *(char *)((long)ppuVar14 + (long)iVar2) = '\0';
  }
  local_198[0] = (uint *)((ulong)local_198[0] & 0xffffffffffffff00);
  local_1a8 = local_198;
  local_1a0 = 0x8000000000;
  switch(local_6c) {
  case 0:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_MenuIcon_%s";
    break;
  case 1:
  case 10:
  case 0xb:
  case 0x17:
    (**(code **)(local_108 + 0x18))(&local_108);
    if (local_1a8 != local_100) {
      lVar8 = 0;
      do {
        pcVar6 = (char *)((long)local_100 + lVar8);
        lVar8 = lVar8 + 1;
      } while (*pcVar6 != '\0');
LAB_034130a0:
      ppuVar13 = local_1a8;
      uVar5 = (int)lVar8 - 1;
      if (local_1a0._4_4_ <= (int)uVar5) {
        uVar5 = local_1a0._4_4_ - 1;
      }
      if ((int)uVar5 < 1) {
        uVar5 = 0;
      }
      else {
        memcpy(local_1a8,local_100,(ulong)uVar5);
        ppuVar13 = (uint **)((long)ppuVar13 + (ulong)uVar5);
      }
      *(char *)ppuVar13 = '\0';
      local_1a0 = CONCAT44(local_1a0._4_4_,uVar5);
    }
    goto switchD_03413068_default;
  case 2:
    FUN_038d16fc(&local_1a8,"Layout_MsgCardEditHandwriting");
    goto switchD_03413068_default;
  case 3:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_ManpuIcon_%s";
    break;
  case 4:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_Audio_%s";
    break;
  case 5:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_CharaMakeIcon_%s";
    break;
  case 6:
  case 0x1a:
  case 0x25:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "%s";
    break;
  case 7:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_MessageCard_%s";
    break;
  case 8:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_MessageCard_%s_s";
    break;
  case 9:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_LifeSupport_%s";
    break;
  case 0xc:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_BookFishIcon_%s";
    break;
  case 0xd:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_BookInsectIcon_%s";
    break;
  case 0xe:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_BookDiveFishIcon_%s";
    break;
  case 0xf:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_DailyQuestIcon_%s";
    break;
  case 0x10:
    (**(code **)(local_108 + 0x18))(&local_108);
    FUN_038d16fc(&local_1a8,&DAT_0406a3d7,"Layout_PlayerIcon_PlayerIcon",local_100);
    goto switchD_03413068_default;
  case 0x11:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_NpcIcon_%s";
    break;
  case 0x12:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_HouseRoofIcon_%s";
    break;
  case 0x13:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_HouseWallIcon_%s";
    break;
  case 0x14:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_HouseDoorIcon_%s";
    break;
  case 0x15:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_HousePostIcon_%s";
    break;
  case 0x16:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_MyDesignMask_%s";
    break;
  case 0x18:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_SoundAmbient_%s";
    break;
  case 0x19:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_ShopPlant_%s";
    break;
  case 0x1b:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_HouseShapeIcon_%s";
    break;
  case 0x1c:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_CategoryS_CategoryS_%s";
    break;
  case 0x1d:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_DoorOrnamentIcon_%s";
    break;
  case 0x1e:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenFacilityRoofIcon_%s";
    break;
  case 0x1f:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenFacilityWallIcon_%s";
    break;
  case 0x20:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenFacilityDoorIcon_%s";
    break;
  case 0x21:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenFacilityAccessoryIcon_%s";
    break;
  case 0x22:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenMsgPhoto_%s";
    break;
  case 0x23:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenIslandsMap_%s";
    break;
  case 0x24:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_WherearenMapArea_%s";
    break;
  case 0x26:
    (**(code **)(local_108 + 0x18))(&local_108);
    if (local_1a8 != local_100) {
      lVar8 = 0;
      do {
        pcVar6 = (char *)((long)local_100 + lVar8);
        lVar8 = lVar8 + 1;
      } while (*pcVar6 != '\0');
      goto LAB_034130a0;
    }
    goto switchD_03413068_default;
  case 0x27:
    (**(code **)(local_108 + 0x18))(&local_108);
    pcVar6 = "Layout_RoomSketchMask_%s";
    break;
  default:
    goto switchD_03413068_default;
  }
  FUN_038d16fc(&local_1a8,pcVar6,local_100);
switchD_03413068_default:
  if (local_6c == 0x17) {
    if ((((*(char *)local_1a8 == 'L') && (*(char *)((long)local_1a8 + 1) == 'a')) &&
        ((*(char *)((long)local_1a8 + 2) == 'y' &&
         (((*(char *)((long)local_1a8 + 3) == 'o' && (*(char *)((long)local_1a8 + 4) == 'u')) &&
          (*(char *)((long)local_1a8 + 5) == 't')))))) && (*(char *)((long)local_1a8 + 6) == '_'))
    goto LAB_0341398c;
    ppuVar13 = *(uint ***)(param_1 + 0x60);
    if (ppuVar13 != local_1a8) {
      lVar8 = 0;
      do {
        if (*(char *)((long)local_1a8 + lVar8) == '\0') goto LAB_03413954;
        if (*(char *)((long)local_1a8 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03413954;
        }
        if (*(char *)((long)local_1a8 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03413954;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03413954:
      iVar2 = (int)lVar8;
      if (*(int *)(param_1 + 0x68) <= (int)lVar8) {
        iVar2 = *(int *)(param_1 + 0x68) + -1;
      }
      memcpy(ppuVar13,local_1a8,(long)iVar2);
      uVar7 = 0;
      pcVar6 = (char *)((long)ppuVar13 + (long)iVar2);
      goto LAB_0341397c;
    }
    uVar7 = 0;
  }
  else {
    ppuVar13 = *(uint ***)(param_1 + 0x60);
    if (ppuVar13 == local_1a8) {
      uVar7 = 2;
    }
    else {
      lVar8 = 0;
      do {
        if (*(char *)((long)local_1a8 + lVar8) == '\0') goto LAB_03413924;
        if (*(char *)((long)local_1a8 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03413924;
        }
        if (*(char *)((long)local_1a8 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03413924;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03413924:
      iVar2 = (int)lVar8;
      if (*(int *)(param_1 + 0x68) <= (int)lVar8) {
        iVar2 = *(int *)(param_1 + 0x68) + -1;
      }
      memcpy(ppuVar13,local_1a8,(long)iVar2);
      pcVar6 = (char *)((long)ppuVar13 + (long)iVar2);
      uVar7 = 2;
LAB_0341397c:
      *pcVar6 = '\0';
    }
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  *(undefined1 *)(param_1 + 0xf0) = 1;
LAB_0341398c:
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  return;
}

