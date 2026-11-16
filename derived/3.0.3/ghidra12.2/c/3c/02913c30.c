
void FUN_02913c30(void)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  byte local_ac [4];
  int local_a8;
  byte local_a4 [4];
  undefined **local_a0;
  char *pcStack_98;
  undefined8 *local_90;
  int *piStack_88;
  int local_7c;
  undefined4 local_78;
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  char local_60 [4];
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  int local_34;
  
  puVar4 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2640;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
LAB_02913d10:
    puVar10 = &DAT_055c04a0;
  }
  else {
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar7 = FUN_006bd550(*puVar10,0);
      lVar13 = *(long *)puVar4;
      if (iVar7 == 0x758f7eaf) {
        if (lVar13 == 0) goto LAB_02913d10;
        if (*(long *)(lVar13 + 0x330) == 0) goto LAB_02913ccc;
        plVar11 = *(long **)puVar1;
        puVar10 = (undefined8 *)
                  (**(code **)(*plVar11 + 0x18))(plVar11,*(undefined4 *)(lVar13 + 0x338));
        FUN_006bd550(*puVar10,0);
        lVar13 = *(long *)puVar4;
      }
      if (lVar13 == 0) goto LAB_02913d10;
    }
LAB_02913ccc:
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      plVar11 = *(long **)puVar1;
      puVar10 = (undefined8 *)
                (**(code **)(*plVar11 + 0x18))(plVar11,*(undefined4 *)(lVar13 + 0x338));
      iVar7 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  puVar1 = PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  iVar7 = *(int *)(puVar10 + 7);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02913d90;
LAB_02913dfc:
    local_64[0] = *pbVar14;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if ((*pbVar14 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar14 < 8)))) goto LAB_02913dfc;
