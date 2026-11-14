
void FUN_01b2e450(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  ushort *puVar2;
  char *pcVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined ***pppuVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  char *pcVar27;
  char cVar28;
  long lVar29;
  uint *puVar30;
  int *piVar31;
  char *pcVar32;
  undefined1 uVar33;
  uint *puVar34;
  undefined8 uVar35;
  byte *pbVar36;
  byte *pbVar37;
  undefined *puVar38;
  uint local_144;
  undefined **local_130;
  undefined8 local_128;
  long local_120;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  char *pcStack_f0;
  int local_e8;
  char acStack_e4 [4];
  undefined8 uStack_e0;
  undefined8 local_d8;
  char *local_d0;
  int local_c8;
  char local_c4 [7];
  undefined1 local_bd;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  char *local_70;
  
  plVar20 = (long *)*param_1;
  if ((*(char *)((long)plVar20 + 0x29) != '\0') || (*plVar20 != 0)) {
    FUN_01b46be0(&local_130);
    uVar14 = FUN_01b30ea0(&local_130,(int)param_2[8],*param_1 + 0x10,1);
    if (((uVar14 & 1) != 0) &&
       (lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580), lVar15 != 0))
    {
      plVar21 = *(long **)PTR_DAT_04bb4fa8;
      lVar29 = *plVar21;
      plVar20 = (long *)(*(int *)((long)plVar21 + 0x14) + lVar15);
      *plVar21 = (long)plVar20;
      *plVar20 = lVar29;
      plVar20[1] = (long)plVar21;
      if (lVar29 != 0) {
        *(long **)(lVar29 + 8) = plVar20;
      }
      *(int *)(plVar21 + 2) = (int)plVar21[2] + 1;
    }
    plVar20 = (long *)*param_1;
    if (*(char *)((long)plVar20 + 0x29) == '\0') {
LAB_01b2e59c:
      if (*plVar20 == 0) goto LAB_01b2e620;
    }
    else if (*(char *)((long)param_2 + 500) != '\0') {
      FUN_01b46be0(&local_130);
      uVar14 = FUN_01b31030(&local_130,(int)param_2[8],*param_1 + 0x10,1);
      if (((uVar14 & 1) != 0) &&
         (lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580), lVar15 != 0)
         ) {
        plVar21 = *(long **)PTR_DAT_04bb4fa8;
        lVar29 = *plVar21;
        plVar20 = (long *)(*(int *)((long)plVar21 + 0x14) + lVar15);
        *plVar21 = (long)plVar20;
        *plVar20 = lVar29;
        plVar20[1] = (long)plVar21;
        if (lVar29 != 0) {
          *(long **)(lVar29 + 8) = plVar20;
        }
        *(int *)(plVar21 + 2) = (int)plVar21[2] + 1;
      }
      plVar20 = (long *)*param_1;
      if (*(char *)((long)plVar20 + 0x29) == '\0') goto LAB_01b2e59c;
    }
    FUN_01b46be0(&local_130);
    uVar14 = FUN_01b311c0(&local_130,(int)param_2[8],*param_1 + 0x10,1);
    if (((uVar14 & 1) != 0) &&
       (lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580), lVar15 != 0))
    {
      plVar21 = *(long **)PTR_DAT_04bb4fa8;
      lVar29 = *plVar21;
      plVar20 = (long *)(*(int *)((long)plVar21 + 0x14) + lVar15);
      *plVar21 = (long)plVar20;
      *plVar20 = lVar29;
      plVar20[1] = (long)plVar21;
      if (lVar29 != 0) {
        *(long **)(lVar29 + 8) = plVar20;
      }
      *(int *)(plVar21 + 2) = (int)plVar21[2] + 1;
    }
    plVar20 = (long *)*param_1;
  }
LAB_01b2e620:
  puVar38 = PTR_DAT_04bb2020;
  if (*(char *)((long)plVar20 + 0x2a) != '\0') {
    plVar20 = param_2 + 8;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_128 = "CharacterCreationFlag";
    local_130 = ppuVar1;
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 == 0) {
      local_b0 = "PublicAnnouncement_DiveFish";
      local_b8 = ppuVar1;
      iVar11 = FUN_0274ce10(plVar20,&local_b8);
      if (iVar11 == 0) {
        ppuVar1 = (undefined **)(puVar38 + 0x10);
        local_128 = "MarketBuilt";
        local_130 = ppuVar1;
        uVar14 = FUN_0273f0a0(&local_130);
        if ((uVar14 & 1) != 0) {
          FUN_01b46be0(&local_130);
          lVar15 = *plVar20;
          if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
            FUN_00dd5f80(PTR_DAT_04bb8aa0);
            __cxa_guard_release(PTR_DAT_04bb8aa8);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
            uVar14 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x19) goto LAB_01b2e6e0;
              uVar14 = uVar14 + 1;
            } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
          }
          uVar14 = 0;
LAB_01b2e6e0:
          lVar29 = *param_1;
          uVar7 = *(ushort *)(lVar29 + 0x10);
          bVar5 = *(byte *)(lVar29 + 0x12);
          bVar6 = *(byte *)(lVar29 + 0x13);
          nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
          local_b8 = (undefined **)0x32aa;
          FUN_0277d4ac(&local_b8);
          local_110 = (undefined4)uVar14;
          uStack_10c = 8;
          local_108 = 8;
          local_104 = (undefined4)local_b8;
          local_100 = local_b8._4_4_;
          local_fc = 0;
          local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                       (int)lVar15);
          lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
          puVar38 = PTR_DAT_04bb2020;
          if (lVar15 != 0) {
            plVar22 = *(long **)PTR_DAT_04bb4fa8;
            lVar29 = *plVar22;
            plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar15);
            *plVar22 = (long)plVar21;
            *plVar21 = lVar29;
            plVar21[1] = (long)plVar22;
            if (lVar29 != 0) {
              *(long **)(lVar29 + 8) = plVar21;
            }
            *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
          }
          local_b8 = (undefined **)(puVar38 + 0x10);
          local_b0 = "DiveFish_GetLetter";
          FUN_0274d104(plVar20,&local_b8,1);
        }
        local_128 = "PublicAnnouncement_DiveFish";
        local_130 = ppuVar1;
        FUN_0274d104(plVar20,&local_130,1);
      }
    }
  }
  if ((*(char *)(*param_1 + 0x29) != '\0') || (*(long *)*param_1 != 0)) {
    plVar20 = param_2 + 8;
    local_128 = "MailSend_Notice_v300_AddStorage";
    local_130 = (undefined **)(puVar38 + 0x10);
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 == 0) {
      local_128 = "RcoStorageExpansion_v200_AddLevel";
      local_130 = (undefined **)(puVar38 + 0x10);
      iVar11 = FUN_0274ce10(plVar20,&local_130);
      if (iVar11 == 3) {
        FUN_01b46be0(&local_130);
        lVar15 = *plVar20;
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
          FUN_00dd5f80(PTR_DAT_04bb8aa0);
          __cxa_guard_release(PTR_DAT_04bb8aa8);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
          uVar14 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x19) goto LAB_01b2e87c;
            uVar14 = uVar14 + 1;
          } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
        }
        uVar14 = 0;
