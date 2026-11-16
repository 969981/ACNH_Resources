
/* WARNING: Type propagation algorithm not settling */

bool FUN_02851e4c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  ushort uVar14;
  byte *pbVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  ushort *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  undefined8 local_50;
  byte local_48 [4];
  uint local_44;
  undefined **local_40;
  undefined8 uStack_38;
  undefined8 local_8;
  
  puVar1 = PTR_DAT_04bb39b0;
  puVar4 = PTR_DAT_04bb27d0;
  if ((DAT_0537d558 == (long *)0x0) ||
     (((DAT_0537d558[2] != 0 &&
       (local_8 = local_8 & 0xffffffff00000000, (*(uint *)(PTR_DAT_04bc1240 + 8) & 1) != 0)) ||
      (1 < *(uint *)(DAT_0537d558 + 0x10))))) {
switchD_02851eb4_default:
    bVar5 = false;
  }
  else {
    switch(param_2) {
    case 0:
      bVar5 = *(char *)(param_1 + 0x37) == '\x01';
      break;
    case 1:
      bVar5 = *(int *)(param_1 + 0x44) == 0;
      break;
    case 2:
      if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
        return false;
      }
      uVar10 = FUN_02672fb0(local_48 + 0x34);
      if ((uVar10 & 1) != 0) {
        lVar17 = FUN_0265c2a0((long)*(char *)(param_1 + 0xac));
        if (lVar17 == 0) {
          puVar19 = (ushort *)&DAT_053e6f44;
        }
        else if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar12 == (undefined8 *)0x0))
        {
          puVar19 = (ushort *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8));
        }
        else {
          uVar10 = (**(code **)*puVar12)();
          puVar19 = (ushort *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8));
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar12 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar12)();
          }
        }
        uVar7 = FUN_0219e4b0(&DAT_053fe348);
        if ((((uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8) & 0xffff) !=
            ((uint)(*puVar19 >> 8) | (*puVar19 & 0xff00ff) << 8)) {
          lVar17 = FUN_025830c0(DAT_055021a0,local_48 + 0x30,1);
          if (lVar17 == 0) {
            return false;
          }
          uVar10 = FUN_02852c70(param_1 + 0x80,0);
          if ((uVar10 & 1) != 0) {
            return *(char *)(param_1 + 0xaf) == '\x01';
          }
        }
      }
      return false;
    case 3:
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
        return false;
      }
      if (*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x17 < 0xffffffee) {
        return false;
      }
      uVar7 = *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80);
      if (1 < uVar7) {
        return false;
      }
      if (*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) == 0 || uVar7 != 1) {
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 != -1) {
          local_60 = (undefined *)CONCAT44(local_60._4_4_,0x20);
          puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
          if (0xff < (uint)(int)sVar3) {
            puVar1 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_028522ec;
        }
        local_60 = PTR_DAT_04bb2020 + 0x10;
        local_58 = "TodayGlobalEventId";
        iVar9 = FUN_0273ea30(&local_60);
        if (iVar9 != 0xffff) {
          return false;
        }
      }
LAB_028522ec:
      lVar17 = *(long *)PTR_DAT_04bb39b0;
      pbVar15 = PTR_DAT_04bb32e0;
      if (lVar17 == 0) {
LAB_02852340:
        if (*pbVar15 < 8) goto LAB_028523b0;
LAB_0285234c:
        if (*(long **)puVar4 == (long *)0x0) {
LAB_028523a8:
          pbVar15 = PTR_DAT_04bb5038;
          goto LAB_028523b0;
        }
        lVar17 = **(long **)puVar4;
        bVar6 = *(byte *)(lVar17 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar16 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar16 = (uint *)(lVar17 + 0x48);
          }
          if ((*puVar16 & 8) != 0) {
            pbVar15 = (byte *)(lVar17 + 0x471);
          }
        }
        bVar13 = *pbVar15;
        bVar6 = bVar13;
        if (7 < bVar13) {
          bVar6 = 0xff;
        }
        local_44 = CONCAT31(local_44._1_3_,bVar6);
        if (7 < bVar13) goto LAB_028523a8;
      }
      else {
        if (*(int *)(lVar17 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar17 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02852340;
          }
          goto LAB_0285234c;
        }
LAB_028523b0:
        bVar13 = *pbVar15;
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
        local_44 = CONCAT31(local_44._1_3_,bVar13);
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar13);
      lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_60,1);
      if (lVar17 == 0) goto LAB_02852628;
      local_50 = CONCAT71(local_50._1_7_,1);
      local_58 = (char *)(lVar17 + 0x1a78);
      if ((*(long **)(lVar17 + 0x1aa0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x1aa0), puVar12 == (undefined8 *)0x0)) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)*puVar12)();
      }
      local_50 = CONCAT62(local_50._2_6_,CONCAT11(bVar6,local_50._0_1_)) & 0xffffffffffff01ff;
      local_60 = PTR_DAT_04bb5ae0 + 0x10;
      FUN_02816430(*(long *)(lVar17 + 0x1a88) + *(long *)(lVar17 + 0x1a80));
      puVar4 = PTR_DAT_04bb43c0;
      lVar21 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4();
      if (*(long *)puVar4 == 0) {
LAB_028525f4:
        uVar7 = FUN_02678e00(&local_44,0x1a);
        if (0x27 < uVar7) {
          FUN_02640184(&local_60);
          return false;
        }
      }
      else {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_028525f4;
        puVar11 = (undefined4 *)
                  FUN_02816430(*(long *)(lVar17 + 0x1a88) + *(long *)(lVar17 + 0x1a80));
        local_70 = *puVar11;
        uStack_6c = puVar11[1];
        lVar21 = *(long *)puVar4;
        local_68 = 0;
        uVar7 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar4 == 0) {
LAB_028525e0:
          uVar14 = 0xbc;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_028525e0;
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(puVar11);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (puVar16 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar16 == (uint *)0x0)) goto LAB_028525e0;
          uVar7 = *puVar16;
          uVar14 = 0;
          if ((uVar7 != 0) && (puVar16 != (uint *)(ulong)uVar7)) {
            puVar18 = (uint *)((long)puVar16 - (long)(ulong)uVar7);
            uVar14 = 0;
            if (*puVar18 != 0) {
              uVar7 = puVar18[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar21 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar8 = (uint)((ulong)((long)puVar16 - lVar21) / (ulong)uVar7);
                  }
                  if (*puVar18 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar8 * 2),
                     uVar14 < 0xbd)) goto LAB_028525e4;
                }
              }
              uVar14 = 0;
            }
          }
        }