LAB_02913d90:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02913df4:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_02913dfc;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar13 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x471);
      }
    }
    local_64[0] = *pbVar14;
    if (7 < local_64[0]) goto LAB_02913df4;
  }
  bVar6 = local_64[0];
  uVar12 = FUN_017f37d0(iVar7);
  puVar4 = PTR_DAT_04bb5008;
  if ((uVar12 & 1) == 0) {
    if (0x427decd < iVar7) {
      if (iVar7 < 0x4d702d55) {
        if (iVar7 < 0x16f2dadc) {
          if (iVar7 != 0x427dece) {
            iVar8 = 0xe716ff8;
            goto LAB_029141b8;
          }
        }
        else if ((iVar7 != 0x16f2dadc) && (iVar7 != 0x1d096e7d)) {
          iVar8 = 0x28c45759;
          goto LAB_029141b8;
        }
      }
      else if (iVar7 < 0x72a13146) {
        if (iVar7 != 0x4d702d55) {
          iVar8 = 0x60c2c4f0;
          goto LAB_029141b8;
        }
      }
      else if ((iVar7 != 0x72a13146) && (iVar7 != 0x7c939885)) {
        iVar8 = 0x77870a84;
        goto LAB_029141b8;
      }
      goto LAB_029141c0;
    }
    if (-0x196792d9 < iVar7) {
      if (iVar7 < -0xbf1cc08) {
        if (iVar7 != -0x196792d8) {
          iVar8 = -0x11f68f68;
          goto LAB_029141b8;
        }
      }
      else if ((iVar7 != -0xbf1cc08) && (iVar7 != 0x5f6c88)) {
        iVar8 = 0x1ac1236;
        goto LAB_029141b8;
      }
LAB_029141c0:
      local_34 = 0;
      uVar12 = FUN_02b64e40(&local_34,iVar7);
      if ((uVar12 & 1) == 0) {
        return;
      }
      iVar7 = FUN_026641e0(local_34,0);
      if (iVar7 == -1) {
        return;
      }
      local_58 = (int *)CONCAT44(local_58._4_4_,3);
      local_48 = PTR_s_enter_stage_npc_house_04a85738;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      FUN_025ffac8(&local_a0,&local_50,local_64);
      local_50 = (undefined *)CONCAT44(3,iVar7);
      ppuVar15 = (undefined **)(PTR_DAT_04bc3298 + 0x10);
      local_78 = (undefined4)local_58;
      local_a4[0] = local_64[0];
      if (7 < local_64[0]) {
        local_a4[0] = 0xff;
      }
      local_a0 = ppuVar15;
      bVar6 = FUN_02669430(local_a4);
      bVar6 = bVar6 & 1;
      goto LAB_029144fc;
    }
    if (iVar7 < -0x66cc4d79) {
      if (iVar7 != -0x7b521843) {
        iVar8 = -0x74337aab;
        goto LAB_029141b8;
      }
      goto LAB_029141c0;
    }
    if ((iVar7 == -0x66cc4d79) || (iVar7 == -0x4772f804)) goto LAB_029141c0;
    iVar8 = -0x4701dc58;
LAB_029141b8:
    if (iVar7 == iVar8) goto LAB_029141c0;
    local_58 = &local_a8;
    local_a8 = 3;
    pcStack_98 = local_60;
    local_90 = &local_58;
    local_a0 = &PTR_FUN_04aa4cb8;
    piStack_88 = &local_5c;
    puVar1 = PTR_DAT_04bc4990 + 0x10;
    local_60[0] = '\0';
    iVar8 = 0;
    local_5c = iVar7;
    do {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar8);
      local_40 = 0;
      local_34 = iVar8;
      if (iVar8 != 0) {
        local_50 = puVar1;
        local_40 = FUN_02a96aac(*(long *)puVar4 + 0x20,iVar8);
        if (local_40 != 0) {
          (*(code *)*local_a0)(&local_a0,&local_50);
        }
      }
      iVar7 = 0x27;
      if (iVar8 < 0x27) {
        iVar7 = iVar8 + 1;
      }
      iVar8 = iVar7;
    } while (iVar7 != 0x27);
    if (local_60[0] == '\0') {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562) {
        return;
      }
      local_58 = (int *)CONCAT44(local_58._4_4_,6);
      local_48 = PTR_s_enter_stage_kappei_tour_04a85750;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      FUN_025ffac8(&local_a0,&local_50,local_64);
      local_48 = (undefined *)((ulong)local_48 & 0xffffffffffff0000);
      ppuVar15 = (undefined **)(PTR_DAT_04bc3298 + 0x10);
      uVar12 = 0x3ffffffff;
      local_78 = (undefined4)local_58;
      local_50 = (undefined *)0x3ffffffff;
      local_a0 = ppuVar15;
      goto LAB_02914534;
    }
    local_58 = (int *)((ulong)local_58._4_4_ << 0x20);
    local_48 = PTR_s_enter_stage_facility_04a85720;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    FUN_025ffac8(&local_a0,&local_50,local_64);
    puVar1 = PTR_DAT_04bc3298;
    bVar6 = 0;
    local_a0 = (undefined **)(PTR_DAT_04bc3298 + 0x10);
    local_78 = (undefined4)local_58;
    local_50 = (undefined *)CONCAT44(local_a8,0xffffffff);
    if (((local_a8 < 10) && (bVar6 = 0, local_a8 != 7)) && (local_a8 != 9)) {
      local_ac[0] = local_64[0];
      if (7 < local_64[0]) {
        local_ac[0] = 0xff;
      }
      bVar6 = FUN_02669430(local_ac);
      bVar6 = bVar6 & 1;
    }
    lVar13 = *(long *)PTR_DAT_04bb27d0;
    bVar5 = false;
    if (lVar13 != 0) {
      if (*(long *)(lVar13 + 0x28) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(int *)(lVar13 + 0x80) == 1;
      }
    }
    local_48._0_2_ = CONCAT11(bVar5,bVar6);
    FUN_0259aca4(&local_a0,&local_50);
    local_a0 = (undefined **)(puVar1 + 0x10);
  }
  else {
    local_68[0] = bVar6;
    if (7 < bVar6) {
      local_68[0] = 0xff;
    }
    uVar12 = FUN_02669430(local_68);
    if ((uVar12 & 1) == 0) {
      local_58 = (int *)CONCAT44(local_58._4_4_,2);
      local_48 = PTR_s_enter_stage_player_house_04a85730;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      FUN_025ffac8(&local_a0,&local_50,local_64);
      local_48 = (undefined *)((ulong)local_48 & 0xffffffffffffff00);
LAB_02914004:
      ppuVar15 = (undefined **)(PTR_DAT_04bc3298 + 0x10);
      local_78 = (undefined4)local_58;
      local_50 = (undefined *)0x3ffffffff;
      local_a0 = ppuVar15;
    }
    else {
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
LAB_02913e7c:
        if (*pbVar16 < 8) goto LAB_02913ef4;
LAB_02913e88:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02913eec:
          pbVar16 = PTR_DAT_04bb5038;
          goto LAB_02913ef4;
        }
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar6 = *(byte *)(lVar13 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar2 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar14 = (byte *)(lVar13 + 0x471);
          }
        }
        local_6c[0] = *pbVar14;
        if (7 < local_6c[0]) goto LAB_02913eec;
      }
      else {
        if (*(int *)(lVar13 + 0x15c) != 0) {
          pbVar16 = (byte *)(lVar13 + 0x158);
        }
        if (7 < *pbVar16) {
          if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_02913e7c;
          }
          goto LAB_02913e88;
        }