LAB_01b2e87c:
        lVar29 = *param_1;
        uVar7 = *(ushort *)(lVar29 + 0x10);
        bVar5 = *(byte *)(lVar29 + 0x12);
        bVar6 = *(byte *)(lVar29 + 0x13);
        nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
        local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                     (int)lVar15);
        local_110 = (undefined4)uVar14;
        uStack_10c = 8;
        local_108 = 0x1d;
        local_fc = 0;
        local_104 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_100 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
        if (lVar15 != 0) {
          plVar22 = *(long **)PTR_DAT_04bb4fa8;
          lVar29 = *plVar22;
          plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar15);
          *plVar22 = (long)plVar21;
          *plVar21 = lVar29;
          plVar21[1] = (long)plVar22;
          if (lVar29 != 0) {
            *(long **)(lVar29 + 8) = plVar21;
          }
          *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
        }
        local_b0 = "MailSend_Notice_v300_AddStorage";
        local_b8 = (undefined **)(puVar38 + 0x10);
        FUN_0274d104(plVar20,&local_b8,1);
        pppuVar18 = (undefined ***)&local_b8;
        local_b0 = "RcoStandbyNotice_v300_AddStorage";
        local_b8 = (undefined **)(puVar38 + 0x10);
      }
      else {
        local_130 = (undefined **)(puVar38 + 0x10);
        pppuVar18 = &local_130;
        local_128 = "MailSend_Notice_v300_AddStorage";
      }
      FUN_0274d104(plVar20,pppuVar18,1);
    }
  }
  if ((*(char *)(*param_1 + 0x29) != '\0') || (*(long *)*param_1 != 0)) {
    plVar20 = param_2 + 8;
    local_128 = "MailSend_Notice_v200_AddStorage";
    local_130 = (undefined **)(puVar38 + 0x10);
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 == 0) {
      local_128 = "RcoStorageExpansionLevel";
      local_130 = (undefined **)(puVar38 + 0x10);
      iVar11 = FUN_0274ce10(plVar20,&local_130);
      if (iVar11 == 0) {
        local_130 = (undefined **)(puVar38 + 0x10);
        pppuVar18 = &local_130;
        local_128 = "MailSend_Notice_v200_AddStorage";
      }
      else {
        FUN_01b46be0(&local_130);
        lVar15 = *plVar20;
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
          FUN_00dd5f80(PTR_DAT_04bb8aa0);
          __cxa_guard_release(PTR_DAT_04bb8aa8);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
          uVar14 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x19) goto LAB_01b2ea10;
            uVar14 = uVar14 + 1;
          } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
        }
        uVar14 = 0;
LAB_01b2ea10:
        lVar29 = *param_1;
        uVar7 = *(ushort *)(lVar29 + 0x10);
        bVar5 = *(byte *)(lVar29 + 0x12);
        bVar6 = *(byte *)(lVar29 + 0x13);
        nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
        local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                     (int)lVar15);
        local_110 = (undefined4)uVar14;
        uStack_10c = 8;
        local_108 = 0x14;
        local_fc = 0;
        local_104 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_100 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
        if (lVar15 != 0) {
          plVar22 = *(long **)PTR_DAT_04bb4fa8;
          lVar29 = *plVar22;
          plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar15);
          *plVar22 = (long)plVar21;
          *plVar21 = lVar29;
          plVar21[1] = (long)plVar22;
          if (lVar29 != 0) {
            *(long **)(lVar29 + 8) = plVar21;
          }
          *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
        }
        local_b0 = "MailSend_Notice_v200_AddStorage";
        local_b8 = (undefined **)(puVar38 + 0x10);
        FUN_0274d104(plVar20,&local_b8,1);
        pppuVar18 = (undefined ***)&local_b8;
        local_b0 = "RcoStandbyNotice_v200_AddStorage";
        local_b8 = (undefined **)(puVar38 + 0x10);
      }
      FUN_0274d104(plVar20,pppuVar18,1);
    }
  }
  if ((*(char *)(*param_1 + 0x29) != '\0') || (*(long *)*param_1 != 0)) {
    plVar20 = param_2 + 8;
    local_130 = (undefined **)(puVar38 + 0x10);
    local_128 = "MailSend_NoticeStorageExpansion";
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 == 0) {
      local_d8 = (char *)((ulong)local_d8 & 0xffffffff00000000);
      local_130 = (undefined **)((ulong)local_130 & 0xffffffff00000000);
      uVar14 = FUN_02b5e950(&local_130,(int)*plVar20);
      if ((uVar14 & 1) != 0) {
        uVar12 = FUN_0266ca90((ulong)local_130 & 0xffffffff);
        local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar12);
      }
      if ((int)local_d8 < 8) {
LAB_01b2eb84:
        local_130 = (undefined **)(puVar38 + 0x10);
        pppuVar18 = &local_130;
        local_128 = "MailSend_NoticeStorageExpansion";
      }
      else {
        local_130 = (undefined **)(puVar38 + 0x10);
        local_128 = "RcoAfterHouseRemodel";
        iVar11 = FUN_0274ce10(plVar20,&local_130);
        if (iVar11 != 0) goto LAB_01b2eb84;
        FUN_01b46be0(&local_130);
        lVar15 = *plVar20;
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
          FUN_00dd5f80(PTR_DAT_04bb8aa0);
          __cxa_guard_release(PTR_DAT_04bb8aa8);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
          uVar14 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x19) goto LAB_01b30310;
            uVar14 = uVar14 + 1;
          } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
        }
        uVar14 = 0;