LAB_028525e4:
        if (uVar14 != 0x1a) goto LAB_028525f4;
      }
      if ((((bVar6 & 1) != 0) && (*(long *)(lVar17 + 0x1aa0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x1aa0) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
LAB_02852628:
      return *(char *)(param_1 + 0xef) == '\x01';
    case 4:
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
        return false;
      }
      uVar20 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if (((uint)((ulong)uVar20 >> 0x20) & 0xff) - 0x17 < 0xffffffee) {
        return false;
      }
      lVar17 = *(long *)PTR_DAT_04bb39b0;
      pbVar15 = PTR_DAT_04bb32e0;
      if (lVar17 == 0) {
LAB_028526ec:
        if (7 < *pbVar15) {
LAB_028526f8:
          if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
            lVar17 = **(long **)PTR_DAT_04bb27d0;
            bVar6 = *(byte *)(lVar17 + 0x473);
            pbVar15 = PTR_DAT_04bb5038;
            if ((long)(char)bVar6 != 0xffffffffffffffff) {
              puVar16 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
              if (7 < bVar6) {
                puVar16 = (uint *)(lVar17 + 0x48);
              }
              if ((*puVar16 & 8) != 0) {
                pbVar15 = (byte *)(lVar17 + 0x471);
              }
            }
            local_48[0] = *pbVar15;
            if (local_48[0] < 8) goto LAB_02852778;
          }
          pbVar15 = PTR_DAT_04bb5038;
        }
      }
      else {
        if (*(int *)(lVar17 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar17 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_028526ec;
          }
          goto LAB_028526f8;
        }
      }
      local_48[0] = *pbVar15;
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
LAB_02852778:
      lVar17 = FUN_0266c700(local_48);
      if (lVar17 == 0) {
        return false;
      }
      if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar12 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar12)();
        uVar7 = uVar7 ^ 1;
      }
      uVar8 = *(uint *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8));
      if (8 < uVar8) {
        uVar8 = 0;
      }
      local_40 = (undefined **)CONCAT44(local_40._4_4_,uVar8);
      if ((((uVar7 & 1) == 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
      if (1 < (int)uVar8) {
        local_50._0_4_ = (undefined4)uVar20;
        local_50._7_1_ = (undefined1)((ulong)uVar20 >> 0x38);
        local_50._0_7_ = (uint7)CONCAT24(5,(undefined4)local_50);
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
        local_40 = (undefined **)(lVar17 + 0x15180);
        local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
        uVar10 = FUN_008828a0(*(undefined8 *)PTR_DAT_04bb32f0,&local_50,local_48);
        if ((uVar10 & 1) != 0) {
          return false;
        }
        if (*(char *)(param_1 + 299) == '\x01') {
          cVar2 = *(char *)(param_1 + 0x128);
          iVar9 = FUN_021d7030((int)cVar2,local_48);
          if (iVar9 < 0) {
            uVar7 = 0;
          }
          else {
            local_40 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            uStack_38 = "Friendship";
            bVar6 = local_48[0];
            if (7 < local_48[0]) {
              bVar6 = 0xff;
            }
            local_44 = CONCAT31(local_44._1_3_,bVar6);
            uVar7 = FUN_02669430(&local_44);
            uVar8 = FUN_02746f80((int)cVar2,iVar9,&local_40,uVar7 & 1);
            if (uVar8 < 0x1e) {
              uVar7 = 1;
            }
            else if (uVar8 < 0x3c) {
              uVar7 = 2;
            }
            else if (uVar8 < 100) {
              uVar7 = 3;
            }
            else if (uVar8 < 0x96) {
              uVar7 = 4;
            }
            else {
              uVar7 = 5;
              if (199 < uVar8) {
                uVar7 = 6;
              }
            }
          }
          return 2 < uVar7;
        }
      }
      return false;
    case 5:
      if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) ||
         (*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x17 < 0xffffffee)) {
        return false;
      }
      if (*(char *)(param_1 + 0x163) != '\x01') {
        return false;
      }
      cVar2 = *(char *)(param_1 + 0x160);
      lVar17 = *(long *)PTR_DAT_04bb39b0;
      if (lVar17 == 0) {
        pbVar15 = &DAT_0548e140;
LAB_028529fc:
        if (*pbVar15 < 8) goto LAB_02852a74;
LAB_02852a08:
        if (DAT_0537d558 == (long *)0x0) {
LAB_02852a6c:
          pbVar15 = &DAT_0548e168;
          goto LAB_02852a74;
        }
        lVar17 = *DAT_0537d558;
        bVar6 = *(byte *)(lVar17 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar16 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar16 = (uint *)(lVar17 + 0x48);
          }
          if ((*puVar16 & 8) != 0) {
            pbVar15 = (byte *)(lVar17 + 0x471);
          }
        }
        local_48[0] = *pbVar15;
        if (7 < local_48[0]) goto LAB_02852a6c;
      }
      else {
        pbVar15 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar17 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar17 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar17 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
            pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
            goto LAB_028529fc;
          }
          goto LAB_02852a08;
        }