LAB_02913ef4:
        local_6c[0] = *pbVar16;
        if (7 < local_6c[0]) {
          local_6c[0] = 0xff;
        }
      }
      iVar8 = FUN_02582fe0(local_6c);
      local_34 = 0;
      FUN_02b5f400(&local_34,iVar7);
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,local_34);
      lVar13 = *(long *)PTR_DAT_04bb46b0;
      if (lVar13 != 0) {
        puVar10 = *(undefined8 **)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
          lVar13 = (**(code **)(*(long *)*puVar10 + 0x38))();
          if (lVar13 != 0) {
            lVar13 = lVar13 + 0x70;
            goto LAB_02914100;
          }
        }
        else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
                (lVar13 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar13 != 0)) {
LAB_02914100:
          if ((uint)local_a0 < 8) {
            lVar3 = lVar13 + 0x119228 + ((ulong)local_a0 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_a0) {
              lVar3 = lVar13 + 0x119228;
            }
            if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar10 == (undefined8 *)0x0)) {
              uVar9 = 1;
            }
            else {
              uVar9 = (**(code **)*puVar10)();
              uVar9 = uVar9 ^ 1;
            }
            if (iVar8 == -1) {
              bVar5 = false;
            }
            else {
              lVar13 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8);
              if (iVar8 == *(char *)(lVar13 + 0x289f8)) {
                bVar5 = true;
              }
              else {
                bVar5 = iVar8 == *(char *)(lVar13 + 0x289f9);
              }
            }
            if ((((uVar9 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            if (bVar5) {
              local_58 = (int *)CONCAT44(local_58._4_4_,1);
              local_48 = PTR_s_enter_stage_my_house_04a85728;
              local_50 = PTR_DAT_04bb2020 + 0x10;
              FUN_025ffac8(&local_a0,&local_50,local_64);
              local_48 = (undefined *)CONCAT71(local_48._1_7_,1);
              goto LAB_02914004;
            }
          }
        }
      }
      local_58 = (int *)CONCAT44(local_58._4_4_,2);
      local_48 = PTR_s_enter_stage_player_house_04a85730;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      FUN_025ffac8(&local_a0,&local_50,local_64);
      ppuVar15 = (undefined **)(PTR_DAT_04bc3298 + 0x10);
      local_78 = (undefined4)local_58;
      local_50 = (undefined *)0x3ffffffff;
      bVar6 = 1;
      local_a0 = ppuVar15;
LAB_029144fc:
      local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar6);
    }
    lVar13 = *(long *)PTR_DAT_04bb27d0;
    uVar12 = 0;
    if (lVar13 == 0) {
LAB_02914524:
      local_48._0_2_ = CONCAT11((char)uVar12,(byte)local_48);
    }
    else {
      if (*(long *)(lVar13 + 0x28) != 0) {
        uVar12 = (ulong)(*(int *)(lVar13 + 0x80) == 1);
        goto LAB_02914524;
      }
      uVar12 = 0;
      local_48._0_2_ = (ushort)(byte)local_48;
    }
LAB_02914534:
    FUN_0259aca4(uVar12,&local_a0,&local_50);
    local_a0 = ppuVar15;
  }
  iVar7 = FUN_0259b18c(&local_a0);
  if (iVar7 != -1) {
    iVar7 = (*(code *)local_a0[4])(&local_a0);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar7);
    if (iVar7 < 0xd) goto LAB_02914584;
  }
  if (local_7c == 0) {
    local_7c = 1;
  }
LAB_02914584:
  FUN_02601530(&local_a0);
  return;
}