LAB_01b30310:
        lVar29 = *param_1;
        uVar7 = *(ushort *)(lVar29 + 0x10);
        bVar5 = *(byte *)(lVar29 + 0x12);
        bVar6 = *(byte *)(lVar29 + 0x13);
        nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
        local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                     (int)lVar15);
        local_110 = (undefined4)uVar14;
        uStack_10c = 8;
        local_108 = 0xb;
        local_fc = 0;
        local_104 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_100 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
        if (lVar15 != 0) {
          plVar22 = *(long **)PTR_DAT_04bb4fa8;
          lVar29 = *plVar22;
          plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar15);
          *plVar22 = (long)plVar21;
          *plVar21 = lVar29;
          plVar21[1] = (long)plVar22;
          if (lVar29 != 0) {
            *(long **)(lVar29 + 8) = plVar21;
          }
          *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
        }
        local_b0 = "MailSend_NoticeStorageExpansion";
        local_b8 = (undefined **)(puVar38 + 0x10);
        FUN_0274d104(plVar20,&local_b8,1);
        pppuVar18 = (undefined ***)&local_b8;
        local_b0 = "RcoStandbyNoticeStorageExpansion";
        local_b8 = (undefined **)(puVar38 + 0x10);
      }
      FUN_0274d104(plVar20,pppuVar18,1);
    }
  }
  if ((*(char *)(*param_1 + 0x29) != '\0') || (*(long *)*param_1 != 0)) {
    plVar20 = param_2 + 8;
    local_130 = (undefined **)(puVar38 + 0x10);
    local_128 = "MailSendFlag_ReceiveAnniversaryItem";
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 == 0) {
      lVar15 = *param_2;
      if ((*(long **)(lVar15 + 0x184e0) == (long *)0x0) ||
         (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x184e0), puVar16 == (undefined8 *)0x0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)*puVar16)();
        uVar14 = uVar14 & 0xffffffff;
      }
      lVar29 = *(long *)(lVar15 + 0x184c8) + *(long *)(lVar15 + 0x184c0);
      puVar2 = (ushort *)(lVar29 + 0x230cc);
      pbVar37 = (byte *)(lVar29 + 0x230ce);
      pbVar36 = (byte *)(lVar29 + 0x230cf);
      uVar17 = nn::time::IsValidDate((uint)*puVar2,(uint)*pbVar37,(uint)*pbVar36);
      if ((uVar17 & 1) != 0) {
        lVar29 = *param_1;
        cVar28 = *(char *)(lVar29 + 0x12);
        uVar7 = *(ushort *)(lVar29 + 0x10);
        cVar8 = *(char *)(lVar29 + 0x13);
        uVar17 = nn::time::IsValidDate((uint)*puVar2,(uint)*pbVar37,(uint)*pbVar36);
        uVar13 = (uint)*puVar2 * 0x10000 + 0x10000;
        if ((uVar17 & 1) == 0) {
          uVar13 = 0x7d10000;
        }
        uVar17 = nn::time::IsValidDate((uint)*puVar2,(uint)*pbVar37,(uint)*pbVar36);
        uVar26 = (uint)*pbVar37 << 8;
        if ((uVar17 & 1) == 0) {
          uVar26 = 0x100;
        }
        uVar17 = nn::time::IsValidDate((uint)*puVar2,(uint)*pbVar37,(uint)*pbVar36);
        uVar19 = (uint)*pbVar36;
        if ((uVar17 & 1) == 0) {
          uVar19 = 1;
        }
        puVar38 = PTR_DAT_04bb2020;
        if ((uVar26 | uVar13 | uVar19) <= ((int)cVar28 << 8 | (uint)uVar7 << 0x10 | (int)cVar8)) {
          FUN_01b46be0(&local_130);
          lVar29 = *plVar20;
          if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
            FUN_00dd5f80(PTR_DAT_04bb8aa0);
            __cxa_guard_release(PTR_DAT_04bb8aa8);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
            uVar17 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar17 * 4) == 0x19) goto LAB_01b2ed2c;
              uVar17 = uVar17 + 1;
            } while (*(uint *)PTR_DAT_04bb8aa0 != uVar17);
          }
          uVar17 = 0;
LAB_01b2ed2c:
          lVar23 = *param_1;
          uVar7 = *(ushort *)(lVar23 + 0x10);
          bVar5 = *(byte *)(lVar23 + 0x12);
          bVar6 = *(byte *)(lVar23 + 0x13);
          nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
          local_b8 = (undefined **)0x373e;
          FUN_0277d4ac(&local_b8);
          local_110 = (undefined4)uVar17;
          uStack_10c = 8;
          local_108 = 0xe;
          local_104 = (undefined4)local_b8;
          local_100 = local_b8._4_4_;
          local_fc = 0x100;
          local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                       (int)lVar29);
          lVar29 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
          puVar38 = PTR_DAT_04bb2020;
          if (lVar29 != 0) {
            plVar22 = *(long **)PTR_DAT_04bb4fa8;
            lVar23 = *plVar22;
            plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar29);
            *plVar22 = (long)plVar21;
            *plVar21 = lVar23;
            plVar21[1] = (long)plVar22;
            if (lVar23 != 0) {
              *(long **)(lVar23 + 8) = plVar21;
            }
            *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
          }
          local_b8 = (undefined **)(puVar38 + 0x10);
          local_b0 = "MailSendFlag_ReceiveAnniversaryItem";
          FUN_0274d104(plVar20,&local_b8,1);
        }
      }
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar15 + 0x184e0) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x184e0) + 8), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
    }
  }
  if ((*(char *)(*param_1 + 0x29) != '\0') || (*(long *)*param_1 != 0)) {
    plVar20 = param_2 + 8;
    local_128 = "SpnSendMailCommuneExpansion";
    local_130 = (undefined **)(puVar38 + 0x10);
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 == 0) {
      local_128 = "SpnPhotoStudioGuideDone";
      local_130 = (undefined **)(puVar38 + 0x10);
      iVar11 = FUN_0274ce10(plVar20,&local_130);
      if (iVar11 == 0) {
        local_128 = "CompleteCommuneExpandEvent";
        local_130 = (undefined **)(puVar38 + 0x10);
        uVar14 = FUN_0273f0a0(&local_130);
        if ((uVar14 & 1) != 0) {
          local_b0 = "SpnFirstTalkedAtCommuneIsland";
          local_b8 = (undefined **)(puVar38 + 0x10);
          iVar11 = FUN_0274ce10(plVar20,&local_b8);
          if (iVar11 != 0) {
            local_d8 = puVar38 + 0x10;
            local_d0 = "CommuneCompleteExpandEvent_Player";
            iVar11 = FUN_0274ce10(plVar20,&local_d8);
            if (iVar11 == 0) {
              FUN_01b46be0(&local_130);
              uVar12 = (undefined4)*plVar20;
              if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
                FUN_00dd5f80(PTR_DAT_04bb8aa0);
                __cxa_guard_release(PTR_DAT_04bb8aa8);
              }
              if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
                uVar14 = 0;
                do {
                  if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x34)
                  goto LAB_01b2f0cc;
                  uVar14 = uVar14 + 1;
                } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
              }
              goto LAB_01b2f0c8;
            }
          }
        }
      }
      else {
        uVar35 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_130 = (undefined **)(puVar38 + 0x10);
        local_128 = "JuneBride";
        local_d8 = *(char **)(*param_1 + 0x10);
        if ((char)((ulong)local_d8 >> 0x20) < '\x05') {
          lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d8);
          local_b8 = (undefined **)(lVar15 + -0x15180);
          local_d8 = (char *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
        }
        uVar17 = (ulong)local_d8;
        uVar14 = (ulong)local_d8 >> 0x30;
        local_d8._0_6_ = CONCAT24(5,(int)local_d8);
        local_d8 = (char *)(CONCAT26((short)uVar14,(undefined6)local_d8) & 0xff00ffffffffffff);
        uVar14 = FUN_00879dd0(uVar35,&local_130,uVar17,uVar17 >> 0x10,uVar17 >> 0x18,0);
        if ((uVar14 & 1) != 0) {
          local_130 = (undefined **)(puVar38 + 0x10);
          local_128 = "SpnJuneBrideTalkEventFrag";
          iVar11 = FUN_0274ce10(plVar20,&local_130);
          if (iVar11 == 0) goto LAB_01b2ee60;
        }
        local_130 = (undefined **)(puVar38 + 0x10);
        local_128 = "TkkFirstLive";
        uVar14 = FUN_0273f0a0(&local_130);
        if ((uVar14 & 1) != 0) {
          FUN_01b46be0(&local_130);
          uVar12 = (undefined4)*plVar20;
          if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
            FUN_00dd5f80(PTR_DAT_04bb8aa0);
            __cxa_guard_release(PTR_DAT_04bb8aa8);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
            uVar14 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x34) goto LAB_01b2f0cc;
              uVar14 = uVar14 + 1;
            } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
          }