LAB_02852a74:
        local_48[0] = *pbVar15;
        if (7 < local_48[0]) {
          local_48[0] = 0xff;
        }
      }
      iVar9 = FUN_021d7030((int)cVar2,local_48);
      if (iVar9 < 0) {
        local_44 = 0;
      }
      else {
        local_40 = &PTR_LAB_048f9770;
        uStack_38 = "Friendship";
        bVar6 = local_48[0];
        if (7 < local_48[0]) {
          bVar6 = 0xff;
        }
        local_44 = CONCAT31(local_44._1_3_,bVar6);
        uVar7 = FUN_02669430(&local_44);
        uVar7 = FUN_02746f80((int)cVar2,iVar9,&local_40,uVar7 & 1);
        if (uVar7 < 0x1e) {
          local_44 = 1;
        }
        else if (uVar7 < 0x3c) {
          local_44 = 2;
        }
        else if (uVar7 < 100) {
          local_44 = 3;
        }
        else if (uVar7 < 0x96) {
          local_44 = 4;
        }
        else {
          local_44 = 5;
          if (199 < uVar7) {
            local_44 = 6;
          }
        }
      }
      if (local_44 < 3) {
        return false;
      }
      lVar17 = *(long *)puVar1;
      if (lVar17 == 0) {
        pbVar15 = &DAT_0548e140;
LAB_02852ba8:
        if (7 < *pbVar15) {
LAB_02852bb4:
          if (DAT_0537d558 != (long *)0x0) {
            lVar17 = *DAT_0537d558;
            bVar6 = *(byte *)(lVar17 + 0x473);
            pbVar15 = PTR_DAT_04bb5038;
            if ((long)(char)bVar6 != 0xffffffffffffffff) {
              puVar16 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
              if (7 < bVar6) {
                puVar16 = (uint *)(lVar17 + 0x48);
              }
              if ((*puVar16 & 8) != 0) {
                pbVar15 = (byte *)(lVar17 + 0x471);
              }
            }
            bVar6 = *pbVar15;
            bVar5 = 7 < bVar6;
            if (bVar5) {
              bVar6 = 0xff;
            }
            local_50._0_5_ = CONCAT14(bVar6,(undefined4)local_50);
            if (!bVar5) goto LAB_02852c34;
          }
          pbVar15 = &DAT_0548e168;
        }
      }
      else {
        pbVar15 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar17 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar17 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar17 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
            pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
            goto LAB_02852ba8;
          }
          goto LAB_02852bb4;
        }
      }
      bVar6 = *pbVar15;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      local_50._0_5_ = CONCAT14(bVar6,(undefined4)local_50);
LAB_02852c34:
      local_40 = &PTR_LAB_048f9770;
      uStack_38 = "HasLookMyHouseExplain";
      iVar9 = FUN_0274bce0((long)&local_50 + 4,&local_40);
      return iVar9 != 0;
    case 6:
      uVar10 = nn::time::IsValidDate
                         ((uint)*(ushort *)(param_1 + 0x1a0),(uint)*(byte *)(param_1 + 0x1a2),
                          (uint)*(byte *)(param_1 + 0x1a3));
      if ((uVar10 & 1) == 0) {
        bVar5 = true;
      }
      else {
        local_8 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        FUN_0272eca4(param_1 + 0x1a0,1);
        uVar7 = FUN_00a82474(&local_8,local_48 + 0x20);
        bVar5 = 1 < uVar7;
      }
      break;
    default:
      goto switchD_02851eb4_default;
    }
  }
  return bVar5;
}