LAB_01b2f0c8:
          uVar14 = 0;
LAB_01b2f0cc:
          lVar15 = *param_1;
          uVar7 = *(ushort *)(lVar15 + 0x10);
          bVar5 = *(byte *)(lVar15 + 0x12);
          bVar6 = *(byte *)(lVar15 + 0x13);
          nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
          local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                       uVar12);
          local_110 = (undefined4)uVar14;
          uStack_10c = 0x22;
          local_108 = 1;
          local_fc = 0;
          local_104 = *(undefined4 *)PTR_DAT_04bb37e0;
          local_100 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
          if (lVar15 != 0) {
            plVar22 = *(long **)PTR_DAT_04bb4fa8;
            lVar29 = *plVar22;
            plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar15);
            *plVar22 = (long)plVar21;
            *plVar21 = lVar29;
            plVar21[1] = (long)plVar22;
            if (lVar29 != 0) {
              *(long **)(lVar29 + 8) = plVar21;
            }
            *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
          }
          local_b0 = "ReserveCommuneExpansion";
          local_b8 = (undefined **)(puVar38 + 0x10);
          FUN_0274d104(plVar20,&local_b8,1);
          local_b0 = "SpnSendMailCommuneExpansion";
          local_b8 = (undefined **)(puVar38 + 0x10);
          FUN_0274d104(plVar20,&local_b8,1);
        }
      }
    }
  }
LAB_01b2ee60:
  if (*(long *)*param_1 != 0) {
    plVar20 = param_2 + 8;
    local_130 = (undefined **)(puVar38 + 0x10);
    local_128 = "RepayMileInteriorModePro";
    iVar11 = FUN_0274ce10(plVar20,&local_130);
    if (iVar11 != 0) {
      local_d8 = (char *)0x3965;
      FUN_0277d4ac(&local_d8);
      puVar38 = PTR_DAT_04bb43c0;
      lVar29 = *(long *)PTR_DAT_04bb43c0;
      uVar13 = FUN_0277d6c4(&local_d8);
      lVar15 = *(long *)puVar38;
      uVar12 = 0;
      if (lVar15 != 0) {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar29 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          local_120 = 0;
          local_130 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_128 = local_d8;
          uVar13 = FUN_0277d6c4(&local_128);
          if (*(long *)puVar38 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar13 = FUN_0277d6c4(&local_d8);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar13 < *(uint *)(lVar15 + 0x1d8)) &&
                 (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8), lVar15 != 0
                 )) {
                local_120 = lVar15;
              }
            }
          }
          uVar12 = FUN_01af0dac(&local_130);
        }
        else {
          uVar12 = 0;
        }
      }
      FUN_027a19d8(plVar20,uVar12);
      FUN_01b46be0(&local_130);
      local_f8 = (undefined *)((ulong)local_f8._4_4_ << 0x20);
      local_130 = &PTR_LAB_04a37aa0;
      lVar15 = *plVar20;
      if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
        FUN_00dd5f80(PTR_DAT_04bb8aa0);
        __cxa_guard_release(PTR_DAT_04bb8aa8);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar14 * 4) == 0x16) goto LAB_01b2f220;
          uVar14 = uVar14 + 1;
        } while (*(uint *)PTR_DAT_04bb8aa0 != uVar14);
      }
      uVar14 = 0;
LAB_01b2f220:
      lVar29 = *param_1;
      uVar7 = *(ushort *)(lVar29 + 0x10);
      bVar5 = *(byte *)(lVar29 + 0x12);
      bVar6 = *(byte *)(lVar29 + 0x13);
      nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
      local_128 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                   (int)lVar15);
      local_110 = (undefined4)uVar14;
      uStack_10c = 8;
      local_108 = 0x10;
      local_fc = 0;
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar12);
      local_104 = *(undefined4 *)PTR_DAT_04bb37e0;
      local_100 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      lVar15 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
      puVar38 = PTR_DAT_04bb2020;
      if (lVar15 != 0) {
        plVar22 = *(long **)PTR_DAT_04bb4fa8;
        lVar29 = *plVar22;
        plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar15);
        *plVar22 = (long)plVar21;
        *plVar21 = lVar29;
        plVar21[1] = (long)plVar22;
        if (lVar29 != 0) {
          *(long **)(lVar29 + 8) = plVar21;
        }
        *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
      }
      local_b8 = (undefined **)(puVar38 + 0x10);
      local_b0 = "RepayMileInteriorModePro";
      FUN_0274d104(plVar20,&local_b8,0);
    }
  }
  if (*(long *)*param_1 < 1) {
    return;
  }
  lVar15 = *param_2 + 0x194b0;
  if (*(long *)(*param_2 + 0x194b8) == 0) {
    lVar15 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  plVar20 = (long *)(lVar15 + 0x2cfb8);
  lVar29 = *(long *)(lVar15 + 0x2cfd8);
  if (lVar29 == 0) {
    local_144 = 0;
  }
  else {
    if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
      local_144 = 0;
      plVar21 = *(long **)(lVar29 + 0x20);
    }
    else {
      local_144 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      if (*(long *)(lVar15 + 0x2cfd8) == 0) goto LAB_01b2f394;
      plVar21 = *(long **)(*(long *)(lVar15 + 0x2cfd8) + 0x20);
    }
    if (plVar21 != (long *)0x0) {
      local_130 = (undefined **)*plVar20;
      local_128 = *(char **)(lVar15 + 0x2cfc0);
      local_120 = 0x10;
      (**(code **)(*plVar21 + 0x20))(plVar21,&local_130);
    }
  }
LAB_01b2f394:
  piVar31 = (int *)(*(long *)(lVar15 + 0x2cfc0) + *plVar20);
  if ((((*piVar31 != 0) || (piVar31[1] != 0)) || (piVar31[2] != 0)) || (piVar31[3] != 0)) {
    lVar29 = *(long *)PTR_DAT_04bb4130;
    uVar13 = *(uint *)(lVar29 + 0x1c0);
    if ((0 < (int)uVar13) ||
       (((*(long *)(lVar29 + 0xb0) != 0 &&
         (puVar34 = *(uint **)(*(long *)(lVar29 + 0xb0) + 8), puVar34 != (uint *)0x0)) &&
        (uVar13 = *puVar34, uVar13 != 0)))) {
      uVar26 = 0;
      ppuVar1 = (undefined **)(puVar38 + 0x10);
      pcVar3 = PTR_DAT_04bb3768 + 0x10;
      puVar16 = (undefined8 *)PTR_PTR_04bc0550;
      do {
        if ((int)*(uint *)(lVar29 + 0x1c0) < 1) {
          if (((*(long *)(lVar29 + 0xb0) != 0) &&
              (puVar34 = *(uint **)(*(long *)(lVar29 + 0xb0) + 8), puVar34 != (uint *)0x0)) &&
             (((*(uint *)(lVar29 + 200) <= uVar26 ||
               (*(char *)(*(long *)(lVar29 + 0xd0) + (long)(int)uVar26) != '\0')) &&
              (((uVar26 < *puVar34 && (puVar34[1] != 0)) && ((ushort)puVar34[2] != 0)))))) {
            iVar11 = 0xc;
            if (*(char *)((long)puVar34 + 10) != '\0') {
              iVar11 = 0x1c;
            }
            puVar34 = (uint *)((ulong)(puVar34[1] * uVar26 + (uint)(ushort)puVar34[2] * 8 + iVar11)
                              + (long)puVar34);
            goto joined_r0x01b2f918;
          }
        }
        else if (uVar26 < *(uint *)(lVar29 + 0x1c0)) {
          uVar19 = uVar26;
          if (*(uint *)(lVar29 + 0x1b0) <= uVar26) {
            uVar19 = 0;
          }
          puVar34 = *(uint **)(*(long *)(lVar29 + 0x1b8) + (ulong)uVar19 * 8);
joined_r0x01b2f918:
          if (puVar34 != (uint *)0x0) {
            if ((*(long *)(lVar15 + 0x2cfd8) != 0) &&
               (plVar21 = *(long **)(*(long *)(lVar15 + 0x2cfd8) + 0x20), plVar21 != (long *)0x0)) {
              local_130 = (undefined **)*plVar20;
              local_128 = *(char **)(lVar15 + 0x2cfc0);
              local_120 = 0x10;
              (**(code **)(*plVar21 + 0x20))(plVar21,&local_130);
            }
            puVar10 = PTR_DAT_04bb40a8;
            lVar23 = *plVar20;
            lVar24 = *(long *)(lVar15 + 0x2cfc0);
            if (*puVar34 != 0) {
              cVar28 = *PTR_DAT_04bb40a0;
              do {
                if (cVar28 == '\0') {
                  cVar28 = '\x01';
                  *PTR_DAT_04bb40a0 = 1;
                  *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)puVar10 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar10 + 0x78) = 0xffffffff;
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
                  *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                }
                else {
                  uVar19 = *(uint *)(puVar10 + 0x50);
                  if (-1 < (int)uVar19) {
                    pcVar32 = (char *)((ulong)uVar19 + (long)puVar34);
                    goto LAB_01b2f5dc;
                  }
                  if (uVar19 != 0xffffffff) break;
                }
                puVar30 = (uint *)(ulong)*puVar34;
                pcVar32 = (char *)0x0;
                if ((*puVar34 == 0) || (puVar34 == puVar30)) goto LAB_01b2f5dc;
                lVar4 = 0xc;
                if (*(char *)((long)puVar34 + (10 - (long)puVar30)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar34 + (lVar4 - (long)puVar30);
                if (lVar4 == 0) break;
                uVar14 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar30));
                *(undefined4 *)(puVar10 + 0x50) = 0xfffffffe;
                pcVar32 = (char *)0x0;
                if (uVar14 == 0) goto LAB_01b2f5dc;
                piVar31 = (int *)(lVar4 + 4);
                while (piVar31[-1] != 0x2f1b930d) {
                  piVar31 = piVar31 + 2;
                  uVar14 = uVar14 - 1;
                  if (uVar14 == 0) {
                    pcVar32 = (char *)0x0;
                    goto LAB_01b2f5dc;
                  }
                }
                iVar11 = 0;
                if (*piVar31 != -1) {
                  iVar11 = *piVar31;
                }
                *(int *)(puVar10 + 0x50) = iVar11;
              } while (*puVar34 != 0);
            }
            pcVar32 = (char *)0x0;
LAB_01b2f5dc:
            local_128 = (char *)*puVar16;
            if (pcVar32 != (char *)0x0) {
              local_128 = pcVar32;
            }
            local_130 = ppuVar1;
            uVar14 = FUN_028b5a70(lVar24 + lVar23,&local_130);
            puVar10 = PTR_DAT_04bb40a8;
            if ((uVar14 & 1) != 0) {
              if (*puVar34 != 0) {
                cVar28 = *PTR_DAT_04bb40a0;
                do {
                  if (cVar28 == '\0') {
                    cVar28 = '\x01';
                    *PTR_DAT_04bb40a0 = 1;
                    *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)puVar10 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar10 + 0x78) = 0xffffffff;
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
                    *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
                  }
                  else {
                    uVar19 = *(uint *)(puVar10 + 0x50);
                    if (-1 < (int)uVar19) {
                      pcVar32 = (char *)((ulong)uVar19 + (long)puVar34);
                      goto LAB_01b2f6ec;
                    }
                    if (uVar19 != 0xffffffff) break;
                  }
                  puVar30 = (uint *)(ulong)*puVar34;
                  pcVar32 = (char *)0x0;
                  if ((*puVar34 == 0) || (puVar34 == puVar30)) goto LAB_01b2f6ec;
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar34 + (10 - (long)puVar30)) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar34 + (lVar23 - (long)puVar30);
                  if (lVar23 == 0) break;
                  uVar14 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar30));
                  *(undefined4 *)(puVar10 + 0x50) = 0xfffffffe;
                  pcVar32 = (char *)0x0;
                  if (uVar14 == 0) goto LAB_01b2f6ec;
                  piVar31 = (int *)(lVar23 + 4);
                  while (piVar31[-1] != 0x2f1b930d) {
                    piVar31 = piVar31 + 2;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) {
                      pcVar32 = (char *)0x0;
                      goto LAB_01b2f6ec;
                    }
                  }
                  iVar11 = 0;
                  if (*piVar31 != -1) {
                    iVar11 = *piVar31;
                  }
                  *(int *)(puVar10 + 0x50) = iVar11;
                } while (*puVar34 != 0);
              }
              pcVar32 = (char *)0x0;
LAB_01b2f6ec:
              local_70 = (char *)*puVar16;
              if (pcVar32 != (char *)0x0) {
                local_70 = pcVar32;
              }
              local_78 = puVar38 + 0x10;
              if ((*(long *)(lVar15 + 0x2cfd8) != 0) &&
                 (plVar21 = *(long **)(*(long *)(lVar15 + 0x2cfd8) + 0x20), plVar21 != (long *)0x0))
              {
                local_130 = (undefined **)*plVar20;
                local_128 = *(char **)(lVar15 + 0x2cfc0);
                local_120 = 0x10;
                (**(code **)(*plVar21 + 0x20))(plVar21,&local_130);
              }
              FUN_028b5dc0(*(long *)(lVar15 + 0x2cfc0) + *plVar20,&local_78);
              puVar10 = PTR_DAT_04bb8aa0;
              if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
                FUN_00dd5f80(puVar10);
                __cxa_guard_release(PTR_DAT_04bb8aa8);
              }
              if (0 < (int)*(uint *)puVar10) {
                uVar14 = 0;
                do {
                  if (*(int *)(*(long *)(puVar10 + 8) + uVar14 * 4) == 0x37) goto LAB_01b2f78c;
                  uVar14 = uVar14 + 1;
                } while (*(uint *)puVar10 != uVar14);
              }
              uVar14 = 0;
LAB_01b2f78c:
              FUN_021f5eb0(&local_80,&local_78);
              local_130 = (undefined **)(puVar38 + 0x10);
              local_128 = "otg";
              (**(code **)(local_78 + 0x18))(&local_78);
              (**(code **)(local_78 + 0x18))(&local_78);
              pcVar32 = local_70;
              (*(code *)local_130[3])(&local_130);
              if (pcVar32 == local_128) {
LAB_01b2f85c:
                if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
                  FUN_00dd5f80(puVar10);
                  __cxa_guard_release(PTR_DAT_04bb8aa8);
                }
                if (0 < (int)*(uint *)puVar10) {
                  uVar14 = 0;
                  do {
                    if (*(int *)(*(long *)(puVar10 + 8) + uVar14 * 4) == 0x37) {
                      uVar33 = 2;
                      goto LAB_01b2fa38;
                    }
                    uVar14 = uVar14 + 1;
                  } while (*(uint *)puVar10 != uVar14);
                }
                uVar14 = 0;
                uVar33 = 2;
LAB_01b2fa38:
                bVar9 = false;
                uVar12 = 0x24;
              }
              else {
                if (*local_70 == *local_128) {
                  if (*local_70 != '\0') {
                    lVar23 = 0x7fffe;
                    pcVar32 = local_128;
                    pcVar27 = local_70;
                    do {
                      if (pcVar27[1] != pcVar32[1]) goto LAB_01b2f920;
                      if (pcVar27[1] == '\0') break;
                      if (pcVar27[2] != pcVar32[2]) goto LAB_01b2f920;
                      if (pcVar27[2] == '\0') break;
                      if ((lVar23 == 0) || (cVar28 = pcVar27[3], cVar28 != pcVar32[3]))
                      goto LAB_01b2f920;
                      lVar23 = lVar23 + -3;
                      pcVar32 = pcVar32 + 3;
                      pcVar27 = pcVar27 + 3;
                    } while (cVar28 != '\0');
                  }
                  goto LAB_01b2f85c;
                }
LAB_01b2f920:
                local_130 = (undefined **)(puVar38 + 0x10);
                local_128 = "mnc";
                (**(code **)(local_78 + 0x18))(&local_78);
                (**(code **)(local_78 + 0x18))(&local_78);
                pcVar32 = local_70;
                (*(code *)local_130[3])(&local_130);
                if (pcVar32 != local_128) {
                  if (*local_70 == *local_128) {
                    if (*local_70 != '\0') {
                      lVar23 = 0x7fffe;
                      pcVar32 = local_128;
                      pcVar27 = local_70;
                      do {
                        if (pcVar27[1] != pcVar32[1]) goto LAB_01b2fb7c;
                        if (pcVar27[1] == '\0') break;
                        if (pcVar27[2] != pcVar32[2]) goto LAB_01b2fb7c;
                        if (pcVar27[2] == '\0') break;
                        if ((lVar23 == 0) || (cVar28 = pcVar27[3], cVar28 != pcVar32[3]))
                        goto LAB_01b2fb7c;
                        lVar23 = lVar23 + -3;
                        pcVar32 = pcVar32 + 3;
                        pcVar27 = pcVar27 + 3;
                      } while (cVar28 != '\0');
                    }
                    goto LAB_01b2f9e0;
                  }
LAB_01b2fb7c:
                  local_130 = (undefined **)(puVar38 + 0x10);
                  local_128 = "man";
                  (**(code **)(local_78 + 0x18))(&local_78);
                  (**(code **)(local_78 + 0x18))(&local_78);
                  pcVar32 = local_70;
                  (*(code *)local_130[3])(&local_130);
                  if (pcVar32 == local_128) {
LAB_01b2fc3c:
                    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
                      FUN_00dd5f80(puVar10);
                      __cxa_guard_release(PTR_DAT_04bb8aa8);
                    }
                    if (0 < (int)*(uint *)puVar10) {
                      uVar14 = 0;
                      do {
                        if (*(int *)(*(long *)(puVar10 + 8) + uVar14 * 4) == 0x35)
                        goto LAB_01b2ff14;
                        uVar14 = uVar14 + 1;
                      } while (*(uint *)puVar10 != uVar14);
                    }
                    uVar14 = 0;
LAB_01b2ff14:
                    bVar9 = false;
                    uVar12 = 0x23;
                    uVar33 = 5;
                    goto LAB_01b2fa3c;
                  }
                  if (*local_70 == *local_128) {
                    if (*local_70 != '\0') {
                      lVar23 = 0x7fffe;
                      pcVar32 = local_128;
                      pcVar27 = local_70;
                      do {
                        if (pcVar27[1] != pcVar32[1]) goto LAB_01b2fe44;
                        if (pcVar27[1] == '\0') break;
                        if (pcVar27[2] != pcVar32[2]) goto LAB_01b2fe44;
                        if (pcVar27[2] == '\0') break;
                        if ((lVar23 == 0) || (cVar28 = pcVar27[3], cVar28 != pcVar32[3]))
                        goto LAB_01b2fe44;
                        lVar23 = lVar23 + -3;
                        pcVar32 = pcVar32 + 3;
                        pcVar27 = pcVar27 + 3;
                      } while (cVar28 != '\0');
                    }
                    goto LAB_01b2fc3c;
                  }
LAB_01b2fe44:
                  local_130 = (undefined **)(puVar38 + 0x10);
                  local_128 = "rcm";
                  (**(code **)(local_78 + 0x18))(&local_78);
                  (**(code **)(local_78 + 0x18))(&local_78);
                  pcVar32 = local_70;
                  (*(code *)local_130[3])(&local_130);
                  if (pcVar32 != local_128) {
                    if (*local_70 == *local_128) {
                      if (*local_70 != '\0') {
                        lVar23 = 0x7fffe;
                        pcVar32 = local_128;
                        pcVar27 = local_70;
                        do {
                          if (pcVar27[1] != pcVar32[1]) goto LAB_01b2ff20;
                          if (pcVar27[1] == '\0') break;
                          if (pcVar27[2] != pcVar32[2]) goto LAB_01b2ff20;
                          if (pcVar27[2] == '\0') break;
                          if ((lVar23 == 0) || (cVar28 = pcVar27[3], cVar28 != pcVar32[3]))
                          goto LAB_01b2ff20;
                          lVar23 = lVar23 + -3;
                          pcVar32 = pcVar32 + 3;
                          pcVar27 = pcVar27 + 3;
                        } while (cVar28 != '\0');
                      }
                      goto LAB_01b30004;
                    }
LAB_01b2ff20:
                    local_b8 = (undefined **)(puVar38 + 0x10);
                    local_b0 = "rct";
                    (**(code **)(local_78 + 0x18))(&local_78);
                    (**(code **)(local_78 + 0x18))(&local_78);
                    pcVar32 = local_70;
                    (*(code *)local_b8[3])(&local_b8);
                    if (pcVar32 == local_b0) goto LAB_01b30004;
                    if (*local_70 == *local_b0) {
                      if (*local_70 != '\0') {
                        uVar17 = 0;
                        do {
                          uVar25 = uVar17;
                          if (local_70[uVar25 + 1] != local_b0[uVar25 + 1]) goto LAB_01b3011c;
                          if (local_70[uVar25 + 1] == '\0') goto LAB_01b2fffc;
                          if (local_70[uVar25 + 2] != local_b0[uVar25 + 2]) goto LAB_01b3011c;
                          if (local_70[uVar25 + 2] == '\0') {
                            uVar25 = uVar25 + 1;
                            goto LAB_01b2fffc;
                          }
                          if ((uVar25 == 0x7fffe) || (local_70[uVar25 + 3] != local_b0[uVar25 + 3]))
                          goto LAB_01b3011c;
                          uVar17 = uVar25 + 3;
                        } while (local_70[uVar25 + 3] != '\0');
                        uVar25 = uVar25 + 2;
LAB_01b2fffc:
                        if (uVar25 >> 0x13 != 0) goto LAB_01b3011c;
                      }
                      goto LAB_01b30004;
                    }
LAB_01b3011c:
                    uVar33 = 1;
                    uVar12 = 0x24;
                    bVar9 = true;
                    goto LAB_01b2fa3c;
                  }
LAB_01b30004:
                  if ((*(long *)(lVar15 + 0x2cfd8) != 0) &&
                     (plVar21 = *(long **)(*(long *)(lVar15 + 0x2cfd8) + 0x20),
                     plVar21 != (long *)0x0)) {
                    local_130 = (undefined **)*plVar20;
                    local_128 = *(char **)(lVar15 + 0x2cfc0);
                    local_120 = 0x10;
                    (**(code **)(*plVar21 + 0x20))(plVar21,&local_130);
                  }
                  local_128 = &DAT_040bf969;
                  local_130 = (undefined **)(puVar38 + 0x10);
                  FUN_028b5dc0(*(long *)(lVar15 + 0x2cfc0) + *plVar20,&local_130);
                  if ((*(long *)(lVar15 + 0x2cfd8) != 0) &&
                     (plVar21 = *(long **)(*(long *)(lVar15 + 0x2cfd8) + 0x20),
                     plVar21 != (long *)0x0)) {
                    local_130 = (undefined **)*plVar20;
                    local_128 = *(char **)(lVar15 + 0x2cfc0);
                    local_120 = 0x10;
                    (**(code **)(*plVar21 + 0x20))(plVar21,&local_130);
                  }
                  local_128 = "rct";
                  local_130 = (undefined **)(puVar38 + 0x10);
                  FUN_028b5dc0(*(long *)(lVar15 + 0x2cfc0) + *plVar20,&local_130);
                  if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
                    FUN_00dd5f80(puVar10);
                    __cxa_guard_release(PTR_DAT_04bb8aa8);
                  }
                  if (0 < (int)*(uint *)puVar10) {
                    uVar17 = 0;
                    do {
                      if (*(int *)(*(long *)(puVar10 + 8) + uVar17 * 4) == 0x37) {
                        uVar33 = 3;
                        uVar14 = uVar17 & 0xffffffff;
                        goto LAB_01b2fa38;
                      }
                      uVar17 = uVar17 + 1;
                      uVar14 = 0;
                      bVar9 = false;
                      uVar33 = 3;
                      uVar12 = 0x24;
                    } while (*(uint *)puVar10 != uVar17);
                    goto LAB_01b2fa3c;
                  }
                  uVar14 = 0;
                  uVar33 = 3;
                  goto LAB_01b2fa38;
                }
LAB_01b2f9e0:
                if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar11 != 0)) {
                  FUN_00dd5f80(puVar10);
                  __cxa_guard_release(PTR_DAT_04bb8aa8);
                }
                if (0 < (int)*(uint *)puVar10) {
                  uVar14 = 0;
                  do {
                    if (*(int *)(*(long *)(puVar10 + 8) + uVar14 * 4) == 0x38) {
                      bVar9 = false;
                      uVar33 = 1;
                      uVar12 = 0x25;
                      goto LAB_01b2fa3c;
                    }
                    uVar14 = uVar14 + 1;
                  } while (*(uint *)puVar10 != uVar14);
                }
                uVar14 = 0;
                bVar9 = false;
                uVar33 = 1;
                uVar12 = 0x25;
              }
LAB_01b2fa3c:
              FUN_01b46be0(&local_b8);
              lVar24 = *param_1;
              lVar23 = param_2[8];
              uVar7 = *(ushort *)(lVar24 + 0x10);
              bVar5 = *(byte *)(lVar24 + 0x12);
              bVar6 = *(byte *)(lVar24 + 0x13);
              nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
              local_98 = (undefined4)uVar14;
              local_b0 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar7,
                                          (int)lVar23);
              local_8c = local_80;
              local_88 = uStack_7c;
              local_84 = 0x100;
              uStack_94 = uVar12;
              local_90 = uVar33;
              if (bVar9) {
                local_bd = 0;
                local_c8 = 8;
                local_c4[0] = '\0';
                local_d8 = pcVar3;
                local_d0 = local_c4;
                (**(code **)(local_78 + 0x18))(&local_78);
                pcVar32 = local_70;
                if (local_c4 != local_70) {
                  (**(code **)(local_78 + 0x18))(&local_78);
                  lVar23 = 0;
                  do {
                    if (local_70[lVar23] == '\0') goto LAB_01b2fca0;
                    if (local_70[lVar23 + 1] == '\0') {
                      lVar23 = lVar23 + 1;
                      goto LAB_01b2fca0;
                    }
                    if (local_70[lVar23 + 2] == '\0') {
                      lVar23 = lVar23 + 2;
                      goto LAB_01b2fca0;
                    }
                    lVar23 = lVar23 + 3;
                  } while (lVar23 != 0x80001);
                  lVar23 = 0;
LAB_01b2fca0:
                  iVar11 = (int)lVar23;
                  if (local_c8 <= (int)lVar23) {
                    iVar11 = local_c8 + -1;
                  }
                  memcpy(local_c4,pcVar32,(long)iVar11);
                  local_c4[iVar11] = '\0';
                }
                FUN_01b46be0(&local_130);
                uStack_e0 = 0;
                local_e8 = 8;
                acStack_e4[0] = '\0';
                local_f8 = PTR_DAT_04bb3768 + 0x10;
                local_128 = local_b0;
                local_110 = local_98;
                uStack_10c = uStack_94;
                local_130 = &PTR_LAB_04a37b00;
                local_108 = local_90;
                local_104 = local_8c;
                local_100 = local_88;
                local_fc = local_84;
                pcStack_f0 = acStack_e4;
                (**(code **)(local_d8 + 0x18))(&local_d8);
                pcVar32 = local_d0;
                puVar16 = (undefined8 *)PTR_PTR_04bc0550;
                if (acStack_e4 != local_d0) {
                  (**(code **)(local_d8 + 0x18))(&local_d8);
                  lVar23 = 0;
                  do {
                    if (local_d0[lVar23] == '\0') goto LAB_01b2fdc0;
                    if (local_d0[lVar23 + 1] == '\0') {
                      lVar23 = lVar23 + 1;
                      goto LAB_01b2fdc0;
                    }
                    if (local_d0[lVar23 + 2] == '\0') {
                      lVar23 = lVar23 + 2;
                      goto LAB_01b2fdc0;
                    }
                    lVar23 = lVar23 + 3;
                  } while (lVar23 != 0x80001);
                  lVar23 = 0;
LAB_01b2fdc0:
                  iVar11 = (int)lVar23;
                  if (local_e8 <= (int)lVar23) {
                    iVar11 = local_e8 + -1;
                  }
                  memcpy(acStack_e4,pcVar32,(long)iVar11);
                  acStack_e4[iVar11] = '\0';
                }
                lVar23 = (*(code *)local_130[4])(&local_130,*(undefined8 *)PTR_DAT_04bc0580);
                puVar38 = PTR_DAT_04bb2020;
              }
              else {
                lVar23 = (*(code *)local_b8[4])(&local_b8,*(undefined8 *)PTR_DAT_04bc0580);
                puVar38 = PTR_DAT_04bb2020;
                puVar16 = (undefined8 *)PTR_PTR_04bc0550;
              }
              PTR_DAT_04bb2020 = puVar38;
              if (lVar23 != 0) {
                plVar22 = *(long **)PTR_DAT_04bb4fa8;
                lVar24 = *plVar22;
                plVar21 = (long *)(*(int *)((long)plVar22 + 0x14) + lVar23);
                *plVar22 = (long)plVar21;
                *plVar21 = lVar24;
                plVar21[1] = (long)plVar22;
                if (lVar24 != 0) {
                  *(long **)(lVar24 + 8) = plVar21;
                }
                *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
              }
            }
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar13);
    }
  }
  if ((((local_144 & 1) != 0) && (*(long *)(lVar15 + 0x2cfd8) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x2cfd8) + 0x18), puVar16 != (undefined8 *)0x0))
  {
    (**(code **)*puVar16)();
  }
  return;
}

